foo() ->
  ?assertMatch({ok, _}, start()),
  %% ^ keyword.directive

  ?_assertEqual(a, a),
  %% ^ keyword.directive

  State#state.config#config.pid
  %% ^ variable
  %%   ^ operator
  %%      ^ type
  %%         ^ punctuation.delimiter
  %%            ^ property
  %%                ^ operator
  %%                   ^ type
  %%                         ^ property
  .
