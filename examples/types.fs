
type IFun =
  abstract member MyFun: x:int * y:int -> int

  member _.F(?x:int) = x
