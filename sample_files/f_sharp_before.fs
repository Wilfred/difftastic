namespace X

open System

type A = A of int

type Record = { A : string }

module M =

    let f x = x + 1

    let list = []