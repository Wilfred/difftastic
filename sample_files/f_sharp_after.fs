namespace X

open System
open System.IO

type A = 
    | A of int
    | B of string

type Record = { 
    A : string
    B : int
}

module M =

    let f y = y + 1

    let list = [
        "a"
        "b"
    ]