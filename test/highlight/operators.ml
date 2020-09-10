let ( + ) = ( * )
   (* ^ operator *)
           (* ^ operator *)
let x = (1 + 2) :: 3
        (* ^ operator *)
             (* ^ operator *)

let ( let* ) x f = f x
   (* ^ operator *)

let () =
  let* x = 0 and* y = 1 in
  (* <- keyword *)
          (* ^ keyword *)
  ignore x
