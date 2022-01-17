type foo =
  | Bar
  | Biz of ('ex, 'en) list

let do_stuff x =
  match x with
  | `Foo -> 1
  | _ -> 3

let stuffs y =
  y + 1
