module type T = sig
(* <- keyword *)
    (* ^ keyword *)
         (* ^ constructor *)
           (* ^ punctuation.delimiter *)
             (* ^ keyword *)
  val x : int
end
(* <- keyword *)

module M : T = struct
(* <- keyword *)
    (* ^ constructor *)
      (* ^ punctuation.delimiter *)
        (* ^ constructor *)
  let x = 0
end

module F (M : T) = struct
    (* ^ constructor *)
      (* ^ punctuation.bracket *)
       (* ^ constructor *)
           (* ^ constructor *)
            (* ^ punctuation.bracket *)
                (* ^ keyword *)
  include M
  (* <- keyword *)
       (* ^ constructor *)
end

module N = F (M)
    (* ^ constructor *)
        (* ^ constructor *)
           (* ^ constructor *)

let x = N.x
     (* ^ constructor *)
      (* ^ punctuation.delimiter *)
