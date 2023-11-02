(comment) @comment.inside

[
  (data)
  (type)
  (newtype)
] @class.around

((signature)? (function body:(_) @function.inside)) @function.around 
(exp_lambda) @function.around

(data (type_variable) @parameter.inside)
(patterns (_) @parameter.inside)
