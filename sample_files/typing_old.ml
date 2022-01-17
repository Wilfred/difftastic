(*
 * Copyright (c) 2015, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

(* This module implements the typing.
 *
 * Given an Nast.program, it infers the type of all the local
 * variables, and checks that all the types are correct (aka
 * consistent) *)
open Hh_prelude
open Common
open Aast
open Tast
open Typing_defs
open Typing_env_types
open Utils
open Typing_helpers
module TFTerm = Typing_func_terminality
module TUtils = Typing_utils
module Reason = Typing_reason
module Type = Typing_ops
module Env = Typing_env
module Inf = Typing_inference_env
module LEnv = Typing_lenv
module Async = Typing_async
module SubType = Typing_subtype
module Union = Typing_union
module Inter = Typing_intersection
module SN = Naming_special_names
module TVis = Typing_visibility
module Phase = Typing_phase
module TOG = Typing_object_get
module Subst = Decl_subst
module ExprDepTy = Typing_dependent_type.ExprDepTy
module TCO = TypecheckerOptions
module C = Typing_continuations
module CMap = C.Map
module Try = Typing_try
module FL = FeatureLogging
module MakeType = Typing_make_type
module Cls = Decl_provider.Class
module Fake = Typing_fake_members
module ExpectedTy = Typing_helpers.ExpectedTy
module ITySet = Internal_type_set

type newable_class_info =
  env
  * Tast.targ list
  * Tast.class_id
  * [ `Class of pos_id * Cls.t * locl_ty | `Dynamic ] list

(*****************************************************************************)
(* Debugging *)
(*****************************************************************************)

(* A guess as to the last position we were typechecking, for use in debugging,
 * such as figuring out what a runaway hh_server thread is doing. Updated
 * only best-effort -- it's an approximation to point debugging in the right
 * direction, nothing more. *)
let debug_last_pos = ref Pos.none

let debug_print_last_pos _ =
  Hh_logger.info
    "Last typecheck pos: %s"
    (Pos.string (Pos.to_absolute !debug_last_pos))

(*****************************************************************************)
(* Helpers *)
(*****************************************************************************)

let mk_hole ?(source = Aast.Typing) ((_, pos, _) as expr) ~ty_have ~ty_expect =
  if equal_locl_ty ty_have ty_expect then
    expr
  else
    (* if the hole is generated from typing, we leave the type unchanged,
       if it is a call to `[unsafe|enforced]_cast`, we give it the expected type
    *)
    let ty_hole =
      match source with
      | Aast.Typing -> ty_have
      | UnsafeCast _
      | EnforcedCast _ ->
        ty_expect
    in
    make_typed_expr pos ty_hole @@ Aast.Hole (expr, ty_have, ty_expect, source)

let hole_on_err (te : Tast.expr) ~err_opt =
  Option.value_map err_opt ~default:te ~f:(fun (ty_have, ty_expect) ->
      mk_hole te ~ty_have ~ty_expect)

(* When typing compound assignments we generate a 'fake' expression which
   desugars it to the operation on the rhs of the assignment. If there
   was a subtyping error, we end up with the Hole on the fake rhs
   rather than the original rhs. This function rewrites the
   desugared expression with the Hole in the correct place *)
let resugar_binop expr =
  match expr with
  | ( topt,
      p,
      Aast.(
        Binop
          ( _,
            te1,
            (_, _, Hole ((_, _, Binop (op, _, te2)), ty_have, ty_expect, source))
          )) ) ->
    let hte2 = mk_hole te2 ~ty_have ~ty_expect ~source in
    let te = Aast.Binop (Ast_defs.Eq (Some op), te1, hte2) in
    Some (topt, p, te)
  | (topt, p, Aast.Binop (_, te1, (_, _, Aast.Binop (op, _, te2)))) ->
    let te = Aast.Binop (Ast_defs.Eq (Some op), te1, te2) in
    Some (topt, p, te)
  | _ -> None

(* When recording subtyping or coercion errors for union and intersection types
   we need to look at the error for each element and then reconstruct any
   errors into a union or intersection. If there were no errors for any
   element, the result if also `Ok`; if there was an error for at least
   on element we have `Error` with list of actual and expected types *)
let fold_coercion_errs errs =
  List.fold_left errs ~init:(Ok []) ~f:(fun acc err ->
      match (acc, err) with
      | (Ok xs, Ok x) -> Ok (x :: xs)
      | (Ok xs, Error (x, y)) -> Error (x :: xs, y :: xs)
      | (Error (xs, ys), Ok x) -> Error (x :: xs, x :: ys)
      | (Error (xs, ys), Error (x, y)) -> Error (x :: xs, y :: ys))

let union_coercion_errs errs =
  Result.fold
    ~ok:(fun tys -> Ok (MakeType.union Reason.Rnone tys))
    ~error:(fun (acts, exps) ->
      Error (MakeType.union Reason.Rnone acts, MakeType.union Reason.Rnone exps))
  @@ fold_coercion_errs errs

let intersect_coercion_errs errs =
  Result.fold
    ~ok:(fun tys -> Ok (MakeType.intersection Reason.Rnone tys))
    ~error:(fun (acts, exps) ->
      Error
        ( MakeType.intersection Reason.Rnone acts,
          MakeType.intersection Reason.Rnone exps ))
  @@ fold_coercion_errs errs

(** Given the type of an argument that has been unpacked and typed against
    positional and variadic function parameter types, apply the subtyping /
    coercion errors back to the original packed type. *)
let pack_errs pos ty subtyping_errs =
  let nothing =
    MakeType.nothing @@ Reason.Rsolve_fail (Pos_or_decl.of_raw_pos pos)
  in
  let rec aux ~k = function
    (* Case 1: we have a type error at this positional parameter so
       replace the type parameter which caused it with the expected type *)
    | ((Some (_, ty) :: rest, var_opt), _ :: tys)
    (* Case 2: there was no type error here so retain the original type
       parameter *)
    | ((None :: rest, var_opt), ty :: tys) ->
      (* recurse for any remaining positional parameters and add the
         corrected (case 1) or original (case 2) type to the front of the
         list of type parameters in the continuation *)
      aux ((rest, var_opt), tys) ~k:(fun tys -> k (ty :: tys))
    (* Case 3: we have a type error at the variadic parameter so replace
       the type parameter which cased it with the expected type *)
    | ((_, (Some (_, ty) as var_opt)), _ :: tys) ->
      (* recurse with the variadic parameter error and add the
         corrected type to the front of the list of type parameters in the
         continuation *)
      aux (([], var_opt), tys) ~k:(fun tys -> k (ty :: tys))
    (* Case 4: we have a variadic parameter but no error - we're done so
       pass the remaining unchanged type parameters into the contination
       to rebuild corrected type params in the right order *)
    | ((_, None), tys) -> k tys
    (* Case 5: no more type parameters - again we're done so pass empty
       list to continuation and rebuild corrected type params in the right
       order *)
    | (_, []) -> k []
  in
  (* The only types that _can_ be upacked are tuples and pairs; match on the
     type to get the type parameters, pass them to our recursive function
     aux to subsitute the expected type where we have a type error
     then reconstruct the type in the continuation *)
  match deref ty with
  | (r, Ttuple tys) ->
    aux (subtyping_errs, tys) ~k:(fun tys -> mk (r, Ttuple tys))
  | (r, Tclass (pos_id, exact, tys)) ->
    aux (subtyping_errs, tys) ~k:(fun tys ->
        mk (r, Tclass (pos_id, exact, tys)))
  | _ -> nothing

let err_witness env p = TUtils.terr env (Reason.Rwitness p)

let triple_to_pair (env, te, ty) = (env, (te, ty))

let with_special_coeffects env cap_ty unsafe_cap_ty f =
  let init =
    Option.map (Env.next_cont_opt env) ~f:(fun next_cont ->
        let initial_locals = next_cont.Typing_per_cont_env.local_types in
        let tpenv = Env.get_tpenv env in
        (initial_locals, tpenv))
  in
  Typing_lenv.stash_and_do env (Env.all_continuations env) (fun env ->
      let env =
        match init with
        | None -> env
        | Some (initial_locals, tpenv) ->
          let env = Env.reinitialize_locals env in
          let env = Env.set_locals env initial_locals in
          let env = Env.env_with_tpenv env tpenv in
          env
      in
      let (env, _ty) =
        Typing_coeffects.register_capabilities env cap_ty unsafe_cap_ty
      in
      f env)

(* Set all the types in an expression to the given type. *)
let with_type ty env (e : Nast.expr) : Tast.expr =
  let visitor =
    object (self)
      inherit [_] Aast.map

      method! on_expr env ((), p, expr_) = (ty, p, self#on_expr_ env expr_)

      method on_'ex _ () = ty

      method on_'en _ _ = env
    end
  in
  visitor#on_expr () e

let invalid_expr_ env p : Tast.expr_ =
  let expr = ((), p, Naming.invalid_expr_ p) in
  let ty = TUtils.terr env Reason.Rnone in
  let (_, _, expr_) = with_type ty Tast.dummy_saved_env expr in
  expr_

let expr_error env (r : Reason.t) (e : Nast.expr) =
  let ty = TUtils.terr env r in
  (env, with_type ty Tast.dummy_saved_env e, ty)

let expr_any env p e =
  let ty = Typing_utils.mk_tany env p in
  (env, with_type ty Tast.dummy_saved_env e, ty)

let unbound_name env (pos, name) e =
  match Env.get_mode env with
  | FileInfo.Mstrict ->
    Errors.unbound_name_typing pos name;
    expr_error env (Reason.Rwitness pos) e
  | FileInfo.Mhhi -> expr_any env pos e

(* Is this type Traversable<vty> or Container<vty> for some vty? *)
let get_value_collection_inst env ty =
  match get_node ty with
  | Tclass ((_, c), _, [vty])
    when String.equal c SN.Collections.cTraversable
         || String.equal c SN.Collections.cContainer ->
    Some vty
  (* If we're expecting a mixed or a nonnull then we can just assume
   * that the element type is mixed *)
  | Tnonnull -> Some (MakeType.mixed Reason.Rnone)
  | Tany _ -> Some ty
  | Tdynamic when env.in_support_dynamic_type_method_check ->
    Some ty (* interpret dynamic as Traversable<dynamic> *)
  | _ -> None

(* Is this type KeyedTraversable<kty,vty>
 *           or KeyedContainer<kty,vty>
 * for some kty, vty?
 *)
let get_key_value_collection_inst env p ty =
  match get_node ty with
  | Tclass ((_, c), _, [kty; vty])
    when String.equal c SN.Collections.cKeyedTraversable
         || String.equal c SN.Collections.cKeyedContainer ->
    Some (kty, vty)
  (* If we're expecting a mixed or a nonnull then we can just assume
   * that the key type is arraykey and the value type is mixed *)
  | Tnonnull ->
    let arraykey = MakeType.arraykey (Reason.Rkey_value_collection_key p) in
    let mixed = MakeType.mixed Reason.Rnone in
    Some (arraykey, mixed)
  | Tany _ -> Some (ty, ty)
  | Tdynamic when env.in_support_dynamic_type_method_check ->
    (* interpret dynamic as KeyedTraversable<arraykey, dynamic> *)
    let arraykey = MakeType.arraykey (Reason.Rkey_value_collection_key p) in
    Some (arraykey, ty)
  | _ -> None

(* Is this type varray<vty> or a supertype for some vty? *)
let vc_kind_to_supers kind =
  match kind with
  | Vector -> [SN.Collections.cVector; SN.Collections.cMutableVector]
  | ImmVector -> [SN.Collections.cImmVector; SN.Collections.cConstVector]
  | Vec -> [SN.Collections.cVec]
  | Set -> [SN.Collections.cSet; SN.Collections.cMutableSet]
  | ImmSet -> [SN.Collections.cImmSet; SN.Collections.cConstSet]
  | Keyset -> [SN.Collections.cKeyset]

let kvc_kind_to_supers kind =
  match kind with
  | Map -> [SN.Collections.cMap; SN.Collections.cMutableMap]
  | ImmMap -> [SN.Collections.cImmMap; SN.Collections.cConstMap]
  | Dict -> [SN.Collections.cDict]

(* Is this type one of the value collection types with element type vty? *)
let get_vc_inst env vc_kind ty =
  let classnames = vc_kind_to_supers vc_kind in
  match get_node ty with
  | Tclass ((_, c), _, [vty]) when List.exists classnames ~f:(String.equal c) ->
    Some vty
  | _ -> get_value_collection_inst env ty

(* Is this type one of the three key-value collection types
 * e.g. dict<kty,vty> or a supertype for some kty and vty? *)
let get_kvc_inst env p kvc_kind ty =
  let classnames = kvc_kind_to_supers kvc_kind in
  match get_node ty with
  | Tclass ((_, c), _, [kty; vty])
    when List.exists classnames ~f:(String.equal c) ->
    Some (kty, vty)
  | _ -> get_key_value_collection_inst env p ty

(* Check whether this is a function type that (a) either returns a disposable
 * or (b) has the <<__ReturnDisposable>> attribute
 *)
let is_return_disposable_fun_type env ty =
  let (_env, ty) = Env.expand_type env ty in
  match get_node ty with
  | Tfun ft ->
    get_ft_return_disposable ft
    || Option.is_some
         (Typing_disposable.is_disposable_type env ft.ft_ret.et_type)
  | _ -> false

(* Turn an environment into a local_id_map suitable to be embedded
 * into an AssertEnv statement
 *)
let annot_map env =
  match Env.next_cont_opt env with
  | Some { Typing_per_cont_env.local_types; _ } ->
    Some (Local_id.Map.map (fun (ty, pos, _expr_id) -> (pos, ty)) local_types)
  | None -> None

(* Similar to annot_map above, but filters the map to only contain
 * information about locals in lset
 *)
let refinement_annot_map env lset =
  match annot_map env with
  | Some map ->
    let map =
      Local_id.Map.filter (fun lid _ -> Local_id.Set.mem lid lset) map
    in
    if Local_id.Map.is_empty map then
      None
    else
      Some map
  | None -> None

let assert_env_blk ~pos ~at annotation_kind env_map_opt blk =
  let mk_assert map = (pos, Aast.AssertEnv (annotation_kind, map)) in
  let annot_blk = Option.to_list (Option.map ~f:mk_assert env_map_opt) in
  match at with
  | `Start -> annot_blk @ blk
  | `End -> blk @ annot_blk

let assert_env_stmt ~pos ~at annotation_kind env_map_opt stmt =
  let mk_assert map = (pos, Aast.AssertEnv (annotation_kind, map)) in
  match env_map_opt with
  | Some env_map ->
    let stmt = (pos, stmt) in
    let blk =
      match at with
      | `Start -> [mk_assert env_map; stmt]
      | `End -> [stmt; mk_assert env_map]
    in
    Aast.Block blk
  | None -> stmt

let set_tcopt_unstable_features env { fa_user_attributes; _ } =
  match
    Naming_attributes.find
      SN.UserAttributes.uaEnableUnstableFeatures
      fa_user_attributes
  with
  | None -> env
  | Some { ua_name = _; ua_params } ->
    let ( = ) = String.equal in
    List.fold ua_params ~init:env ~f:(fun env (_, _, feature) ->
        match feature with
        | Aast.String s when s = SN.UnstableFeatures.ifc ->
          Env.map_tcopt ~f:TypecheckerOptions.enable_ifc env
        | Aast.String s when s = SN.UnstableFeatures.modules ->
          Env.map_tcopt ~f:(fun t -> TypecheckerOptions.set_modules t true) env
        | Aast.String s when s = SN.UnstableFeatures.expression_trees ->
          Env.map_tcopt
            ~f:(fun t ->
              TypecheckerOptions.set_tco_enable_expression_trees t true)
            env
        | _ -> env)

(** Do a subtype check of inferred type against expected type.
   * The optional coerce_for_op parameter controls whether any arguments of type
   * dynamic can be coerced to enforceable types because they are arguments to a
   * built-in operator.
 *)
let check_expected_ty_res
    ~(coerce_for_op : bool)
    (message : string)
    (env : env)
    (inferred_ty : locl_ty)
    (expected : ExpectedTy.t option) : (env, env) result =
  match expected with
  | None -> Ok env
  | Some ExpectedTy.{ pos = p; reason = ur; ty } ->
    Typing_log.(
      log_with_level env "typing" ~level:1 (fun () ->
          log_types
            (Pos_or_decl.of_raw_pos p)
            env
            [
              Log_head
                ( Printf.sprintf
                    "Typing.check_expected_ty %s enforced=%s"
                    message
                    (match ty.et_enforced with
                    | Unenforced -> "unenforced"
                    | Enforced -> "enforced"),
                  [
                    Log_type ("inferred_ty", inferred_ty);
                    Log_type ("expected_ty", ty.et_type);
                  ] );
            ]));
    Typing_coercion.coerce_type_res
      ~coerce_for_op
      p
      ur
      env
      inferred_ty
      ty
      Errors.unify_error

let check_expected_ty message env inferred_ty expected =
  Result.fold ~ok:Fn.id ~error:Fn.id
  @@ check_expected_ty_res ~coerce_for_op:false message env inferred_ty expected

(* Set a local; must not be already assigned if it is a using variable *)
let set_local ?(is_using_clause = false) env (pos, x) ty =
  if Env.is_using_var env x then
    if is_using_clause then
      Errors.duplicate_using_var pos
    else
      Errors.illegal_disposable pos "assigned";
  let env = Env.set_local env x ty pos in
  if is_using_clause then
    Env.set_using_var env x
  else
    env

(* Require a new construct with disposable *)
let rec enforce_return_disposable _env e =
  match e with
  | (_, _, New _) -> ()
  | (_, _, Call _) -> ()
  | (_, _, Await (_, _, Call _)) -> ()
  | (_, _, Hole (e, _, _, _)) -> enforce_return_disposable _env e
  | (_, p, _) -> Errors.invalid_return_disposable p

(* Wrappers around the function with the same name in Typing_lenv, which only
 * performs the move/save and merge operation if we are in a try block or in a
 * function with return type 'noreturn'.
 * This enables significant perf improvement, because this is called at every
 * function of method call, when most calls are outside of a try block. *)
let move_and_merge_next_in_catch env =
  if env.in_try || TFTerm.is_noreturn env then
    LEnv.move_and_merge_next_in_cont env C.Catch
  else
    LEnv.drop_cont env C.Next

let save_and_merge_next_in_catch env =
  if env.in_try || TFTerm.is_noreturn env then
    LEnv.save_and_merge_next_in_cont env C.Catch
  else
    env

let might_throw env = save_and_merge_next_in_catch env

let branch :
    type res. env -> (env -> env * res) -> (env -> env * res) -> env * res * res
    =
 fun env branch1 branch2 ->
  let parent_lenv = env.lenv in
  let (env, tbr1) = branch1 env in
  let lenv1 = env.lenv in
  let env = { env with lenv = parent_lenv } in
  let (env, tbr2) = branch2 env in
  let lenv2 = env.lenv in
  let env = LEnv.union_lenvs env parent_lenv lenv1 lenv2 in
  (env, tbr1, tbr2)

let as_expr env ty1 pe e =
  let env = Env.open_tyvars env pe in
  let (env, tv) = Env.fresh_type env pe in
  let (env, expected_ty, tk, tv) =
    match e with
    | As_v _ ->
      let tk = MakeType.mixed Reason.Rnone in
      (env, MakeType.traversable (Reason.Rforeach pe) tv, tk, tv)
    | As_kv _ ->
      let (env, tk) = Env.fresh_type env pe in
      (env, MakeType.keyed_traversable (Reason.Rforeach pe) tk tv, tk, tv)
    | Await_as_v _ ->
      let tk = MakeType.mixed Reason.Rnone in
      (env, MakeType.async_iterator (Reason.Rasyncforeach pe) tv, tk, tv)
    | Await_as_kv _ ->
      let (env, tk) = Env.fresh_type env pe in
      ( env,
        MakeType.async_keyed_iterator (Reason.Rasyncforeach pe) tk tv,
        tk,
        tv )
  in
  let rec distribute_union env ty =
    let (env, ty) = Env.expand_type env ty in
    match get_node ty with
    | Tunion tyl ->
      let (env, errs) =
        List.fold tyl ~init:(env, []) ~f:(fun (env, errs) ty ->
            let (env, err) = distribute_union env ty in
            (env, err :: errs))
      in
      (env, union_coercion_errs errs)
    | _ ->
      if SubType.is_sub_type_for_union env ty (MakeType.dynamic Reason.Rnone)
      then
        let env = SubType.sub_type env ty tk (Errors.unify_error_at pe) in
        let env = SubType.sub_type env ty tv (Errors.unify_error_at pe) in
        (env, Ok ty)
      else
        let ur = Reason.URforeach in
        let (env, err) =
          Result.fold
            ~ok:(fun env -> (env, Ok ty))
            ~error:(fun env -> (env, Error (ty, expected_ty)))
          @@ Type.sub_type_res pe ur env ty expected_ty Errors.unify_error
        in
        (env, err)
  in

  let (env, err_res) = distribute_union env ty1 in
  let err_opt =
    match err_res with
    | Ok _ -> None
    | Error (act, exp) -> Some (act, exp)
  in
  let env = Env.set_tyvar_variance env expected_ty in
  (Typing_solver.close_tyvars_and_solve env, tk, tv, err_opt)

(* These functions invoke special printing functions for Typing_env. They do not
 * appear in user code, but we still check top level function calls against their
 * names. *)
let typing_env_pseudofunctions =
  SN.PseudoFunctions.(
    String.Hash_set.of_list
      ~growth_allowed:false
      [
        hh_show;
        hh_expect;
        hh_expect_equivalent;
        hh_show_env;
        hh_log_level;
        hh_force_solve;
        hh_loop_forever;
      ])

let do_hh_expect ~equivalent env use_pos explicit_targs p tys =
  match explicit_targs with
  | [targ] ->
    let (env, expected_ty) =
      Phase.localize_targ ~check_well_kinded:true env (snd targ)
    in
    (match tys with
    | [expr_ty] ->
      let res =
        SubType.sub_type_res
          env
          expr_ty
          (fst expected_ty)
          (Errors.hh_expect_error ~equivalent p)
      in
      (match res with
      | Ok env ->
        if equivalent then
          SubType.sub_type
            env
            (fst expected_ty)
            expr_ty
            (Errors.hh_expect_error ~equivalent p)
        else
          env
      | Error env -> env)
    | _ -> env)
  | _ ->
    Errors.expected_tparam ~definition_pos:Pos_or_decl.none ~use_pos 1 None;
    env

let loop_forever env =
  (* forever = up to 10 minutes, to avoid accidentally stuck processes *)
  for i = 1 to 600 do
    (* Look up things in shared memory occasionally to have a chance to be
     * interrupted *)
    match Env.get_class env "FOR_TEST_ONLY" with
    | None -> Unix.sleep 1
    | _ -> assert false
  done;
  Utils.assert_false_log_backtrace
    (Some "hh_loop_forever was looping for more than 10 minutes")

let is_parameter env x = Local_id.Map.mem x (Env.get_params env)

let check_escaping_var env (pos, x) =
  if Env.is_using_var env x then
    if Local_id.equal x this then
      Errors.escaping_this pos
    else if is_parameter env x then
      Errors.escaping_disposable_parameter pos
    else
      Errors.escaping_disposable pos
  else
    ()

let make_result env p te ty =
  (* Set the variance of any type variables that were generated according
   * to how they appear in the expression type *)
  let env = Env.set_tyvar_variance env ty in
  (env, Tast.make_typed_expr p ty te, ty)

let localize_targ env ta =
  let pos = fst ta in
  let (env, targ) = Phase.localize_targ ~check_well_kinded:true env ta in
  (env, targ, ExpectedTy.make pos Reason.URhint (fst targ))

let set_function_pointer ty =
  match get_node ty with
  | Tfun ft ->
    let ft = set_ft_is_function_pointer ft true in
    mk (get_reason ty, Tfun ft)
  | _ -> ty

let xhp_attribute_decl_ty env sid obj attr =
  let (namepstr, valpty) = attr in
  let (valp, valty) = valpty in
  let (env, (declty, _tal)) =
    TOG.obj_get
      ~obj_pos:(fst sid)
      ~is_method:false
      ~inst_meth:false
      ~meth_caller:false
      ~nullsafe:None
      ~coerce_from_ty:None
      ~explicit_targs:[]
      ~class_id:(CI sid)
      ~member_id:namepstr
      ~on_error:Errors.unify_error
      env
      obj
  in
  let ureason = Reason.URxhp (snd sid, snd namepstr) in
  let (env, err_opt) =
    Result.fold
      ~ok:(fun env -> (env, None))
      ~error:(fun env -> (env, Some (valty, declty)))
    @@ Typing_coercion.coerce_type_res
         valp
         ureason
         env
         valty
         (MakeType.unenforced declty)
         Errors.xhp_attribute_does_not_match_hint
  in
  (env, declty, err_opt)

let closure_check_param env param =
  match hint_of_type_hint param.param_type_hint with
  | None -> env
  | Some hty ->
    let hint_pos = fst hty in
    let (env, hty) =
      Phase.localize_hint_no_subst env ~ignore_errors:false hty
    in
    let paramty = Env.get_local env (Local_id.make_unscoped param.param_name) in
    let env =
      Typing_coercion.coerce_type
        hint_pos
        Reason.URhint
        env
        paramty
        (MakeType.unenforced hty)
        Errors.unify_error
    in
    env

let stash_conts_for_closure env p is_anon captured f =
  let captured =
    if is_anon && TypecheckerOptions.any_coeffects (Env.get_tcopt env) then
      Typing_coeffects.(
        (Pos.none, local_capability_id) :: (Pos.none, capability_id) :: captured)
    else
      captured
  in
  let captured =
    if Env.is_local_defined env this && not (Env.is_in_expr_tree env) then
      (Pos.none, this) :: captured
    else
      captured
  in
  let init =
    Option.map (Env.next_cont_opt env) ~f:(fun next_cont ->
        let initial_locals =
          if is_anon then
            Env.get_locals env captured
          else
            next_cont.Typing_per_cont_env.local_types
        in
        let initial_fakes =
          Fake.forget (Env.get_fake_members env) Reason.(Blame (p, BSlambda))
        in
        let tpenv = Env.get_tpenv env in
        (initial_locals, initial_fakes, tpenv))
  in
  Typing_lenv.stash_and_do env (Env.all_continuations env) (fun env ->
      let env =
        match init with
        | None -> env
        | Some (initial_locals, initial_fakes, tpenv) ->
          let env = Env.reinitialize_locals env in
          let env = Env.set_locals env initial_locals in
          let env = Env.set_fake_members env initial_fakes in
          let env = Env.env_with_tpenv env tpenv in
          env
      in
      f env)

let requires_consistent_construct = function
  | CIstatic -> true
  | CIexpr _ -> true
  | CIparent -> false
  | CIself -> false
  | CI _ -> false

(* Caller will be looking for a particular form of expected type
 * e.g. a function type (when checking lambdas) or tuple type (when checking
 * tuples). First expand the expected type and elide single union; also
 * strip nullables, so ?t becomes t, as context will always accept a t if a ?t
 * is expected.
 *
 * Note: we currently do not generally expand ?t into (null | t), so ~?t is (dynamic | Toption t).
 *)
let expand_expected_and_get_node env (expected : ExpectedTy.t option) =
  let rec unbox ty =
    match get_node ty with
    | Tunion [ty1; ty2] when is_dynamic ty1 -> unbox ty2
    | Tunion [ty1; ty2] when is_dynamic ty2 -> unbox ty1
    | Tunion [ty] -> unbox ty
    | Toption ty -> unbox ty
    | _ -> ty
  in
  match expected with
  | None -> (env, None)
  | Some ExpectedTy.{ pos = p; reason = ur; ty = { et_type = ty; _ }; _ } ->
    let (env, ty) = Env.expand_type env ty in
    let uty = unbox ty in
    (env, Some (p, ur, uty, get_node uty))

let uninstantiable_error env reason_pos cid c_tc_pos c_name c_usage_pos c_ty =
  let reason =
    match cid with
    | CIexpr _ ->
      let ty_str = "This would be " ^ Typing_print.error env c_ty in
      Some (reason_pos, ty_str)
    | _ -> None
  in
  Errors.uninstantiable_class c_usage_pos c_tc_pos c_name reason

let coerce_to_throwable pos env exn_ty =
  let throwable_ty = MakeType.throwable (Reason.Rthrow pos) in
  Typing_coercion.coerce_type
    pos
    Reason.URthrow
    env
    exn_ty
    { et_type = throwable_ty; et_enforced = Unenforced }
    Errors.unify_error

let set_valid_rvalue p env x ty =
  let env = set_local env (p, x) ty in
  (* We are assigning a new value to the local variable, so we need to
   * generate a new expression id
   *)
  Env.set_local_expr_id env x (Ident.tmp ())

let is_hack_collection env ty =
  (* TODO(like types) This fails if a collection is used as a parameter under
   * pessimization, because ~Vector<int> </: ConstCollection<mixed>. This is the
   * test we use to see whether to update the expression id for expressions
   * $vector[0] = $x and $vector[] = $x. If this is false, the receiver is assumed
   * to be a Hack array which are COW. This approximation breaks down in the presence
   * of dynamic. It is unclear whether we should change an expression id if the
   * receiver is dynamic. *)
  Typing_solver.is_sub_type
    env
    ty
    (MakeType.const_collection Reason.Rnone (MakeType.mixed Reason.Rnone))

let check_class_get env p def_pos cid mid ce (_, _cid_pos, e) function_pointer =
  match e with
  | CIself when get_ce_abstract ce ->
    begin
      match Env.get_self_id env with
      | Some self ->
        (* at runtime, self:: in a trait is a call to whatever
         * self:: is in the context of the non-trait "use"-ing
         * the trait's code *)
        begin
          match Env.get_class env self with
          | Some cls when Ast_defs.is_c_trait (Cls.kind cls) ->
            (* Ban self::some_abstract_method() in a trait, if the
             * method is also defined in a trait.
             *
             * Abstract methods from interfaces are fine: we'll check
             * in the child class that we actually have an
             * implementation. *)
            (match Decl_provider.get_class (Env.get_ctx env) ce.ce_origin with
            | Some meth_cls when Ast_defs.is_c_trait (Cls.kind meth_cls) ->
              Errors.self_abstract_call mid _cid_pos p def_pos
            | _ -> ())
          | _ ->
            (* Ban self::some_abstract_method() in a class. This will
             *  always error. *)
            Errors.self_abstract_call mid _cid_pos p def_pos
        end
      | None -> ()
    end
  | CIparent when get_ce_abstract ce ->
    Errors.parent_abstract_call mid p def_pos
  | CI _ when get_ce_abstract ce && function_pointer ->
    Errors.abstract_function_pointer cid mid p def_pos
  | CI _ when get_ce_abstract ce ->
    Errors.classname_abstract_call cid mid p def_pos
  | CI (_, classname) when get_ce_synthesized ce ->
    Errors.static_synthetic_method classname mid p def_pos
  | _ -> ()

(** Given an identifier for a function, find its function type in the
 * environment and localise it with the input type parameters. If the function
 * cannot be found, return [Terr].
 *)
let fun_type_of_id env x tal el =
  match Env.get_fun env (snd x) with
  | None ->
    let (env, _, ty) = unbound_name env x ((), Pos.none, Aast.Null) in
    (env, ty, [])
  | Some
      {
        fe_type;
        fe_pos;
        fe_deprecated;
        fe_support_dynamic_type;
        fe_internal;
        fe_module;
        _;
      } ->
    (match get_node fe_type with
    | Tfun ft ->
      let ft =
        let pessimise =
          TypecheckerOptions.pessimise_builtins (Env.get_tcopt env)
        in
        Typing_special_fun.transform_special_fun_ty
          ~pessimise
          ft
          x
          (List.length el)
      in
      let ety_env = empty_expand_env in
      let (env, tal) =
        Phase.localize_targs
          ~check_well_kinded:true
          ~is_method:true
          ~def_pos:fe_pos
          ~use_pos:(fst x)
          ~use_name:(strip_ns (snd x))
          env
          ft.ft_tparams
          (List.map ~f:snd tal)
      in
      let ft =
        Typing_enforceability.compute_enforced_and_pessimize_fun_type env ft
      in
      let use_pos = fst x in
      let def_pos = fe_pos in
      let (env, ft) =
        Phase.(
          localize_ft
            ~instantiation:
              { use_name = strip_ns (snd x); use_pos; explicit_targs = tal }
            ~def_pos
            ~ety_env
            env
            ft)
      in
      let fty =
        Typing_dynamic.relax_method_type
          env
          fe_support_dynamic_type
          (get_reason fe_type)
          ft
      in
      TVis.check_deprecated ~use_pos ~def_pos fe_deprecated;
      (if fe_internal then
        match
          Typing_modules.can_access
            ~current:(Env.get_module env)
            ~target:fe_module
        with
        | `Yes -> ()
        | `Disjoint (current, target) ->
          Errors.module_mismatch (fst x) fe_pos (Some current) target
        | `Outside target -> Errors.module_mismatch (fst x) fe_pos None target);
      (env, fty, tal)
    | _ -> failwith "Expected function type")

(**
 * Checks if a class (given by cty) contains a given static method.
 *
 * We could refactor this + class_get
 *)
let class_contains_smethod env cty (_pos, mid) =
  let lookup_member ty =
    match get_class_type ty with
    | Some ((_, c), _, _) ->
      (match Env.get_class env c with
      | None -> false
      | Some class_ ->
        Option.is_some @@ Env.get_static_member true env class_ mid)
    | None -> false
  in
  let (_env, tyl) =
    TUtils.get_concrete_supertypes ~abstract_enum:true env cty
  in
  List.exists tyl ~f:lookup_member

(* To be a valid trait declaration, all of its 'require extends' must
 * match; since there's no multiple inheritance, it follows that all of
 * the 'require extends' must belong to the same inheritance hierarchy
 * and one of them should be the child of all the others *)
let trait_most_concrete_req_class trait env =
  List.fold
    (Cls.all_ancestor_reqs trait)
    ~f:
      begin
        fun acc (_p, ty) ->
        let (_r, (_p, name), _paraml) = TUtils.unwrap_class_type ty in
        let keep =
          match acc with
          | Some (c, _ty) -> Cls.has_ancestor c name
          | None -> false
        in
        if keep then
          acc
        else
          let class_ = Env.get_class env name in
          match class_ with
          | None -> acc
          | Some c when Ast_defs.is_c_interface (Cls.kind c) -> acc
          | Some c when Ast_defs.is_c_trait (Cls.kind c) ->
            (* this is an error case for which Typing_type_wellformedness spits out
             * an error, but does *not* currently remove the offending
             * 'require extends' or 'require implements' *)
            acc
          | Some c -> Some (c, ty)
      end
    ~init:None

let check_arity ?(did_unpack = false) pos pos_def ft (arity : int) =
  let exp_min = Typing_defs.arity_min ft in
  if arity < exp_min then Errors.typing_too_few_args exp_min arity pos pos_def;
  match ft.ft_arity with
  | Fstandard ->
    let exp_max = List.length ft.ft_params in
    let arity =
      if did_unpack then
        arity + 1
      else
        arity
    in
    if arity > exp_max then
      Errors.typing_too_many_args exp_max arity pos pos_def
  | Fvariadic _ -> ()

let check_lambda_arity lambda_pos def_pos lambda_ft expected_ft =
  match (lambda_ft.ft_arity, expected_ft.ft_arity) with
  | (Fstandard, Fstandard) ->
    let expected_min = Typing_defs.arity_min expected_ft in
    let lambda_min = Typing_defs.arity_min lambda_ft in
    if lambda_min < expected_min then
      Errors.typing_too_few_args expected_min lambda_min lambda_pos def_pos;
    if lambda_min > expected_min then
      Errors.typing_too_many_args expected_min lambda_min lambda_pos def_pos
  | (_, _) -> ()

(* The variadic capture argument is an array listing the passed
 * variable arguments for the purposes of the function body; callsites
 * should not unify with it *)
let variadic_param env ft =
  match ft.ft_arity with
  | Fvariadic param -> (env, Some param)
  | Fstandard -> (env, None)

let param_modes
    ?(is_variadic = false) ({ fp_pos; _ } as fp) (_, pos, _) param_kind =
  match (get_fp_mode fp, param_kind) with
  | (FPnormal, Ast_defs.Pnormal) -> ()
  | (FPinout, Ast_defs.Pinout _) -> ()
  | (FPnormal, Ast_defs.Pinout p) ->
    Errors.inout_annotation_unexpected (Pos.merge p pos) fp_pos is_variadic
  | (FPinout, Ast_defs.Pnormal) -> Errors.inout_annotation_missing pos fp_pos

let split_remaining_params_required_optional ft remaining_params =
  (* Same example as above
   *
   * function f(int $i, string $j, float $k = 3.14, mixed ...$m): void {}
   * function g((string, float, bool) $t): void {
   *   f(3, ...$t);
   * }
   *
   * `remaining_params` will contain [string, float] and there has been 1 parameter consumed. The min_arity
   * of this function is 2, so there is 1 required parameter remaining and 1 optional parameter.
   *)
  let min_arity =
    List.count
      ~f:(fun fp -> not (Typing_defs.get_fp_has_default fp))
      ft.ft_params
  in
  let original_params = ft.ft_params in
  let consumed = List.length original_params - List.length remaining_params in
  let required_remaining = Int.max (min_arity - consumed) 0 in
  let (required_params, optional_params) =
    List.split_n remaining_params required_remaining
  in
  (consumed, required_params, optional_params)

let generate_splat_type_vars
    env p required_params optional_params variadic_param =
  let (env, d_required) =
    List.map_env env required_params ~f:(fun env _ -> Env.fresh_type env p)
  in
  let (env, d_optional) =
    List.map_env env optional_params ~f:(fun env _ -> Env.fresh_type env p)
  in
  let (env, d_variadic) =
    match variadic_param with
    | None -> (env, None)
    | Some _ ->
      let (env, ty) = Env.fresh_type env p in
      (env, Some ty)
  in
  (env, (d_required, d_optional, d_variadic))

let call_param
    env
    param
    param_kind
    (((_, pos, expr_) as e : Nast.expr), arg_ty)
    ~is_variadic : env * (locl_ty * locl_ty) option =
  param_modes ~is_variadic param e param_kind;
  (* When checking params, the type 'x' may be expression dependent. Since
   * we store the expression id in the local env for Lvar, we want to apply
   * it in this case.
   *)
  let (env, dep_ty) =
    match expr_ with
    | Hole ((_, _, Lvar _), _, _, _)
    | Lvar _ ->
      ExprDepTy.make env ~cid:(CIexpr e) arg_ty
    | _ -> (env, arg_ty)
  in
  let pos =
    match param_kind with
    | Ast_defs.Pnormal -> pos
    | Ast_defs.Pinout pk_pos -> Pos.merge pk_pos pos
  in
  Result.fold
    ~ok:(fun env -> (env, None))
    ~error:(fun env -> (env, Some (dep_ty, param.fp_type.et_type)))
  @@ Typing_coercion.coerce_type_res
       pos
       Reason.URparam
       env
       dep_ty
       param.fp_type
       (fun ?code ?quickfixes claim reasons ->
         if env.in_support_dynamic_type_method_check then
           Typing_log.log_pessimise_param env param.fp_pos param.fp_name;
         Errors.unify_error ?code ?quickfixes claim reasons)

let bad_call env p ty = Errors.bad_call p (Typing_print.error env ty)

let rec make_a_local_of ~include_this env e =
  match e with
  | (_, p, Class_get ((_, _, cname), CGstring (_, member_name), _)) ->
    let (env, local) = Env.FakeMembers.make_static env cname member_name p in
    (env, Some (p, local))
  | ( _,
      p,
      Obj_get
        ( (((_, _, This) | (_, _, Lvar _)) as obj),
          (_, _, Id (_, member_name)),
          _,
          _ ) ) ->
    let (env, local) = Env.FakeMembers.make env obj member_name p in
    (env, Some (p, local))
  | (_, _, Lvar x)
  | (_, _, Dollardollar x) ->
    (env, Some x)
  | (_, p, This) when include_this -> (env, Some (p, this))
  | (_, _, Hole (e, _, _, _)) -> make_a_local_of ~include_this env e
  | _ -> (env, None)

(* This function captures the common bits of logic behind refinement
 * of the type of a local variable or a class member variable as a
 * result of a dynamic check (e.g., nullity check, simple type check
 * using functions like is_int, is_string, is_array etc.).  The
 * argument refine is a function that takes the type of the variable
 * and returns a refined type (making necessary changes to the
 * environment, which is threaded through).
 *
 * All refinement functions return, in addition to the updated
 * environment, a (conservative) set of all the locals that got
 * refined. This set is used to construct AssertEnv statmements in
 * the typed AST.
 *)
let refine_lvalue_type env ((ty, _, _) as te) ~refine =
  let (env, ty) = refine env ty in
  let e = Tast.to_nast_expr te in
  let (env, localopt) = make_a_local_of ~include_this:false env e in
  (* TODO TAST: generate an assignment to the fake local in the TAST *)
  match localopt with
  | Some lid -> (set_local env lid ty, Local_id.Set.singleton (snd lid))
  | None -> (env, Local_id.Set.empty)

let rec condition_nullity ~nonnull (env : env) te =
  match te with
  (* assignment: both the rhs and lhs of the '=' must be made null/non-null *)
  | (_, _, Aast.Binop (Ast_defs.Eq None, var, te)) ->
    let (env, lset1) = condition_nullity ~nonnull env te in
    let (env, lset2) = condition_nullity ~nonnull env var in
    (env, Local_id.Set.union lset1 lset2)
  (* case where `Shapes::idx(...)` must be made null/non-null *)
  | ( _,
      _,
      Aast.Call
        ( (_, _, Aast.Class_const ((_, _, Aast.CI (_, shapes)), (_, idx))),
          _,
          [(Ast_defs.Pnormal, shape); (Ast_defs.Pnormal, field)],
          _ ) )
    when String.equal shapes SN.Shapes.cShapes && String.equal idx SN.Shapes.idx
    ->
    let field = Tast.to_nast_expr field in
    let refine env shape_ty =
      if nonnull then
        Typing_shapes.shapes_idx_not_null env shape_ty field
      else
        (env, shape_ty)
    in
    refine_lvalue_type env shape ~refine
  | (_, _, Hole (te, _, _, _)) -> condition_nullity ~nonnull env te
  | (_, p, _) ->
    let refine env ty =
      if nonnull then
        Typing_solver.non_null env (Pos_or_decl.of_raw_pos p) ty
      else
        let r = Reason.Rwitness_from_decl (get_pos ty) in
        Inter.intersect env ~r ty (MakeType.null r)
    in
    refine_lvalue_type env te ~refine

(** If we are dealing with a refinement like
      $x is MyClass<A, B>
    then class_info is the class info of MyClass and hint_tyl corresponds
    to A, B. *)
let generate_fresh_tparams env class_info p reason hint_tyl =
  let tparams_len = List.length (Cls.tparams class_info) in
  let hint_tyl = List.take hint_tyl tparams_len in
  let pad_len = tparams_len - List.length hint_tyl in
  let hint_tyl =
    List.map hint_tyl ~f:(fun x -> Some x)
    @ List.init pad_len ~f:(fun _ -> None)
  in
  let replace_wildcard env hint_ty tp =
    let {
      tp_name = (_, tparam_name);
      tp_reified = reified;
      tp_user_attributes;
      _;
    } =
      tp
    in
    let enforceable =
      Attributes.mem SN.UserAttributes.uaEnforceable tp_user_attributes
    in
    let newable =
      Attributes.mem SN.UserAttributes.uaNewable tp_user_attributes
    in
    match hint_ty with
    | Some ty ->
      begin
        match get_node ty with
        | Tgeneric (name, _targs) when Env.is_fresh_generic_parameter name ->
          (* TODO(T69551141) handle type arguments above and below *)
          (env, (Some (tp, name), MakeType.generic reason name))
        | _ -> (env, (None, ty))
      end
    | None ->
      let (env, new_name) =
        Env.add_fresh_generic_parameter
          env
          (Pos_or_decl.of_raw_pos p)
          tparam_name
          ~reified
          ~enforceable
          ~newable
      in
      (* TODO(T69551141) handle type arguments for Tgeneric *)
      (env, (Some (tp, new_name), MakeType.generic reason new_name))
  in
  let (env, tparams_and_tyl) =
    List.map2_env env hint_tyl (Cls.tparams class_info) ~f:replace_wildcard
  in
  let (tparams_with_new_names, tyl_fresh) = List.unzip tparams_and_tyl in
  (env, tparams_with_new_names, tyl_fresh)

let safely_refine_class_type
    env
    p
    class_name
    class_info
    ivar_ty
    obj_ty
    reason
    (tparams_with_new_names : (decl_tparam * string) option list)
    tyl_fresh =
  (* Type of variable in block will be class name
   * with fresh type parameters *)
  let obj_ty =
    mk (get_reason obj_ty, Tclass (class_name, Nonexact, tyl_fresh))
  in
  let tparams = Cls.tparams class_info in
  (* Add in constraints as assumptions on those type parameters *)
  let ety_env =
    {
      empty_expand_env with
      substs = Subst.make_locl tparams tyl_fresh;
      this_ty = obj_ty;
    }
  in
  let add_bounds env (t, ty_fresh) =
    List.fold_left t.tp_constraints ~init:env ~f:(fun env (ck, ty) ->
        (* Substitute fresh type parameters for
         * original formals in constraint *)
        let (env, ty) = Phase.localize ~ety_env env ty in
        SubType.add_constraint env ck ty_fresh ty (Errors.unify_error_at p))
  in
  let env =
    List.fold_left (List.zip_exn tparams tyl_fresh) ~f:add_bounds ~init:env
  in
  (* Finally, if we have a class-test on something with static classish type,
   * then we can chase the hierarchy and decompose the types to deduce
   * further assumptions on type parameters. For example, we might have
   *   class B<Tb> { ... }
   *   class C extends B<int>
   * and have obj_ty = C and x_ty = B<T> for a generic parameter Aast.
   * Then SubType.add_constraint will deduce that T=int and add int as
   * both lower and upper bound on T in env.lenv.tpenv
   *
   * We only wish to do this if the types are in a possible subtype relationship.
   *)
  let (env, supertypes) =
    TUtils.get_concrete_supertypes ~abstract_enum:true env ivar_ty
  in
  let rec might_be_supertype ty =
    let (_env, ty) = Env.expand_type env ty in
    match get_node ty with
    | Tclass ((_, name), _, _)
      when String.equal name (Cls.name class_info)
           || Cls.has_ancestor class_info name
           || Cls.requires_ancestor class_info name ->
      true
    | Tdynamic -> true
    | Toption ty -> might_be_supertype ty
    | Tunion tyl -> List.for_all tyl ~f:might_be_supertype
    | _ -> false
  in
  let env =
    List.fold_left supertypes ~init:env ~f:(fun env ty ->
        if might_be_supertype ty then
          SubType.add_constraint
            env
            Ast_defs.Constraint_as
            obj_ty
            ty
            (Errors.unify_error_at p)
        else
          env)
  in
  (* It's often the case that the fresh name isn't necessary. For
   * example, if C<T> extends B<T>, and we have $x:B<t> for some type t
   * then $x is C should refine to $x:C<t>.
   * We take a simple approach:
   *    For a fresh type parameter T#1, if
   *      - There is an eqality constraint T#1 = t,
   *      - T#1 is covariant, and T#1 has upper bound t (or mixed if absent)
   *      - T#1 is contravariant, and T#1 has lower bound t (or nothing if absent)
   *    then replace T#1 with t.
   * This is done in Type_parameter_env_ops.simplify_tpenv
   *)
  let (env, tparam_substs) =
    Type_parameter_env_ops.simplify_tpenv
      env
      (List.zip_exn tparams_with_new_names tyl_fresh)
      reason
  in
  let tyl_fresh =
    List.map2_exn tyl_fresh tparams_with_new_names ~f:(fun orig_ty tparam_opt ->
        match tparam_opt with
        | None -> orig_ty
        | Some (_tp, name) -> SMap.find name tparam_substs)
  in
  let obj_ty_simplified =
    mk (get_reason obj_ty, Tclass (class_name, Nonexact, tyl_fresh))
  in
  (env, obj_ty_simplified)

(** Transform a hint like `A<_>` to a localized type like `A<T#1>` for refinement of
an instance variable. ivar_ty is the previous type of that instance variable. Return
the intersection of the hint and variable. *)
let rec class_for_refinement env p reason ivar_pos ivar_ty hint_ty =
  let (env, hint_ty) = Env.expand_type env hint_ty in
  match (get_node ivar_ty, get_node hint_ty) with
  | (_, Tclass (((_, cid) as _c), _, tyl)) ->
    begin
      match Env.get_class env cid with
      | Some class_info ->
        let (env, tparams_with_new_names, tyl_fresh) =
          generate_fresh_tparams env class_info p reason tyl
        in
        safely_refine_class_type
          env
          p
          _c
          class_info
          ivar_ty
          hint_ty
          reason
          tparams_with_new_names
          tyl_fresh
      | None -> (env, TUtils.terr env (Reason.Rwitness ivar_pos))
    end
  | (Ttuple ivar_tyl, Ttuple hint_tyl)
    when Int.equal (List.length ivar_tyl) (List.length hint_tyl) ->
    let (env, tyl) =
      List.map2_env env ivar_tyl hint_tyl ~f:(fun env ivar_ty hint_ty ->
          class_for_refinement env p reason ivar_pos ivar_ty hint_ty)
    in
    (env, MakeType.tuple reason tyl)
  | _ -> (env, hint_ty)

let refine_and_simplify_intersection env p reason ivar_pos ivar_ty hint_ty =
  match get_node ivar_ty with
  | Tunion [ty1; ty2]
    when Typing_defs.is_dynamic ty1 || Typing_defs.is_dynamic ty2 ->
    (* Distribute the intersection over the union *)
    let (env, hint_ty1) =
      class_for_refinement env p reason ivar_pos ty1 hint_ty
    in
    let (env, hint_ty2) =
      class_for_refinement env p reason ivar_pos ty2 hint_ty
    in
    let (env, ty1) = Inter.intersect env ~r:reason ty1 hint_ty1 in
    let (env, ty2) = Inter.intersect env ~r:reason ty2 hint_ty2 in
    Typing_union.union env ty1 ty2
  | _ ->
    let (env, hint_ty) =
      class_for_refinement env p reason ivar_pos ivar_ty hint_ty
    in
    Inter.intersect env ~r:reason ivar_ty hint_ty

type legacy_arrays =
  | PHPArray
  | AnyArray
  | HackDictOrDArray
  | HackVecOrVArray

(* Refine type for is_array, is_vec, is_keyset and is_dict tests
 * `pred_name` is the function name itself (e.g. 'is_vec')
 * `p` is position of the function name in the source
 * `arg_expr` is the argument to the function
 *)
let safely_refine_is_array env ty p pred_name arg_expr =
  refine_lvalue_type env arg_expr ~refine:(fun env arg_ty ->
      let r = Reason.Rpredicated (p, pred_name) in
      let (env, tarrkey_name) =
        Env.add_fresh_generic_parameter
          env
          (Pos_or_decl.of_raw_pos p)
          "Tk"
          ~reified:Erased
          ~enforceable:false
          ~newable:false
      in
      (* TODO(T69551141) handle type arguments for Tgeneric *)
      let tarrkey = MakeType.generic r tarrkey_name in
      let env =
        SubType.add_constraint
          env
          Ast_defs.Constraint_as
          tarrkey
          (MakeType.arraykey r)
          (Errors.unify_error_at p)
      in
      let (env, tfresh_name) =
        Env.add_fresh_generic_parameter
          env
          (Pos_or_decl.of_raw_pos p)
          "T"
          ~reified:Erased
          ~enforceable:false
          ~newable:false
      in
      (* TODO(T69551141) handle type arguments for Tgeneric *)
      let tfresh = MakeType.generic r tfresh_name in
      (* If we're refining the type for `is_array` we have a slightly more
       * involved process. Let's separate out that logic so we can re-use it.
       *)
      let array_ty =
        let tk = MakeType.arraykey Reason.(Rvarray_or_darray_key (to_pos r)) in
        let tv = tfresh in
        MakeType.varray_or_darray r tk tv
      in
      (* This is the refined type of e inside the branch *)
      let hint_ty =
        match ty with
        | PHPArray -> array_ty
        | AnyArray -> MakeType.any_array r tarrkey tfresh
        | HackDictOrDArray ->
          MakeType.union
            r
            [MakeType.dict r tarrkey tfresh; MakeType.darray r tarrkey tfresh]
        | HackVecOrVArray ->
          MakeType.union r [MakeType.vec r tfresh; MakeType.varray r tfresh]
      in
      let (_, arg_pos, _) = arg_expr in
      let (env, refined_ty) =
        class_for_refinement env p r arg_pos arg_ty hint_ty
      in
      (* Add constraints on generic parameters that must
       * hold for refined_ty <:arg_ty. For example, if arg_ty is Traversable<T>
       * and refined_ty is keyset<T#1> then we know T#1 <: T.
       * See analogous code in safely_refine_class_type.
       *)
      let (env, supertypes) =
        TUtils.get_concrete_supertypes ~abstract_enum:true env arg_ty
      in
      let env =
        List.fold_left supertypes ~init:env ~f:(fun env ty ->
            SubType.add_constraint
              env
              Ast_defs.Constraint_as
              hint_ty
              ty
              (Errors.unify_error_at p))
      in
      Inter.intersect ~r env refined_ty arg_ty)

let key_exists env pos shape field =
  let field = Tast.to_nast_expr field in
  refine_lvalue_type env shape ~refine:(fun env shape_ty ->
      match TUtils.shape_field_name env field with
      | None -> (env, shape_ty)
      | Some field_name ->
        let field_name = TShapeField.of_ast Pos_or_decl.of_raw_pos field_name in
        Typing_shapes.refine_shape field_name pos env shape_ty)

(** Add a fresh type parameter to [env] with a name starting [prefix]
    and a constraint on [ty]. *)
let synthesize_type_param env p prefix ty =
  let (env, name) = Env.fresh_param_name env prefix in
  let env = Env.add_upper_bound_global env name ty in
  let env = Env.add_lower_bound_global env name ty in

  let hint = (p, Aast.Habstr (name, [])) in
  (hint, env)

(** Transform calls to MyVisitor::makeTree with [f]. *)
let rec rewrite_expr_tree_maketree env expr f =
  let (pos, p, expr_) = expr in
  let (env, expr_) =
    match expr_ with
    | Call
        ( (fun_pos, p, (Lfun (fun_, idl) | Efun (fun_, idl))),
          targs,
          args,
          variadic ) ->
      (* Express tree literals containing splices use an anonymous
         function that returns the makeTree call.

          (function() {
             $0splice1 = "whatever";
             return MyVisitor::makeTree(...);
          })()
      *)
      let map_stmt env s =
        match s with
        | (pos, Return (Some expr)) ->
          let (env, expr) = rewrite_expr_tree_maketree env expr f in
          (env, (pos, Return (Some expr)))
        | _ -> (env, s)
      in

      let (env, body_ast) = List.map_env env fun_.f_body.fb_ast ~f:map_stmt in
      let fun_ = { fun_ with f_body = { fb_ast = body_ast } } in

      (env, Call ((fun_pos, p, Lfun (fun_, idl)), targs, args, variadic))
    | Call _ ->
      (* The desugarer might give us a simple call to makeTree, so we
         can process it immediately. *)
      f env expr_
    | _ -> (env, expr_)
  in
  (env, (pos, p, expr_))

(** Given [expr], a runtime expression for an expression tree, add a
    type parameter to the makeTree call.

    This enables expression tree visitors to use phantom type
    parameters. The visitor can be defined with __Explicit.

        public static function makeTree<<<__Explicit>> TInfer>(...) { ... }

     Userland calls to this method must provide an explicit type.

        MyVisitor::makeTree<MyVisitorInt>(...);

    For expression tree literals, we run type inference and provide a
    synthesized type parameter to the desugared runtime expression.

        MyVisitor`1`; // we infer MyVisitorInt
        // we add this constrained type parameter:
        MyVisitor::makeTree<TInfer#1>(...) where TInfer#1 = MyVisitorInt

 *)
let maketree_with_type_param env p expr expected_ty =
  let (hint_virtual, env) = synthesize_type_param env p "TInfer" expected_ty in
  let rewrite_expr env expr =
    match expr with
    | Call (e, _, el, unpacked_element) ->
      (env, Call (e, [((), hint_virtual)], el, unpacked_element))
    | e -> (env, e)
  in

  rewrite_expr_tree_maketree env expr rewrite_expr

module EnumClassLabelOps = struct
  type result =
    | Success of Tast.expr * locl_ty
    | ClassNotFound
    | LabelNotFound of Tast.expr * locl_ty
    | Invalid
    | Skip

  (** Given an [enum_name] and an [label], tries to see if
      [enum_name] has a constant named [label].
      In such case, creates the expected typed expression.

      If [label] is not there, it will register and error.

      [ctor] is either `MemberOf` or `Label`
      [full] describe if the original expression was a full
      label, as in E#A, or a short version, as in #A
  *)
  let expand pos env ~full ~ctor enum_name label_name =
    let cls = Env.get_class env enum_name in
    match cls with
    | Some cls ->
      (match Env.get_const env cls label_name with
      | Some const_def ->
        let dty = const_def.cc_type in
        (* the enum constant has type MemberOf<X, Y>. If we are
         * processing a Label argument, we just switch MemberOf for
         * Label.
         *)
        let dty =
          match deref dty with
          | (r, Tapply ((p, _), args)) -> mk (r, Tapply ((p, ctor), args))
          | _ -> dty
        in
        let (env, lty) = Phase.localize_no_subst env ~ignore_errors:true dty in
        let hi = lty in
        let qualifier =
          if full then
            Some (pos, enum_name)
          else
            None
        in
        let te = (hi, pos, EnumClassLabel (qualifier, label_name)) in
        (env, Success (te, lty))
      | None ->
        Errors.enum_class_label_unknown pos label_name enum_name;
        let r = Reason.Rwitness pos in
        let ty = Typing_utils.terr env r in
        let te = (ty, pos, EnumClassLabel (None, label_name)) in
        (env, LabelNotFound (te, ty)))
    | None -> (env, ClassNotFound)
end

let is_lvalue = function
  | `lvalue -> true
  | _ -> false

(* Given a localized parameter type and parameter information, infer
 * a type for the parameter default expression (if present) and check that
 * it is a subtype of the parameter type (if present). If no parameter type
 * is specified, then union with Tany. (So it's as though we did a conditional
 * assignment of the default expression to the parameter).
 * Set the type of the parameter in the locals environment *)
let rec bind_param
    env ?(immutable = false) ?(can_read_globals = false) (ty1, param) =
  let (env, param_te, ty1) =
    match param.param_expr with
    | None -> (env, None, ty1)
    | Some e ->
      let decl_hint =
        Option.map
          ~f:(Decl_hint.hint env.decl_env)
          (hint_of_type_hint param.param_type_hint)
      in
      let enforced =
        match decl_hint with
        | None -> Unenforced
        | Some ty -> Typing_enforceability.get_enforcement env ty
      in
      let ty1_enforced = { et_type = ty1; et_enforced = enforced } in
      let expected =
        ExpectedTy.make_and_allow_coercion_opt
          env
          param.param_pos
          Reason.URparam
          ty1_enforced
      in
      let (env, (te, ty2)) =
        let reason = Reason.Rwitness param.param_pos in
        let pure = MakeType.mixed reason in
        let cap =
          if can_read_globals then
            MakeType.capability reason SN.Capabilities.accessGlobals
          else
            pure
        in
        with_special_coeffects env cap pure @@ fun env ->
        expr ?expected env e ~allow_awaitable:(*?*) false |> triple_to_pair
      in
      Typing_sequencing.sequence_check_expr e;
      let (env, ty1) =
        if
          Option.is_none (hint_of_type_hint param.param_type_hint)
          && (not @@ TCO.global_inference (Env.get_tcopt env))
          (* ty1 will be Tany iff we have no type hint and we are not in
           * 'infer missing mode'. When it ty1 is Tany we just union it with
           * the type of the default expression *)
        then
          Union.union env ty1 ty2
        (* Otherwise we have an explicit type, and the default expression type
         * must be a subtype *)
        else
          let env =
            Typing_coercion.coerce_type
              param.param_pos
              Reason.URhint
              env
              ty2
              ty1_enforced
              Errors.parameter_default_value_wrong_type
          in
          (env, ty1)
      in
      (env, Some te, ty1)
  in
  let (env, user_attributes) =
    attributes_check_def
      env
      SN.AttributeKinds.parameter
      param.param_user_attributes
  in
  let tparam =
    {
      Aast.param_annotation = Tast.make_expr_annotation param.param_pos ty1;
      Aast.param_type_hint = (ty1, hint_of_type_hint param.param_type_hint);
      Aast.param_is_variadic = param.param_is_variadic;
      Aast.param_pos = param.param_pos;
      Aast.param_name = param.param_name;
      Aast.param_expr = param_te;
      Aast.param_callconv = param.param_callconv;
      Aast.param_readonly = param.param_readonly;
      Aast.param_user_attributes = user_attributes;
      Aast.param_visibility = param.param_visibility;
    }
  in
  let mode = get_param_mode param.param_callconv in
  let id = Local_id.make_unscoped param.param_name in
  let env = Env.set_local ~immutable env id ty1 param.param_pos in
  let env = Env.set_param env id (ty1, param.param_pos, mode) in
  let env =
    if has_accept_disposable_attribute param then
      Env.set_using_var env id
    else
      env
  in
  (env, tparam)

(*****************************************************************************)
(* function used to type closures, functions and methods *)
(*****************************************************************************)
and fun_ ?(abstract = false) ?(disable = false) env return pos named_body f_kind
    =
  Env.with_env env (fun env ->
      debug_last_pos := pos;
      let env = Env.set_return env return in
      let (env, tb) =
        if disable then
          let () =
            Errors.internal_error
              pos
              ("Type inference for this function has been disabled by the "
              ^ SN.UserAttributes.uaDisableTypecheckerInternal
              ^ " attribute")
          in
          block env []
        else
          block env named_body.fb_ast
      in
      Typing_sequencing.sequence_check_block named_body.fb_ast;
      let { Typing_env_return_info.return_type = ret; _ } =
        Env.get_return env
      in
      let has_implicit_return = LEnv.has_next env in
      let has_readonly = Env.get_readonly env in
      let env =
        if (not has_implicit_return) || abstract || Env.is_hhi env then
          env
        else
          Typing_return.fun_implicit_return env pos ret.et_type f_kind
      in
      let env =
        Typing_env.set_fun_tast_info
          env
          Tast.{ has_implicit_return; has_readonly }
      in
      debug_last_pos := Pos.none;
      (env, tb))

and block env stl =
  Typing_env.with_origin env Decl_counters.Body @@ fun env ->
  (* To insert an `AssertEnv`, `stmt` might return a `Block`. We eliminate it here
     to keep ASTs `Block`-free. *)
  let (env, stl) =
    List.fold ~init:(env, []) stl ~f:(fun (env, stl) st ->
        let (env, st) = stmt env st in
        (* Accumulate statements in reverse order *)
        let stl =
          match st with
          | (_, Aast.Block stl') -> List.rev stl' @ stl
          | _ -> st :: stl
        in
        (env, stl))
  in
  (env, List.rev stl)

(* Ensure that `ty` is a subtype of IDisposable (for `using`) or
 * IAsyncDisposable (for `await using`)
 *)
and has_dispose_method env has_await p e ty =
  let meth =
    if has_await then
      SN.Members.__disposeAsync
    else
      SN.Members.__dispose
  in
  let (_, obj_pos, _) = e in
  let (env, (tfty, _tal)) =
    TOG.obj_get
      ~obj_pos
      ~is_method:true
      ~inst_meth:false
      ~meth_caller:false
      ~nullsafe:None
      ~coerce_from_ty:None
      ~explicit_targs:[]
      ~class_id:(CIexpr e)
      ~member_id:(p, meth)
      ~on_error:(Errors.using_error p has_await)
      env
      ty
  in
  let (env, (_tel, _typed_unpack_element, _ty, _should_forget_fakes)) =
    call ~expected:None p env tfty [] None
  in
  env

(* Check an individual component in the expression `e` in the
 * `using (e) { ... }` statement.
 * This consists of either
 *   a simple assignment `$x = e`, in which `$x` is the using variable, or
 *   an arbitrary expression `e`, in which case a temporary is the using
 *      variable, inaccessible in the source.
 * Return the typed expression and its type, and any variables that must
 * be designated as "using variables" for avoiding escapes.
 *)
and check_using_expr has_await env ((_, pos, content) as using_clause) =
  match content with
  (* Simple assignment to local of form `$lvar = e` *)
  | Binop (Ast_defs.Eq None, (_, lvar_pos, Lvar lvar), e) ->
    let (env, te, ty) =
      expr ~is_using_clause:true env e ~allow_awaitable:(*?*) false
    in
    let env = has_dispose_method env has_await pos e ty in
    let env = set_local ~is_using_clause:true env lvar ty in
    (* We are assigning a new value to the local variable, so we need to
     * generate a new expression id
     *)
    let env = Env.set_local_expr_id env (snd lvar) (Ident.tmp ()) in
    ( env,
      ( Tast.make_typed_expr
          pos
          ty
          (Aast.Binop
             ( Ast_defs.Eq None,
               Tast.make_typed_expr lvar_pos ty (Aast.Lvar lvar),
               te )),
        [snd lvar] ) )
  (* Arbitrary expression. This will be assigned to a temporary *)
  | _ ->
    let (env, typed_using_clause, ty) =
      expr ~is_using_clause:true env using_clause ~allow_awaitable:(*?*) false
    in
    let env = has_dispose_method env has_await pos using_clause ty in
    (env, (typed_using_clause, []))

(* Check the using clause e in
 * `using (e) { ... }` statement (`has_await = false`) or
 * `await using (e) { ... }` statement (`has_await = true`).
 * `using_clauses` is a list of expressions.
 * Return the typed expression, and any variables that must
 * be designated as "using variables" for avoiding escapes.
 *)
and check_using_clause env has_await using_clauses =
  let (env, pairs) =
    List.map_env env using_clauses ~f:(check_using_expr has_await)
  in
  let (typed_using_clauses, vars) = List.unzip pairs in
  (env, typed_using_clauses, List.concat vars)

and stmt env (pos, st) =
  let (env, st) = stmt_ env pos st in
  Typing_debug.log_env_if_too_big pos env;
  (env, (pos, st))

and stmt_ env pos st =
  let expr ?(allow_awaitable = (*?*) false) = expr ~allow_awaitable in
  let exprs = exprs ~allow_awaitable:(*?*) false in
  (* Type check a loop. f env = (env, result) checks the body of the loop.
   * We iterate over the loop until the "next" continuation environment is
   * stable. alias_depth is supposed to be an upper bound on this; but in
   * certain cases this fails (e.g. a generic type grows unboundedly). TODO:
   * fix this.
   *)
  let infer_loop env f =
    let in_loop_outer = env.in_loop in
    let alias_depth =
      if in_loop_outer then
        1
      else
        Typing_alias.get_depth (pos, st)
    in
    let env = { env with in_loop = true } in
    let rec loop env n =
      (* Remember the old environment *)
      let old_next_entry = Env.next_cont_opt env in
      let (env, result) = f env in
      let new_next_entry = Env.next_cont_opt env in
      (* Finish if we reach the bound, or if the environments match *)
      if
        Int.equal n alias_depth
        || Typing_per_cont_ops.is_sub_opt_entry
             Typing_subtype.is_sub_type
             env
             new_next_entry
             old_next_entry
      then
        let env = { env with in_loop = in_loop_outer } in
        (env, result)
      else
        loop env (n + 1)
    in
    loop env 1
  in
  let env = Env.open_tyvars env pos in
  (fun (env, tb) -> (Typing_solver.close_tyvars_and_solve env, tb))
  @@
  match st with
  | Fallthrough ->
    let env = LEnv.move_and_merge_next_in_cont env C.Fallthrough in
    (env, Aast.Fallthrough)
  | Noop -> (env, Aast.Noop)
  | AssertEnv _ -> (env, Aast.Noop)
  | Yield_break ->
    let env = LEnv.move_and_merge_next_in_cont env C.Exit in
    (env, Aast.Yield_break)
  | Expr e ->
    let (env, te, _) = expr env e in
    let env =
      if TFTerm.typed_expression_exits te then
        LEnv.move_and_merge_next_in_cont env C.Exit
      else
        env
    in
    (env, Aast.Expr te)
  | If (e, b1, b2) ->
    let assert_refinement_env =
      assert_env_blk ~pos ~at:`Start Aast.Refinement
    in
    let (env, te, _) = expr env e in
    let (env, tb1, tb2) =
      branch
        env
        (fun env ->
          let (env, lset) = condition env true te in
          let refinement_map = refinement_annot_map env lset in
          let (env, b1) = block env b1 in
          let b1 = assert_refinement_env refinement_map b1 in
          (env, b1))
        (fun env ->
          let (env, lset) = condition env false te in
          let refinement_map = refinement_annot_map env lset in
          let (env, b2) = block env b2 in
          let b2 = assert_refinement_env refinement_map b2 in
          (env, b2))
    in
    (* TODO TAST: annotate with joined types *)
    (env, Aast.If (te, tb1, tb2))
  | Return None ->
    let env = Typing_return.check_inout_return pos env in
    let rty = MakeType.void (Reason.Rwitness pos) in
    let { Typing_env_return_info.return_type = expected_return; _ } =
      Env.get_return env
    in
    let expected_return =
      Typing_return.strip_awaitable (Env.get_fn_kind env) env expected_return
    in
    let env =
      match Env.get_fn_kind env with
      | Ast_defs.FGenerator
      | Ast_defs.FAsyncGenerator ->
        env
      | _ ->
        Typing_return.implicit_return
          env
          pos
          ~expected:expected_return.et_type
          ~actual:rty
    in
    let env = LEnv.move_and_merge_next_in_cont env C.Exit in
    (env, Aast.Return None)
  | Return (Some e) ->
    let env = Typing_return.check_inout_return pos env in
    let (_, expr_pos, _) = e in
    let Typing_env_return_info.
          {
            return_type;
            return_disposable;
            return_explicit;
            return_dynamically_callable = _;
          } =
      Env.get_return env
    in
    let return_type =
      Typing_return.strip_awaitable (Env.get_fn_kind env) env return_type
    in
    let expected =
      if return_explicit then
        Some
          (ExpectedTy.make_and_allow_coercion
             expr_pos
             Reason.URreturn
             return_type)
      else
        None
    in
    if return_disposable then enforce_return_disposable env e;
    let (env, te, rty) =
      expr ~is_using_clause:return_disposable ?expected env e
    in
    (* This is a unify_error rather than a return_type_mismatch because the return
     * statement is the problem, not the return type itself. *)
    let (env, err_opt) =
      Result.fold
        ~ok:(fun env -> (env, None))
        ~error:(fun env -> (env, Some (rty, return_type.et_type)))
      @@ Typing_coercion.coerce_type_res
           expr_pos
           Reason.URreturn
           env
           rty
           return_type
           Errors.unify_error
    in
    let env = LEnv.move_and_merge_next_in_cont env C.Exit in
    (env, Aast.Return (Some (hole_on_err ~err_opt te)))
  | Do (b, e) ->
    (* NOTE: leaks scope as currently implemented; this matches
       the behavior in naming (cf. `do_stmt` in naming/naming.ml).
    *)
    let (env, (tb, te)) =
      LEnv.stash_and_do env [C.Continue; C.Break; C.Do] (fun env ->
          let env = LEnv.save_and_merge_next_in_cont env C.Do in
          let (env, _) = block env b in
          (* saving the locals in continue here even if there is no continue
           * statement because they must be merged at the end of the loop, in
           * case there is no iteration *)
          let env = LEnv.save_and_merge_next_in_cont env C.Continue in
          let (env, tb) =
            infer_loop env (fun env ->
                let env =
                  LEnv.update_next_from_conts env [C.Continue; C.Next]
                in
                (* The following is necessary in case there is an assignment in the
                 * expression *)
                let (env, te, _) = expr env e in
                let (env, _lset) = condition env true te in
                let env = LEnv.update_next_from_conts env [C.Do; C.Next] in
                let (env, tb) = block env b in
                (env, tb))
          in
          let env = LEnv.update_next_from_conts env [C.Continue; C.Next] in
          let (env, te, _) = expr env e in
          let (env, _lset) = condition env false te in
          let env = LEnv.update_next_from_conts env [C.Break; C.Next] in
          (env, (tb, te)))
    in
    (env, Aast.Do (tb, te))
  | While (e, b) ->
    let (env, (te, tb, refinement_map)) =
      LEnv.stash_and_do env [C.Continue; C.Break] (fun env ->
          let env = LEnv.save_and_merge_next_in_cont env C.Continue in
          let (env, tb) =
            infer_loop env (fun env ->
                let env =
                  LEnv.update_next_from_conts env [C.Continue; C.Next]
                in
                let join_map = annot_map env in
                (* The following is necessary in case there is an assignment in the
                 * expression *)
                let (env, te, _) = expr env e in
                let (env, lset) = condition env true te in
                let refinement_map = refinement_annot_map env lset in
                (* TODO TAST: avoid repeated generation of block *)
                let (env, tb) = block env b in

                (* Annotate loop body with join and refined environments *)
                let assert_env_blk = assert_env_blk ~pos ~at:`Start in
                let tb = assert_env_blk Aast.Refinement refinement_map tb in
                let tb = assert_env_blk Aast.Join join_map tb in

                (env, tb))
          in
          let env = LEnv.update_next_from_conts env [C.Continue; C.Next] in
          let (env, te, _) = expr env e in
          let (env, lset) = condition env false te in
          let refinement_map_at_exit = refinement_annot_map env lset in
          let env = LEnv.update_next_from_conts env [C.Break; C.Next] in
          (env, (te, tb, refinement_map_at_exit)))
    in
    let while_st = Aast.While (te, tb) in
    (* Export the refined environment after the exit condition holds *)
    let while_st =
      assert_env_stmt ~pos ~at:`End Aast.Refinement refinement_map while_st
    in
    (env, while_st)
  | Using
      {
        us_has_await = has_await;
        us_exprs = (loc, using_clause);
        us_block = using_block;
        us_is_block_scoped;
      } ->
    let (env, typed_using_clause, using_vars) =
      check_using_clause env has_await using_clause
    in
    let (env, typed_using_block) = block env using_block in
    (* Remove any using variables from the environment, as they should not
     * be in scope outside the block *)
    let env = List.fold_left using_vars ~init:env ~f:Env.unset_local in
    ( env,
      Aast.Using
        Aast.
          {
            us_has_await = has_await;
            us_exprs = (loc, typed_using_clause);
            us_block = typed_using_block;
            us_is_block_scoped;
          } )
  | For (e1, e2, e3, b) ->
    let e2 =
      match e2 with
      | Some e2 -> e2
      | None -> ((), Pos.none, True)
    in
    let (env, (te1, te2, te3, tb, refinement_map)) =
      LEnv.stash_and_do env [C.Continue; C.Break] (fun env ->
          (* For loops leak their initalizer, but nothing that's defined in the
             body
          *)
          let (env, te1, _) = exprs env e1 in
          (* initializer *)
          let env = LEnv.save_and_merge_next_in_cont env C.Continue in
          let (env, (tb, te3)) =
            infer_loop env (fun env ->
                (* The following is necessary in case there is an assignment in the
                 * expression *)
                let (env, te2, _) = expr env e2 in
                let (env, lset) = condition env true te2 in
                let refinement_map = refinement_annot_map env lset in
                let (env, tb) = block env b in
                let env =
                  LEnv.update_next_from_conts env [C.Continue; C.Next]
                in
                let join_map = annot_map env in
                let (env, te3, _) = exprs env e3 in

                (* Export the join and refinement environments *)
                let assert_env_blk = assert_env_blk ~pos ~at:`Start in
                let tb = assert_env_blk Aast.Refinement refinement_map tb in
                let tb = assert_env_blk Aast.Join join_map tb in

                (env, (tb, te3)))
          in
          let env = LEnv.update_next_from_conts env [C.Continue; C.Next] in
          let (env, te2, _) = expr env e2 in
          let (env, lset) = condition env false te2 in
          let refinement_map_at_exit = refinement_annot_map env lset in
          let env = LEnv.update_next_from_conts env [C.Break; C.Next] in
          (env, (te1, te2, te3, tb, refinement_map_at_exit)))
    in
    let for_st = Aast.For (te1, Some te2, te3, tb) in
    let for_st =
      assert_env_stmt ~pos ~at:`End Aast.Refinement refinement_map for_st
    in
    (env, for_st)
  | Switch (((_, pos, _) as e), cl) ->
    let (env, te, ty) = expr env e in
    (* NB: A 'continue' inside a 'switch' block is equivalent to a 'break'.
     * See the note in
     * http://php.net/manual/en/control-structures.continue.php *)
    let (env, (te, tcl)) =
      LEnv.stash_and_do env [C.Continue; C.Break] (fun env ->
          let parent_locals = LEnv.get_all_locals env in
          let (env, tcl) = case_list parent_locals ty env pos cl in
          let env =
            LEnv.update_next_from_conts env [C.Continue; C.Break; C.Next]
          in
          (env, (te, tcl)))
    in
    (env, Aast.Switch (te, tcl))
  | Foreach (e1, e2, b) ->
    (* It's safe to do foreach over a disposable, as no leaking is possible *)
    let (env, te1, ty1) = expr ~accept_using_var:true env e1 in
    let (env, (te1, te2, tb)) =
      LEnv.stash_and_do env [C.Continue; C.Break] (fun env ->
          let env = LEnv.save_and_merge_next_in_cont env C.Continue in
          let (_, p1, _) = e1 in
          let (env, tk, tv, err_opt) = as_expr env ty1 p1 e2 in
          let (env, (te2, tb)) =
            infer_loop env (fun env ->
                let env =
                  LEnv.update_next_from_conts env [C.Continue; C.Next]
                in
                let join_map = annot_map env in
                let (env, te2) = bind_as_expr env p1 tk tv e2 in
                let (env, tb) = block env b in
                (* Export the join environment *)
                let tb = assert_env_blk ~pos ~at:`Start Aast.Join join_map tb in
                (env, (te2, tb)))
          in
          let env =
            LEnv.update_next_from_conts env [C.Continue; C.Break; C.Next]
          in
          (env, (hole_on_err ~err_opt te1, te2, tb)))
    in
    (env, Aast.Foreach (te1, te2, tb))
  | Try (tb, cl, fb) ->
    let (env, ttb, tcl, tfb) = try_catch env tb cl fb in
    (env, Aast.Try (ttb, tcl, tfb))
  | Awaitall (el, b) ->
    let env = might_throw env in
    let (env, el) =
      List.fold_left el ~init:(env, []) ~f:(fun (env, tel) (e1, e2) ->
          let (env, te2, ty2) = expr env e2 ~allow_awaitable:true in
          let (_, pos2, _) = e2 in
          let (env, ty2) =
            Async.overload_extract_from_awaitable env ~p:pos2 ty2
          in
          match e1 with
          | Some e1 ->
            let pos = fst e1 in
            let (env, _, _, err_opt) =
              assign pos env ((), pos, Lvar e1) pos2 ty2
            in
            (env, (Some e1, hole_on_err ~err_opt te2) :: tel)
          | None -> (env, (None, te2) :: tel))
    in
    let (env, b) = block env b in
    (env, Aast.Awaitall (el, b))
  | Throw e ->
    let (_, p, _) = e in
    let (env, te, ty) = expr env e in
    let env = coerce_to_throwable p env ty in
    let env = move_and_merge_next_in_catch env in
    (env, Aast.Throw te)
  | Continue ->
    let env = LEnv.move_and_merge_next_in_cont env C.Continue in
    (env, Aast.Continue)
  | Break ->
    let env = LEnv.move_and_merge_next_in_cont env C.Break in
    (env, Aast.Break)
  | Block _
  | Markup _ ->
    failwith
      "Unexpected nodes in AST. These nodes should have been removed in naming."

and finally_cont fb env ctx =
  (* The only locals in scope are the ones from the current continuation *)
  let env = Env.env_with_locals env @@ CMap.singleton C.Next ctx in
  let (env, _tfb) = block env fb in
  (env, LEnv.get_all_locals env)

and finally env fb =
  match fb with
  | [] ->
    let env = LEnv.update_next_from_conts env [C.Next; C.Finally] in
    (env, [])
  | _ ->
    let parent_locals = LEnv.get_all_locals env in
    (* First typecheck the finally block against all continuations merged
       * together.
       * During this phase, record errors found in the finally block, but discard
       * the resulting environment. *)
    let all_conts = Env.all_continuations env in
    let env = LEnv.update_next_from_conts env all_conts in
    let (env, tfb) = block env fb in
    let env = LEnv.restore_conts_from env parent_locals all_conts in
    (* Second, typecheck the finally block once against each continuation. This
       * helps be more clever about what each continuation will be after the
       * finally block.
       * We don't want to record errors during this phase, because certain types
       * of errors will fire wrongly. For example, if $x is nullable in some
       * continuations but not in others, then we must use `?->` on $x, but an
       * error will fire when typechecking the finally block againts continuations
       * where $x is non-null. *)
    let finally_cont env _key = finally_cont fb env in
    let (env, locals_map) =
      Errors.ignore_ (fun () -> CMap.map_env finally_cont env parent_locals)
    in
    let union env _key = LEnv.union_contextopts env in
    let (env, locals) = Try.finally_merge union env locals_map all_conts in
    (Env.env_with_locals env locals, tfb)

and try_catch env tb cl fb =
  let parent_locals = LEnv.get_all_locals env in
  let env =
    LEnv.drop_conts env [C.Break; C.Continue; C.Exit; C.Catch; C.Finally]
  in
  let (env, (ttb, tcb)) =
    Env.in_try env (fun env ->
        let (env, ttb) = block env tb in
        let env = LEnv.move_and_merge_next_in_cont env C.Finally in
        let catchctx = LEnv.get_cont_option env C.Catch in
        let (env, lenvtcblist) = List.map_env env ~f:(catch catchctx) cl in
        let (lenvl, tcb) = List.unzip lenvtcblist in
        let env = LEnv.union_lenv_list env env.lenv lenvl in
        let env = LEnv.move_and_merge_next_in_cont env C.Finally in
        (env, (ttb, tcb)))
  in
  let (env, tfb) = finally env fb in
  let env = LEnv.update_next_from_conts env [C.Finally] in
  let env = LEnv.drop_cont env C.Finally in
  let env =
    LEnv.restore_and_merge_conts_from
      env
      parent_locals
      [C.Break; C.Continue; C.Exit; C.Catch; C.Finally]
  in
  (env, ttb, tcb, tfb)

and case_list parent_locals ty env switch_pos cl =
  let initialize_next_cont env =
    let env = LEnv.restore_conts_from env parent_locals [C.Next] in
    let env = LEnv.update_next_from_conts env [C.Next; C.Fallthrough] in
    LEnv.drop_cont env C.Fallthrough
  in
  let check_fallthrough env switch_pos case_pos block rest_of_list ~is_default =
    if (not (List.is_empty block)) && not (List.is_empty rest_of_list) then
      match LEnv.get_cont_option env C.Next with
      | Some _ ->
        if is_default then
          Errors.default_fallthrough switch_pos
        else
          Errors.case_fallthrough switch_pos case_pos
      | None -> ()
  in
  let env =
    (* below, we try to find out if the switch is exhaustive *)
    let has_default =
      List.exists cl ~f:(function
          | Default _ -> true
          | _ -> false)
    in
    let (env, ty) =
      (* If it hasn't got a default clause then we need to solve type variables
       * in order to check for an enum *)
      if has_default then
        Env.expand_type env ty
      else
        Typing_solver.expand_type_and_solve
          env
          ~description_of_expected:"a value"
          switch_pos
          ty
    in
    (* leverage that enums are checked for exhaustivity *)
    let is_enum =
      let top_type =
        MakeType.class_type
          Reason.Rnone
          SN.Classes.cHH_BuiltinEnum
          [MakeType.mixed Reason.Rnone]
      in
      Typing_subtype.is_sub_type_for_coercion env ty top_type
    in
    (* register that the runtime may throw in case we cannot prove
       that the switch is exhaustive *)
    if has_default || is_enum then
      env
    else
      might_throw env
  in
  let rec case_list env = function
    | [] -> (env, [])
    | Default (pos, b) :: rl ->
      let env = initialize_next_cont env in
      let (env, tb) = block env b in
      check_fallthrough env switch_pos pos b rl ~is_default:true;
      let (env, tcl) = case_list env rl in
      (env, Aast.Default (pos, tb) :: tcl)
    | Case (((_, pos, _) as e), b) :: rl ->
      let env = initialize_next_cont env in
      let (env, te, _) = expr env e ~allow_awaitable:(*?*) false in
      let (env, tb) = block env b in
      check_fallthrough env switch_pos pos b rl ~is_default:false;
      let (env, tcl) = case_list env rl in
      (env, Aast.Case (te, tb) :: tcl)
  in
  case_list env cl

and catch catchctx env (sid, exn_lvar, b) =
  let env = LEnv.replace_cont env C.Next catchctx in
  let cid = CI sid in
  let ety_p = fst sid in
  let (env, _, _, _) = instantiable_cid ety_p env cid [] in
  let (env, _tal, _te, ety) = class_expr env [] ((), ety_p, cid) in
  let env = coerce_to_throwable ety_p env ety in
  let (p, x) = exn_lvar in
  let env = set_valid_rvalue p env x ety in
  let (env, tb) = block env b in
  (env, (env.lenv, (sid, exn_lvar, tb)))

and bind_as_expr env p ty1 ty2 aexpr =
  match aexpr with
  | As_v ev ->
    let (env, te, _, _) = assign p env ev p ty2 in
    (env, Aast.As_v te)
  | Await_as_v (p, ev) ->
    let (env, te, _, _) = assign p env ev p ty2 in
    (env, Aast.Await_as_v (p, te))
  | As_kv ((_, p, Lvar ((_, k) as id)), ev) ->
    let env = set_valid_rvalue p env k ty1 in
    let (env, te, _, _) = assign p env ev p ty2 in
    let tk = Tast.make_typed_expr p ty1 (Aast.Lvar id) in
    (env, Aast.As_kv (tk, te))
  | Await_as_kv (p, (_, p1, Lvar ((_, k) as id)), ev) ->
    let env = set_valid_rvalue p env k ty1 in
    let (env, te, _, _) = assign p env ev p ty2 in
    let tk = Tast.make_typed_expr p1 ty1 (Aast.Lvar id) in
    (env, Aast.Await_as_kv (p, tk, te))
  | _ ->
    (* TODO Probably impossible, should check that *)
    assert false

and expr
    ?(expected : ExpectedTy.t option)
    ?(accept_using_var = false)
    ?(is_using_clause = false)
    ?(in_readonly_expr = false)
    ?(valkind = `other)
    ?(check_defined = true)
    ?in_await
    ~allow_awaitable
    env
    ((_, p, _) as e) =
  try
    begin
      match expected with
      | None -> ()
      | Some ExpectedTy.{ reason = r; ty = { et_type = ty; _ }; _ } ->
        Typing_log.(
          log_with_level env "typing" ~level:1 (fun () ->
              log_types
                (Pos_or_decl.of_raw_pos p)
                env
                [
                  Log_head
                    ( "Typing.expr " ^ Typing_reason.string_of_ureason r,
                      [Log_type ("expected_ty", ty)] );
                ]))
    end;
    raw_expr
      ~accept_using_var
      ~is_using_clause
      ~in_readonly_expr
      ~valkind
      ~check_defined
      ?in_await
      ?expected
      ~allow_awaitable
      env
      e
  with
  | Inf.InconsistentTypeVarState _ as e ->
    (* we don't want to catch unwanted exceptions here, eg Timeouts *)
    Errors.exception_occurred p (Exception.wrap e);
    make_result env p (invalid_expr_ env p) @@ err_witness env p

(* Some (legacy) special functions are allowed in initializers,
  therefore treat them as pure and insert the matching capabilities. *)
and expr_with_pure_coeffects
    ?(expected : ExpectedTy.t option) ~allow_awaitable env e =
  let (_, p, _) = e in
  let pure = MakeType.mixed (Reason.Rwitness p) in
  let (env, (te, ty)) =
    with_special_coeffects env pure pure @@ fun env ->
    expr env e ?expected ~allow_awaitable |> triple_to_pair
  in
  (env, te, ty)

and raw_expr
    ?(accept_using_var = false)
    ?(is_using_clause = false)
    ?(in_readonly_expr = false)
    ?(expected : ExpectedTy.t option)
    ?lhs_of_null_coalesce
    ?(valkind = `other)
    ?(check_defined = true)
    ?in_await
    ~allow_awaitable
    env
    e =
  let (_, p, _) = e in
  debug_last_pos := p;
  expr_
    ~accept_using_var
    ~is_using_clause
    ~in_readonly_expr
    ?expected
    ?lhs_of_null_coalesce
    ?in_await
    ~allow_awaitable
    ~valkind
    ~check_defined
    env
    e

and lvalue env e =
  let valkind = `lvalue in
  expr_ ~valkind ~check_defined:false env e ~allow_awaitable:(*?*) false

and lvalues env el =
  match el with
  | [] -> (env, [], [])
  | e :: el ->
    let (env, te, ty) = lvalue env e in
    let (env, tel, tyl) = lvalues env el in
    (env, te :: tel, ty :: tyl)

(* $x ?? 0 is handled similarly to $x ?: 0, except that the latter will also
 * look for sketchy null checks in the condition. *)
(* TODO TAST: type refinement should be made explicit in the typed AST *)
and eif env ~(expected : ExpectedTy.t option) ?in_await p c e1 e2 =
  let condition = condition ~lhs_of_null_coalesce:false in
  let (env, tc, tyc) =
    raw_expr ~lhs_of_null_coalesce:false env c ~allow_awaitable:false
  in
  let parent_lenv = env.lenv in
  let (env, _lset) = condition env true tc in
  let (env, te1, ty1) =
    match e1 with
    | None ->
      let (env, ty) =
        Typing_solver.non_null env (Pos_or_decl.of_raw_pos p) tyc
      in
      (env, None, ty)
    | Some e1 ->
      let (env, te1, ty1) =
        expr ?expected ?in_await env e1 ~allow_awaitable:true
      in
      (env, Some te1, ty1)
  in
  let lenv1 = env.lenv in
  let env = { env with lenv = parent_lenv } in
  let (env, _lset) = condition env false tc in
  let (env, te2, ty2) = expr ?expected ?in_await env e2 ~allow_awaitable:true in
  let lenv2 = env.lenv in
  let env = LEnv.union_lenvs env parent_lenv lenv1 lenv2 in
  let (env, ty) = Union.union ~approx_cancel_neg:true env ty1 ty2 in
  make_result env p (Aast.Eif (tc, te1, te2)) ty

and exprs
    ?(accept_using_var = false)
    ?(expected : ExpectedTy.t option)
    ?(valkind = `other)
    ?(check_defined = true)
    ~allow_awaitable
    env
    el =
  match el with
  | [] -> (env, [], [])
  | e :: el ->
    let (env, te, ty) =
      expr
        ~accept_using_var
        ?expected
        ~valkind
        ~check_defined
        env
        e
        ~allow_awaitable
    in
    let (env, tel, tyl) =
      exprs
        ~accept_using_var
        ?expected
        ~valkind
        ~check_defined
        env
        el
        ~allow_awaitable
    in
    (env, te :: tel, ty :: tyl)

and argument_list_exprs expr_cb env el =
  match el with
  | [] -> (env, [], [])
  | (pk, e) :: el ->
    let (env, te, ty) = expr_cb env e in
    let (env, tel, tyl) = argument_list_exprs expr_cb env el in
    (env, (pk, te) :: tel, ty :: tyl)

and exprs_expected (pos, ur, expected_tyl) env el =
  match (el, expected_tyl) with
  | ([], _) -> (env, [], [])
  | (e :: el, expected_ty :: expected_tyl) ->
    let expected = ExpectedTy.make pos ur expected_ty in
    let (env, te, ty) = expr ~expected env e ~allow_awaitable:(*?*) false in
    let (env, tel, tyl) = exprs_expected (pos, ur, expected_tyl) env el in
    (env, te :: tel, ty :: tyl)
  | (el, []) -> exprs env el ~allow_awaitable:(*?*) false

and expr_
    ?(expected : ExpectedTy.t option)
    ?(accept_using_var = false)
    ?(is_using_clause = false)
    ?(in_readonly_expr = false)
    ?lhs_of_null_coalesce
    ?in_await
    ~allow_awaitable
    ~(valkind : [> `lvalue | `lvalue_subexpr | `other ])
    ~check_defined
    env
    ((_, p, e) as outer) =
  let env = Env.open_tyvars env p in
  (fun (env, te, ty) ->
    let env = Typing_solver.close_tyvars_and_solve env in
    (env, te, ty))
  @@
  let expr ?(allow_awaitable = allow_awaitable) =
    expr ~check_defined ~allow_awaitable
  in
  let exprs = exprs ~check_defined ~allow_awaitable in
  let raw_expr ?(allow_awaitable = allow_awaitable) =
    raw_expr ~check_defined ~allow_awaitable
  in
  (*
   * Given a list of types, computes their supertype. If any of the types are
   * unknown (e.g., comes from PHP), the supertype will be Typing_utils.tany env.
   * The optional coerce_for_op parameter controls whether any arguments of type
   * dynamic can be coerced to enforceable types because they are arguments to a
   * built-in operator.
   *)
  let compute_supertype
      ~(expected : ExpectedTy.t option)
      ~reason
      ~use_pos
      ?bound
      ?(coerce_for_op = false)
      ?(can_pessimise = false)
      r
      env
      tys =
    let (env, supertype) =
      match expected with
      | None ->
        let (env, supertype) = Env.fresh_type_reason env use_pos r in
        let env =
          match bound with
          | None -> env
          | Some ty ->
            (* There can't be an error because the type is fresh *)
            SubType.sub_type env supertype ty (fun ?code:_ ?quickfixes:_ _ ->
                Errors.internal_error use_pos "Subtype of fresh type variable")
        in
        (env, supertype)
      | Some ExpectedTy.{ ty = { et_type = ty; _ }; _ } -> (env, ty)
    in
    match get_node supertype with
    (* No need to check individual subtypes if expected type is mixed or any! *)
    | Tany _ -> (env, supertype, List.map tys ~f:(fun _ -> None))
    | _ ->
      let (env, expected_supertype) =
        if coerce_for_op then
          ( env,
            Some
              (ExpectedTy.make_and_allow_coercion
                 use_pos
                 reason
                 { et_type = supertype; et_enforced = Enforced }) )
        else
          let (env, pess_supertype) =
            if can_pessimise then
              Typing_array_access.maybe_pessimise_type env supertype
            else
              (env, supertype)
          in
          (env, Some (ExpectedTy.make use_pos reason pess_supertype))
      in
      let dyn_t = MakeType.dynamic Reason.Rnone in
      let subtype_value env ty =
        let (env, ty) =
          if coerce_for_op && Typing_utils.is_sub_type_for_union env dyn_t ty
          then
            (* if we're coercing for a primop, and we're going to use the coercion
               (because the type of the arg is a supertype of dynamic), then we want
               to force the expected_supertype to the bound.
            *)
            match bound with
            | None -> (env, ty)
            | Some bound_ty ->
              Typing_union.union env ty (mk (get_reason ty, get_node bound_ty))
          else
            (env, ty)
        in
        check_expected_ty_res
          ~coerce_for_op
          "Collection"
          env
          ty
          expected_supertype
      in
      let (env, rev_ty_err_opts) =
        List.fold_left tys ~init:(env, []) ~f:(fun (env, errs) ty ->
            Result.fold
              ~ok:(fun env -> (env, None :: errs))
              ~error:(fun env -> (env, Some (ty, supertype) :: errs))
            @@ subtype_value env ty)
      in

      if
        List.exists tys ~f:(fun ty ->
            equal_locl_ty_ (get_node ty) (Typing_utils.tany env))
      then
        (* If one of the values comes from PHP land, we have to be conservative
         * and consider that we don't know what the type of the values are. *)
        (env, Typing_utils.mk_tany env p, List.rev rev_ty_err_opts)
      else
        (env, supertype, List.rev rev_ty_err_opts)
  in
  (*
   * Given a 'a list and a method to extract an expr and its ty from a 'a, this
   * function extracts a list of exprs from the list, and computes the supertype
   * of all of the expressions' tys.
   *)
  let compute_exprs_and_supertype
      ~(expected : ExpectedTy.t option)
      ?(reason = Reason.URarray_value)
      ?(can_pessimise = false)
      ~bound
      ~coerce_for_op
      ~use_pos
      r
      env
      l
      extract_expr_and_ty =
    let (env, pess_expected) =
      if can_pessimise then
        match expected with
        | None -> (env, None)
        | Some ety ->
          let (env, ty) =
            Typing_array_access.maybe_pessimise_type
              env
              ety.ExpectedTy.ty.et_type
          in
          (env, Some ExpectedTy.(make ety.pos ety.reason ty))
      else
        (env, expected)
    in
    let (env, exprs_and_tys) =
      List.map_env env l ~f:(extract_expr_and_ty ~expected:pess_expected)
    in
    let (exprs, tys) = List.unzip exprs_and_tys in
    let (env, supertype, err_opts) =
      compute_supertype
        ~expected
        ~reason
        ~use_pos
        ?bound
        ~coerce_for_op
        ~can_pessimise
        r
        env
        tys
    in
    ( env,
      List.map2_exn
        ~f:(fun te err_opt -> hole_on_err te ~err_opt)
        exprs
        err_opts,
      supertype )
  in
  let check_collection_tparams env name tys =
    (* varrays and darrays are not classes but they share the same
       constraints with vec and dict respectively *)
    let name =
      if String.equal name SN.Typehints.varray then
        SN.Collections.cVec
      else if String.equal name SN.Typehints.darray then
        SN.Collections.cDict
      else
        name
    in
    (* Class retrieval always succeeds because we're fetching a
       collection decl from an HHI file. *)
    match Env.get_class env name with
    | Some class_ ->
      let ety_env =
        {
          (empty_expand_env_with_on_error
             (Env.invalid_type_hint_assert_primary_pos_in_current_decl env))
          with
          substs = TUtils.make_locl_subst_for_class_tparams class_ tys;
        }
      in
      Phase.check_tparams_constraints
        ~use_pos:p
        ~ety_env
        env
        (Cls.tparams class_)
    | None ->
      let desc = "Missing collection decl during type parameter check" in
      Telemetry.(create () |> string_ ~key:"class name" ~value:name)
      |> Errors.invariant_violation p ~desc ~report_to_user:false;
      (* Continue typechecking without performing the check on a best effort
         basis. *)
      env
  in
  Typing_type_wellformedness.expr env outer;
  match e with
  | Import _
  | Collection _ ->
    failwith "AST should not contain these nodes"
  | Hole (e, _, _, _) ->
    expr_
      ?expected
      ~accept_using_var
      ~is_using_clause
      ?lhs_of_null_coalesce
      ?in_await
      ~allow_awaitable
      ~valkind
      ~check_defined
      env
      e
  | Omitted ->
    let ty = Typing_utils.mk_tany env p in
    make_result env p Aast.Omitted ty
  | Varray (th, el)
  | ValCollection (_, th, el) ->
    let (get_expected_kind, name, subtype_val, coerce_for_op, make_expr, make_ty)
        =
      match e with
      | ValCollection (kind, _, _) ->
        let class_name = Nast.vc_kind_to_name kind in
        let (subtype_val, coerce_for_op) =
          match kind with
          | Set
          | ImmSet
          | Keyset ->
            (arraykey_value ~add_hole:true p class_name true, true)
          | Vector
          | ImmVector
          | Vec ->
            (array_value, false)
        in
        ( get_vc_inst env kind,
          class_name,
          subtype_val,
          coerce_for_op,
          (fun th elements -> Aast.ValCollection (kind, th, elements)),
          fun value_ty ->
            MakeType.class_type (Reason.Rwitness p) class_name [value_ty] )
      | Varray _ ->
        ( get_vc_inst env Vec,
          "varray",
          array_value,
          false,
          (fun th elements -> Aast.ValCollection (Vec, th, elements)),
          (fun value_ty -> MakeType.varray (Reason.Rwitness p) value_ty) )
      | _ ->
        (* The parent match makes this case impossible *)
        failwith "impossible match case"
    in
    (* Use expected type to determine expected element type *)
    let (env, elem_expected, th) =
      match th with
      | Some (_, tv) ->
        let (env, tv, tv_expected) = localize_targ env tv in
        let env = check_collection_tparams env name [fst tv] in
        (env, Some tv_expected, Some tv)
      | _ ->
        begin
          match expand_expected_and_get_node env expected with
          | (env, Some (pos, ur, ety, _)) ->
            begin
              match get_expected_kind ety with
              | Some vty -> (env, Some (ExpectedTy.make pos ur vty), None)
              | None -> (env, None, None)
            end
          | _ -> (env, None, None)
        end
    in
    let bound =
      (* TODO We ought to apply the bound even when not in sound dynamic mode,
         to avoid getting Set<dynamic> etc which are unsafe "nothing" factories. *)
      if coerce_for_op && TypecheckerOptions.enable_sound_dynamic env.genv.tcopt
      then
        Some
          (MakeType.arraykey
             (Reason.Rtype_variable_generics (p, "Tk", strip_ns name)))
      else
        None
    in
    let (env, tel, elem_ty) =
      compute_exprs_and_supertype
        ~expected:elem_expected
        ~use_pos:p
        ~reason:Reason.URvector
        ~can_pessimise:true
        ~coerce_for_op
        ~bound
        (Reason.Rtype_variable_generics (p, "T", strip_ns name))
        env
        el
        subtype_val
    in
    make_result env p (make_expr th tel) (make_ty elem_ty)
  | Darray (th, l)
  | KeyValCollection (_, th, l) ->
    let (get_expected_kind, name, make_expr, make_ty) =
      match e with
      | KeyValCollection (kind, _, _) ->
        let class_name = Nast.kvc_kind_to_name kind in
        ( get_kvc_inst env p kind,
          class_name,
          (fun th pairs -> Aast.KeyValCollection (kind, th, pairs)),
          (fun k v -> MakeType.class_type (Reason.Rwitness p) class_name [k; v])
        )
      | Darray _ ->
        let name = "darray" in
        ( get_kvc_inst env p Dict,
          name,
          (fun th pairs -> Aast.KeyValCollection (Dict, th, pairs)),
          (fun k v -> MakeType.darray (Reason.Rwitness p) k v) )
      | _ ->
        (* The parent match makes this case impossible *)
        failwith "impossible match case"
    in
    (* Use expected type to determine expected key and value types *)
    let (env, kexpected, vexpected, th) =
      match th with
      | Some ((_, tk), (_, tv)) ->
        let (env, tk, tk_expected) = localize_targ env tk in
        let (env, tv, tv_expected) = localize_targ env tv in
        let env = check_collection_tparams env name [fst tk; fst tv] in
        (env, Some tk_expected, Some tv_expected, Some (tk, tv))
      | _ ->
        (* no explicit typehint, fallback to supplied expect *)
        begin
          match expand_expected_and_get_node env expected with
          | (env, Some (pos, reason, ety, _)) ->
            begin
              match get_expected_kind ety with
              | Some (kty, vty) ->
                let k_expected = ExpectedTy.make pos reason kty in
                let v_expected = ExpectedTy.make pos reason vty in
                (env, Some k_expected, Some v_expected, None)
              | None -> (env, None, None, None)
            end
          | _ -> (env, None, None, None)
        end
    in
    let (kl, vl) = List.unzip l in
    let r = Reason.Rtype_variable_generics (p, "Tk", strip_ns name) in
    let (env, tkl, k) =
      compute_exprs_and_supertype
        ~expected:kexpected
        ~use_pos:p
        ~reason:(Reason.URkey name)
        ~bound:(Some (MakeType.arraykey r))
        ~coerce_for_op:true
        r
        env
        kl
        (arraykey_value p name false)
    in
    let (env, tvl, v) =
      compute_exprs_and_supertype
        ~expected:vexpected
        ~use_pos:p
        ~reason:(Reason.URvalue name)
        ~can_pessimise:true
        ~coerce_for_op:false
        ~bound:None
        (Reason.Rtype_variable_generics (p, "Tv", strip_ns name))
        env
        vl
        array_value
    in
    let pairs = List.zip_exn tkl tvl in
    make_result env p (make_expr th pairs) (make_ty k v)
  | Clone e ->
    let (env, te, ty) = expr env e in
    (* Clone only works on objects; anything else fatals at runtime.
     * Constructing a call `e`->__clone() checks that `e` is an object and
     * checks coeffects on __clone *)
    let (_, pe, _) = e in
    let (env, (tfty, _tal)) =
      TOG.obj_get
        ~obj_pos:pe
        ~is_method:true
        ~inst_meth:false
        ~meth_caller:false
        ~nullsafe:None
        ~coerce_from_ty:None
        ~explicit_targs:[]
        ~class_id:(CIexpr e)
        ~member_id:(p, SN.Members.__clone)
        ~on_error:Errors.unify_error
        env
        ty
    in
    let (env, (_tel, _typed_unpack_element, _ty, _should_forget_fakes)) =
      call ~expected:None p env tfty [] None
    in
    make_result env p (Aast.Clone te) ty
  | This ->
    if Option.is_none (Env.get_self_ty env) then Errors.this_var_outside_class p;
    if Env.is_in_expr_tree env then Errors.this_var_in_expr_tree p;
    if not accept_using_var then check_escaping_var env (p, this);
    let ty = Env.get_local env this in
    let r = Reason.Rwitness p in
    let ty = mk (r, get_node ty) in
    make_result env p Aast.This ty
  | True -> make_result env p Aast.True (MakeType.bool (Reason.Rwitness p))
  | False -> make_result env p Aast.False (MakeType.bool (Reason.Rwitness p))
  (* TODO TAST: consider checking that the integer is in range. Right now
   * it's possible for HHVM to fail on well-typed Hack code
   *)
  | Int s -> make_result env p (Aast.Int s) (MakeType.int (Reason.Rwitness p))
  | Float s ->
    make_result env p (Aast.Float s) (MakeType.float (Reason.Rwitness p))
  (* TODO TAST: consider introducing a "null" type, and defining ?t to
   * be null | t
   *)
  | Null -> make_result env p Aast.Null (MakeType.null (Reason.Rwitness p))
  | String s ->
    make_result env p (Aast.String s) (MakeType.string (Reason.Rwitness p))
  | String2 idl ->
    let (env, tel) = string2 env idl in
    make_result env p (Aast.String2 tel) (MakeType.string (Reason.Rwitness p))
  | PrefixedString (n, e) ->
    if String.( <> ) n "re" then (
      Errors.experimental_feature
        p
        "String prefixes other than `re` are not yet supported.";
      expr_error env Reason.Rnone outer
    ) else
      let (env, te, ty) = expr env e in
      let (_, pe, expr_) = e in
      let env = Typing_substring.sub_string pe env ty in
      (match expr_ with
      | String _ ->
        begin
          try
            make_result
              env
              p
              (Aast.PrefixedString (n, te))
              (Typing_regex.type_pattern e)
          with
          | Pcre.Error (Pcre.BadPattern (s, i)) ->
            let s = s ^ " [" ^ string_of_int i ^ "]" in
            Errors.bad_regex_pattern pe s;
            expr_error env (Reason.Rregex pe) e
          | Typing_regex.Empty_regex_pattern ->
            Errors.bad_regex_pattern pe "This pattern is empty";
            expr_error env (Reason.Rregex pe) e
          | Typing_regex.Missing_delimiter ->
            Errors.bad_regex_pattern pe "Missing delimiter(s)";
            expr_error env (Reason.Rregex pe) e
          | Typing_regex.Invalid_global_option ->
            Errors.bad_regex_pattern pe "Invalid global option(s)";
            expr_error env (Reason.Rregex pe) e
        end
      | String2 _ ->
        Errors.re_prefixed_non_string pe "Strings with embedded expressions";
        expr_error env (Reason.Rregex pe) e
      | _ ->
        Errors.re_prefixed_non_string pe "Non-strings";
        expr_error env (Reason.Rregex pe) e)
  | Fun_id x ->
    let (env, fty, _tal) = fun_type_of_id env x [] [] in
    make_result env p (Aast.Fun_id x) fty
  | Id ((cst_pos, cst_name) as id) ->
    (match Env.get_gconst env cst_name with
    | None ->
      Errors.unbound_global cst_pos;
      let ty = err_witness env cst_pos in
      make_result env cst_pos (Aast.Id id) ty
    | Some const ->
      let (env, ty) =
        Phase.localize_no_subst env ~ignore_errors:true const.cd_type
      in
      make_result env p (Aast.Id id) ty)
  | Method_id (instance, meth) ->
    (* Method_id is used when creating a "method pointer" using the magic
     * inst_meth function.
     *
     * Typing this is pretty simple, we just need to check that instance->meth
     * is public+not static and then return its type.
     *)
    let (env, te, ty1) = expr env instance in
    let (env, (result, _tal)) =
      TOG.obj_get
        ~inst_meth:true
        ~meth_caller:false
        ~obj_pos:p
        ~is_method:true
        ~nullsafe:None
        ~coerce_from_ty:None
        ~explicit_targs:[]
        ~class_id:(CIexpr instance)
        ~member_id:meth
        ~on_error:Errors.unify_error
        env
        ty1
    in
    let (env, result) =
      Env.FakeMembers.check_instance_invalid env instance (snd meth) result
    in
    make_result env p (Aast.Method_id (te, meth)) result
  | Method_caller (((pos, class_name) as pos_cname), meth_name) ->
    (* meth_caller('X', 'foo') desugars to:
     * $x ==> $x->foo()
     *)
    let class_ = Env.get_class env class_name in
    (match class_ with
    | None -> unbound_name env pos_cname outer
    | Some class_ ->
      (* Create a class type for the given object instantiated with unresolved
       * types for its type parameters.
       *)
      let () =
        if Ast_defs.is_c_trait (Cls.kind class_) then
          Errors.meth_caller_trait pos class_name
      in
      let (env, tvarl) =
        List.map_env env (Cls.tparams class_) ~f:(fun env _ ->
            Env.fresh_type env p)
      in
      let params =
        List.map (Cls.tparams class_) ~f:(fun { tp_name = (p, n); _ } ->
            (* TODO(T69551141) handle type arguments for Tgeneric *)
            MakeType.generic (Reason.Rwitness_from_decl p) n)
      in
      let obj_type =
        MakeType.apply
          (Reason.Rwitness_from_decl (Pos_or_decl.of_raw_pos p))
          (Positioned.of_raw_positioned pos_cname)
          params
      in
      let ety_env =
        {
          (empty_expand_env_with_on_error (Errors.invalid_type_hint pos)) with
          substs = TUtils.make_locl_subst_for_class_tparams class_ tvarl;
        }
      in
      let (env, local_obj_ty) = Phase.localize ~ety_env env obj_type in
      let (env, (fty, _tal)) =
        TOG.obj_get
          ~obj_pos:pos
          ~is_method:true
          ~nullsafe:None
          ~inst_meth:false
          ~meth_caller:true
          ~coerce_from_ty:None
          ~explicit_targs:[]
          ~class_id:(CI (pos, class_name))
          ~member_id:meth_name
          ~on_error:Errors.unify_error
          env
          local_obj_ty
      in
      let (env, fty) = Env.expand_type env fty in
      (match deref fty with
      | (reason, Tfun ftype) ->
        (* We are creating a fake closure:
         * function(Class $x, arg_types_of(Class::meth_name))
                 : return_type_of(Class::meth_name)
         *)
        let ety_env =
          {
            ety_env with
            on_error = Env.unify_error_assert_primary_pos_in_current_decl env;
          }
        in
        let env =
          Phase.check_tparams_constraints
            ~use_pos:p
            ~ety_env
            env
            (Cls.tparams class_)
        in
        let local_obj_fp = TUtils.default_fun_param local_obj_ty in
        let fty = { ftype with ft_params = local_obj_fp :: ftype.ft_params } in
        let caller =
          {
            ft_arity = fty.ft_arity;
            ft_tparams = fty.ft_tparams;
            ft_where_constraints = fty.ft_where_constraints;
            ft_params = fty.ft_params;
            ft_implicit_params = fty.ft_implicit_params;
            ft_ret = fty.ft_ret;
            ft_flags = fty.ft_flags;
            ft_ifc_decl = fty.ft_ifc_decl;
          }
        in
        make_result
          env
          p
          (Aast.Method_caller (pos_cname, meth_name))
          (mk (reason, Tfun caller))
      | _ ->
        (* This can happen if the method lives in PHP *)
        make_result
          env
          p
          (Aast.Method_caller (pos_cname, meth_name))
          (Typing_utils.mk_tany env pos)))
  | FunctionPointer (FP_class_const (cid, meth), targs) ->
    let (env, _, ce, cty) = class_expr env [] cid in
    let (env, (fpty, tal)) =
      class_get
        ~is_method:true
        ~is_const:false
        ~incl_tc:false (* What is this? *)
        ~coerce_from_ty:None (* What is this? *)
        ~explicit_targs:targs
        ~is_function_pointer:true
        env
        cty
        meth
        cid
    in
    let env = Env.set_tyvar_variance env fpty in
    let fpty = set_function_pointer fpty in
    make_result
      env
      p
      (Aast.FunctionPointer (FP_class_const (ce, meth), tal))
      fpty
  | Smethod_id (((_, pc, cid_) as cid), meth) ->
    (* Smethod_id is used when creating a "method pointer" using the magic
     * class_meth function.
     *
     * Typing this is pretty simple, we just need to check that c::meth is
     * public+static and then return its type.
     *)
    let (class_, classname) =
      match cid_ with
      | CIself
      | CIstatic ->
        (Env.get_self_class env, Env.get_self_id env)
      | CI (_, const) when String.equal const SN.PseudoConsts.g__CLASS__ ->
        (Env.get_self_class env, Env.get_self_id env)
      | CI (_, id) -> (Env.get_class env id, Some id)
      | _ -> (None, None)
    in
    let classname = Option.value classname ~default:"" in
    (match class_ with
    | None ->
      (* The class given as a static string was not found. *)
      unbound_name env (pc, classname) outer
    | Some class_ ->
      let smethod = Env.get_static_member true env class_ (snd meth) in
      (match smethod with
      | None ->
        (* The static method wasn't found. *)
        TOG.smember_not_found
          (fst meth)
          ~is_const:false
          ~is_method:true
          ~is_function_pointer:false
          class_
          (snd meth)
          Errors.unify_error;
        expr_error env Reason.Rnone outer
      | Some ({ ce_type = (lazy ty); ce_pos = (lazy ce_pos); _ } as ce) ->
        let () =
          if get_ce_abstract ce then
            match cid_ with
            | CIstatic -> ()
            | _ -> Errors.class_meth_abstract_call classname (snd meth) p ce_pos
        in
        let ce_visibility = ce.ce_visibility in
        let ce_deprecated = ce.ce_deprecated in
        let (env, _tal, te, cid_ty) = class_expr ~exact:Exact env [] cid in
        let (env, cid_ty) = Env.expand_type env cid_ty in
        let tyargs =
          match get_node cid_ty with
          | Tclass (_, _, tyargs) -> tyargs
          | _ -> []
        in
        let ety_env =
          {
            empty_expand_env with
            substs = TUtils.make_locl_subst_for_class_tparams class_ tyargs;
            this_ty = cid_ty;
          }
        in
        let r = get_reason ty |> Typing_reason.localize in
        (match get_node ty with
        | Tfun ft ->
          let ft =
            Typing_enforceability.compute_enforced_and_pessimize_fun_type env ft
          in
          let def_pos = ce_pos in
          let (env, tal) =
            Phase.localize_targs
              ~check_well_kinded:true
              ~is_method:true
              ~def_pos:ce_pos
              ~use_pos:p
              ~use_name:(strip_ns (snd meth))
              env
              ft.ft_tparams
              []
          in
          let (env, ft) =
            Phase.(
              localize_ft
                ~instantiation:
                  Phase.
                    {
                      use_name = strip_ns (snd meth);
                      use_pos = p;
                      explicit_targs = tal;
                    }
                ~ety_env
                ~def_pos:ce_pos
                env
                ft)
          in
          let ty = mk (r, Tfun ft) in
          let use_pos = fst meth in
          TVis.check_deprecated ~use_pos ~def_pos ce_deprecated;
          (match ce_visibility with
          | Vpublic
          | Vinternal _ ->
            make_result env p (Aast.Smethod_id (te, meth)) ty
          | Vprivate _ ->
            Errors.private_class_meth ~def_pos ~use_pos;
            expr_error env r outer
          | Vprotected _ ->
            Errors.protected_class_meth ~def_pos ~use_pos;
            expr_error env r outer)
        | _ ->
          Errors.internal_error p "We have a method which isn't callable";
          expr_error env r outer)))
  | Lplaceholder p ->
    let r = Reason.Rplaceholder p in
    let ty = MakeType.void r in
    make_result env p (Aast.Lplaceholder p) ty
  | Dollardollar _ when is_lvalue valkind ->
    Errors.dollardollar_lvalue p;
    expr_error env (Reason.Rwitness p) outer
  | Dollardollar id ->
    let ty = Env.get_local_check_defined env id in
    let env = might_throw env in
    make_result env p (Aast.Dollardollar id) ty
  | Lvar ((_, x) as id) ->
    if not accept_using_var then check_escaping_var env id;
    let ty =
      if check_defined then
        Env.get_local_check_defined env id
      else
        Env.get_local env x
    in
    make_result env p (Aast.Lvar id) ty
  | Tuple el ->
    let (env, expected) = expand_expected_and_get_node env expected in
    let (env, tel, tyl) =
      match expected with
      | Some (pos, ur, _, Ttuple expected_tyl) ->
        let (env, pess_expected_tyl) =
          if TypecheckerOptions.pessimise_builtins (Env.get_tcopt env) then
            List.map_env env expected_tyl ~f:Typing_array_access.pessimise_type
          else
            (env, expected_tyl)
        in
        exprs_expected (pos, ur, pess_expected_tyl) env el
      | _ -> exprs env el
    in
    let (env, pess_tyl) =
      if TypecheckerOptions.pessimise_builtins (Env.get_tcopt env) then
        List.map_env env tyl ~f:(Typing_array_access.pessimised_tup_assign p)
      else
        (env, tyl)
    in
    let ty = MakeType.tuple (Reason.Rwitness p) pess_tyl in
    make_result env p (Aast.Tuple tel) ty
  | List el ->
    let (env, tel, tyl) =
      match valkind with
      | `lvalue
      | `lvalue_subexpr ->
        lvalues env el
      | `other ->
        let (env, expected) = expand_expected_and_get_node env expected in
        (match expected with
        | Some (pos, ur, _, Ttuple expected_tyl) ->
          exprs_expected (pos, ur, expected_tyl) env el
        | _ -> exprs env el)
    in
    let ty = MakeType.tuple (Reason.Rwitness p) tyl in
    make_result env p (Aast.List tel) ty
  | Pair (th, e1, e2) ->
    let (env, expected1, expected2, th) =
      match th with
      | Some ((_, t1), (_, t2)) ->
        let (env, t1, t1_expected) = localize_targ env t1 in
        let (env, t2, t2_expected) = localize_targ env t2 in
        (env, Some t1_expected, Some t2_expected, Some (t1, t2))
      | None ->
        (* Use expected type to determine expected element types *)
        (match expand_expected_and_get_node env expected with
        | (env, Some (pos, reason, _ty, Tclass ((_, k), _, [ty1; ty2])))
          when String.equal k SN.Collections.cPair ->
          let ty1_expected = ExpectedTy.make pos reason ty1 in
          let ty2_expected = ExpectedTy.make pos reason ty2 in
          (env, Some ty1_expected, Some ty2_expected, None)
        | _ -> (env, None, None, None))
    in
    let (env, te1, ty1) = expr ?expected:expected1 env e1 in
    let (env, te2, ty2) = expr ?expected:expected2 env e2 in
    let (_, p1, _) = e1 in
    let (_, p2, _) = e2 in
    let (env, ty1, err_opt1) =
      compute_supertype
        ~expected:expected1
        ~reason:Reason.URpair_value
        ~use_pos:p1
        (Reason.Rtype_variable_generics (p1, "T1", "Pair"))
        env
        [ty1]
    in
    let (env, ty2, err_opt2) =
      compute_supertype
        ~expected:expected2
        ~reason:Reason.URpair_value
        ~use_pos:p2
        (Reason.Rtype_variable_generics (p2, "T2", "Pair"))
        env
        [ty2]
    in
    let ty = MakeType.pair (Reason.Rwitness p) ty1 ty2 in
    make_result
      env
      p
      (Aast.Pair
         ( th,
           hole_on_err te1 ~err_opt:(Option.join @@ List.hd err_opt1),
           hole_on_err te2 ~err_opt:(Option.join @@ List.hd err_opt2) ))
      ty
  | Array_get (e, None) ->
    let (env, te, _) = update_array_type p env e valkind in
    let env = might_throw env in
    (* NAST check reports an error if [] is used for reading in an
         lvalue context. *)
    let ty = err_witness env p in
    make_result env p (Aast.Array_get (te, None)) ty
  | Array_get (e1, Some e2) ->
    let (env, te1, ty1) =
      update_array_type ?lhs_of_null_coalesce p env e1 valkind
    in
    let (env, te2, ty2) = expr env e2 in
    let env = might_throw env in
    let is_lvalue = is_lvalue valkind in
    let (_, p1, _) = e1 in
    let (env, ty, arr_err_opt, key_err_opt) =
      Typing_array_access.array_get
        ~array_pos:p1
        ~expr_pos:p
        ?lhs_of_null_coalesce
        is_lvalue
        env
        ty1
        e2
        ty2
    in
    make_result
      env
      p
      (Aast.Array_get
         ( hole_on_err ~err_opt:arr_err_opt te1,
           Some (hole_on_err ~err_opt:key_err_opt te2) ))
      ty
  | Call ((_, pos_id, Id ((_, s) as id)), explicit_targs, el, None)
    when Hash_set.mem typing_env_pseudofunctions s ->
    let (env, tel, tys) =
      argument_list_exprs (expr ~accept_using_var:true) env el
    in
    let env =
      if String.equal s SN.PseudoFunctions.hh_expect then
        do_hh_expect ~equivalent:false env pos_id explicit_targs p tys
      else if String.equal s SN.PseudoFunctions.hh_expect_equivalent then
        do_hh_expect ~equivalent:true env pos_id explicit_targs p tys
      else if not (List.is_empty explicit_targs) then (
        Errors.expected_tparam
          ~definition_pos:Pos_or_decl.none
          ~use_pos:pos_id
          0
          None;
        env
      ) else if String.equal s SN.PseudoFunctions.hh_show then (
        List.iter tys ~f:(Typing_log.hh_show p env);
        env
      ) else if String.equal s SN.PseudoFunctions.hh_show_env then (
        Typing_log.hh_show_env p env;
        env
      ) else if String.equal s SN.PseudoFunctions.hh_log_level then
        match el with
        | [
         (Ast_defs.Pnormal, (_, _, String key_str));
         (Ast_defs.Pnormal, (_, _, Int level_str));
        ] ->
          Env.set_log_level env key_str (int_of_string level_str)
        | _ -> env
      else if String.equal s SN.PseudoFunctions.hh_force_solve then
        Typing_solver.solve_all_unsolved_tyvars env
      else if String.equal s SN.PseudoFunctions.hh_loop_forever then
        let _ = loop_forever env in
        env
      else
        env
    in
    let ty = MakeType.void (Reason.Rwitness p) in
    make_result
      env
      p
      (Aast.Call
         ( Tast.make_typed_expr pos_id (TUtils.mk_tany env pos_id) (Aast.Id id),
           [],
           tel,
           None ))
      ty
  | Call (e, explicit_targs, el, unpacked_element) ->
    let env = might_throw env in
    let ((env, te, ty), should_forget_fakes) =
      dispatch_call
        ~is_using_clause
        ~expected
        ?in_await
        p
        env
        e
        explicit_targs
        el
        unpacked_element
    in
    let env =
      if should_forget_fakes then
        Env.forget_members env Reason.(Blame (p, BScall))
      else
        env
    in
    (env, te, ty)
  | FunctionPointer (FP_id fid, targs) ->
    let (env, fty, targs) = fun_type_of_id env fid targs [] in
    let e = Aast.FunctionPointer (FP_id fid, targs) in
    let fty = set_function_pointer fty in
    make_result env p e fty
  | Binop (Ast_defs.QuestionQuestion, e1, e2) ->
    let (_, e1_pos, _) = e1 in
    let (_, e2_pos, _) = e2 in
    let (env, te1, ty1) =
      raw_expr ~lhs_of_null_coalesce:true env e1 ~allow_awaitable:true
    in
    let (env, te2, ty2) = expr ?expected env e2 ~allow_awaitable:true in
    let (env, ty1') = Env.fresh_type env e1_pos in
    let env =
      SubType.sub_type
        env
        ty1
        (MakeType.nullable_locl Reason.Rnone ty1')
        (Errors.unify_error_at e1_pos)
    in
    (* Essentially mimic a call to
     *   function coalesce<Tr, Ta as Tr, Tb as Tr>(?Ta, Tb): Tr
     * That way we let the constraint solver take care of the union logic.
     *)
    let (env, ty_result) = Env.fresh_type env e2_pos in
    let env = SubType.sub_type env ty1' ty_result (Errors.unify_error_at p) in
    let env = SubType.sub_type env ty2 ty_result (Errors.unify_error_at p) in
    make_result
      env
      p
      (Aast.Binop (Ast_defs.QuestionQuestion, te1, te2))
      ty_result
  | Binop (Ast_defs.Eq op_opt, e1, e2) ->
    let make_result env p te ty =
      let (env, te, ty) = make_result env p te ty in
      let env = Typing_local_ops.check_assignment env te in
      (env, te, ty)
    in
    (match op_opt with
    (* For example, e1 += e2. This is typed and translated as if
     * written e1 = e1 + e2.
     * TODO TAST: is this right? e1 will get evaluated more than once
     *)
    | Some op ->
      let (_, _, expr_) = e1 in
      (match (op, expr_) with
      | (Ast_defs.QuestionQuestion, Class_get _) ->
        Errors.experimental_feature
          p
          "null coalesce assignment operator with static properties";
        expr_error env Reason.Rnone outer
      | _ ->
        let e_fake =
          ((), p, Binop (Ast_defs.Eq None, e1, ((), p, Binop (op, e1, e2))))
        in
        let (env, te_fake, ty) = raw_expr env e_fake in
        let te_opt = resugar_binop te_fake in
        begin
          match te_opt with
          | Some (_, _, te) -> make_result env p te ty
          | _ -> assert false
        end)
    | None ->
      let (env, te2, ty2) = raw_expr env e2 in
      let (_, pos2, _) = te2 in
      let (env, te1, ty, err_opt) = assign p env e1 pos2 ty2 in
      let te = Aast.Binop (Ast_defs.Eq None, te1, hole_on_err ~err_opt te2) in
      make_result env p te ty)
  | Binop (((Ast_defs.Ampamp | Ast_defs.Barbar) as bop), e1, e2) ->
    let c = Ast_defs.(equal_bop bop Ampamp) in
    let (env, te1, _) = expr env e1 in
    let lenv = env.lenv in
    let (env, _lset) = condition env c te1 in
    let (env, te2, _) = expr env e2 in
    let env = { env with lenv } in
    make_result
      env
      p
      (Aast.Binop (bop, te1, te2))
      (MakeType.bool (Reason.Rlogic_ret p))
  | Binop (bop, e1, e2) ->
    let (env, te1, ty1) = raw_expr env e1 in
    let (env, te2, ty2) = raw_expr env e2 in
    let env =
      match bop with
      (* TODO: This could be less conservative: we only need to account for
       * the possibility of exception if the operator is `/` or `/=`.
       *)
      | Ast_defs.Eqeqeq
      | Ast_defs.Diff2 ->
        env
      | _ -> might_throw env
    in
    let (_, p1, _) = e1 in
    let (_, p2, _) = e2 in
    let (env, te3, ty) =
      Typing_arithmetic.binop p env bop p1 te1 ty1 p2 te2 ty2
    in
    (env, te3, ty)
  | Pipe (e0, e1, e2) ->
    (* If it weren't for local variable assignment or refinement the pipe
     * expression e1 |> e2 could be typed using this rule (E is environment with
     * types for locals):
     *
     *    E |- e1 : ty1    E[$$:ty1] |- e2 : ty2
     *    --------------------------------------
     *                E |- e1|>e2 : ty2
     *
     * The possibility of e2 changing the types of locals in E means that E
     * can evolve, and so we need to restore $$ to its original state.
     *)
    let (env, te1, ty1) = expr env e1 in
    let dd_var = Local_id.make_unscoped SN.SpecialIdents.dollardollar in
    let dd_old_ty =
      if Env.is_local_defined env dd_var then
        Some (Env.get_local_pos env dd_var)
      else
        None
    in
    let env = Env.set_local env dd_var ty1 Pos.none in
    let (env, te2, ty2) = expr env e2 ~allow_awaitable:true in
    let env =
      match dd_old_ty with
      | None -> Env.unset_local env dd_var
      | Some (ty, pos) -> Env.set_local env dd_var ty pos
    in
    let (env, te, ty) = make_result env p (Aast.Pipe (e0, te1, te2)) ty2 in
    (env, te, ty)
  | Unop (uop, e) ->
    let (env, te, ty) = raw_expr env e in
    let env = might_throw env in
    let (env, tuop, ty) = Typing_arithmetic.unop p env uop te ty in
    let env = Typing_local_ops.check_assignment env te in
    (env, tuop, ty)
  | Eif (c, e1, e2) -> eif env ~expected ?in_await p c e1 e2
  | Class_const ((_, p, CI sid), pstr)
    when String.equal (snd pstr) "class" && Env.is_typedef env (snd sid) ->
    begin
      match Env.get_typedef env (snd sid) with
      | Some { td_tparams = tparaml; _ } ->
        (* Typedef type parameters cannot have constraints *)
        let params =
          List.map
            ~f:
              begin
                fun { tp_name = (p, x); _ } ->
                (* TODO(T69551141) handle type arguments for Tgeneric *)
                MakeType.generic (Reason.Rwitness_from_decl p) x
              end
            tparaml
        in
        let p_ = Pos_or_decl.of_raw_pos p in
        let tdef =
          mk
            ( Reason.Rwitness_from_decl p_,
              Tapply (Positioned.of_raw_positioned sid, params) )
        in
        let typename =
          mk
            ( Reason.Rwitness_from_decl p_,
              Tapply ((p_, SN.Classes.cTypename), [tdef]) )
        in
        let (env, tparams) =
          List.map_env env tparaml ~f:(fun env _tp -> Env.fresh_type env p)
        in
        let ety_env =
          {
            (empty_expand_env_with_on_error
               (Env.invalid_type_hint_assert_primary_pos_in_current_decl env))
            with
            substs = Subst.make_locl tparaml tparams;
          }
        in
        let env =
          Phase.check_tparams_constraints ~use_pos:p ~ety_env env tparaml
        in
        let (env, ty) = Phase.localize ~ety_env env typename in
        make_result env p (Class_const ((ty, p, CI sid), pstr)) ty
      | None ->
        (* Should not expect None as we've checked whether the sid is a typedef *)
        expr_error env (Reason.Rwitness p) outer
    end
  | Class_const (cid, mid) -> class_const env p (cid, mid)
  | Class_get (((_, _, cid_) as cid), CGstring mid, prop_or_method)
    when Env.FakeMembers.is_valid_static env cid_ (snd mid) ->
    let (env, local) = Env.FakeMembers.make_static env cid_ (snd mid) p in
    let local = ((), p, Lvar (p, local)) in
    let (env, _, ty) = expr env local in
    let (env, _tal, te, _) = class_expr env [] cid in
    make_result
      env
      p
      (Aast.Class_get (te, Aast.CGstring mid, prop_or_method))
      ty
  | Class_get
      (((_, _, cid_) as cid), CGstring ((ppos, _) as mid), prop_or_method) ->
    let (env, _tal, te, cty) = class_expr env [] cid in
    let env = might_throw env in
    let (env, (ty, _tal)) =
      class_get
        ~is_method:false
        ~is_const:false
        ~coerce_from_ty:None
        env
        cty
        mid
        cid
    in
    let (env, ty) =
      Env.FakeMembers.check_static_invalid env cid_ (snd mid) ty
    in
    let env =
      Errors.try_if_no_errors
        (fun () -> Typing_local_ops.enforce_static_property_access ppos env)
        (fun env ->
          let is_lvalue = is_lvalue valkind in
          (* If it's an lvalue we throw an error in a separate check in check_assign *)
          if in_readonly_expr || is_lvalue then
            env
          else
            Typing_local_ops.enforce_mutable_static_variable
              ppos
              env
              (* This msg only appears if we have access to ReadStaticVariables,
                 since otherwise we would have errored in the first function *)
              ~msg:"Please enclose the static in a readonly expression")
    in
    make_result
      env
      p
      (Aast.Class_get (te, Aast.CGstring mid, prop_or_method))
      ty
  (* Fake member property access. For example:
   *   if ($x->f !== null) { ...$x->f... }
   *)
  | Class_get (_, CGexpr _, _) ->
    failwith "AST should not have any CGexprs after naming"
  | Obj_get (e, (_, pid, Id (py, y)), nf, is_prop)
    when Env.FakeMembers.is_valid env e y ->
    let env = might_throw env in
    let (env, local) = Env.FakeMembers.make env e y p in
    let local = ((), p, Lvar (p, local)) in
    let (env, _, ty) = expr env local in
    let (env, t_lhs, _) = expr ~accept_using_var:true env e in
    let t_rhs = Tast.make_typed_expr pid ty (Aast.Id (py, y)) in
    make_result env p (Aast.Obj_get (t_lhs, t_rhs, nf, is_prop)) ty
  (* Statically-known instance property access e.g. $x->f *)
  | Obj_get (e1, (_, pm, Id m), nullflavor, prop_or_method) ->
    let nullsafe =
      match nullflavor with
      | OG_nullthrows -> None
      | OG_nullsafe -> Some p
    in
    let (env, te1, ty1) = expr ~accept_using_var:true env e1 in
    let env = might_throw env in
    (* We typecheck Obj_get by checking whether it is a subtype of
       Thas_member(m, #1) where #1 is a fresh type variable. *)
    let (env, mem_ty) = Env.fresh_type env p in
    let (_, p1, _) = e1 in
    let r = Reason.Rwitness p1 in
    let has_member_ty =
      MakeType.has_member
        r
        ~name:m
        ~ty:mem_ty
        ~class_id:(CIexpr e1)
        ~explicit_targs:None
    in
    let lty1 = LoclType ty1 in
    let (env, result_ty, err_opt) =
      match nullsafe with
      | None ->
        let env_res =
          Type.sub_type_i_res
            p1
            Reason.URnone
            env
            lty1
            has_member_ty
            Errors.unify_error
        in
        let (env, err_opt) =
          Result.fold
            env_res
            ~ok:(fun env -> (env, None))
            ~error:(fun env -> (env, Some (ty1, MakeType.nothing Reason.none)))
        in
        (env, mem_ty, err_opt)
      | Some _ ->
        (* In that case ty1 is a subtype of ?Thas_member(m, #1)
           and the result is ?#1 if ty1 is nullable. *)
        let r = Reason.Rnullsafe_op p in
        let null_ty = MakeType.null r in
        let (env, null_has_mem_ty) =
          Union.union_i env r has_member_ty null_ty
        in
        let env_res =
          Type.sub_type_i_res
            p1
            Reason.URnone
            env
            lty1
            null_has_mem_ty
            Errors.unify_error
        in
        let (env, err_opt) =
          Result.fold
            env_res
            ~ok:(fun env -> (env, None))
            ~error:(fun env -> (env, Some (ty1, MakeType.nothing Reason.none)))
        in
        let (env, null_or_nothing_ty) = Inter.intersect env ~r null_ty ty1 in
        let (env, result_ty) = Union.union env null_or_nothing_ty mem_ty in
        (env, result_ty, err_opt)
    in
    let (env, result_ty) =
      Env.FakeMembers.check_instance_invalid env e1 (snd m) result_ty
    in
    make_result
      env
      p
      (Aast.Obj_get
         ( hole_on_err ~err_opt te1,
           Tast.make_typed_expr pm result_ty (Aast.Id m),
           nullflavor,
           prop_or_method ))
      result_ty
  (* Dynamic instance property access e.g. $x->$f *)
  | Obj_get (e1, e2, nullflavor, prop_or_method) ->
    let (env, te1, ty1) = expr ~accept_using_var:true env e1 in
    let (env, te2, _) = expr env e2 in
    let ty =
      if TUtils.is_dynamic env ty1 then
        MakeType.dynamic (Reason.Rwitness p)
      else
        Typing_utils.mk_tany env p
    in
    let (_, pos, te2) = te2 in
    let env = might_throw env in
    let te2 = Tast.make_typed_expr pos ty te2 in
    make_result env p (Aast.Obj_get (te1, te2, nullflavor, prop_or_method)) ty
  | Yield af ->
    let (env, (taf, opt_key, value)) = array_field ~allow_awaitable env af in
    let Typing_env_return_info.{ return_type = expected_return; _ } =
      Env.get_return env
    in
    let send =
      match get_node expected_return.et_type with
      | Tclass (_, _, _ :: _ :: send :: _) -> send
      | Tdynamic when env.in_support_dynamic_type_method_check ->
        expected_return.et_type
      | _ ->
        Errors.internal_error p "Return type is not a generator";
        Typing_utils.terr env (Reason.Ryield_send p)
    in
    let is_async =
      match Env.get_fn_kind env with
      | Ast_defs.FGenerator -> false
      (* This could also catch sync/async non-generators, but an error would
       * have already been generated elsewhere *)
      | _ -> true
    in
    let (env, key) =
      match (af, opt_key) with
      | (AFvalue (_, p, _), None) ->
        if is_async then
          let (env, ty) = Env.fresh_type env p in
          (env, MakeType.nullable_locl (Reason.Ryield_asyncnull p) ty)
        else
          (env, MakeType.int (Reason.Rwitness p))
      | (_, Some x) -> (env, x)
      | (_, _) -> assert false
    in
    let rty =
      if is_async then
        MakeType.async_generator (Reason.Ryield_asyncgen p) key value send
      else
        MakeType.generator (Reason.Ryield_gen p) key value send
    in
    let Typing_env_return_info.{ return_type = expected_return; _ } =
      Env.get_return env
    in
    let env =
      Typing_coercion.coerce_type
        p
        Reason.URyield
        env
        rty
        expected_return
        Errors.unify_error
    in
    let env = Env.forget_members env Reason.(Blame (p, BScall)) in
    let env = LEnv.save_and_merge_next_in_cont env C.Exit in
    make_result
      env
      p
      (Aast.Yield taf)
      (MakeType.nullable_locl (Reason.Ryield_send p) send)
  | Await e ->
    let env = might_throw env in
    (* Await is permitted in a using clause e.g. using (await make_handle()) *)
    let (env, te, rty) =
      expr
        ~is_using_clause
        ~in_await:(Reason.Rwitness p)
        env
        e
        ~allow_awaitable:true
    in
    let (env, ty) = Async.overload_extract_from_awaitable env ~p rty in
    make_result env p (Aast.Await te) ty
  | ReadonlyExpr e ->
    let env = Env.set_readonly env true in
    let (env, te, rty) = expr ~is_using_clause ~in_readonly_expr:true env e in
    make_result env p (Aast.ReadonlyExpr te) rty
  | New ((_, pos, c), explicit_targs, el, unpacked_element, ()) ->
    let env = might_throw env in
    let ( env,
          tc,
          tal,
          tel,
          typed_unpack_element,
          ty,
          ctor_fty,
          should_forget_fakes ) =
      new_object
        ~expected
        ~is_using_clause
        ~check_parent:false
        ~check_not_abstract:true
        pos
        env
        c
        explicit_targs
        (List.map ~f:(fun e -> (Ast_defs.Pnormal, e)) el)
        unpacked_element
    in
    let env =
      if should_forget_fakes then
        Env.forget_members env Reason.(Blame (p, BScall))
      else
        env
    in
    make_result
      env
      p
      (Aast.New (tc, tal, List.map ~f:snd tel, typed_unpack_element, ctor_fty))
      ty
  | Record ((pos, id), field_values) ->
    (match Decl_provider.get_record_def (Env.get_ctx env) id with
    | Some rd ->
      if rd.rdt_abstract then Errors.new_abstract_record (pos, id);

      let field_name (_, pos, expr_) =
        match expr_ with
        | Aast.String name -> Some (pos, name)
        | _ ->
          (* TODO T44306013: Ensure that other values for field names are banned. *)
          None
      in
      let fields_declared = Typing_helpers.all_record_fields env rd in
      let fields_present =
        List.map field_values ~f:(fun (name, _value) -> field_name name)
        |> List.filter_opt
      in
      (* Check for missing required fields. *)
      let fields_present_names =
        List.map ~f:snd fields_present |> SSet.of_list
      in
      SMap.iter
        (fun field_name info ->
          let ((field_pos, _), req) = info in
          match req with
          | Typing_defs.ValueRequired
            when not (SSet.mem field_name fields_present_names) ->
            Errors.missing_record_field_name
              ~field_name
              ~new_pos:pos
              ~record_name:id
              ~field_decl_pos:field_pos
          | _ -> ())
        fields_declared;

      (* Check for unknown fields.*)
      List.iter fields_present ~f:(fun (pos, field_name) ->
          if not (SMap.mem field_name fields_declared) then
            Errors.unexpected_record_field_name
              ~field_name
              ~field_pos:pos
              ~record_name:id
              ~decl_pos:(fst rd.rdt_name))
    | None -> Errors.type_not_record id pos);

    expr_error env (Reason.Rwitness p) outer
  | Cast (hint, e) ->
    let (env, te, ty2) = expr ?in_await env e in
    let env = might_throw env in
    let env =
      if
        TypecheckerOptions.experimental_feature_enabled
          (Env.get_tcopt env)
          TypecheckerOptions.experimental_forbid_nullable_cast
        && not (TUtils.is_mixed env ty2)
      then
        SubType.sub_type_or_fail
          env
          ty2
          (MakeType.nonnull (get_reason ty2))
          (fun () ->
            Errors.nullable_cast p (Typing_print.error env ty2) (get_pos ty2))
      else
        env
    in
    let (env, ty) =
      Phase.localize_hint_no_subst env ~ignore_errors:false hint
    in
    make_result env p (Aast.Cast (hint, te)) ty
  | ExpressionTree et -> expression_tree env p et
  | Is (e, hint) ->
    let (env, te, _) = expr env e in
    make_result env p (Aast.Is (te, hint)) (MakeType.bool (Reason.Rwitness p))
  | As (e, hint, is_nullable) ->
    let refine_type env lpos lty rty =
      let reason = Reason.Ras lpos in
      let (env, rty) = Env.expand_type env rty in
      refine_and_simplify_intersection env p reason lpos lty rty
    in
    let (env, te, expr_ty) = expr env e in
    let env = might_throw env in
    let (env, hint_ty) =
      Phase.localize_hint_no_subst env ~ignore_errors:false hint
    in
    let enable_sound_dynamic =
      TypecheckerOptions.enable_sound_dynamic env.genv.tcopt
    in
    let (env, hint_ty) =
      if Typing_defs.is_dynamic hint_ty then
        let env =
          if enable_sound_dynamic then
            SubType.sub_type
              ~coerce:(Some Typing_logic.CoerceToDynamic)
              env
              expr_ty
              hint_ty
              (Errors.unify_error_at p)
          else
            env
        in
        let (env, locl) = make_a_local_of ~include_this:true env e in
        let env =
          match locl with
          | Some ivar -> set_local env ivar hint_ty
          | None -> env
        in
        (env, hint_ty)
      else if is_nullable then
        let (_, e_p, _) = e in
        let (env, hint_ty) = refine_type env e_p expr_ty hint_ty in
        (env, MakeType.nullable_locl (Reason.Rwitness p) hint_ty)
      else
        let (env, locl) = make_a_local_of ~include_this:true env e in
        match locl with
        | Some ((ivar_pos, _) as ivar) ->
          let (env, hint_ty) = refine_type env ivar_pos expr_ty hint_ty in
          let env = set_local env ivar hint_ty in
          (env, hint_ty)
        | None ->
          let (_, e_p, _) = e in
          refine_type env e_p expr_ty hint_ty
    in
    make_result env p (Aast.As (te, hint, is_nullable)) hint_ty
  | Upcast (e, hint) ->
    let (env, te, expr_ty) = expr env e in
    let (env, hint_ty) =
      Phase.localize_hint_no_subst env ~ignore_errors:false hint
    in
    let env =
      SubType.sub_type
        ~coerce:(Some Typing_logic.CoerceToDynamic)
        env
        expr_ty
        hint_ty
        (Errors.unify_error_at p)
    in
    make_result env p (Aast.Upcast (te, hint)) hint_ty
  | Efun (f, idl) -> lambda ~is_anon:true ?expected p env f idl
  | Lfun (f, idl) -> lambda ~is_anon:false ?expected p env f idl
  | Xml (sid, attrl, el) ->
    let cid = CI sid in
    let (env, _tal, _te, classes) =
      class_id_for_new ~exact:Nonexact p env cid []
    in
    (* OK to ignore rest of list; class_info only used for errors, and
       * cid = CI sid cannot produce a union of classes anyhow *)
    let class_info =
      List.find_map classes ~f:(function
          | `Dynamic -> None
          | `Class (_, class_info, _) -> Some class_info)
    in
    let (env, te, obj) =
      (* New statements derived from Xml literals are of the following form:
       *
       *   __construct(
       *     darray<string,mixed> $attributes,
       *     varray<mixed> $children,
       *     string $file,
       *     int $line
       *   );
       *)
      let new_exp = Typing_xhp.rewrite_xml_into_new p sid attrl el in
      expr ?expected env new_exp
    in
    let tchildren =
      match te with
      | ( _,
          _,
          New
            ( _,
              _,
              [
                _;
                (_, _, (Varray (_, children) | ValCollection (Vec, _, children)));
                _;
                _;
              ],
              _,
              _ ) ) ->
        (* Typing_xhp.rewrite_xml_into_new generates an AST node for a `varray[]` literal, which is interpreted as a vec[]  *)
        children
      | _ ->
        (* We end up in this case when the cosntructed new expression does
           not typecheck. *)
        []
    in
    let (env, typed_attrs) = xhp_attribute_exprs env class_info attrl sid obj in
    let txml = Aast.Xml (sid, typed_attrs, tchildren) in
    (match class_info with
    | None -> make_result env p txml (TUtils.terr env (Reason.Runknown_class p))
    | Some _ -> make_result env p txml obj)
  | Shape fdm ->
    let expr_helper ?expected env (k, e) =
      let (env, et, ty) = expr ?expected env e in
      if TypecheckerOptions.pessimise_builtins (Env.get_tcopt env) then
        let (env, ty) = Typing_array_access.pessimised_tup_assign p env ty in
        (env, (k, et, ty))
      else
        (env, (k, et, ty))
    in
    let (env, tfdm) =
      match expand_expected_and_get_node env expected with
      | (env, Some (pos, ur, _, Tshape (_, expected_fdm))) ->
        List.map_env
          env
          ~f:(fun env ((k, _) as ke) ->
            let tk = TShapeField.of_ast Pos_or_decl.of_raw_pos k in
            match TShapeMap.find_opt tk expected_fdm with
            | None -> expr_helper env ke
            | Some sft ->
              let (env, ty) =
                Typing_array_access.maybe_pessimise_type env sft.sft_ty
              in
              expr_helper ~expected:(ExpectedTy.make pos ur ty) env ke)
          fdm
      | _ -> List.map_env env ~f:expr_helper fdm
    in
    let fdm =
      List.fold_left
        ~f:(fun acc (k, _, ty) ->
          let tk = TShapeField.of_ast Pos_or_decl.of_raw_pos k in
          TShapeMap.add tk { sft_optional = false; sft_ty = ty } acc)
        ~init:TShapeMap.empty
        tfdm
    in
    let env =
      Typing_shapes.check_shape_keys_validity env (List.map tfdm ~f:fst3)
    in
    (* Fields are fully known, because this shape is constructed
     * using shape keyword and we know exactly what fields are set. *)
    make_result
      env
      p
      (Aast.Shape (List.map ~f:(fun (k, te, _) -> (k, te)) tfdm))
      (mk (Reason.Rwitness p, Tshape (Closed_shape, fdm)))
  | ET_Splice e ->
    Typing_env.with_in_expr_tree env false (fun env -> et_splice env p e)
  | EnumClassLabel (None, s) ->
    let (env, expect_label, lty_opt) =
      match expected with
      | Some ety ->
        let (env, lty) = Env.expand_type env ety.ExpectedTy.ty.et_type in
        let expect_label =
          match get_node lty with
          | Tnewtype (name, _, _) ->
            String.equal SN.Classes.cEnumClassLabel name
          | _ -> false
        in
        (env, expect_label, Some lty)
      | None -> (env, false, None)
    in
    let () =
      if expect_label then
        Errors.enum_class_label_as_expr p
      else
        let reason =
          match lty_opt with
          | Some lty ->
            let r = get_reason lty in
            let expect_str = Typing_print.error env lty in
            Reason.to_string (Format.sprintf "Expected %s" expect_str) r
            @ [
                ( Pos_or_decl.of_raw_pos p,
                  Format.sprintf "But got an enum class label: `#%s`" s );
              ]
          | None ->
            [
              ( Pos_or_decl.of_raw_pos p,
                Format.sprintf "Unexpected enum class label: `#%s`" s );
            ]
        in
        Errors.unify_error (p, "Enum class label/member mismatch") reason
    in
    make_result
      env
      p
      (Aast.EnumClassLabel (None, s))
      (mk (Reason.Rwitness p, Terr))
  | EnumClassLabel ((Some (pos, cname) as e), name) ->
    let (env, res) =
      EnumClassLabelOps.expand
        pos
        env
        ~full:true
        ~ctor:SN.Classes.cEnumClassLabel
        cname
        name
    in
    let error () =
      make_result
        env
        p
        (Aast.EnumClassLabel (e, name))
        (mk (Reason.Rwitness p, Terr))
    in
    (match res with
    | EnumClassLabelOps.Success ((_, _, texpr), lty) ->
      make_result env p texpr lty
    | EnumClassLabelOps.ClassNotFound ->
      (* Error registered in nast_check/unbound_name_check *)
      error ()
    | EnumClassLabelOps.LabelNotFound _ ->
      (* Error registered in EnumClassLabelOps.expand *)
      error ()
    | EnumClassLabelOps.Invalid
    | EnumClassLabelOps.Skip ->
      Errors.enum_class_label_as_expr p;
      error ())

and class_const ?(incl_tc = false) env p (cid, mid) =
  let (env, _tal, ce, cty) = class_expr env [] cid in
  let env =
    match get_node cty with
    | Tclass ((_, n), _, _)
      when Env.is_enum_class env n && String.(SN.Members.mClass <> snd mid) ->
      Typing_local_ops.enforce_enum_class_variant p env
    | _ -> env
  in
  let (env, (const_ty, _tal)) =
    class_get
      ~is_method:false
      ~is_const:true
      ~incl_tc
      ~coerce_from_ty:None
      env
      cty
      mid
      cid
  in
  make_result env p (Aast.Class_const (ce, mid)) const_ty

and get_callable_variadicity ~pos env variadicity_decl_ty = function
  | FVvariadicArg vparam ->
    let (env, ty) =
      Typing_param.make_param_local_ty env variadicity_decl_ty vparam
    in
    let (env, t_variadic) = bind_param env (ty, vparam) in
    (env, Aast.FVvariadicArg t_variadic)
  | FVellipsis p ->
    Errors.ellipsis_strict_mode ~require:`Type_and_param_name pos;
    (env, Aast.FVellipsis p)
  | FVnonVariadic -> (env, Aast.FVnonVariadic)

and function_dynamically_callable
    env f params_decl_ty variadicity_decl_ty ret_locl_ty =
  let env = { env with in_support_dynamic_type_method_check = true } in
  let interface_check =
    Typing_dynamic.sound_dynamic_interface_check
      env
      (variadicity_decl_ty :: params_decl_ty)
      ret_locl_ty
  in
  let function_body_check () =
    (* Here the body of the function is typechecked again to ensure it is safe
     * to call it from a dynamic context (eg. under dyn..dyn->dyn assumptions).
     * The code below must be kept in sync with with the fun_def checks.
     *)
    let make_dynamic pos =
      Typing_make_type.dynamic (Reason.Rsupport_dynamic_type pos)
    in
    let dynamic_return_ty = make_dynamic (get_pos ret_locl_ty) in
    let dynamic_return_info =
      Typing_env_return_info.
        {
          return_type = MakeType.unenforced dynamic_return_ty;
          return_disposable = false;
          return_explicit = true;
          return_dynamically_callable = true;
        }
    in
    let (env, param_tys) =
      List.zip_exn f.f_params params_decl_ty
      |> List.map_env env ~f:(fun env (param, hint) ->
             let dyn_ty =
               make_dynamic @@ Pos_or_decl.of_raw_pos param.param_pos
             in
             let ty =
               match hint with
               | Some ty when Typing_enforceability.is_enforceable env ty ->
                 Typing_make_type.intersection
                   (Reason.Rsupport_dynamic_type Pos_or_decl.none)
                   [ty; dyn_ty]
               | _ -> dyn_ty
             in
             Typing_param.make_param_local_ty env (Some ty) param)
    in
    let params_need_immutable = Typing_coeffects.get_ctx_vars f.f_ctxs in
    let (env, _) =
      (* In this pass, bind_param_and_check receives a pair where the lhs is
       * either Tdynamic or TInstersection of the original type and TDynamic,
       * but the fun_param is still referencing the source hint. We amend
       * the source hint to keep in in sync before calling bind_param
       * so the right enforcement is computed.
       *)
      let bind_param_and_check env lty_and_param =
        let (ty, param) = lty_and_param in
        let name = param.param_name in
        let (hi, hopt) = param.param_type_hint in
        let hopt =
          Option.map hopt ~f:(fun (p, h) ->
              if Typing_utils.is_tintersection env ty then
                (p, Hintersection [(p, h); (p, Hdynamic)])
              else
                (p, Hdynamic))
        in
        let param_type_hint = (hi, hopt) in
        let param = (ty, { param with param_type_hint }) in
        let immutable =
          List.exists ~f:(String.equal name) params_need_immutable
        in
        let (env, fun_param) = bind_param ~immutable env param in
        (env, fun_param)
      in
      List.map_env
        env
        (List.zip_exn param_tys f.f_params)
        ~f:bind_param_and_check
    in

    let pos = fst f.f_name in
    let (env, t_variadic) =
      get_callable_variadicity
        ~pos
        env
        (Some (make_dynamic @@ Pos_or_decl.of_raw_pos pos))
        f.f_variadic
    in
    let env =
      set_tyvars_variance_in_callable env dynamic_return_ty param_tys t_variadic
    in
    let disable =
      Naming_attributes.mem
        SN.UserAttributes.uaDisableTypecheckerInternal
        f.f_user_attributes
    in

    Errors.try_
      (fun () ->
        let (_ : env * Tast.stmt list) =
          fun_ ~disable env dynamic_return_info pos f.f_body f.f_fun_kind
        in
        ())
      (fun error ->
        Errors.function_is_not_dynamically_callable pos (snd f.f_name) error)
  in
  if not interface_check then function_body_check ()

and lambda ~is_anon ?expected p env f idl =
  (* This is the function type as declared on the lambda itself.
   * If type hints are absent then use Tany instead. *)
  let declared_fe = Decl_nast.lambda_decl_in_env env.decl_env f in
  let { fe_type; fe_pos; _ } = declared_fe in
  let (declared_pos, declared_ft) =
    match get_node fe_type with
    | Tfun ft -> (fe_pos, ft)
    | _ -> failwith "Not a function"
  in
  let declared_decl_ft =
    Typing_enforceability.compute_enforced_and_pessimize_fun_type
      env
      declared_ft
  in
  (* When creating a closure, the 'this' type will mean the late bound type
   * of the current enclosing class
   *)
  let ety_env =
    empty_expand_env_with_on_error
      (Env.invalid_type_hint_assert_primary_pos_in_current_decl env)
  in
  let (env, declared_ft) =
    Phase.(
      localize_ft
        ~instantiation:{ use_name = "lambda"; use_pos = p; explicit_targs = [] }
        ~ety_env
        ~def_pos:declared_pos
        env
        declared_decl_ft)
  in
  List.iter idl ~f:(check_escaping_var env);

  (* Ensure lambda arity is not ellipsis in strict mode *)
  begin
    match declared_ft.ft_arity with
    | Fvariadic { fp_name = None; _ } ->
      Errors.ellipsis_strict_mode ~require:`Param_name p
    | _ -> ()
  end;

  (* Is the return type declared? *)
  let is_explicit_ret = Option.is_some (hint_of_type_hint f.f_ret) in
  let check_body_under_known_params env ?ret_ty ft : env * _ * locl_ty =
    let (env, (tefun, ty, ft)) =
      closure_make ?ret_ty env p declared_decl_ft f ft idl is_anon
    in
    let inferred_ty =
      mk
        ( Reason.Rwitness p,
          Tfun
            {
              ft with
              ft_ret =
                (if is_explicit_ret then
                  declared_ft.ft_ret
                else
                  MakeType.unenforced ty);
            } )
    in
    (env, tefun, inferred_ty)
  in
  let (env, eexpected) = expand_expected_and_get_node env expected in
  match eexpected with
  | Some (_pos, _ur, tdyn, Tdynamic)
    when env.in_support_dynamic_type_method_check ->
    let make_dynamic { et_type; et_enforced } =
      let et_type =
        match (get_node et_type, et_enforced) with
        | (Tany _, _) (* lambda param without type hint *)
        | (_, Unenforced) ->
          tdyn
        | (_, Enforced) ->
          MakeType.intersection
            (Reason.Rsupport_dynamic_type (get_pos tdyn))
            [tdyn; et_type]
      in
      { et_type; et_enforced }
    in
    let ft_params =
      List.map declared_ft.ft_params ~f:(function param ->
          { param with fp_type = make_dynamic param.fp_type })
    in
    check_body_under_known_params
      env
      ~ret_ty:tdyn
      { declared_ft with ft_params }
  | Some (_pos, _ur, ty, Tfun expected_ft) ->
    (* First check that arities match up *)
    check_lambda_arity p (get_pos ty) declared_ft expected_ft;
    (* Use declared types for parameters in preference to those determined
     * by the context (expected parameters): they might be more general. *)
    let rec replace_non_declared_types declared_ft_params expected_ft_params =
      match (declared_ft_params, expected_ft_params) with
      | ( declared_ft_param :: declared_ft_params,
          expected_ft_param :: expected_ft_params ) ->
        let rest =
          replace_non_declared_types declared_ft_params expected_ft_params
        in
        (* If the type parameter did not have a type hint, it is Tany and
           we use the expected type instead. Otherwise, declared type takes
           precedence. *)
        let resolved_ft_param =
          if TUtils.is_any env declared_ft_param.fp_type.et_type then
            { declared_ft_param with fp_type = expected_ft_param.fp_type }
          else
            declared_ft_param
        in
        resolved_ft_param :: rest
      | (_, []) ->
        (* Morally, this case should match on ([],[]) because we already
           check arity mismatch between declared and expected types. We
           handle it more generally here to be graceful. *)
        declared_ft_params
      | ([], _) ->
        (* This means the expected_ft params list can have more parameters
         * than declared parameters in the lambda. For variadics, this is OK.
         *)
        expected_ft_params
    in
    let replace_non_declared_arity variadic declared_arity expected_arity =
      match variadic with
      | FVvariadicArg { param_type_hint = (_, Some _); _ } -> declared_arity
      | FVvariadicArg _ ->
        begin
          match (declared_arity, expected_arity) with
          | (Fvariadic declared, Fvariadic expected) ->
            Fvariadic { declared with fp_type = expected.fp_type }
          | (_, _) -> declared_arity
        end
      | _ -> declared_arity
    in
    let expected_ft =
      {
        expected_ft with
        ft_arity =
          replace_non_declared_arity
            f.f_variadic
            declared_ft.ft_arity
            expected_ft.ft_arity;
        ft_params =
          replace_non_declared_types declared_ft.ft_params expected_ft.ft_params;
        ft_implicit_params = declared_ft.ft_implicit_params;
        ft_flags = declared_ft.ft_flags;
      }
    in
    (* Don't bother passing in `void` if there is no explicit return *)
    let ret_ty =
      match get_node expected_ft.ft_ret.et_type with
      | Tprim Tvoid when not is_explicit_ret -> None
      | _ -> Some expected_ft.ft_ret.et_type
    in
    Typing_log.increment_feature_count env FL.Lambda.contextual_params;
    check_body_under_known_params env ?ret_ty expected_ft
  | _ ->
    let explicit_variadic_param_or_non_variadic =
      match f.f_variadic with
      | FVvariadicArg { param_type_hint; _ } ->
        Option.is_some (hint_of_type_hint param_type_hint)
      | FVellipsis _ -> false
      | _ -> true
    in
    (* If all parameters are annotated with explicit types, then type-check
     * the body under those assumptions and pick up the result type *)
    let all_explicit_params =
      List.for_all f.f_params ~f:(fun param ->
          Option.is_some (hint_of_type_hint param.param_type_hint))
    in
    if all_explicit_params && explicit_variadic_param_or_non_variadic then (
      Typing_log.increment_feature_count
        env
        (if List.is_empty f.f_params then
          FL.Lambda.no_params
        else
          FL.Lambda.explicit_params);
      check_body_under_known_params env declared_ft
    ) else (
      match expected with
      | Some ExpectedTy.{ ty = { et_type; _ }; _ } when is_any et_type ->
        (* If the expected type is Tany env then we're passing a lambda to
         * an untyped function and we just assume every parameter has type
         * Tany.
         * Note: we should be using 'nothing' to type the arguments. *)
        Typing_log.increment_feature_count env FL.Lambda.untyped_context;
        check_body_under_known_params env declared_ft
      | Some ExpectedTy.{ ty = { et_type; _ }; _ }
        when TUtils.is_mixed env et_type || is_dynamic et_type ->
        (* If the expected type of a lambda is mixed or dynamic, we
         * decompose the expected type into a function type where the
         * undeclared parameters and the return type are set to the expected
         * type of lambda, i.e., mixed or dynamic.
         *
         * For an expected mixed type, one could argue that the lambda
         * doesn't even need to be checked as it can't be called (there is
         * no downcast to function type). Thus, we should be using nothing
         * to type the arguments. But generally users are very confused by
         * the use of nothing and would expect the lambda body to be
         * checked as though it could be called.
         *)
        let replace_non_declared_type declared_ft_param =
          let is_undeclared =
            TUtils.is_any env declared_ft_param.fp_type.et_type
          in
          if is_undeclared then
            let enforced_ty = { et_enforced = Unenforced; et_type } in
            { declared_ft_param with fp_type = enforced_ty }
          else
            declared_ft_param
        in
        let expected_ft =
          let ft_params =
            List.map ~f:replace_non_declared_type declared_ft.ft_params
          in
          { declared_ft with ft_params }
        in
        let ret_ty = et_type in
        check_body_under_known_params env ~ret_ty expected_ft
      | Some _ ->
        (* If the expected type is something concrete but not a function
         * then we should reject in strict mode. Check body anyway.
         * Note: we should be using 'nothing' to type the arguments. *)
        Errors.untyped_lambda_strict_mode p;
        Typing_log.increment_feature_count
          env
          FL.Lambda.non_function_typed_context;
        check_body_under_known_params env declared_ft
      | None ->
        Typing_log.increment_feature_count env FL.Lambda.fresh_tyvar_params;

        (* Replace uses of Tany that originated from "untyped" parameters or return type
         * with fresh type variables *)
        let freshen_ftype env ft =
          let freshen_ty env pos et =
            match get_node et.et_type with
            | Tany _ ->
              let (env, ty) = Env.fresh_type env pos in
              (env, { et with et_type = ty })
            | Tclass (id, e, [ty])
              when String.equal (snd id) SN.Classes.cAwaitable && is_any ty ->
              let (env, t) = Env.fresh_type env pos in
              ( env,
                {
                  et with
                  et_type = mk (get_reason et.et_type, Tclass (id, e, [t]));
                } )
            | _ -> (env, et)
          in
          let freshen_untyped_param env ft_param =
            let (env, fp_type) =
              freshen_ty
                env
                (Pos_or_decl.unsafe_to_raw_pos ft_param.fp_pos)
                ft_param.fp_type
            in
            (env, { ft_param with fp_type })
          in
          let (env, ft_params) =
            List.map_env env ft.ft_params ~f:freshen_untyped_param
          in
          let (env, ft_ret) = freshen_ty env f.f_span ft.ft_ret in
          (env, { ft with ft_params; ft_ret })
        in
        let (env, declared_ft) = freshen_ftype env declared_ft in
        let env =
          Env.set_tyvar_variance env (mk (Reason.Rnone, Tfun declared_ft))
        in
        (* TODO(jjwu): the declared_ft here is set to public,
           but is actually inferred from the surrounding context
           (don't think this matters in practice, since we check lambdas separately) *)
        check_body_under_known_params
          env
          ~ret_ty:declared_ft.ft_ret.et_type
          declared_ft
    )

(**
 * Process a spread operator by computing the intersection of XHP attributes
 * between the spread expression and the XHP constructor onto which we're
 * spreading.
 *)
and xhp_spread_attribute env c_onto valexpr sid obj =
  let (_, p, _) = valexpr in
  let (env, te, valty) = expr env valexpr ~allow_awaitable:(*?*) false in
  let (env, attr_ptys) =
    match c_onto with
    | None -> (env, [])
    | Some class_info -> Typing_xhp.get_spread_attributes env p class_info valty
  in
  let (env, has_err) =
    List.fold_left
      attr_ptys
      ~f:(fun (env, has_err) attr ->
        let (env, _, err_opt) = xhp_attribute_decl_ty env sid obj attr in
        (env, has_err || Option.is_some err_opt))
      ~init:(env, false)
  in
  (* If we have a subtyping error for any attribute, the best we can do here
     is give an expected type of dynamic *)
  let err_opt =
    if has_err then
      Some (valty, MakeType.nothing Reason.Rnone)
    else
      None
  in
  (* Build the typed attribute node *)
  let typed_attr = Aast.Xhp_spread (hole_on_err ~err_opt te) in
  (env, typed_attr)

(**
 * Simple XHP attributes (attr={expr} form) are simply interpreted as a member
 * variable prefixed with a colon.
 *)
and xhp_simple_attribute env id valexpr sid obj =
  let (_, p, _) = valexpr in
  let (env, te, valty) = expr env valexpr ~allow_awaitable:(*?*) false in
  (* This converts the attribute name to a member name. *)
  let name = ":" ^ snd id in
  let attr_pty = ((fst id, name), (p, valty)) in
  let (env, decl_ty, err_opt) = xhp_attribute_decl_ty env sid obj attr_pty in
  let typed_attr =
    Aast.Xhp_simple
      { xs_name = id; xs_type = decl_ty; xs_expr = hole_on_err ~err_opt te }
  in
  (env, typed_attr)

(**
 * Typecheck the attribute expressions - this just checks that the expressions are
 * valid, not that they match the declared type for the attribute and,
 * in case of spreads, makes sure they are XHP.
 *)
and xhp_attribute_exprs env cls_decl attrl sid obj =
  let handle_attr (env, typed_attrl) attr =
    let (env, typed_attr) =
      match attr with
      | Xhp_simple { xs_name = id; xs_expr = valexpr; _ } ->
        xhp_simple_attribute env id valexpr sid obj
      | Xhp_spread valexpr -> xhp_spread_attribute env cls_decl valexpr sid obj
    in
    (env, typed_attr :: typed_attrl)
  in
  let (env, typed_attrl) =
    List.fold_left ~f:handle_attr ~init:(env, []) attrl
  in
  (env, List.rev typed_attrl)

(*****************************************************************************)
(* Anonymous functions & lambdas. *)
(*****************************************************************************)
and closure_bind_param params (env, t_params) ty : env * Tast.fun_param list =
  match !params with
  | [] ->
    (* This code cannot be executed normally, because the arity is wrong
     * and it will error later. Bind as many parameters as we can and carry
     * on. *)
    (env, t_params)
  | param :: paraml ->
    params := paraml;
    (match hint_of_type_hint param.param_type_hint with
    | Some h ->
      let (pos, _) = h in
      (* When creating a closure, the 'this' type will mean the
       * late bound type of the current enclosing class
       *)
      let (env, h) = Phase.localize_hint_no_subst env ~ignore_errors:false h in
      let env =
        Typing_coercion.coerce_type
          pos
          Reason.URparam
          env
          ty
          (MakeType.unenforced h)
          Errors.unify_error
      in
      (* Closures are allowed to have explicit type-hints. When
       * that is the case we should check that the argument passed
       * is compatible with the type-hint.
       * The body of the function should be type-checked with the
       * hint and not the type of the argument passed.
       * Otherwise it leads to strange results where
       * foo(?string $x = null) is called with a string and fails to
       * type-check. If $x is a string instead of ?string, null is not
       * subtype of string ...
       *)
      let (env, t_param) = bind_param env (h, param) in
      (env, t_params @ [t_param])
    | None ->
      let ty =
        mk (Reason.Rlambda_param (param.param_pos, get_reason ty), get_node ty)
      in
      let (env, t_param) = bind_param env (ty, param) in
      (env, t_params @ [t_param]))

and closure_bind_variadic env vparam variadic_ty =
  let (env, ty, pos) =
    match hint_of_type_hint vparam.param_type_hint with
    | None ->
      (* if the hint is missing, use the type we expect *)
      (env, variadic_ty, get_pos variadic_ty)
    | Some hint ->
      let pos = fst hint in
      let (env, h) =
        Phase.localize_hint_no_subst env ~ignore_errors:false hint
      in
      let env =
        Typing_coercion.coerce_type
          pos
          Reason.URparam
          env
          variadic_ty
          (MakeType.unenforced h)
          Errors.unify_error
      in
      (env, h, Pos_or_decl.of_raw_pos vparam.param_pos)
  in
  let r = Reason.Rvar_param_from_decl pos in
  let arr_values = mk (r, get_node ty) in
  let ty = MakeType.varray r arr_values in
  let (env, t_variadic) = bind_param env (ty, vparam) in
  (env, t_variadic)

and closure_bind_opt_param env param : env =
  match param.param_expr with
  | None ->
    let ty = Typing_utils.mk_tany env param.param_pos in
    let (env, _) = bind_param env (ty, param) in
    env
  | Some default ->
    let (env, _te, ty) = expr env default ~allow_awaitable:(*?*) false in
    Typing_sequencing.sequence_check_expr default;
    let (env, _) = bind_param env (ty, param) in
    env

(* Make a type-checking function for an anonymous function or lambda. *)
(* Here ret_ty should include Awaitable wrapper *)
(* TODO: ?el is never set; so we need to fix variadic use of lambda *)
and closure_make
    ?el ?ret_ty ?(check_escapes = true) env lambda_pos decl_ft f ft idl is_anon
    =
  let type_closure f =
    (* Wrap the function f so that it can freely clobber function-specific
       parts of the environment; the clobbered parts are restored before
       returning the result. Additionally, we also prevent type parameters
       created in the closure from unsoundly leaking into the environment
       of the enclosing function. *)
    let snap = Typing_escape.snapshot_env env in
    let (env, (escaping, (te, hret, ft))) =
      Env.closure env (fun env ->
          stash_conts_for_closure env lambda_pos is_anon idl (fun env ->
              let (env, res) = f env in
              let escaping = Typing_escape.escaping_from_snapshot snap env in
              (env, (escaping, res))))
    in
    (* After the body of the function is checked, erase all the type parameters
       created from the env and the return type. *)
    let (env, hret) =
      if check_escapes then
        Typing_escape.refresh_env_and_type
          ~remove:escaping
          ~pos:lambda_pos
          env
          hret
      else
        (env, hret)
    in
    (env, (te, hret, ft))
  in
  type_closure @@ fun env ->
  let nb = f.f_body in
  (* Extract capabilities from AAST and add them to the environment *)
  let (env, capability) =
    match (f.f_ctxs, f.f_unsafe_ctxs) with
    | (None, None) ->
      (* if the closure has no explicit coeffect annotations,
         do _not_ insert (unsafe) capabilities into the environment;
         instead, rely on the fact that a capability from an enclosing
         scope can simply be captured, which has the same semantics
         as redeclaring and shadowing with another same-typed capability.
         This avoid unnecessary overhead in the most common case, i.e.,
         when a closure does not need a different (usually smaller)
         set of capabilities. *)
      (env, Env.get_local env Typing_coeffects.local_capability_id)
    | (_, _) ->
      let (env, cap_ty, unsafe_cap_ty) =
        Typing_coeffects.type_capability
          env
          f.f_ctxs
          f.f_unsafe_ctxs
          (fst f.f_name)
      in
      let (env, _) =
        Typing_coeffects.register_capabilities env cap_ty unsafe_cap_ty
      in
      (env, cap_ty)
  in
  let ft = { ft with ft_implicit_params = { capability = CapTy capability } } in
  let env = Env.clear_params env in
  let make_variadic_arg env varg tyl =
    let remaining_types =
      (* It's possible the variadic arg will capture the variadic
       * parameter of the supplied arity (if arity is Fvariadic)
       * and additional supplied params.
       *
       * For example in cases such as:
       *  lambda1 = (int $a, string...$c) ==> {};
       *  lambda1(1, "hello", ...$y); (where $y is a variadic string)
       *  lambda1(1, "hello", "world");
       * then ...$c will contain "hello" and everything in $y in the first
       * example, and "hello" and "world" in the second example.
       *
       * To account for a mismatch in arity, we take the remaining supplied
       * parameters and return a list of all their types. We'll use this
       * to create a union type when creating the typed variadic arg.
       *)
      let remaining_params = List.drop ft.ft_params (List.length f.f_params) in
      List.map ~f:(fun param -> param.fp_type.et_type) remaining_params
    in
    let r = Reason.Rvar_param varg.param_pos in
    let union = Tunion (tyl @ remaining_types) in
    let (env, t_param) = closure_bind_variadic env varg (mk (r, union)) in
    (env, Aast.FVvariadicArg t_param)
  in
  let (env, t_variadic) =
    match (f.f_variadic, ft.ft_arity) with
    | (FVvariadicArg arg, Fvariadic variadic) ->
      make_variadic_arg env arg [variadic.fp_type.et_type]
    | (FVvariadicArg arg, Fstandard) -> make_variadic_arg env arg []
    | (FVellipsis pos, _) -> (env, Aast.FVellipsis pos)
    | (_, _) -> (env, Aast.FVnonVariadic)
  in
  let params = ref f.f_params in
  let (env, t_params) =
    List.fold_left
      ~f:(closure_bind_param params)
      ~init:(env, [])
      (List.map ft.ft_params ~f:(fun x -> x.fp_type.et_type))
  in
  (* Check attributes on the lambda *)
  let (env, user_attributes) =
    attributes_check_def env SN.AttributeKinds.lambda f.f_user_attributes
  in
  let support_dynamic_type =
    Naming_attributes.mem SN.UserAttributes.uaSupportDynamicType user_attributes
    || Env.get_support_dynamic_type env
  in
  let env = List.fold_left ~f:closure_bind_opt_param ~init:env !params in
  let env = List.fold_left ~f:closure_check_param ~init:env f.f_params in
  let env =
    match el with
    | None ->
      (*iter2_shortest
              Unify.unify_param_modes
              ft.ft_params
              supplied_params; *)
      env
    | Some x ->
      let var_param =
        match f.f_variadic with
        | FVellipsis pos ->
          let param =
            TUtils.default_fun_param
              ~pos:(Pos_or_decl.of_raw_pos pos)
              (mk (Reason.Rvar_param pos, Typing_defs.make_tany ()))
          in
          Some param
        | _ -> None
      in
      let rec iter l1 l2 =
        match (l1, l2, var_param) with
        | (_, [], _) -> ()
        | ([], _, None) -> ()
        | ([], (pkx_2, x2) :: rl2, Some def1) ->
          param_modes ~is_variadic:true def1 x2 pkx_2;
          iter [] rl2
        | (x1 :: rl1, (pkx_2, x2) :: rl2, _) ->
          param_modes x1 x2 pkx_2;
          iter rl1 rl2
      in
      iter ft.ft_params x;
      wfold_left2 inout_write_back env ft.ft_params x
  in
  let env = Env.set_fn_kind env f.f_fun_kind in
  let decl_ty =
    Option.map ~f:(Decl_hint.hint env.decl_env) (hint_of_type_hint f.f_ret)
  in
  let ret_pos =
    match snd f.f_ret with
    | Some (ret_pos, _) -> ret_pos
    | None -> lambda_pos
  in
  let (env, hret) =
    match decl_ty with
    | None ->
      (* Do we have a contextual return type? *)
      begin
        match ret_ty with
        | None -> Typing_return.make_fresh_return_type env ret_pos
        | Some ret_ty -> (env, ret_ty)
      end
    | Some ret ->
      (* If a 'this' type appears it needs to be compatible with the
       * late static type
       *)
      let ety_env =
        empty_expand_env_with_on_error
          (Env.invalid_type_hint_assert_primary_pos_in_current_decl env)
      in
      Typing_return.make_return_type (Phase.localize ~ety_env) env ret
  in
  let (env, hret) =
    Typing_return.force_return_kind ~is_toplevel:false env ret_pos hret
  in
  let ft =
    {
      ft with
      ft_ret = { ft.ft_ret with et_type = hret };
      ft_flags =
        Typing_defs_flags.set_bit
          Typing_defs_flags.ft_flags_support_dynamic_type
          support_dynamic_type
          ft.ft_flags;
    }
  in
  let env =
    Env.set_return
      env
      (Typing_return.make_info
         ret_pos
         f.f_fun_kind
         []
         env
         ~is_explicit:(Option.is_some ret_ty)
         hret
         decl_ty)
  in
  let local_tpenv = Env.get_tpenv env in
  (* Outer pipe variables aren't available in closures. Note that
   * locals are restored by Env.closure after processing the closure
   *)
  let env =
    Env.unset_local env (Local_id.make_unscoped SN.SpecialIdents.dollardollar)
  in
  let (env, tb) = block env nb.fb_ast in
  let has_implicit_return = LEnv.has_next env in
  let env =
    if not has_implicit_return then
      env
    else
      Typing_return.fun_implicit_return env lambda_pos hret f.f_fun_kind
  in
  let has_readonly = Env.get_readonly env in
  let env =
    Typing_env.set_fun_tast_info env Tast.{ has_implicit_return; has_readonly }
  in
  let (env, tparams) = List.map_env env f.f_tparams ~f:type_param in
  let sound_dynamic_check_saved_env = env in
  let params_decl_ty =
    List.map decl_ft.ft_params ~f:(fun { fp_type = { et_type; _ }; _ } ->
        match get_node et_type with
        | Tany _ -> None
        | _ -> Some et_type)
  in
  let variadicity_decl_ty =
    match decl_ft.ft_arity with
    | Fvariadic { fp_type = { et_type; _ }; _ } ->
      begin
        match get_node et_type with
        | Tany _ -> None
        | _ -> Some et_type
      end
    | _ -> None
  in
  if
    TypecheckerOptions.enable_sound_dynamic
      (Provider_context.get_tcopt (Env.get_ctx env))
    && support_dynamic_type
  then
    function_dynamically_callable
      sound_dynamic_check_saved_env
      f
      params_decl_ty
      variadicity_decl_ty
      hret;
  let tfun_ =
    {
      Aast.f_annotation = Env.save local_tpenv env;
      Aast.f_readonly_this = f.f_readonly_this;
      Aast.f_span = f.f_span;
      Aast.f_ret = (hret, hint_of_type_hint f.f_ret);
      Aast.f_readonly_ret = f.f_readonly_ret;
      Aast.f_name = f.f_name;
      Aast.f_tparams = tparams;
      Aast.f_where_constraints = f.f_where_constraints;
      Aast.f_fun_kind = f.f_fun_kind;
      Aast.f_user_attributes = user_attributes;
      Aast.f_body = { Aast.fb_ast = tb };
      Aast.f_ctxs = f.f_ctxs;
      Aast.f_unsafe_ctxs = f.f_unsafe_ctxs;
      Aast.f_params = t_params;
      Aast.f_variadic = t_variadic;
      (* TODO TAST: Variadic efuns *)
      Aast.f_external = f.f_external;
      Aast.f_doc_comment = f.f_doc_comment;
    }
  in
  let ty = mk (Reason.Rwitness lambda_pos, Tfun ft) in
  let te =
    Tast.make_typed_expr
      lambda_pos
      ty
      (if is_anon then
        Aast.Efun (tfun_, idl)
      else
        Aast.Lfun (tfun_, idl))
  in
  let env = Env.set_tyvar_variance env ty in
  (env, (te, hret, ft))

(*****************************************************************************)
(* End of anonymous functions & lambdas. *)
(*****************************************************************************)

(*****************************************************************************)
(* Expression trees *)
(*****************************************************************************)
and expression_tree env p et =
  let {
    et_hint;
    et_splices;
    et_function_pointers;
    et_virtualized_expr;
    et_runtime_expr;
    et_dollardollar_pos;
  } =
    et
  in

  (* Slight hack to deal with |> $$ support *)
  let env =
    match et_dollardollar_pos with
    | Some dd_pos ->
      let dollardollar_var =
        Local_id.make_unscoped SN.ExpressionTrees.dollardollarTmpVar
      in
      let dd_var = Local_id.make_unscoped SN.SpecialIdents.dollardollar in
      let dd_defined = Env.is_local_defined env dd_var in
      if not dd_defined then
        let () = Errors.undefined dd_pos SN.SpecialIdents.dollardollar None in
        let nothing_ty = MakeType.nothing Reason.Rnone in
        Env.set_local env dollardollar_var nothing_ty Pos.none
      else
        let (dd_ty, dd_pos) = Env.get_local_pos env dd_var in
        Env.set_local env dollardollar_var dd_ty dd_pos
    | None -> env
  in

  (* Given the expression tree literal:

     MyVisitor`1 + ${ foo() }`

     First, type check the expressions that are spliced in, so foo() in
     this example. *)
  let (env, t_splices) = block env et_splices in

  (* Next, typecheck the function pointer assignments *)
  let (env, _, t_function_pointers) =
    Typing_env.with_in_expr_tree env true (fun env ->
        let (env, t_function_pointers) = block env et_function_pointers in
        (env, (), t_function_pointers))
  in

  (* Type check the virtualized expression, which will look
     roughly like this:

     function() {
       $0splice0 = foo();
       return MyVisitor::intType()->__plus($0splice0);
     }
  *)
  let (env, t_virtualized_expr, ty_virtual) =
    Typing_env.with_in_expr_tree env true (fun env ->
        expr env et_virtualized_expr ~allow_awaitable:false)
  in

  (* Given the runtime expression:

      MyVisitor::makeTree(...)

      add the inferred type as a type parameter:

      MyVisitor::makeTree<MyVisitorInt>(...)

     and then typecheck. *)
  let (env, runtime_expr) =
    maketree_with_type_param env p et_runtime_expr ty_virtual
  in
  let (env, t_runtime_expr, ty_runtime_expr) =
    expr env runtime_expr ~allow_awaitable:false
  in

  make_result
    env
    p
    (Aast.ExpressionTree
       {
         et_hint;
         et_splices = t_splices;
         et_function_pointers = t_function_pointers;
         et_virtualized_expr = t_virtualized_expr;
         et_runtime_expr = t_runtime_expr;
         et_dollardollar_pos;
       })
    ty_runtime_expr

and et_splice env p e =
  let (env, te, ty) = expr env e ~allow_awaitable:(*?*) false in
  let (env, ty_visitor) = Env.fresh_type env p in
  let (env, ty_res) = Env.fresh_type env p in
  let (env, ty_infer) = Env.fresh_type env p in
  let spliceable_type =
    MakeType.spliceable (Reason.Rsplice p) ty_visitor ty_res ty_infer
  in
  let env = SubType.sub_type env ty spliceable_type (Errors.unify_error_at p) in
  make_result env p (Aast.ET_Splice te) ty_infer

(*****************************************************************************)
(* End expression trees *)
(*****************************************************************************)
and new_object
    ~(expected : ExpectedTy.t option)
    ~check_parent
    ~check_not_abstract
    ~is_using_clause
    p
    env
    cid
    explicit_targs
    el
    unpacked_element =
  (* Obtain class info from the cid expression. We get multiple
   * results with a CIexpr that has a union type, e.g. in

      $classname = (mycond()? classname<A>: classname<B>);
      new $classname();
   *)
  let (env, tal, tcid, classes) =
    instantiable_cid ~exact:Exact p env cid explicit_targs
  in
  let allow_abstract_bound_generic =
    match tcid with
    | (ty, _, Aast.CI (_, tn)) -> is_generic_equal_to tn ty
    | _ -> false
  in
  let gather
      (env, _tel, _typed_unpack_element, should_forget_fakes_acc)
      (cname, class_info, c_ty) =
    if
      check_not_abstract
      && Cls.abstract class_info
      && (not (requires_consistent_construct cid))
      && not allow_abstract_bound_generic
    then
      uninstantiable_error
        env
        p
        cid
        (Cls.pos class_info)
        (Cls.name class_info)
        p
        c_ty;
    let (env, obj_ty_, params) =
      let (env, c_ty) = Env.expand_type env c_ty in
      match (cid, tal, get_class_type c_ty) with
      (* Explicit type arguments *)
      | (CI _, _ :: _, Some (_, _, tyl)) -> (env, get_node c_ty, tyl)
      | (_, _, class_type_opt) ->
        let (env, params) =
          List.map_env env (Cls.tparams class_info) ~f:(fun env tparam ->
              let (env, tvar) =
                Env.fresh_type_reason
                  env
                  p
                  (Reason.Rtype_variable_generics
                     (p, snd tparam.tp_name, strip_ns (snd cname)))
              in
              Typing_log.log_new_tvar_for_new_object env p tvar cname tparam;
              (env, tvar))
        in
        begin
          match class_type_opt with
          | Some (_, Exact, _) -> (env, Tclass (cname, Exact, params), params)
          | _ -> (env, Tclass (cname, Nonexact, params), params)
        end
    in
    if
      (not check_parent)
      && (not is_using_clause)
      && Typing_disposable.is_disposable_class env class_info
    then
      Errors.invalid_new_disposable p;
    let r_witness = Reason.Rwitness p in
    let obj_ty = mk (r_witness, obj_ty_) in
    let c_ty =
      match cid with
      | CIstatic
      | CIexpr _ ->
        mk (r_witness, get_node c_ty)
      | _ -> obj_ty
    in
    let (env, new_ty) =
      let (cid_ty, _, _) = tcid in
      let (env, cid_ty) = Env.expand_type env cid_ty in
      if is_generic cid_ty then
        (env, cid_ty)
      else if check_parent then
        (env, c_ty)
      else
        ExprDepTy.make env ~cid c_ty
    in
    (* Set variance according to type of `new` expression now. Lambda arguments
     * to the constructor might depend on it, and `call_construct` only uses
     * `ctor_fty` to set the variance which has void return type *)
    let env = Env.set_tyvar_variance env new_ty in
    let (env, tel, typed_unpack_element, ctor_fty, should_forget_fakes) =
      let env = check_expected_ty "New" env new_ty expected in
      call_construct p env class_info params el unpacked_element cid new_ty
    in
    let should_forget_fakes_acc =
      should_forget_fakes_acc || should_forget_fakes
    in
    (if equal_consistent_kind (snd (Cls.construct class_info)) Inconsistent then
      match cid with
      | CIstatic -> Errors.new_inconsistent_construct p cname `static
      | CIexpr _ -> Errors.new_inconsistent_construct p cname `classname
      | _ -> ());
    match cid with
    | CIparent ->
      let (env, ctor_fty) =
        match fst (Cls.construct class_info) with
        | Some ({ ce_type = (lazy ty); _ } as ce) ->
          let ety_env =
            {
              empty_expand_env with
              substs =
                TUtils.make_locl_subst_for_class_tparams class_info params;
              this_ty = obj_ty;
            }
          in
          if get_ce_abstract ce then
            Errors.parent_abstract_call
              SN.Members.__construct
              p
              (get_pos ctor_fty);
          let (env, ctor_fty) = Phase.localize ~ety_env env ty in
          (env, ctor_fty)
        | None -> (env, ctor_fty)
      in
      ( (env, tel, typed_unpack_element, should_forget_fakes_acc),
        (obj_ty, ctor_fty) )
    | CIstatic
    | CI _
    | CIself ->
      ( (env, tel, typed_unpack_element, should_forget_fakes_acc),
        (c_ty, ctor_fty) )
    | CIexpr _ ->
      (* When constructing from a (classname) variable, the variable
       * dictates what the constructed object is going to be. This allows
       * for generic and dependent types to be correctly carried
       * through the 'new $foo()' iff the constructed obj_ty is a
       * supertype of the variable-dictated c_ty *)
      let env =
        Typing_ops.sub_type p Reason.URnone env c_ty obj_ty Errors.unify_error
      in
      ( (env, tel, typed_unpack_element, should_forget_fakes_acc),
        (c_ty, ctor_fty) )
  in
  let (had_dynamic, classes) =
    List.fold classes ~init:(false, []) ~f:(fun (seen_dynamic, classes) -> function
      | `Dynamic -> (true, classes)
      | `Class (cname, class_info, c_ty) ->
        (seen_dynamic, (cname, class_info, c_ty) :: classes))
  in
  let ( (env, tel, typed_unpack_element, should_forget_fakes),
        class_types_and_ctor_types ) =
    List.fold_map classes ~init:(env, [], None, false) ~f:gather
  in
  let class_types_and_ctor_types =
    let r = Reason.Rdynamic_construct p in
    let dyn = (mk (r, Tdynamic), mk (r, Tdynamic)) in
    if had_dynamic then
      dyn :: class_types_and_ctor_types
    else
      class_types_and_ctor_types
  in
  let (env, tel, typed_unpack_element, ty, ctor_fty) =
    match class_types_and_ctor_types with
    | [] ->
      let (env, tel, _) =
        argument_list_exprs (expr ~allow_awaitable:false) env el
      in
      let (env, typed_unpack_element, _) =
        match unpacked_element with
        | None -> (env, None, MakeType.nothing Reason.Rnone)
        | Some unpacked_element ->
          let (env, e, ty) =
            expr env unpacked_element ~allow_awaitable:(*?*) false
          in
          (env, Some e, ty)
      in
      let r = Reason.Runknown_class p in
      let terr = TUtils.terr env r in
      (env, tel, typed_unpack_element, terr, terr)
    | [(ty, ctor_fty)] -> (env, tel, typed_unpack_element, ty, ctor_fty)
    | l ->
      let (tyl, ctyl) = List.unzip l in
      let r = Reason.Rwitness p in
      (env, tel, typed_unpack_element, mk (r, Tunion tyl), mk (r, Tunion ctyl))
  in
  let (env, new_ty) =
    let (cid_ty, _, _) = tcid in
    let (env, cid_ty) = Env.expand_type env cid_ty in
    if is_generic cid_ty then
      (env, cid_ty)
    else if check_parent then
      (env, ty)
    else
      ExprDepTy.make env ~cid ty
  in
  ( env,
    tcid,
    tal,
    tel,
    typed_unpack_element,
    new_ty,
    ctor_fty,
    should_forget_fakes )

and attributes_check_def env kind attrs =
  let new_object attr_pos env attr_cid params =
    let (env, _, _, _, _, _, _, _) =
      new_object
        ~expected:None
        ~check_parent:false
        ~check_not_abstract:false
        ~is_using_clause:false
        attr_pos
        env
        (Aast.CI (Positioned.unsafe_to_raw_positioned attr_cid))
        []
        (List.map ~f:(fun e -> (Ast_defs.Pnormal, e)) params)
        (* list of attr parameter literals *)
        None
      (* no variadic arguments *)
    in
    env
  in
  let env = Typing_attributes.check_def env new_object kind attrs in
  List.map_env env attrs ~f:user_attribute

(** Get class infos for a class expression (e.g. `parent`, `self` or
    regular classnames) - which might resolve to a union or intersection
    of classes - and check they are instantiable.

    FIXME: we need to separate our instantiability into two parts. Currently,
    all this function is doing is checking if a given type is inhabited --
    that is, whether there are runtime values of type Aast. However,
    instantiability should be the stricter notion that T has a runtime
    constructor; that is, `new T()` should be valid. In particular, interfaces
    are inhabited, but not instantiable.
    To make this work with classname, we likely need to add something like
    concrete_classname<T>, where T cannot be an interface. *)
and instantiable_cid ?(exact = Nonexact) p env cid explicit_targs :
    newable_class_info =
  let (env, tal, te, classes) =
    class_id_for_new ~exact p env cid explicit_targs
  in
  List.iter classes ~f:(function
      | `Dynamic -> ()
      | `Class ((pos, name), class_info, c_ty) ->
        let pos = Pos_or_decl.unsafe_to_raw_pos pos in
        let kind = Cls.kind class_info in
        if
          Ast_defs.is_c_trait kind
          || Ast_defs.is_c_enum kind
          || Ast_defs.is_c_enum_class kind
        then
          match cid with
          | CIexpr _
          | CI _ ->
            uninstantiable_error env p cid (Cls.pos class_info) name pos c_ty
          | CIstatic
          | CIparent
          | CIself ->
            ()
        else if Ast_defs.is_c_abstract kind && Cls.final class_info then
          uninstantiable_error env p cid (Cls.pos class_info) name pos c_ty
        else
          ());
  (env, tal, te, classes)

(* Deal with assignment of a value of type ty2 to lvalue e1 *)
and assign p env e1 pos2 ty2 =
  assign_with_subtype_err_ p Reason.URassign env e1 pos2 ty2

and assign_ p ur env e1 pos2 ty2 =
  let (env, te, ty, _err) = assign_with_subtype_err_ p ur env e1 pos2 ty2 in
  (env, te, ty)

and assign_with_subtype_err_ p ur env (e1 : Nast.expr) pos2 ty2 =
  match e1 with
  | (_, _, Hole (e, _, _, _)) -> assign_with_subtype_err_ p ur env e pos2 ty2
  | _ ->
    let allow_awaitable = (*?*) false in
    let env =
      match e1 with
      | (_, _, Lvar (_, x)) ->
        Env.forget_prefixed_members env x Reason.(Blame (p, BSassignment))
      (* If we ever extend fake members from $x->a to more complicated lvalues
         such as $x->a->b, we would need to call forget_prefixed_members on
         other lvalues as well. *)
      | (_, _, Obj_get (_, (_, _, Id (_, property)), _, _)) ->
        Env.forget_suffixed_members
          env
          property
          Reason.(Blame (p, BSassignment))
      | _ -> env
    in
    (match e1 with
    | (_, _, Lvar ((_, x) as id)) ->
      let env = set_valid_rvalue p env x ty2 in
      let (_, p1, _) = e1 in
      let (env, te, ty) = make_result env p1 (Aast.Lvar id) ty2 in
      (env, te, ty, None)
    | (_, _, Lplaceholder id) ->
      let placeholder_ty = MakeType.void (Reason.Rplaceholder p) in
      let (_, p1, _) = e1 in
      let (env, te, ty) =
        make_result env p1 (Aast.Lplaceholder id) placeholder_ty
      in
      (env, te, ty, None)
    | (_, _, List el) ->
      (* Generate fresh types for each lhs list element, then subtype against
         rhs type *)
      let (env, tyl) =
        List.map_env env el ~f:(fun env (_, p, _e) -> Env.fresh_type env p)
      in
      let (_, p1, _) = e1 in
      let destructure_ty =
        MakeType.list_destructure (Reason.Rdestructure p1) tyl
      in
      let lty2 = LoclType ty2 in
      let assign_accumulate (env, tel, errs) (lvalue : Nast.expr) ty2 =
        let (env, te, _, err_opt) = assign p env lvalue pos2 ty2 in
        (env, te :: tel, err_opt :: errs)
      in
      let type_list_elem env =
        let (env, reversed_tel, rev_subtype_errs) =
          List.fold2_exn el tyl ~init:(env, [], []) ~f:assign_accumulate
        in
        let (_, p1, _) = e1 in
        let (env, te, ty) =
          make_result env p1 (Aast.List (List.rev reversed_tel)) ty2
        in
        (env, te, ty, List.rev rev_subtype_errs)
      in

      (* Here we attempt to unify the type of the rhs we assigning with
         a number of fresh tyvars corresponding to the arity of the lhs `list`

         if we have a failure in subtyping the fresh tyvars in `destructure_ty`,
         we have a rhs which cannot be destructured to the variables on the lhs;
         e.g. `list($x,$y) = 2`  or `list($x,$y) = tuple (1,2,3)`

         in the error case, we add a `Hole` with expected type `nothing` since
         there is no type we can suggest was expected

         in the ok case were the destrucutring succeeded, the fresh vars
         now have types so we can subtype each element, accumulate the errors
         and pack back into the rhs structure as our expected type *)
      Result.fold
        ~ok:(fun env ->
          let (env, te, ty, subty_errs) = type_list_elem env in
          let err_opt =
            if List.for_all subty_errs ~f:Option.is_none then
              None
            else
              Some (ty2, pack_errs pos2 ty2 (subty_errs, None))
          in
          (env, te, ty, err_opt))
        ~error:(fun env ->
          let (env, te, ty, _) = type_list_elem env in
          let nothing =
            MakeType.nothing @@ Reason.Rsolve_fail (Pos_or_decl.of_raw_pos pos2)
          in
          (env, te, ty, Some (ty2, nothing)))
      @@ Result.map ~f:(fun env -> Env.set_tyvar_variance_i env destructure_ty)
      @@ Type.sub_type_i_res p ur env lty2 destructure_ty Errors.unify_error
    | ( _,
        pobj,
        Obj_get
          (obj, (_, pm, Id ((_, member_name) as m)), nullflavor, prop_or_method)
      ) ->
      let lenv = env.lenv in
      let nullsafe =
        match nullflavor with
        | OG_nullthrows -> None
        | OG_nullsafe -> Some (Reason.Rnullsafe_op pobj)
      in
      let (env, tobj, obj_ty) =
        expr ~accept_using_var:true env obj ~allow_awaitable
      in
      let env = might_throw env in
      let (_, p1, _) = obj in
      let (env, (declared_ty, _tal), lval_err_opt, rval_err_opt) =
        TOG.obj_get_with_err
          ~obj_pos:p1
          ~is_method:false
          ~nullsafe
          ~inst_meth:false
          ~meth_caller:false
          ~coerce_from_ty:(Some (p, ur, ty2))
          ~explicit_targs:[]
          ~class_id:(CIexpr e1)
          ~member_id:m
          ~on_error:Errors.unify_error
          env
          obj_ty
      in
      let te1 =
        Tast.make_typed_expr
          pobj
          declared_ty
          (Aast.Obj_get
             ( hole_on_err ~err_opt:lval_err_opt tobj,
               Tast.make_typed_expr pm declared_ty (Aast.Id m),
               nullflavor,
               prop_or_method ))
      in
      let env = { env with lenv } in
      begin
        match obj with
        | (_, _, This)
        | (_, _, Lvar _) ->
          let (env, local) = Env.FakeMembers.make env obj member_name p in
          let (env, refined_ty) =
            Inter.intersect env ~r:(Reason.Rwitness p) declared_ty ty2
          in
          let env = set_valid_rvalue p env local refined_ty in
          (env, te1, ty2, rval_err_opt)
        | _ -> (env, te1, ty2, rval_err_opt)
      end
    | (_, _, Obj_get _) ->
      let lenv = env.lenv in
      let no_fakes = LEnv.env_with_empty_fakes env in
      let (env, te1, real_type) = lvalue no_fakes e1 in
      let (env, exp_real_type) = Env.expand_type env real_type in
      let env = { env with lenv } in
      let (env, err_opt) =
        Result.fold
          ~ok:(fun env -> (env, None))
          ~error:(fun env -> (env, Some (ty2, exp_real_type)))
        @@ Typing_coercion.coerce_type_res
             p
             ur
             env
             ty2
             (MakeType.unenforced exp_real_type)
             Errors.unify_error
      in
      (env, te1, ty2, err_opt)
    | (_, _, Class_get (_, CGexpr _, _)) ->
      failwith "AST should not have any CGexprs after naming"
    | (_, _, Class_get (((_, _, x) as cid), CGstring (pos_member, y), _)) ->
      let lenv = env.lenv in
      let no_fakes = LEnv.env_with_empty_fakes env in
      let (env, te1, _) = lvalue no_fakes e1 in
      let env = { env with lenv } in
      let (env, ety2) = Env.expand_type env ty2 in
      (* This defers the coercion check to class_get, which looks up the appropriate target type *)
      let (env, _tal, _, cty) = class_expr env [] cid in
      let env = might_throw env in
      let (env, (declared_ty, _), rval_err_opt) =
        class_get_err
          ~is_method:false
          ~is_const:false
          ~coerce_from_ty:(Some (p, ur, ety2))
          env
          cty
          (pos_member, y)
          cid
      in
      let (env, local) = Env.FakeMembers.make_static env x y p in
      let (env, refined_ty) =
        Inter.intersect env ~r:(Reason.Rwitness p) declared_ty ty2
      in
      let env = set_valid_rvalue p env local refined_ty in
      (env, te1, ty2, rval_err_opt)
    | (_, pos, Array_get (e1, None)) ->
      let (env, te1, ty1) = update_array_type pos env e1 `lvalue in
      let (_, p1, _) = e1 in
      let (env, ty1', arr_err_opt, val_err_opt) =
        Typing_array_access.assign_array_append_with_err
          ~array_pos:p1
          ~expr_pos:p
          ur
          env
          ty1
          ty2
      in
      let (env, te1) =
        if is_hack_collection env ty1 then
          (env, hole_on_err ~err_opt:arr_err_opt te1)
        else
          let (env, te1, ty, _) =
            assign_with_subtype_err_ p ur env e1 p1 ty1'
          in
          (* Update the actual type to that after assignment *)
          let arr_err_opt =
            Option.map arr_err_opt ~f:(fun (_, ty_expect) -> (ty, ty_expect))
          in
          (env, hole_on_err ~err_opt:arr_err_opt te1)
      in
      let (env, te, ty) =
        make_result env pos (Aast.Array_get (te1, None)) ty2
      in
      (env, te, ty, val_err_opt)
    | (_, pos, Array_get (e1, Some e)) ->
      let (env, te1, ty1) = update_array_type pos env e1 `lvalue in
      let (env, te, ty) = expr env e ~allow_awaitable in
      let env = might_throw env in
      let (_, p1, _) = e1 in
      let (env, ty1', arr_err_opt, key_err_opt, val_err_opt) =
        Typing_array_access.assign_array_get_with_err
          ~array_pos:p1
          ~expr_pos:p
          ur
          env
          ty1
          e
          ty
          ty2
      in
      let (env, te1) =
        if is_hack_collection env ty1 then
          (env, hole_on_err ~err_opt:arr_err_opt te1)
        else
          let (env, te1, ty, _) =
            assign_with_subtype_err_ p ur env e1 p1 ty1'
          in
          (* Update the actual type to that after assignment *)
          let arr_err_opt =
            Option.map arr_err_opt ~f:(fun (_, ty_expect) -> (ty, ty_expect))
          in
          (env, hole_on_err ~err_opt:arr_err_opt te1)
      in
      ( env,
        ( ty2,
          pos,
          Aast.Array_get (te1, Some (hole_on_err ~err_opt:key_err_opt te)) ),
        ty2,
        val_err_opt )
    | _ -> assign_simple p ur env e1 ty2)

and assign_simple pos ur env e1 ty2 =
  let (env, te1, ty1) = lvalue env e1 in
  let (env, err_opt) =
    Result.fold
      ~ok:(fun env -> (env, None))
      ~error:(fun env -> (env, Some (ty2, ty1)))
    @@ Typing_coercion.coerce_type_res
         pos
         ur
         env
         ty2
         (MakeType.unenforced ty1)
         Errors.unify_error
  in
  (env, te1, ty2, err_opt)

and array_field env ~allow_awaitable = function
  | AFvalue ve ->
    let (env, tve, tv) = expr env ve ~allow_awaitable in
    (env, (Aast.AFvalue tve, None, tv))
  | AFkvalue (ke, ve) ->
    let (env, tke, tk) = expr env ke ~allow_awaitable in
    let (env, tve, tv) = expr env ve ~allow_awaitable in
    (env, (Aast.AFkvalue (tke, tve), Some tk, tv))

and array_value ~(expected : ExpectedTy.t option) env x =
  let (env, te, ty) = expr ?expected env x ~allow_awaitable:(*?*) false in
  (env, (te, ty))

and arraykey_value
    ?(add_hole = false)
    p
    class_name
    is_set
    ~(expected : ExpectedTy.t option)
    env
    ((_, pos, _) as x) =
  let (env, (te, ty)) = array_value ~expected env x in
  let (ty_arraykey, reason) =
    if is_set then
      ( MakeType.arraykey (Reason.Rset_element pos),
        Reason.set_element class_name )
    else
      (MakeType.arraykey (Reason.Ridx_dict pos), Reason.index_class class_name)
  in
  let ty_expected = { et_type = ty_arraykey; et_enforced = Enforced } in
  let (env, te) =
    if add_hole then
      (* If we have an error in coercion here, we will add a `Hole` indicating the
           actual and expected type. The `Hole` may then be used in a codemod to
           add a call to `UNSAFE_CAST` so we need to consider what type we expect.

           If we were to add an expected type of 'arraykey' here it would be
           correct but adding an `UNSAFE_CAST<?string,arraykey>($x)` means we
           get cascading errors if we have e.g. a return type of keyset<string>.

           To try and prevent this, if this is an optional type where the nonnull
           part can be coerced to arraykey, we prefer that type as our expected type.
      *)
      let (ok, ty_actual) =
        match deref ty with
        | (_, Toption ty_inner) ->
          ( (fun env ->
              let r =
                Reason.to_string "Expected `arraykey`" (Reason.Ridx_dict pos)
                @ [
                    ( get_pos ty,
                      Format.sprintf
                        "But got `?%s`"
                        (Typing_print.full_strip_ns env ty_inner) );
                  ]
              in
              (* We actually failed so generate the error we should
                 have seen *)
              Errors.unify_error (p, Reason.string_of_ureason reason) r;

              (env, Some (ty, ty_inner))),
            ty_inner )
        | _ -> ((fun env -> (env, None)), ty)
      in
      let (env, err_opt) =
        Result.fold ~ok ~error:(fun env -> (env, Some (ty_actual, ty_arraykey)))
        @@ Typing_coercion.coerce_type_res
             ~coerce_for_op:true
             p
             reason
             env
             ty_actual
             ty_expected
             Errors.unify_error
      in
      (env, hole_on_err ~err_opt te)
    else
      let env =
        Typing_coercion.coerce_type
          ~coerce_for_op:true
          p
          reason
          env
          ty
          ty_expected
          Errors.unify_error
      in
      (env, te)
  in

  (env, (te, ty))

and check_parent_construct pos env el unpacked_element env_parent =
  let check_not_abstract = false in
  let (env, env_parent) =
    Phase.localize_no_subst env ~ignore_errors:true env_parent
  in
  let ( env,
        _tcid,
        _tal,
        tel,
        typed_unpack_element,
        parent,
        fty,
        should_forget_fakes ) =
    new_object
      ~expected:None
      ~check_parent:true
      ~check_not_abstract
      ~is_using_clause:false
      pos
      env
      CIparent
      []
      el
      unpacked_element
  in
  (* Not sure why we need to equate these types *)
  let env =
    Type.sub_type pos Reason.URnone env env_parent parent Errors.unify_error
  in
  let env =
    Type.sub_type pos Reason.URnone env parent env_parent Errors.unify_error
  in
  ( env,
    tel,
    typed_unpack_element,
    MakeType.void (Reason.Rwitness pos),
    parent,
    fty,
    should_forget_fakes )

and call_parent_construct pos env el unpacked_element =
  match Env.get_parent_ty env with
  | Some parent -> check_parent_construct pos env el unpacked_element parent
  | None ->
    (* continue here *)
    let ty = Typing_utils.mk_tany env pos in
    let should_invalidate_fake_members = true in
    let default = (env, [], None, ty, ty, ty, should_invalidate_fake_members) in
    (match Env.get_self_id env with
    | Some self ->
      (match Env.get_class env self with
      | Some trait when Ast_defs.is_c_trait (Cls.kind trait) ->
        (match trait_most_concrete_req_class trait env with
        | None ->
          Errors.parent_in_trait pos;
          default
        | Some (c, parent_ty) ->
          (match Cls.construct c with
          | (_, Inconsistent) ->
            Errors.trait_parent_construct_inconsistent pos (Cls.pos c)
          | _ -> ());
          check_parent_construct pos env el unpacked_element parent_ty)
      | Some _self_tc ->
        Errors.undefined_parent pos;
        default
      | None -> assert false)
    | None ->
      Errors.parent_outside_class pos;
      let ty = err_witness env pos in
      (env, [], None, ty, ty, ty, should_invalidate_fake_members))

(* Depending on the kind of expression we are dealing with
 * The typing of call is different.
 *)
and dispatch_call
    ~(expected : ExpectedTy.t option)
    ~is_using_clause
    ?in_await
    p
    env
    ((_, fpos, fun_expr) as e : Nast.expr)
    explicit_targs
    el
    unpacked_element =
  let expr = expr ~allow_awaitable:(*?*) false in
  let make_call env te tal tel typed_unpack_element ty =
    make_result env p (Aast.Call (te, tal, tel, typed_unpack_element)) ty
  in
  (* TODO: Avoid Tany annotations in TAST by eliminating `make_call_special` *)
  let make_call_special env id tel ty =
    make_call
      env
      (Tast.make_typed_expr fpos (TUtils.mk_tany env fpos) (Aast.Id id))
      []
      tel
      None
      ty
  in
  (* For special functions and pseudofunctions with a definition in an HHI
   * file. It is preferred over [make_call_special] because it does not generate
   * [TAny] for the function type of the call.
   *)
  let make_call_special_from_def env id tel ty_ =
    let (env, fty, tal) = fun_type_of_id env id explicit_targs el in
    let ty =
      match get_node fty with
      | Tfun ft -> ft.ft_ret.et_type
      | _ -> ty_ (Reason.Rwitness p)
    in
    make_call env (Tast.make_typed_expr fpos fty (Aast.Id id)) tal tel None ty
  in
  let overload_function = overload_function make_call fpos in
  (* Require [get_idisposable_value()] function calls to be inside a [using]
     statement. *)
  let check_disposable_in_return env fty =
    if is_return_disposable_fun_type env fty && not is_using_clause then
      Errors.invalid_new_disposable p
  in

  let dispatch_id env id =
    let (env, fty, tal) = fun_type_of_id env id explicit_targs el in
    check_disposable_in_return env fty;
    let (env, (tel, typed_unpack_element, ty, should_forget_fakes)) =
      call ~expected p env fty el unpacked_element
    in
    let result =
      make_call
        env
        (Tast.make_typed_expr fpos fty (Aast.Id id))
        tal
        tel
        typed_unpack_element
        ty
    in
    (result, should_forget_fakes)
  in
  let dispatch_class_const env ((_, pos, e1_) as e1) m =
    let (env, _tal, tcid, ty1) = class_expr env [] e1 in
    let this_ty = MakeType.this (Reason.Rwitness fpos) in
    (* In static context, you can only call parent::foo() on static methods.
     * In instance context, you can call parent:foo() on static
     * methods as well as instance methods
     *)
    let is_static =
      (not (Nast.equal_class_id_ e1_ CIparent))
      || Env.is_static env
      || class_contains_smethod env ty1 m
    in
    let (env, (fty, tal)) =
      if not is_static then
        (* parent::nonStaticFunc() is really weird. It's calling a method
         * defined on the parent class, but $this is still the child class.
         *)
        TOG.obj_get
          ~inst_meth:false
          ~meth_caller:false
          ~is_method:true
          ~nullsafe:None
          ~obj_pos:pos
          ~coerce_from_ty:None
          ~explicit_targs:[]
          ~class_id:e1_
          ~member_id:m
          ~on_error:Errors.unify_error
          ~parent_ty:ty1
          env
          this_ty
      else
        class_get
          ~coerce_from_ty:None
          ~is_method:true
          ~is_const:false
          ~explicit_targs
          env
          ty1
          m
          e1
    in
    check_disposable_in_return env fty;
    let (env, (tel, typed_unpack_element, ty, should_forget_fakes)) =
      call ~expected p env fty el unpacked_element
    in
    let result =
      make_call
        env
        (Tast.make_typed_expr fpos fty (Aast.Class_const (tcid, m)))
        tal
        tel
        typed_unpack_element
        ty
    in
    (result, should_forget_fakes)
  in
  match fun_expr with
  (* Special top-level function *)
  | Id ((pos, x) as id) when SN.StdlibFunctions.needs_special_dispatch x ->
    begin
      match x with
      (* Special function [echo]. *)
      | echo when String.equal echo SN.SpecialFunctions.echo ->
        (* TODO(tany): TODO(T92020097):
         * Add [function print(arraykey ...$args)[io]: void] to an HHI file and
         * remove special casing of [echo] and [print].
         *)
        let env = Typing_local_ops.enforce_io pos env in
        let (env, tel, _) =
          argument_list_exprs (expr ~accept_using_var:true) env el
        in
        let arraykey_ty = MakeType.arraykey (Reason.Rwitness pos) in
        let like_ak_ty =
          MakeType.union
            (Reason.Rwitness pos)
            [MakeType.dynamic (Reason.Rwitness pos); arraykey_ty]
        in
        let (env, rev_tel) =
          List.fold
            tel
            ~init:(env, [])
            ~f:(fun (env, tel) (pk, ((ty, pos, _) as te)) ->
              let (env, err_opt) =
                Result.fold
                  ~ok:(fun env -> (env, None))
                  ~error:(fun env -> (env, Some (ty, arraykey_ty)))
                @@ SubType.sub_type_res
                     env
                     ty
                     like_ak_ty
                     (Errors.invalid_echo_argument_at pos)
              in
              (env, (pk, hole_on_err ~err_opt te) :: tel))
        in
        let tel = List.rev rev_tel in
        let should_forget_fakes = false in
        ( make_call_special env id tel (MakeType.void (Reason.Rwitness pos)),
          should_forget_fakes )
      (* `unsafe_cast` *)
      | unsafe_cast when String.equal unsafe_cast SN.PseudoFunctions.unsafe_cast
        ->
        let result =
          match el with
          | [(Ast_defs.Pnormal, original_expr)]
            when TypecheckerOptions.ignore_unsafe_cast (Env.get_tcopt env) ->
            expr env original_expr
          | _ ->
            (* first type the `unsafe_cast` as a call, handling arity errors *)
            let (env, fty, tal) = fun_type_of_id env id explicit_targs el in
            check_disposable_in_return env fty;
            let (env, (tel, _, ty, _should_forget_fakes)) =
              call ~expected p env fty el unpacked_element
            in
            (* construct the `Hole` using default value and type arguments
               if necessary *)
            let dflt_ty = MakeType.err Reason.none in
            let el =
              match tel with
              | (_, e) :: _ -> e
              | [] -> Tast.make_typed_expr fpos dflt_ty Aast.Null
            and (ty_from, ty_to) =
              match tal with
              | (ty_from, _) :: (ty_to, _) :: _ -> (ty_from, ty_to)
              | (ty, _) :: _ -> (ty, ty)
              | _ -> (dflt_ty, dflt_ty)
            in
            let te =
              Aast.Hole
                (el, ty_from, ty_to, UnsafeCast (List.map ~f:snd explicit_targs))
            in
            make_result env p te ty
        in
        let should_forget_fakes = false in
        (result, should_forget_fakes)
      (* Special function `isset` *)
      | isset when String.equal isset SN.PseudoFunctions.isset ->
        let (env, tel, _) =
          argument_list_exprs
            (expr ~accept_using_var:true ~check_defined:false)
            env
            el
        in
        if Option.is_some unpacked_element then
          Errors.unpacking_disallowed_builtin_function p isset;
        let should_forget_fakes = false in
        let result = make_call_special_from_def env id tel MakeType.bool in
        (result, should_forget_fakes)
      (* Special function `unset` *)
      | unset when String.equal unset SN.PseudoFunctions.unset ->
        let (env, tel, _) = argument_list_exprs expr env el in
        if Option.is_some unpacked_element then
          Errors.unpacking_disallowed_builtin_function p unset;
        let env = Typing_local_ops.check_unset_target env tel in
        let checked_unset_error = Errors.unset_nonidx_in_strict in
        let env =
          match (el, unpacked_element) with
          | ( [
                ( Ast_defs.Pnormal,
                  (_, _, Array_get ((_, _, Class_const _), Some _)) );
              ],
              None ) ->
            Errors.const_mutation p Pos_or_decl.none "";
            env
          | ([(Ast_defs.Pnormal, (_, _, Array_get (ea, Some _)))], None) ->
            let (env, _te, ty) = expr env ea in
            let r = Reason.Rwitness p in
            let tmixed = MakeType.mixed r in
            let super =
              mk
                ( Reason.Rnone,
                  Tunion
                    [
                      MakeType.dynamic r;
                      MakeType.dict r tmixed tmixed;
                      MakeType.keyset r tmixed;
                      MakeType.darray r tmixed tmixed;
                    ] )
            in
            SubType.sub_type_or_fail env ty super (fun () ->
                checked_unset_error
                  p
                  (Reason.to_string
                     ("This is "
                     ^ Typing_print.error ~ignore_dynamic:true env ty)
                     (get_reason ty)))
          | _ ->
            checked_unset_error p [];
            env
        in
        let should_forget_fakes = false in
        let result =
          match el with
          | [(_, (_, p, Obj_get (_, _, OG_nullsafe, _)))] ->
            Errors.nullsafe_property_write_context p;
            make_call_special_from_def env id tel (TUtils.terr env)
          | _ -> make_call_special_from_def env id tel MakeType.void
        in
        (result, should_forget_fakes)
      | type_structure
        when String.equal type_structure SN.StdlibFunctions.type_structure
             && Int.equal (List.length el) 2
             && Option.is_none unpacked_element ->
        let should_forget_fakes = false in
        (match el with
        | [e1; e2] ->
          (match e2 with
          | (_, (_, p, String cst)) ->
            (* find the class constant implicitly defined by the typeconst *)
            let cid =
              match e1 with
              | (_, (_, _, Class_const (cid, (_, x))))
              | (_, (_, _, Class_get (cid, CGstring (_, x), _)))
                when String.equal x SN.Members.mClass ->
                cid
              | _ ->
                let (_, ((_, p1, _) as e1_)) = e1 in
                ((), p1, CIexpr e1_)
            in
            let result = class_const ~incl_tc:true env p (cid, (p, cst)) in
            (result, should_forget_fakes)
          | _ ->
            Errors.illegal_type_structure pos "second argument is not a string";
            let result = expr_error env (Reason.Rwitness pos) e in
            (result, should_forget_fakes))
        | _ -> assert false)
      | _ -> dispatch_id env id
    end
  (* Special Shapes:: function *)
  | Class_const (((_, _, CI (_, shapes)) as class_id), ((_, x) as method_id))
    when String.equal shapes SN.Shapes.cShapes ->
    begin
      match x with
      (* Special function `Shapes::idx` *)
      | idx when String.equal idx SN.Shapes.idx ->
        overload_function
          p
          env
          class_id
          method_id
          el
          unpacked_element
          (fun env fty res el ->
            match el with
            | [(_, shape); (_, field)] ->
              let (env, _ts, shape_ty) = expr env shape in
              let (_, shape_pos, _) = shape in
              Typing_shapes.idx
                env
                shape_ty
                field
                None
                ~expr_pos:p
                ~fun_pos:(get_reason fty)
                ~shape_pos
            | [(_, shape); (_, field); (_, default)] ->
              let (env, _ts, shape_ty) = expr env shape in
              let (env, _td, default_ty) = expr env default in
              let (_, shape_pos, _) = shape in
              let (_, default_pos, _) = default in
              Typing_shapes.idx
                env
                shape_ty
                field
                (Some (default_pos, default_ty))
                ~expr_pos:p
                ~fun_pos:(get_reason fty)
                ~shape_pos
            | _ -> (env, res))
      (* Special function `Shapes::at` *)
      | at when String.equal at SN.Shapes.at ->
        overload_function
          p
          env
          class_id
          method_id
          el
          unpacked_element
          (fun env _fty res el ->
            match el with
            | [(_, shape); (_, field)] ->
              let (env, _te, shape_ty) = expr env shape in
              let (_, shape_pos, _) = shape in
              Typing_shapes.at env ~expr_pos:p ~shape_pos shape_ty field
            | _ -> (env, res))
      (* Special function `Shapes::keyExists` *)
      | key_exists when String.equal key_exists SN.Shapes.keyExists ->
        overload_function
          p
          env
          class_id
          method_id
          el
          unpacked_element
          (fun env fty res el ->
            match el with
            | [(_, shape); (_, field)] ->
              let (env, _te, shape_ty) = expr env shape in
              (* try accessing the field, to verify existence, but ignore
                 * the returned type and keep the one coming from function
                 * return type hint *)
              let (_, shape_pos, _) = shape in
              let (env, _) =
                Typing_shapes.idx
                  env
                  shape_ty
                  field
                  None
                  ~expr_pos:p
                  ~fun_pos:(get_reason fty)
                  ~shape_pos
              in
              (env, res)
            | _ -> (env, res))
      (* Special function `Shapes::removeKey` *)
      | remove_key when String.equal remove_key SN.Shapes.removeKey ->
        overload_function
          p
          env
          class_id
          method_id
          el
          unpacked_element
          (fun env _ res el ->
            match el with
            | [(Ast_defs.Pinout _, shape); (_, field)] ->
              begin
                match shape with
                | (_, _, Lvar (_, lvar))
                | (_, _, Hole ((_, _, Lvar (_, lvar)), _, _, _)) ->
                  let (env, _te, shape_ty) = expr env shape in
                  let (env, shape_ty) =
                    Typing_shapes.remove_key p env shape_ty field
                  in
                  let env = set_valid_rvalue p env lvar shape_ty in
                  (env, res)
                | _ ->
                  let (_, shape_pos, _) = shape in
                  Errors.invalid_shape_remove_key shape_pos;
                  (env, res)
              end
            | _ -> (env, res))
      (* Special function `Shapes::toArray` *)
      | to_array when String.equal to_array SN.Shapes.toArray ->
        overload_function
          p
          env
          class_id
          method_id
          el
          unpacked_element
          (fun env _ res el ->
            match el with
            | [(_, shape)] ->
              let (env, _te, shape_ty) = expr env shape in
              Typing_shapes.to_array env p shape_ty res
            | _ -> (env, res))
      (* Special function `Shapes::toDict` *)
      | to_dict when String.equal to_dict SN.Shapes.toDict ->
        overload_function
          p
          env
          class_id
          method_id
          el
          unpacked_element
          (fun env _ res el ->
            match el with
            | [(_, shape)] ->
              let (env, _te, shape_ty) = expr env shape in
              Typing_shapes.to_dict env p shape_ty res
            | _ -> (env, res))
      | _ -> dispatch_class_const env class_id method_id
    end
  (* Special function `parent::__construct` *)
  | Class_const ((_, pos, CIparent), ((_, construct) as id))
    when String.equal construct SN.Members.__construct ->
    let (env, tel, typed_unpack_element, ty, pty, ctor_fty, should_forget_fakes)
        =
      call_parent_construct p env el unpacked_element
    in
    let result =
      make_call
        env
        (Tast.make_typed_expr
           fpos
           ctor_fty
           (Aast.Class_const ((pty, pos, Aast.CIparent), id)))
        [] (* tal: no type arguments to constructor *)
        tel
        typed_unpack_element
        ty
    in
    (result, should_forget_fakes)
  (* Calling parent / class method *)
  | Class_const (class_id, m) -> dispatch_class_const env class_id m
  (* Readonly Expressions do not affect the type, but need to be threaded through when they're part of a call *)
  | ReadonlyExpr r ->
    let env = Env.set_readonly env true in
    (* Recurse onto the inner call *)
    let ((env, expr, ty), s) =
      dispatch_call
        ~expected
        ~is_using_clause
        ?in_await
        p
        env
        r
        explicit_targs
        el
        unpacked_element
    in
    (match expr with
    | (ty, _, Call (caller, tal, tel, c)) ->
      let (caller_ty, caller_pos, _) = caller in
      (* Rewrap the caller in the readonly expression after we're done *)
      let wrapped_caller =
        Tast.make_typed_expr caller_pos caller_ty (Aast.ReadonlyExpr caller)
      in
      let result = make_call env wrapped_caller tal tel c ty in
      (result, s)
    | _ -> ((env, expr, ty), s))
  (* Call instance method *)
  | Obj_get (e1, (_, pos_id, Id m), nullflavor, Is_method)
    when not (TypecheckerOptions.method_call_inference (Env.get_tcopt env)) ->
    let (env, te1, ty1) = expr ~accept_using_var:true env e1 in
    let nullsafe =
      match nullflavor with
      | OG_nullthrows -> None
      | OG_nullsafe -> Some p
    in
    let (_, p1, _) = e1 in
    let (env, (tfty, tal), lval_err_opt, _rval_err_opt) =
      TOG.obj_get_with_err
        ~obj_pos:p1
        ~is_method:true
        ~inst_meth:false
        ~meth_caller:false
        ~nullsafe:(Option.map ~f:(fun p -> Reason.Rnullsafe_op p) nullsafe)
        ~coerce_from_ty:None
        ~explicit_targs
        ~class_id:(CIexpr e1)
        ~member_id:m
        ~on_error:Errors.unify_error
        env
        ty1
    in
    check_disposable_in_return env tfty;
    let (env, (tel, typed_unpack_element, ty, should_forget_fakes)) =
      call ~nullsafe ~expected p env tfty el unpacked_element
    in
    let result =
      make_call
        env
        (Tast.make_typed_expr
           fpos
           tfty
           (Aast.Obj_get
              ( hole_on_err ~err_opt:lval_err_opt te1,
                Tast.make_typed_expr pos_id tfty (Aast.Id m),
                nullflavor,
                Is_method )))
        tal
        tel
        typed_unpack_element
        ty
    in
    (result, should_forget_fakes)
  (* Call instance method using new method call inference *)
  | Obj_get (receiver, (_, pos_id, Id meth), nullflavor, Is_method) ->
    (*****
        Typecheck `Obj_get` by enforcing that:
        - `<instance_type>` <: `Thas_member(m, #1)`
        where #1 is a fresh type variable.
      *****)
    let (env, typed_receiver, receiver_ty) =
      expr ~accept_using_var:true env receiver
    in
    let env = might_throw env in
    let nullsafe =
      match nullflavor with
      | OG_nullthrows -> None
      | OG_nullsafe -> Some p
    in
    (* Generate a fresh type `method_ty` for the type of the
       instance method, i.e. #1 *)
    let (env, method_ty) = Env.fresh_type env p in
    (* Create `Thas_member` constraint type *)
    let (_, receiver_p, _) = receiver in
    let reason = Reason.Rwitness receiver_p in
    let has_method_ty =
      MakeType.has_member
        reason
        ~name:meth
        ~ty:method_ty
        ~class_id:(CIexpr receiver)
        ~explicit_targs:(Some explicit_targs)
    in
    let env = Env.set_tyvar_variance env method_ty in
    let (env, has_method_super_ty) =
      if Option.is_none nullsafe then
        (env, has_method_ty)
      else
        (* If null-safe, then `receiver_ty` <: `?Thas_member(m, #1)`,
           but *unlike* property access typing in `expr_`, we still use `#1` as
           our "result" if `receiver_ty` is nullable  (as opposed to `?#1`),
           deferring null-safety handling to after `call` *)
        let r = Reason.Rnullsafe_op p in
        let null_ty = MakeType.null r in
        Union.union_i env r has_method_ty null_ty
    in
    let (_, receiver_pos, _) = receiver in
    let env_res =
      Type.sub_type_i_res
        receiver_pos
        Reason.URnone
        env
        (LoclType receiver_ty)
        has_method_super_ty
        Errors.unify_error
    in
    let ty_nothing = MakeType.nothing Reason.none in
    let (env, err_opt) =
      Result.fold
        env_res
        ~ok:(fun env -> (env, None))
        ~error:(fun env -> (env, Some (receiver_ty, ty_nothing)))
    in

    (* Perhaps solve for `method_ty`. Opening and closing a scope is too coarse
       here - type parameters are localised to fresh type variables over the
       course of subtyping above, and we do not want to solve these until later.
       Once we typecheck all function calls with a subtyping of function types,
       we should not need to solve early at all - transitive closure of
       subtyping should give enough information. *)
    let env =
      match get_var method_ty with
      | Some var ->
        Typing_solver.solve_to_equal_bound_or_wrt_variance env Reason.Rnone var
      | None -> env
    in
    let localize_targ env (_, targ) = Phase.localize_targ env targ in
    let (env, typed_targs) =
      List.map_env env ~f:(localize_targ ~check_well_kinded:true) explicit_targs
    in
    check_disposable_in_return env method_ty;
    let (env, (typed_params, typed_unpack_element, ret_ty, should_forget_fakes))
        =
      call ~nullsafe ~expected ?in_await p env method_ty el unpacked_element
    in
    (* If the call is nullsafe AND the receiver is nullable,
       make the return type nullable too *)
    let (env, ret_ty) =
      if Option.is_some nullsafe then
        let r = Reason.Rnullsafe_op p in
        let null_ty = MakeType.null r in
        let (env, null_or_nothing_ty) =
          Inter.intersect env ~r null_ty receiver_ty
        in
        let (env, ret_option_ty) = Union.union env null_or_nothing_ty ret_ty in
        (env, ret_option_ty)
      else
        (env, ret_ty)
    in
    let result =
      make_call
        env
        (Tast.make_typed_expr
           fpos
           method_ty
           (Aast.Obj_get
              ( hole_on_err ~err_opt typed_receiver,
                Tast.make_typed_expr pos_id method_ty (Aast.Id meth),
                nullflavor,
                Is_method )))
        typed_targs
        typed_params
        typed_unpack_element
        ret_ty
    in
    (result, should_forget_fakes)
  (* Function invocation *)
  | Fun_id x ->
    let (env, fty, tal) = fun_type_of_id env x explicit_targs el in
    check_disposable_in_return env fty;
    let (env, (tel, typed_unpack_element, ty, should_forget_fakes)) =
      call ~expected p env fty el unpacked_element
    in
    let result =
      make_call
        env
        (Tast.make_typed_expr fpos fty (Aast.Fun_id x))
        tal
        tel
        typed_unpack_element
        ty
    in
    (result, should_forget_fakes)
  | Id id -> dispatch_id env id
  | _ ->
    let (env, te, fty) = expr env e in
    let (env, fty) =
      Typing_solver.expand_type_and_solve
        ~description_of_expected:"a function value"
        env
        fpos
        fty
    in
    check_disposable_in_return env fty;
    let (env, (tel, typed_unpack_element, ty, should_forget_fakes)) =
      call ~expected p env fty el unpacked_element
    in
    let result =
      make_call
        env
        te
        (* tal: no type arguments to function values, as they are non-generic *)
        []
        tel
        typed_unpack_element
        ty
    in
    (result, should_forget_fakes)

and class_get_res
    ~is_method
    ~is_const
    ~coerce_from_ty
    ?(explicit_targs = [])
    ?(incl_tc = false)
    ?(is_function_pointer = false)
    env
    cty
    (p, mid)
    cid =
  let (env, this_ty) =
    if is_method then
      this_for_method env cid cty
    else
      (env, cty)
  in
  class_get_inner
    ~is_method
    ~is_const
    ~this_ty
    ~explicit_targs
    ~incl_tc
    ~coerce_from_ty
    ~is_function_pointer
    env
    cid
    cty
    (p, mid)

and class_get_err
    ~is_method
    ~is_const
    ~coerce_from_ty
    ?explicit_targs
    ?incl_tc
    ?is_function_pointer
    env
    cty
    (p, mid)
    cid =
  let (env, tys, rval_res_opt) =
    class_get_res
      ~is_method
      ~is_const
      ~coerce_from_ty
      ?explicit_targs
      ?incl_tc
      ?is_function_pointer
      env
      cty
      (p, mid)
      cid
  in
  let rval_err_opt = Option.bind ~f:Result.error rval_res_opt in
  (env, tys, rval_err_opt)

and class_get
    ~is_method
    ~is_const
    ~coerce_from_ty
    ?explicit_targs
    ?incl_tc
    ?is_function_pointer
    env
    cty
    (p, mid)
    cid =
  let (env, tys, _) =
    class_get_res
      ~is_method
      ~is_const
      ~coerce_from_ty
      ?explicit_targs
      ?incl_tc
      ?is_function_pointer
      env
      cty
      (p, mid)
      cid
  in
  (env, tys)

and class_get_inner
    ~is_method
    ~is_const
    ~this_ty
    ~coerce_from_ty
    ?(explicit_targs = [])
    ?(incl_tc = false)
    ?(is_function_pointer = false)
    env
    ((_, cid_pos, cid_) as cid)
    cty
    (p, mid) =
  let (env, cty) = Env.expand_type env cty in
  let dflt_rval_err = Option.map ~f:(fun (_, _, ty) -> Ok ty) coerce_from_ty in
  match deref cty with
  | (r, Tany _) -> (env, (mk (r, Typing_utils.tany env), []), dflt_rval_err)
  | (_, Terr) -> (env, (err_witness env cid_pos, []), dflt_rval_err)
  | (_, Tdynamic) -> (env, (cty, []), dflt_rval_err)
  | (_, Tunion tyl) ->
    let (env, pairs, rval_err_opts) =
      List.fold_left
        tyl
        ~init:(env, [], [])
        ~f:(fun (env, pairs, rval_err_opts) ty ->
          let (env, pair, rval_err_opt) =
            class_get_res
              ~is_method
              ~is_const
              ~explicit_targs
              ~incl_tc
              ~coerce_from_ty
              ~is_function_pointer
              env
              ty
              (p, mid)
              cid
          in
          (env, pair :: pairs, rval_err_opt :: rval_err_opts))
    in

    let rval_err = Option.(map ~f:union_coercion_errs @@ all rval_err_opts) in
    let (env, ty) =
      Union.union_list env (get_reason cty) (List.map ~f:fst pairs)
    in
    (env, (ty, []), rval_err)
  | (_, Tintersection tyl) ->
    let (env, pairs, rval_err_opts) =
      TUtils.run_on_intersection_res env tyl ~f:(fun env ty ->
          class_get_inner
            ~is_method
            ~is_const
            ~this_ty
            ~explicit_targs
            ~incl_tc
            ~coerce_from_ty
            ~is_function_pointer
            env
            cid
            ty
            (p, mid))
    in
    let rval_err =
      Option.(map ~f:intersect_coercion_errs @@ all rval_err_opts)
    in
    let (env, ty) =
      Inter.intersect_list env (get_reason cty) (List.map ~f:fst pairs)
    in
    (env, (ty, []), rval_err)
  | (_, Tnewtype (_, _, ty))
  | (_, Tdependent (_, ty)) ->
    class_get_inner
      ~is_method
      ~is_const
      ~this_ty
      ~explicit_targs
      ~incl_tc
      ~coerce_from_ty
      ~is_function_pointer
      env
      cid
      ty
      (p, mid)
  | (r, Tgeneric _) ->
    let (env, tyl) =
      TUtils.get_concrete_supertypes ~abstract_enum:true env cty
    in
    if List.is_empty tyl then begin
      Errors.non_class_member
        ~is_method
        mid
        p
        (Typing_print.error env cty)
        (get_pos cty);
      (env, (err_witness env p, []), dflt_rval_err)
    end else
      let (env, ty) = Typing_intersection.intersect_list env r tyl in
      class_get_inner
        ~is_method
        ~is_const
        ~this_ty
        ~explicit_targs
        ~incl_tc
        ~coerce_from_ty
        ~is_function_pointer
        env
        cid
        ty
        (p, mid)
  | (_, Tclass ((_, c), _, paraml)) ->
    let class_ = Env.get_class env c in
    (match class_ with
    | None -> (env, (Typing_utils.mk_tany env p, []), dflt_rval_err)
    | Some class_ ->
      (* TODO akenn: Should we move this to the class_get original call? *)
      let (env, this_ty) = ExprDepTy.make env ~cid:cid_ this_ty in
      (* We need to instantiate generic parameters in the method signature *)
      let ety_env =
        {
          empty_expand_env with
          this_ty;
          substs = TUtils.make_locl_subst_for_class_tparams class_ paraml;
        }
      in
      let get_smember_from_constraints env class_info =
        let upper_bounds =
          Cls.upper_bounds_on_this_from_constraints class_info
        in
        let (env, upper_bounds) =
          List.map_env env upper_bounds ~f:(fun env up ->
              Phase.localize ~ety_env env up)
        in
        let (env, inter_ty) =
          Inter.intersect_list env (Reason.Rwitness p) upper_bounds
        in
        class_get_inner
          ~is_method
          ~is_const
          ~this_ty
          ~explicit_targs
          ~incl_tc
          ~coerce_from_ty
          ~is_function_pointer
          env
          cid
          inter_ty
          (p, mid)
      in
      let try_get_smember_from_constraints env class_info =
        Errors.try_with_error
          (fun () -> get_smember_from_constraints env class_info)
          (fun () ->
            TOG.smember_not_found
              p
              ~is_const
              ~is_method
              ~is_function_pointer
              class_info
              mid
              Errors.unify_error;
            (env, (TUtils.terr env Reason.Rnone, []), dflt_rval_err))
      in
      if is_const then (
        let const =
          if incl_tc then
            Env.get_const env class_ mid
          else
            match Env.get_typeconst env class_ mid with
            | Some _ ->
              Errors.illegal_typeconst_direct_access p;
              None
            | None -> Env.get_const env class_ mid
        in
        match const with
        | None when Cls.has_upper_bounds_on_this_from_constraints class_ ->
          try_get_smember_from_constraints env class_
        | None ->
          TOG.smember_not_found
            p
            ~is_const
            ~is_method
            ~is_function_pointer
            class_
            mid
            Errors.unify_error;
          (env, (TUtils.terr env Reason.Rnone, []), dflt_rval_err)
        | Some { cc_type; cc_abstract; cc_pos; _ } ->
          let (env, cc_locl_type) = Phase.localize ~ety_env env cc_type in
          (match cc_abstract with
          | CCAbstract _ ->
            (match cid_ with
            | CIstatic
            | CIexpr _ ->
              ()
            | _ ->
              let cc_name = Cls.name class_ ^ "::" ^ mid in
              Errors.abstract_const_usage p cc_pos cc_name)
          | CCConcrete -> ());
          (env, (cc_locl_type, []), dflt_rval_err)
      ) else
        let static_member_opt =
          Env.get_static_member is_method env class_ mid
        in
        (match static_member_opt with
        | None when Cls.has_upper_bounds_on_this_from_constraints class_ ->
          try_get_smember_from_constraints env class_
        | None ->
          TOG.smember_not_found
            p
            ~is_const
            ~is_method
            ~is_function_pointer
            class_
            mid
            Errors.unify_error;
          (env, (TUtils.terr env Reason.Rnone, []), dflt_rval_err)
        | Some
            ({
               ce_visibility = vis;
               ce_type = (lazy member_decl_ty);
               ce_deprecated;
               _;
             } as ce) ->
          let def_pos = get_pos member_decl_ty in
          TVis.check_class_access
            ~use_pos:p
            ~def_pos
            env
            (vis, get_ce_lsb ce)
            cid_
            class_;
          TVis.check_deprecated ~use_pos:p ~def_pos ce_deprecated;
          check_class_get env p def_pos c mid ce cid is_function_pointer;
          let (env, member_ty, et_enforced, tal) =
            match deref member_decl_ty with
            (* We special case Tfun here to allow passing in explicit tparams to localize_ft. *)
            | (r, Tfun ft) when is_method ->
              let (env, explicit_targs) =
                Phase.localize_targs
                  ~check_well_kinded:true
                  ~is_method:true
                  ~def_pos
                  ~use_pos:p
                  ~use_name:(strip_ns mid)
                  env
                  ft.ft_tparams
                  (List.map ~f:snd explicit_targs)
              in
              let ft =
                Typing_enforceability.compute_enforced_and_pessimize_fun_type
                  env
                  ft
              in
              let (env, ft) =
                Phase.(
                  localize_ft
                    ~instantiation:
                      { use_name = strip_ns mid; use_pos = p; explicit_targs }
                    ~ety_env
                    ~def_pos
                    env
                    ft)
              in
              let fty =
                Typing_dynamic.relax_method_type
                  env
                  (get_ce_support_dynamic_type ce)
                  r
                  ft
              in
              (env, fty, Unenforced, explicit_targs)
            (* unused *)
            | _ ->
              let { et_type; et_enforced } =
                Typing_enforceability.compute_enforced_and_pessimize_ty
                  env
                  member_decl_ty
              in
              let (env, member_ty) = Phase.localize ~ety_env env et_type in
              (* TODO(T52753871) make function just return possibly_enforced_ty
               * after considering intersection case *)
              (env, member_ty, et_enforced, [])
          in
          let (env, member_ty) =
            if Cls.has_upper_bounds_on_this_from_constraints class_ then
              let ((env, (member_ty', _), _), succeed) =
                Errors.try_
                  (fun () -> (get_smember_from_constraints env class_, true))
                  (fun _ ->
                    (* No eligible functions found in constraints *)
                    ( (env, (MakeType.mixed Reason.Rnone, []), dflt_rval_err),
                      false ))
              in
              if succeed then
                Inter.intersect env ~r:(Reason.Rwitness p) member_ty member_ty'
              else
                (env, member_ty)
            else
              (env, member_ty)
          in
          let (env, rval_err) =
            match coerce_from_ty with
            | None -> (env, None)
            | Some (p, ur, ty) ->
              Result.fold
                ~ok:(fun env -> (env, Some (Ok ty)))
                ~error:(fun env -> (env, Some (Error (ty, member_ty))))
              @@ Typing_coercion.coerce_type_res
                   p
                   ur
                   env
                   ty
                   { et_type = member_ty; et_enforced }
                   Errors.unify_error
          in
          (env, (member_ty, tal), rval_err)))
  | (_, Tunapplied_alias _) ->
    Typing_defs.error_Tunapplied_alias_in_illegal_context ()
  | ( _,
      ( Tvar _ | Tnonnull | Tvarray _ | Tdarray _ | Tvarray_or_darray _
      | Tvec_or_dict _ | Toption _ | Tprim _ | Tfun _ | Ttuple _ | Tshape _
      | Taccess _ | Tneg _ ) ) ->
    Errors.non_class_member
      ~is_method
      mid
      p
      (Typing_print.error env cty)
      (get_pos cty);
    (env, (err_witness env p, []), dflt_rval_err)

and class_id_for_new
    ~exact p env (cid : Nast.class_id_) (explicit_targs : Nast.targ list) :
    newable_class_info =
  let (env, tal, te, cid_ty) =
    class_expr
      ~check_targs_well_kinded:true
      ~check_explicit_targs:true
      ~exact
      env
      explicit_targs
      ((), p, cid)
  in
  (* Need to deal with union case *)
  let rec get_info res tyl =
    match tyl with
    | [] -> (env, tal, te, res)
    | ty :: tyl ->
      (match get_node ty with
      | Tunion tyl'
      | Tintersection tyl' ->
        get_info res (tyl' @ tyl)
      | _ ->
        (* Instantiation on an abstract class (e.g. from classname<T>) is
         * via the base type (to check constructor args), but the actual
         * type `ty` must be preserved. *)
        (match get_node (TUtils.get_base_type env ty) with
        | Tdynamic -> get_info (`Dynamic :: res) tyl
        | Tclass (sid, _, _) ->
          let class_ = Env.get_class env (snd sid) in
          (match class_ with
          | None -> get_info res tyl
          | Some class_info ->
            (match (te, cid_ty) with
            (* When computing the classes for a new T() where T is a generic,
             * the class must be consistent (final, final constructor, or
             * <<__ConsistentConstruct>>) for its constructor to be considered *)
            | ((_, _, Aast.CI (_, c)), ty) when is_generic_equal_to c ty ->
              (* Only have this choosing behavior for new T(), not all generic types
               * i.e. new classname<T>, TODO: T41190512 *)
              if Cls.valid_newable_class class_info then
                get_info (`Class (sid, class_info, ty) :: res) tyl
              else
                get_info res tyl
            | _ -> get_info (`Class (sid, class_info, ty) :: res) tyl))
        | _ -> get_info res tyl))
  in
  get_info [] [cid_ty]

(* When invoking a method, the class_id is used to determine what class we
 * lookup the method in, but the type of 'this' will be the late bound type.
 * For example:
 *
 *  class C {
 *    public static function get(): this { return new static(); }
 *
 *    public static function alias(): this { return self::get(); }
 *  }
 *
 *  In C::alias, when we invoke self::get(), 'self' is resolved to the class
 *  in the lexical scope (C), so call C::get. However the method is executed in
 *  the current context, so static inside C::get will be resolved to the late
 *  bound type (get_called_class() within C::alias).
 *
 *  This means when determining the type of this, CIparent and CIself should be
 *  changed to CIstatic. For the other cases of C::get() or $c::get(), we only
 *  look at the left hand side of the '::' and use the type associated
 *  with it.
 *
 *  Thus C::get() will return a type C, while $c::get() will return the same
 *  type as $c.
 *)
and this_for_method env (_, p, cid) default_ty =
  match cid with
  | CIparent
  | CIself
  | CIstatic ->
    let (env, _tal, _te, ty) = class_expr env [] ((), p, CIstatic) in
    ExprDepTy.make env ~cid:CIstatic ty
  | _ -> (env, default_ty)

(** Resolve class expressions:
 *     self    CIself       lexically enclosing class
 *     parent  CIparent     lexically enclosing `extends` class
 *     static  CIstatic     late-static-bound class (i.e. runtime receiver)
 *     <id>    CI id        literal class name
 *     <expr>  CIexpr expr  expression that evaluates to an object or classname
 *)
and class_expr
    ?(check_targs_well_kinded = false)
    ?(exact = Nonexact)
    ?(check_explicit_targs = false)
    (env : env)
    (tal : Nast.targ list)
    ((_, p, cid_) : Nast.class_id) :
    env * Tast.targ list * Tast.class_id * locl_ty =
  let make_result env tal te ty = (env, tal, (ty, p, te), ty) in
  match cid_ with
  | CIparent ->
    (match Env.get_self_id env with
    | Some self ->
      (match Env.get_class env self with
      | Some trait when Ast_defs.is_c_trait (Cls.kind trait) ->
        (match trait_most_concrete_req_class trait env with
        | None ->
          Errors.parent_in_trait p;
          make_result env [] Aast.CIparent (err_witness env p)
        | Some (_, parent_ty) ->
          (* inside a trait, parent is SN.Typehints.this, but with the
           * type of the most concrete class that the trait has
           * "require extend"-ed *)
          let (env, parent_ty) =
            Phase.localize_no_subst env ~ignore_errors:true parent_ty
          in
          make_result env [] Aast.CIparent parent_ty)
      | _ ->
        let parent =
          match Env.get_parent_ty env with
          | None ->
            Errors.parent_undefined p;
            mk (Reason.none, Typing_defs.make_tany ())
          | Some parent -> parent
        in
        let (env, parent) =
          Phase.localize_no_subst env ~ignore_errors:true parent
        in
        (* parent is still technically the same object. *)
        make_result env [] Aast.CIparent parent)
    | None ->
      let parent =
        match Env.get_parent_ty env with
        | None ->
          Errors.parent_undefined p;
          mk (Reason.none, Typing_defs.make_tany ())
        | Some parent -> parent
      in
      let (env, parent) =
        Phase.localize_no_subst env ~ignore_errors:true parent
      in
      (* parent is still technically the same object. *)
      make_result env [] Aast.CIparent parent)
  | CIstatic ->
    let this =
      if Option.is_some (Env.next_cont_opt env) then
        MakeType.this (Reason.Rwitness p)
      else
        MakeType.nothing (Reason.Rwitness p)
    in
    make_result env [] Aast.CIstatic this
  | CIself ->
    let ty =
      match Env.get_self_class_type env with
      | Some (c, _, tyl) -> mk (Reason.Rwitness p, Tclass (c, exact, tyl))
      | None ->
        (* Naming phase has already checked and replaced CIself with CI if outside a class *)
        Errors.internal_error p "Unexpected CIself";
        Typing_utils.mk_tany env p
    in
    make_result env [] Aast.CIself ty
  | CI ((p, id) as c) ->
    begin
      match Env.get_pos_and_kind_of_generic env id with
      | Some (def_pos, kind) ->
        let simple_kind = Typing_kinding_defs.Simple.from_full_kind kind in
        let param_nkinds =
          Typing_kinding_defs.Simple.get_named_parameter_kinds simple_kind
        in
        let (env, tal) =
          Phase.localize_targs_with_kinds
            ~check_well_kinded:check_targs_well_kinded
            ~is_method:true
            ~def_pos
            ~use_pos:p
            ~use_name:(strip_ns (snd c))
            ~check_explicit_targs
            env
            param_nkinds
            (List.map ~f:snd tal)
        in
        let r = Reason.Rhint (Pos_or_decl.of_raw_pos p) in
        let type_args = List.map tal ~f:fst in
        let tgeneric = MakeType.generic ~type_args r id in
        make_result env tal (Aast.CI c) tgeneric
      | None ->
        (* Not a type parameter *)
        let class_ = Env.get_class env id in
        (match class_ with
        | None -> make_result env [] (Aast.CI c) (Typing_utils.mk_tany env p)
        | Some class_ ->
          TVis.check_classname_access ~use_pos:p ~in_signature:false env class_;
          let (env, ty, tal) =
            List.map ~f:snd tal
            |> Phase.localize_targs_and_check_constraints
                 ~exact
                 ~check_well_kinded:check_targs_well_kinded
                 ~def_pos:(Cls.pos class_)
                 ~use_pos:p
                 ~check_explicit_targs
                 env
                 c
                 (Cls.tparams class_)
          in
          make_result env tal (Aast.CI c) ty)
    end
  | CIexpr ((_, p, _) as e) ->
    let (env, te, ty) = expr env e ~allow_awaitable:(*?*) false in
    let fold_errs errs =
      let rec aux = function
        | (Ok xs, Ok x :: rest) -> aux (Ok (x :: xs), rest)
        | (Ok xs, Error (x, y) :: rest) -> aux (Error (x :: xs, y :: xs), rest)
        | (Error (xs, ys), Ok x :: rest) -> aux (Error (x :: xs, x :: ys), rest)
        | (Error (xs, ys), Error (x, y) :: rest) ->
          aux (Error (x :: xs, y :: ys), rest)
        | (acc, []) -> acc
      in
      aux (Ok [], errs)
    in
    let rec resolve_ety env ty =
      let (env, ty) =
        Typing_solver.expand_type_and_solve
          ~description_of_expected:"an object"
          env
          p
          ty
      in
      let base_ty = TUtils.get_base_type env ty in
      match deref base_ty with
      | (_, Tnewtype (classname, [the_cls], as_ty))
        when String.equal classname SN.Classes.cClassname ->
        let (env, ty, err_res) = resolve_ety env the_cls in
        let wrap ty = mk (Reason.none, Tnewtype (classname, [ty], as_ty)) in
        let err_res =
          match err_res with
          | Ok ty -> Ok (wrap ty)
          | Error (ty_act, ty_exp) -> Error (wrap ty_act, wrap ty_exp)
        in
        (env, ty, err_res)
      | (_, Tgeneric _)
      | (_, Tclass _) ->
        (env, ty, Ok ty)
      | (r, Tunion tyl) ->
        let (env, tyl, errs) = List.map_env_err_res env tyl ~f:resolve_ety in
        let ty = MakeType.union r tyl in
        let err =
          match fold_errs errs with
          | Ok _ -> Ok ty
          | Error (ty_actuals, ty_expects) ->
            let ty_actual = MakeType.union Reason.none ty_actuals
            and ty_expect = MakeType.union Reason.none ty_expects in
            Error (ty_actual, ty_expect)
        in
        (env, ty, err)
      | (r, Tintersection tyl) ->
        let (env, tyl, errs) =
          TUtils.run_on_intersection_res env tyl ~f:resolve_ety
        in
        let (env, ty) = Inter.intersect_list env r tyl in
        let (env, err) =
          match fold_errs errs with
          | Ok _ -> (env, Ok ty)
          | Error (ty_actuals, ty_expects) ->
            let (env, ty_actual) =
              Inter.intersect_list env Reason.none ty_actuals
            in
            let (env, ty_expect) =
              Inter.intersect_list env Reason.none ty_expects
            in
            (env, Error (ty_actual, ty_expect))
        in
        (env, ty, err)
      | (_, Tdynamic) -> (env, base_ty, Ok base_ty)
      | (_, Terr) ->
        let ty = err_witness env p in
        (env, ty, Ok ty)
      | (r, Tvar _) ->
        Errors.unknown_type "an object" p (Reason.to_string "It is unknown" r);
        let ty = err_witness env p in
        (env, ty, Ok ty)
      | (_, Tunapplied_alias _) ->
        Typing_defs.error_Tunapplied_alias_in_illegal_context ()
      | ( _,
          ( Tany _ | Tnonnull | Tvarray _ | Tdarray _ | Tvarray_or_darray _
          | Tvec_or_dict _ | Toption _ | Tprim _ | Tfun _ | Ttuple _
          | Tnewtype _ | Tdependent _ | Tshape _ | Taccess _ | Tneg _ ) ) ->
        Errors.expected_class
          ~suffix:(", but got " ^ Typing_print.error env base_ty)
          p;
        let ty_nothing = MakeType.nothing Reason.none in
        let ty_expect = MakeType.classname Reason.none [ty_nothing] in
        (env, err_witness env p, Error (base_ty, ty_expect))
    in
    let (env, result_ty, err_res) = resolve_ety env ty in
    let err_opt =
      Result.fold
        err_res
        ~ok:(fun _ -> None)
        ~error:(fun (ty_act, ty_expect) -> Some (ty_act, ty_expect))
    in
    let te = hole_on_err ~err_opt te in
    let x = make_result env [] (Aast.CIexpr te) result_ty in
    x

and call_construct p env class_ params el unpacked_element cid cid_ty =
  let cid_ty =
    if Nast.equal_class_id_ cid CIparent then
      MakeType.this (Reason.Rwitness p)
    else
      cid_ty
  in
  let ety_env =
    {
      empty_expand_env with
      this_ty = cid_ty;
      substs = TUtils.make_locl_subst_for_class_tparams class_ params;
      on_error = Errors.unify_error_at p;
    }
  in
  let env =
    Phase.check_where_constraints
      ~in_class:true
      ~use_pos:p
      ~definition_pos:(Cls.pos class_)
      ~ety_env
      env
      (Cls.where_constraints class_)
  in
  let cstr = Env.get_construct env class_ in
  match fst cstr with
  | None ->
    if (not (List.is_empty el)) || Option.is_some unpacked_element then
      Errors.constructor_no_args p;
    let (env, tel, _tyl) =
      argument_list_exprs (expr ~allow_awaitable:false) env el
    in
    let should_forget_fakes = true in
    (env, tel, None, TUtils.terr env Reason.Rnone, should_forget_fakes)
  | Some { ce_visibility = vis; ce_type = (lazy m); ce_deprecated; _ } ->
    let def_pos = get_pos m in
    TVis.check_obj_access ~use_pos:p ~def_pos env vis;
    TVis.check_deprecated ~use_pos:p ~def_pos ce_deprecated;
    (* Obtain the type of the constructor *)
    let (env, m) =
      let r = get_reason m |> Typing_reason.localize in
      match get_node m with
      | Tfun ft ->
        let ft =
          Typing_enforceability.compute_enforced_and_pessimize_fun_type env ft
        in
        (* This creates type variables for non-denotable type parameters on constructors.
         * These are notably different from the tparams on the class, which are handled
         * at the top of this function. User-written type parameters on constructors
         * are still a parse error. This is a no-op if ft.ft_tparams is empty. *)
        let (env, implicit_constructor_targs) =
          Phase.localize_targs
            ~check_well_kinded:true
            ~is_method:true
            ~def_pos
            ~use_pos:p
            ~use_name:"constructor"
            env
            ft.ft_tparams
            []
        in
        let (env, ft) =
          Phase.(
            localize_ft
              ~instantiation:
                {
                  use_name = "constructor";
                  use_pos = p;
                  explicit_targs = implicit_constructor_targs;
                }
              ~ety_env
              ~def_pos
              env
              ft)
        in
        (env, mk (r, Tfun ft))
      | _ ->
        Errors.internal_error p "Expected function type for constructor";
        let ty = TUtils.terr env r in
        (env, ty)
    in
    let (env, (tel, typed_unpack_element, _ty, should_forget_fakes)) =
      call ~expected:None p env m el unpacked_element
    in
    (env, tel, typed_unpack_element, m, should_forget_fakes)

and inout_write_back env { fp_type; _ } (pk, ((_, pos, _) as e)) =
  match pk with
  | Ast_defs.Pinout _ ->
    (* Translate the write-back semantics of inout parameters.
     *
     * This matters because we want to:
     * (1) make sure we can write to the original argument
     *     (modifiable lvalue check)
     * (2) allow for growing of locals / Tunions (type side effect)
     *     but otherwise unify the argument type with the parameter hint
     *)
    let (env, _te, _ty) =
      assign_ pos Reason.URparam_inout env e pos fp_type.et_type
    in
    env
  | _ -> env

(** Typechecks a call.
 * Returns in this order the typed expressions for the arguments, for the
 * variadic arguments, the return type, and a boolean indicating whether fake
 * members should be forgotten.
 *)
and call
    ~(expected : ExpectedTy.t option)
    ?(nullsafe : Pos.t option = None)
    ?in_await
    pos
    env
    fty
    (el : (Ast_defs.param_kind * Nast.expr) list)
    (unpacked_element : Nast.expr option) :
    env
    * ((Ast_defs.param_kind * Tast.expr) list
      * Tast.expr option
      * locl_ty
      * bool) =
  let expr = expr ~allow_awaitable:(*?*) false in
  let (env, tyl) = TUtils.get_concrete_supertypes ~abstract_enum:true env fty in
  if List.is_empty tyl then begin
    bad_call env pos fty;
    let env = call_untyped_unpack env (get_pos fty) unpacked_element in
    let should_forget_fakes = true in
    (env, ([], None, err_witness env pos, should_forget_fakes))
  end else
    let (env, fty) =
      Typing_intersection.intersect_list env (get_reason fty) tyl
    in
    let (env, efty) =
      if TypecheckerOptions.method_call_inference (Env.get_tcopt env) then
        Env.expand_type env fty
      else
        Typing_solver.expand_type_and_solve
          ~description_of_expected:"a function value"
          env
          pos
          fty
    in
    match deref efty with
    | (r, Tdynamic) when TCO.enable_sound_dynamic (Env.get_tcopt env) ->
      let ty = MakeType.dynamic (Reason.Rdynamic_call pos) in
      let el =
        (* Need to check that the type of the unpacked_element can be,
         * coerced to dynamic, just like all of the other arguments, in addition
         * to the check below in call_untyped_unpack, that it is unpackable.
         * We don't need to unpack and check each type because a tuple is
         * coercible iff it's constituent types are. *)
        Option.value_map
          ~f:(fun u -> el @ [(Ast_defs.Pnormal, u)])
          ~default:el
          unpacked_element
      in
      let (env, tel) =
        List.map_env env el ~f:(fun env (pk, elt) ->
            (* TODO(sowens): Pass the expected type to expr *)
            let (env, te, e_ty) = expr env elt in
            let env =
              match pk with
              | Ast_defs.Pinout _ ->
                let (_, pos, _) = elt in
                let (env, _te, _ty) =
                  assign_ pos Reason.URparam_inout env elt pos efty
                in
                env
              | Ast_defs.Pnormal -> env
            in
            let (env, err_opt) =
              Result.fold
                ~ok:(fun env -> (env, None))
                ~error:(fun env -> (env, Some (e_ty, ty)))
              @@ Typing_subtype.sub_type_res
                   ~coerce:(Some Typing_logic.CoerceToDynamic)
                   env
                   e_ty
                   ty
                   (Errors.unify_error_at pos)
            in
            (env, (pk, hole_on_err ~err_opt te)))
      in
      let env = call_untyped_unpack env (Reason.to_pos r) unpacked_element in
      let should_forget_fakes = true in
      (env, (tel, None, ty, should_forget_fakes))
    | (r, ((Tprim Tnull | Tdynamic | Terr | Tany _ | Tunion []) as ty))
      when match ty with
           | Tprim Tnull -> Option.is_some nullsafe
           | _ -> true ->
      let el =
        Option.value_map
          ~f:(fun u -> el @ [(Ast_defs.Pnormal, u)])
          ~default:el
          unpacked_element
      in
      let expected_arg_ty =
        (* Note: We ought to be using 'mixed' here *)
        ExpectedTy.make pos Reason.URparam (Typing_utils.mk_tany env pos)
      in
      let (env, tel) =
        List.map_env env el ~f:(fun env (pk, elt) ->
            let (env, te, ty) = expr ~expected:expected_arg_ty env elt in
            let (env, err_opt) =
              if TCO.global_inference (Env.get_tcopt env) then
                match get_node efty with
                | Terr
                | Tany _
                | Tdynamic ->
                  Result.fold
                    ~ok:(fun env -> (env, None))
                    ~error:(fun env -> (env, Some (ty, efty)))
                  @@ Typing_coercion.coerce_type_res
                       pos
                       Reason.URparam
                       env
                       ty
                       (MakeType.unenforced efty)
                       Errors.unify_error
                | _ -> (env, None)
              else
                (env, None)
            in
            let env =
              match pk with
              | Ast_defs.Pinout _ ->
                let (_, pos, _) = elt in
                let (env, _te, _ty) =
                  assign_ pos Reason.URparam_inout env elt pos efty
                in
                env
              | Ast_defs.Pnormal -> env
            in
            (env, (pk, hole_on_err ~err_opt te)))
      in
      let env = call_untyped_unpack env (Reason.to_pos r) unpacked_element in
      let ty =
        match ty with
        | Tprim Tnull -> mk (r, Tprim Tnull)
        | Tdynamic -> MakeType.dynamic (Reason.Rdynamic_call pos)
        | Terr
        | Tany _ ->
          Typing_utils.mk_tany env pos
        | Tunion []
        | _ (* _ should not happen! *) ->
          mk (r, Tunion [])
      in
      let should_forget_fakes = true in
      (env, (tel, None, ty, should_forget_fakes))
    | (_, Tunion [ty]) ->
      call ~expected ~nullsafe ?in_await pos env ty el unpacked_element
    | (r, Tunion tyl) ->
      let (env, resl) =
        List.map_env env tyl ~f:(fun env ty ->
            call ~expected ~nullsafe ?in_await pos env ty el unpacked_element)
      in
      let should_forget_fakes =
        List.exists resl ~f:(fun (_, _, _, forget) -> forget)
      in
      let retl = List.map resl ~f:(fun (_, _, x, _) -> x) in
      let (env, ty) = Union.union_list env r retl in
      (* We shouldn't be picking arbitrarily for the TAST here, as TAST checks
       * depend on the types inferred. Here's we're preserving legacy behaviour
       * by picking the last one.
       * TODO: don't do this, instead use subtyping to push unions
       * through function types
       *)
      let (tel, typed_unpack_element, _, _) = List.hd_exn (List.rev resl) in
      (env, (tel, typed_unpack_element, ty, should_forget_fakes))
    | (r, Tintersection tyl) ->
      let (env, resl) =
        TUtils.run_on_intersection env tyl ~f:(fun env ty ->
            call ~expected ~nullsafe ?in_await pos env ty el unpacked_element)
      in
      let should_forget_fakes =
        List.for_all resl ~f:(fun (_, _, _, forget) -> forget)
      in
      let retl = List.map resl ~f:(fun (_, _, x, _) -> x) in
      let (env, ty) = Inter.intersect_list env r retl in
      (* We shouldn't be picking arbitrarily for the TAST here, as TAST checks
       * depend on the types inferred. Here we're preserving legacy behaviour
       * by picking the last one.
       * TODO: don't do this, instead use subtyping to push intersections
       * through function types
       *)
      let (tel, typed_unpack_element, _, _) = List.hd_exn (List.rev resl) in
      (env, (tel, typed_unpack_element, ty, should_forget_fakes))
    | (r2, Tfun ft) ->
      (* Typing of format string functions. It is dependent on the arguments (el)
       * so it cannot be done earlier.
       *)
      let pos_def = Reason.to_pos r2 in
      let (env, ft) = Typing_exts.retype_magic_func env ft el in
      let (env, var_param) = variadic_param env ft in
      (* Force subtype with expected result *)
      let env =
        check_expected_ty "Call result" env ft.ft_ret.et_type expected
      in
      let env = Env.set_tyvar_variance env ft.ft_ret.et_type in
      let is_lambda (_, _, e) =
        match e with
        | Efun _
        | Lfun _ ->
          true
        | _ -> false
      in
      let get_next_param_info paraml =
        match paraml with
        | param :: paraml -> (false, Some param, paraml)
        | [] -> (true, var_param, paraml)
      in
      let rec compute_enum_name env lty =
        match get_node lty with
        | Tclass ((_, enum_name), _, _) when Env.is_enum_class env enum_name ->
          (env, Some enum_name)
        | Tgeneric (name, _) ->
          let (env, upper_bounds) =
            Typing_utils.collect_enum_class_upper_bounds env name
          in
          begin
            match upper_bounds with
            | None -> (env, None)
            | Some upper_bound ->
              (* To avoid ambiguity, we only support the case where
               * there is a single upper bound that is an EnumClass.
               * We might want to relax that later (e.g. with  the
               * support for intersections.
               * See Typing_type_wellformedness.check_via_label_on_param.
               *)
              begin
                match get_node upper_bound with
                | Tclass ((_, name), _, _) when Env.is_enum_class env name ->
                  (env, Some name)
                | _ -> (env, None)
              end
          end
        | Tvar var ->
          (* minimal support to only deal with Tvar when:
           * - it is the valueOf from BuiltinEnumClass.
           *   In this case, we know the tvar as a single lowerbound,
           *   `this` which must be an enum class.
           * - it is a generic "TX::T" from a where clause. We try
           *   to look at an upper bound, if it is an enum class, or fail.
           *
           * We could relax this in the future but
           * I want to avoid complex constraints for now.
           *)
          let lower_bounds = Env.get_tyvar_lower_bounds env var in
          if ITySet.cardinal lower_bounds <> 1 then
            (env, None)
          else (
            match ITySet.choose lower_bounds with
            | ConstraintType _ -> (env, None)
            | LoclType lower ->
              (match get_node lower with
              | Tclass ((_, enum_name), _, _)
                when Env.is_enum_class env enum_name ->
                (env, Some enum_name)
              | Tgeneric _ -> compute_enum_name env lower
              | _ -> (env, None))
          )
        | _ ->
          (* Already reported, see Typing_type_wellformedness *)
          (env, None)
      in
      let check_arg env param_kind ((_, pos, arg) as e) opt_param ~is_variadic =
        match opt_param with
        | Some param ->
          (* First check if __ViaLabel is used or if the parameter is
           * a HH\Label.
           *)
          let (env, label_type) =
            let via_label = get_fp_via_label param in
            let ety = param.fp_type.et_type in
            let (env, ety) = Env.expand_type env ety in
            let is_label =
              match get_node ety with
              | Tnewtype (name, _, _) ->
                String.equal SN.Classes.cEnumClassLabel name
              | _ -> false
            in
            match arg with
            | EnumClassLabel (None, label_name) when via_label || is_label ->
              (match get_node ety with
              | Tnewtype (name, [ty_enum; _ty_interface], _)
                when String.equal name SN.Classes.cMemberOf
                     || String.equal name SN.Classes.cEnumClassLabel ->
                let ctor = name in
                (match compute_enum_name env ty_enum with
                | (env, None) -> (env, EnumClassLabelOps.ClassNotFound)
                | (env, Some enum_name) ->
                  EnumClassLabelOps.expand
                    pos
                    env
                    ~full:false
                    ~ctor
                    enum_name
                    label_name)
              | _ ->
                (* Already reported, see Typing_type_wellformedness *)
                (env, EnumClassLabelOps.Invalid))
            | EnumClassLabel (Some _, _) ->
              (* Full info is here, use normal inference *)
              (env, EnumClassLabelOps.Skip)
            | Class_const _ when via_label ->
              Errors.enum_class_label_invalid_argument pos ~is_proj:true;
              (env, EnumClassLabelOps.Invalid)
            | _ when via_label ->
              Errors.enum_class_label_invalid_argument pos ~is_proj:false;
              (env, EnumClassLabelOps.Invalid)
            | _ -> (env, EnumClassLabelOps.Skip)
          in
          let (env, te, ty) =
            match label_type with
            | EnumClassLabelOps.Success (te, ty)
            | EnumClassLabelOps.LabelNotFound (te, ty) ->
              (env, te, ty)
            | _ ->
              let expected =
                ExpectedTy.make_and_allow_coercion_opt
                  env
                  pos
                  Reason.URparam
                  param.fp_type
              in
              expr
                ~accept_using_var:(get_fp_accept_disposable param)
                ?expected
                env
                e
          in
          let (env, err_opt) =
            call_param env param param_kind (e, ty) ~is_variadic
          in
          (env, Some (hole_on_err ~err_opt te, ty))
        | None ->
          let expected =
            ExpectedTy.make pos Reason.URparam (Typing_utils.mk_tany env pos)
          in
          let (env, te, ty) = expr ~expected env e in
          (env, Some (te, ty))
      in
      let set_tyvar_variance_from_lambda_param env opt_param =
        match opt_param with
        | Some param ->
          let rec set_params_variance env ty =
            let (env, ty) = Env.expand_type env ty in
            match get_node ty with
            | Tunion [ty] -> set_params_variance env ty
            | Toption ty -> set_params_variance env ty
            | Tfun { ft_params; ft_ret; _ } ->
              let env =
                List.fold
                  ~init:env
                  ~f:(fun env param ->
                    Env.set_tyvar_variance env param.fp_type.et_type)
                  ft_params
              in
              Env.set_tyvar_variance env ft_ret.et_type ~flip:true
            | _ -> env
          in
          set_params_variance env param.fp_type.et_type
        | None -> env
      in
      (* Given an expected function type ft, check types for the non-unpacked
       * arguments. Don't check lambda expressions if check_lambdas=false *)
      let rec check_args check_lambdas env el paraml =
        match el with
        (* We've got an argument *)
        | ((pk, e), opt_result) :: el ->
          (* Pick up next parameter type info *)
          let (is_variadic, opt_param, paraml) = get_next_param_info paraml in
          let (env, one_result) =
            match (check_lambdas, is_lambda e) with
            | (false, false)
            | (true, true) ->
              check_arg env pk e opt_param ~is_variadic
            | (false, true) ->
              let env = set_tyvar_variance_from_lambda_param env opt_param in
              (env, opt_result)
            | (true, false) -> (env, opt_result)
          in
          let (env, rl, paraml) = check_args check_lambdas env el paraml in
          (env, ((pk, e), one_result) :: rl, paraml)
        | [] -> (env, [], paraml)
      in
      (* Same as above, but checks the types of the implicit arguments, which are
       * read from the context *)
      let check_implicit_args env =
        let capability =
          Typing_coeffects.get_type ft.ft_implicit_params.capability
        in
        if not (TypecheckerOptions.call_coeffects (Env.get_tcopt env)) then
          env
        else
          let env_capability =
            Env.get_local_check_defined env (pos, Typing_coeffects.capability_id)
          in
          Type.sub_type
            pos
            Reason.URnone
            env
            env_capability
            capability
            (fun ?code:_ ?quickfixes:_ _ _ ->
              Errors.call_coeffect_error
                pos
                ~available_incl_unsafe:
                  (Typing_coeffects.pretty env env_capability)
                ~available_pos:(Typing_defs.get_pos env_capability)
                ~required_pos:(Typing_defs.get_pos capability)
                ~required:(Typing_coeffects.pretty env capability))
      in
      let should_forget_fakes =
        (* If the function doesn't have write priveleges to properties, fake
           members cannot be reassigned, so their refinements stand. *)
        let capability =
          Typing_coeffects.get_type ft.ft_implicit_params.capability
        in
        SubType.is_sub_type
          env
          capability
          (MakeType.capability Reason.Rnone SN.Capabilities.writeProperty)
      in

      (* First check the non-lambda arguments. For generic functions, this
       * is likely to resolve type variables to concrete types *)
      let rl = List.map el ~f:(fun e -> (e, None)) in
      let (env, rl, _) = check_args false env rl ft.ft_params in
      (* Now check the lambda arguments, hopefully with type variables resolved *)
      let (env, rl, paraml) = check_args true env rl ft.ft_params in
      (* We expect to see results for all arguments after this second pass *)
      let get_param ((pk, _), opt) =
        match opt with
        | Some (e, ty) -> ((pk, e), ty)
        | None -> failwith "missing parameter in check_args"
      in
      let (tel, _) =
        let l = List.map rl ~f:get_param in
        List.unzip l
      in
      let env = check_implicit_args env in
      let (env, typed_unpack_element, arity, did_unpack) =
        match unpacked_element with
        | None -> (env, None, List.length el, false)
        | Some e ->
          (* Now that we're considering an splat (Some e) we need to construct a type that
           * represents the remainder of the function's parameters. `paraml` represents those
           * remaining parameters, and the variadic parameter is stored in `var_param`. For example, given
           *
           * function f(int $i, string $j, float $k = 3.14, mixed ...$m): void {}
           * function g((string, float, bool) $t): void {
           *   f(3, ...$t);
           * }
           *
           * the constraint type we want is splat([#1], [opt#2], #3).
           *)
          let (consumed, required_params, optional_params) =
            split_remaining_params_required_optional ft paraml
          in
          let (_, p1, _) = e in
          let (env, (d_required, d_optional, d_variadic)) =
            generate_splat_type_vars
              env
              p1
              required_params
              optional_params
              var_param
          in
          let destructure_ty =
            ConstraintType
              (mk_constraint_type
                 ( Reason.Runpack_param (p1, pos_def, consumed),
                   Tdestructure
                     {
                       d_required;
                       d_optional;
                       d_variadic;
                       d_kind = SplatUnpack;
                     } ))
          in
          let (env, te, ty) = expr env e in
          (* Populate the type variables from the expression in the splat *)
          let env_res =
            Type.sub_type_i_res
              p1
              Reason.URparam
              env
              (LoclType ty)
              destructure_ty
              Errors.unify_error
          in
          let (env, te) =
            match env_res with
            | Error env ->
              (* Our type cannot be destructured, add a hole with `nothing`
                 as expected type *)
              let ty_expect =
                MakeType.nothing
                @@ Reason.Rsolve_fail (Pos_or_decl.of_raw_pos pos)
              in
              (env, mk_hole te ~ty_have:ty ~ty_expect)
            | Ok env ->
              (* We have a type that can be destructured so continue and use
                 the type variables for the remaining parameters *)
              let (env, err_opts) =
                List.fold2_exn
                  ~init:(env, [])
                  d_required
                  required_params
                  ~f:(fun (env, errs) elt param ->
                    let (env, err_opt) =
                      call_param
                        env
                        param
                        Ast_defs.Pnormal
                        (e, elt)
                        ~is_variadic:false
                    in
                    (env, err_opt :: errs))
              in
              let (env, err_opts) =
                List.fold2_exn
                  ~init:(env, err_opts)
                  d_optional
                  optional_params
                  ~f:(fun (env, errs) elt param ->
                    let (env, err_opt) =
                      call_param
                        env
                        param
                        Ast_defs.Pnormal
                        (e, elt)
                        ~is_variadic:false
                    in
                    (env, err_opt :: errs))
              in
              let (env, var_err_opt) =
                Option.map2 d_variadic var_param ~f:(fun v vp ->
                    call_param env vp Ast_defs.Pnormal (e, v) ~is_variadic:true)
                |> Option.value ~default:(env, None)
              in
              let subtyping_errs = (List.rev err_opts, var_err_opt) in
              let te =
                match (List.filter_map ~f:Fn.id err_opts, var_err_opt) with
                | ([], None) -> te
                | _ ->
                  let (_, pos, _) = te in
                  hole_on_err
                    te
                    ~err_opt:(Some (ty, pack_errs pos ty subtyping_errs))
              in
              (env, te)
          in

          ( env,
            Some te,
            List.length el + List.length d_required,
            Option.is_some d_variadic )
      in
      (* If we unpacked an array, we don't check arity exactly. Since each
       * unpacked array consumes 1 or many parameters, it is nonsensical to say
       * that not enough args were passed in (so we don't do the min check).
       *)
      let () = check_arity ~did_unpack pos pos_def ft arity in
      (* Variadic params cannot be inout so we can stop early *)
      let env = wfold_left2 inout_write_back env ft.ft_params el in
      (env, (tel, typed_unpack_element, ft.ft_ret.et_type, should_forget_fakes))
    | (r, Tvar _)
      when TypecheckerOptions.method_call_inference (Env.get_tcopt env) ->
      (*
            Typecheck calls with unresolved function type by constructing a
            suitable function type from the arguments and invoking subtyping.
          *)
      let (env, typed_el, type_of_el) =
        argument_list_exprs (expr ~accept_using_var:true) env el
      in
      let (env, typed_unpacked_element, type_of_unpacked_element) =
        match unpacked_element with
        | Some unpacked ->
          let (env, typed_unpacked, type_of_unpacked) =
            expr ~accept_using_var:true env unpacked
          in
          (env, Some typed_unpacked, Some type_of_unpacked)
        | None -> (env, None, None)
      in
      let mk_function_supertype env pos (type_of_el, type_of_unpacked_element) =
        let mk_fun_param ty =
          let flags =
            (* Keep supertype as permissive as possible: *)
            make_fp_flags
              ~mode:FPnormal (* TODO: deal with `inout` parameters *)
              ~accept_disposable:false (* TODO: deal with disposables *)
              ~has_default:false
              ~ifc_external:false
              ~ifc_can_call:false
              ~via_label:false
              ~readonly:false
          in
          {
            fp_pos = Pos_or_decl.of_raw_pos pos;
            fp_name = None;
            fp_type = MakeType.enforced ty;
            fp_flags = flags;
          }
        in
        let ft_arity =
          match type_of_unpacked_element with
          | Some type_of_unpacked ->
            let fun_param = mk_fun_param type_of_unpacked in
            Fvariadic fun_param
          | None -> Fstandard
        in
        (* TODO: ensure `ft_params`/`ft_where_constraints` don't affect subtyping *)
        let ft_tparams = [] in
        let ft_where_constraints = [] in
        let ft_params = List.map ~f:mk_fun_param type_of_el in
        let ft_implicit_params =
          {
            capability =
              CapDefaults (Pos_or_decl.of_raw_pos pos)
              (* TODO(coeffects) should this be a different type? *);
          }
        in
        let (env, return_ty) = Env.fresh_type env pos in
        let return_ty =
          match in_await with
          | None -> return_ty
          | Some r -> MakeType.awaitable r return_ty
        in
        let ft_ret = MakeType.enforced return_ty in
        let ft_flags =
          (* Keep supertype as permissive as possible: *)
          make_ft_flags
            Ast_defs.FSync (* `FSync` fun can still return `Awaitable<_>` *)
            ~return_disposable:false (* TODO: deal with disposable return *)
            ~returns_readonly:false
            ~readonly_this:false
            ~support_dynamic_type:false
        in
        let ft_ifc_decl = Typing_defs_core.default_ifc_fun_decl in
        let fun_locl_type =
          {
            ft_arity;
            ft_tparams;
            ft_where_constraints;
            ft_params;
            ft_implicit_params;
            ft_ret;
            ft_flags;
            ft_ifc_decl;
          }
        in
        let fun_type = mk (r, Tfun fun_locl_type) in
        let env = Env.set_tyvar_variance env fun_type in
        (env, fun_type, return_ty)
      in
      let (env, fun_type, return_ty) =
        mk_function_supertype env pos (type_of_el, type_of_unpacked_element)
      in
      let env =
        Type.sub_type pos Reason.URnone env efty fun_type Errors.unify_error
      in
      let should_forget_fakes = true in
      (env, (typed_el, typed_unpacked_element, return_ty, should_forget_fakes))
    | _ ->
      bad_call env pos efty;
      let env = call_untyped_unpack env (get_pos efty) unpacked_element in
      let should_forget_fakes = true in
      (env, ([], None, err_witness env pos, should_forget_fakes))

and call_untyped_unpack env f_pos unpacked_element =
  match unpacked_element with
  (* In the event that we don't have a known function call type, we can still
   * verify that any unpacked arguments (`...$args`) are something that can
   * be actually unpacked. *)
  | None -> env
  | Some e ->
    let (env, _, ety) = expr env e ~allow_awaitable:(*?*) false in
    let (_, p, _) = e in
    let (env, ty) = Env.fresh_type env p in
    let destructure_ty =
      MakeType.simple_variadic_splat (Reason.Runpack_param (p, f_pos, 0)) ty
    in
    Type.sub_type_i
      p
      Reason.URnone
      env
      (LoclType ety)
      destructure_ty
      Errors.unify_error

(**
 * Build an environment for the true or false branch of
 * conditional statements.
 *)
and condition ?lhs_of_null_coalesce env tparamet ((ty, p, e) as te : Tast.expr)
    =
  let condition = condition ?lhs_of_null_coalesce in
  match e with
  | Aast.Hole (e, _, _, _) -> condition env tparamet e
  | Aast.True when not tparamet ->
    (LEnv.drop_cont env C.Next, Local_id.Set.empty)
  | Aast.False when tparamet -> (LEnv.drop_cont env C.Next, Local_id.Set.empty)
  | Aast.Call ((_, _, Aast.Id (_, func)), _, [(_, te)], None)
    when String.equal SN.StdlibFunctions.is_null func ->
    condition_nullity ~nonnull:(not tparamet) env te
  | Aast.Binop ((Ast_defs.Eqeq | Ast_defs.Eqeqeq), (_, _, Aast.Null), e)
  | Aast.Binop ((Ast_defs.Eqeq | Ast_defs.Eqeqeq), e, (_, _, Aast.Null)) ->
    condition_nullity ~nonnull:(not tparamet) env e
  | Aast.Lvar _
  | Aast.Obj_get _
  | Aast.Class_get _
  | Aast.Binop (Ast_defs.Eq None, _, _) ->
    let (env, ety) = Env.expand_type env ty in
    (match get_node ety with
    | Tprim Tbool -> (env, Local_id.Set.empty)
    | _ -> condition_nullity ~nonnull:tparamet env te)
  | Aast.Binop (((Ast_defs.Diff | Ast_defs.Diff2) as op), e1, e2) ->
    let op =
      if Ast_defs.(equal_bop op Diff) then
        Ast_defs.Eqeq
      else
        Ast_defs.Eqeqeq
    in
    condition env (not tparamet) (ty, p, Aast.Binop (op, e1, e2))
  (* Conjunction of conditions. Matches the two following forms:
      if (cond1 && cond2)
      if (!(cond1 || cond2))
  *)
  | Aast.Binop (((Ast_defs.Ampamp | Ast_defs.Barbar) as bop), e1, e2)
    when Bool.equal tparamet Ast_defs.(equal_bop bop Ampamp) ->
    let (env, lset1) = condition env tparamet e1 in
    (* This is necessary in case there is an assignment in e2
     * We essentially redo what has been undone in the
     * `Binop (Ampamp|Barbar)` case of `expr` *)
    let (env, _, _) =
      expr env (Tast.to_nast_expr e2) ~allow_awaitable:(*?*) false
    in
    let (env, lset2) = condition env tparamet e2 in
    (env, Local_id.Set.union lset1 lset2)
  (* Disjunction of conditions. Matches the two following forms:
      if (cond1 || cond2)
      if (!(cond1 && cond2))
  *)
  | Aast.Binop (((Ast_defs.Ampamp | Ast_defs.Barbar) as bop), e1, e2)
    when Bool.equal tparamet Ast_defs.(equal_bop bop Barbar) ->
    let (env, lset1, lset2) =
      branch
        env
        (fun env ->
          (* Either cond1 is true and we don't know anything about cond2... *)
          condition env tparamet e1)
        (fun env ->
          (* ... Or cond1 is false and therefore cond2 must be true *)
          let (env, _lset) = condition env (not tparamet) e1 in
          (* Similarly to the conjunction case, there might be an assignment in
             cond2 which we must account for. Again we redo what has been undone in
             the `Binop (Ampamp|Barbar)` case of `expr` *)
          let (env, _, _) =
            expr env (Tast.to_nast_expr e2) ~allow_awaitable:(*?*) false
          in
          condition env tparamet e2)
    in
    (env, Local_id.Set.union lset1 lset2)
  | Aast.Call ((_, p, Aast.Id (_, f)), _, [(_, lv)], None)
    when tparamet && String.equal f SN.StdlibFunctions.is_dict_or_darray ->
    safely_refine_is_array env HackDictOrDArray p f lv
  | Aast.Call ((_, p, Aast.Id (_, f)), _, [(_, lv)], None)
    when tparamet && String.equal f SN.StdlibFunctions.is_vec_or_varray ->
    safely_refine_is_array env HackVecOrVArray p f lv
  | Aast.Call ((_, p, Aast.Id (_, f)), _, [(_, lv)], None)
    when tparamet && String.equal f SN.StdlibFunctions.is_any_array ->
    safely_refine_is_array env AnyArray p f lv
  | Aast.Call ((_, p, Aast.Id (_, f)), _, [(_, lv)], None)
    when tparamet && String.equal f SN.StdlibFunctions.is_php_array ->
    safely_refine_is_array env PHPArray p f lv
  | Aast.Call
      ( ( _,
          _,
          Aast.Class_const ((_, _, Aast.CI (_, class_name)), (_, method_name))
        ),
        _,
        [(_, shape); (_, field)],
        None )
    when tparamet
         && String.equal class_name SN.Shapes.cShapes
         && String.equal method_name SN.Shapes.keyExists ->
    key_exists env p shape field
  | Aast.Unop (Ast_defs.Unot, e) -> condition env (not tparamet) e
  | Aast.Is (ivar, h) ->
    let reason = Reason.Ris (fst h) in
    let refine_type env ivar ivar_ty hint_ty =
      let (env, refined_ty) =
        refine_and_simplify_intersection env p reason (fst ivar) ivar_ty hint_ty
      in
      (set_local env ivar refined_ty, Local_id.Set.singleton (snd ivar))
    in
    let (env, lset) =
      match snd h with
      | Aast.Hnonnull -> condition_nullity ~nonnull:tparamet env ivar
      | Aast.Hprim Tnull -> condition_nullity ~nonnull:(not tparamet) env ivar
      | _ -> (env, Local_id.Set.empty)
    in
    let (env, locl) =
      make_a_local_of ~include_this:true env (Tast.to_nast_expr ivar)
    in
    (match locl with
    | Some locl_ivar ->
      let (env, hint_ty) =
        Phase.localize_hint_no_subst env ~ignore_errors:false h
      in
      let (env, hint_ty) =
        if not tparamet then
          Inter.negate_type env reason hint_ty ~approx:TUtils.ApproxUp
        else
          (env, hint_ty)
      in
      refine_type env locl_ivar (fst3 ivar) hint_ty
    | None -> (env, lset))
  | _ -> (env, Local_id.Set.empty)

and string2 env idl =
  let (env, tel) =
    List.fold_left idl ~init:(env, []) ~f:(fun (env, tel) x ->
        let (env, te, ty) = expr env x ~allow_awaitable:(*?*) false in
        let (_, p, _) = x in
        if
          TypecheckerOptions.enable_strict_string_concat_interp
            (Env.get_tcopt env)
        then
          let r = Reason.Rinterp_operand p in
          let (env, formatter_tyvar) = Env.fresh_type_invariant env p in
          let stringlike =
            MakeType.union
              r
              [
                MakeType.arraykey r;
                MakeType.dynamic r;
                MakeType.new_type r SN.Classes.cHHFormatString [formatter_tyvar];
              ]
          in
          let (env, err_opt) =
            Result.fold
              ~ok:(fun env -> (env, None))
              ~error:(fun env -> (env, Some (ty, stringlike)))
            @@ Typing_ops.sub_type_res
                 p
                 Reason.URstr_interp
                 env
                 ty
                 stringlike
                 Errors.strict_str_interp_type_mismatch
          in
          (env, hole_on_err ~err_opt te :: tel)
        else
          let env = Typing_substring.sub_string p env ty in
          (env, te :: tel))
  in
  (env, List.rev tel)

and user_attribute env ua =
  let (env, typed_ua_params) =
    List.map_env env ua.ua_params ~f:(fun env e ->
        let (env, te, _) = expr env e ~allow_awaitable:(*?*) false in
        (env, te))
  in
  (env, { Aast.ua_name = ua.ua_name; Aast.ua_params = typed_ua_params })

and file_attributes env file_attrs =
  (* Disable checking of error positions, as file attributes have spans that
   * aren't subspans of the class or function into which they are copied *)
  Errors.run_with_span Pos.none @@ fun () ->
  List.map_env env file_attrs ~f:(fun env fa ->
      let (env, user_attributes) =
        attributes_check_def env SN.AttributeKinds.file fa.fa_user_attributes
      in
      let env = set_tcopt_unstable_features env fa in
      ( env,
        {
          Aast.fa_user_attributes = user_attributes;
          Aast.fa_namespace = fa.fa_namespace;
        } ))

and type_param env t =
  let (env, user_attributes) =
    attributes_check_def env SN.AttributeKinds.typeparam t.tp_user_attributes
  in
  let (env, tp_parameters) = List.map_env env t.tp_parameters ~f:type_param in
  ( env,
    {
      Aast.tp_variance = t.tp_variance;
      Aast.tp_name = t.tp_name;
      Aast.tp_parameters;
      Aast.tp_constraints = t.tp_constraints;
      Aast.tp_reified = reify_kind t.tp_reified;
      Aast.tp_user_attributes = user_attributes;
    } )

(* Calls the method of a class, but allows the f callback to override the
 * return value type *)
and overload_function
    make_call fpos p env class_id method_id el unpacked_element f =
  let (env, _tal, tcid, ty) = class_expr env [] class_id in
  let (env, _tel, _) =
    argument_list_exprs (expr ~allow_awaitable:false (*?*)) env el
  in
  let (env, (fty, tal)) =
    class_get
      ~is_method:true
      ~is_const:false
      ~coerce_from_ty:None
      env
      ty
      method_id
      class_id
  in
  let (env, (tel, typed_unpack_element, res, should_forget_fakes)) =
    call ~expected:None p env fty el unpacked_element
  in
  let (env, ty) = f env fty res el in
  let (env, fty) = Env.expand_type env fty in
  let fty =
    map_ty fty ~f:(function
        | Tfun ft -> Tfun { ft with ft_ret = MakeType.unenforced ty }
        | ty -> ty)
  in
  let te = Tast.make_typed_expr fpos fty (Aast.Class_const (tcid, method_id)) in
  (make_call env te tal tel typed_unpack_element ty, should_forget_fakes)

and update_array_type ?lhs_of_null_coalesce p env e1 valkind =
  match valkind with
  | `lvalue
  | `lvalue_subexpr ->
    let (env, te1, ty1) =
      raw_expr
        ~valkind:`lvalue_subexpr
        ~check_defined:true
        env
        e1
        ~allow_awaitable:(*?*) false
    in
    begin
      match e1 with
      | (_, _, Lvar (_, x)) ->
        (* type_mapper has updated the type in ty1 typevars, but we
             need to update the local variable type too *)
        let env = set_local env (p, x) ty1 in
        (env, te1, ty1)
      | _ -> (env, te1, ty1)
    end
  | _ -> raw_expr ?lhs_of_null_coalesce env e1 ~allow_awaitable:(*?*) false

(* External API *)
let expr ?expected env e =
  Typing_env.with_origin2 env Decl_counters.Body (fun env ->
      expr ?expected env e ~allow_awaitable:(*?*) false)

let expr_with_pure_coeffects ?expected env e =
  Typing_env.with_origin2 env Decl_counters.Body (fun env ->
      expr_with_pure_coeffects ?expected env e ~allow_awaitable:(*?*) false)

let stmt env st =
  Typing_env.with_origin env Decl_counters.Body (fun env -> stmt env st)
