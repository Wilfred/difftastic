let f x = failwith "not_implemented"
 (* ^ function *)
   (* ^ variable.parameter *)
       (* ^ function.builtin *)
let f = fun x -> x
 (* ^ function *)
         (* ^ variable.parameter *)
              (* ^ variable.parameter *)

let f = function Some x -> true | None -> false
 (* ^ function *)

module type T = sig
  val f : int -> int
   (* ^ function *)
end

external f : int -> int = "f"
      (* ^ function *)

let x = f 0
 (* ^ variable *)
     (* ^ function *)

let x = f @@ x |> f
 (* ^ variable *)
     (* ^ function *)
          (* ^ variable *)
               (* ^ function *)

let f ~l:x = 0
    (* ^ property *)
