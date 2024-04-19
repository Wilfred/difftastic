let a b =
    match a, b with
    | true, true -> sb.Append(basePath[1]) |> ignore
    | false, false -> sb.Append('/').Append(basePath) |> ignore
    | _ -> sb.Append(basePath) |> ignore
