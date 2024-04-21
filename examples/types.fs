
type A(x: int, y:int) =
  new(x:int) = A(x, x)

  member _.P = x + y
