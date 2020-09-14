type ('a, 'b) either = Left of 'a | Right of 'b
(* <- keyword *)    (* ^ tag *)
   (* ^ variable *)      (* ^ keyword *)
       (* ^ variable *)     (* ^ variable *)
           (* ^ type *)        (* ^ punctuation.delimiter *)

let x : (bool, int) either = Left true
      (* ^ type.builtin *)
            (* ^ type.builtin *)
                 (* ^ type *)
                          (* ^ tag *)


type ('a, 'b) either' = [`Left of 'a | `Right of 'b]
  (* ^ punctuation.bracket *)
     (* ^ punctuation.delimiter *)
         (* ^ punctuation.bracket *)
                      (* ^ tag *)   (* ^ tag *)

type pos = {x : int; y : int}
        (* ^ punctuation.bracket *)
         (* ^ property *)
                (* ^ punctuation.delimiter *)
                  (* ^ property *)
                         (* ^ punctuation.bracket *)

type x = < x : int >
      (* ^ punctuation.bracket *)
                (* ^ punctuation.bracket *)

type (-'a, +'b) func = 'a -> 'b
   (* ^ punctuation.delimiter *)
        (* ^ punctuation.delimiter *)
