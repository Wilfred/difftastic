let f x ({a = y} as r) (Some z) = (x, a, y, r, z)
                                (* ^ variable.parameter *)
                                   (* ^ variable *)
                                      (* ^ variable.parameter *)
                                         (* ^ variable.parameter *)
                                            (* ^ variable.parameter *)

let f = fun x -> (x, y)
               (* ^ variable.parameter *)
                  (* ^ variable *)

let _ =
  match o with
  | Some x -> x
           (* ^ variable.parameter *)
  | None -> y
         (* ^ variable *)

let () =
  for x = 1 to n do
    ignore x;
        (* ^ variable.parameter *)
    ignore n;
        (* ^ variable *)
  done
