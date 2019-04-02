
updateReqs router cmds reqs =
  case cmds of

        Request req ->
          Process.spawn (Elm.Kernel.Http.toTask router (Platform.sendToApp router) req)
            |> Task.andThen (\pid ->
                  case req.tracker of
                    Nothing ->
                      updateReqs router otherCmds reqs

                    Just tracker ->
                      updateReqs router otherCmds (Dict.insert tracker pid reqs)
              )


