namespace Bad

type A() =
    member this.Curried (x: int) (y: int) = x + y

module Program =

    [<EntryPoint>]
    let main args = ()
