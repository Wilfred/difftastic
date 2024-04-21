
type A(x: int, y:int) =
  interface IFun<'T> with
    member _.Invoke(x: unit -> 'T) = x()
