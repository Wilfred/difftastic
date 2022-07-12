vec[1, 2]
  |> Vec\map($$, $var ==> $var + 1)
  |> $_ ==> {
    return $$;
  }($$);
