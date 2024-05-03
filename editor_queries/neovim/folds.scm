; See: https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md#folds
[
  ; import …
  (import_statement)+
  ; (…, …)
  (parameter_list)
  (argument_list)
  ; {…, …}
  (instance_argument_list)
  ; {…; …}
  (message_body)
  (struct_body)
  (contract_body)
  (trait_body)
  (function_body)
  (block_statement)
] @fold
