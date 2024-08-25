; See: https://docs.helix-editor.com/guides/textobject.html

; function.inside & around
; ------------------------

(global_function
  body: (_) @function.inside) @function.around

(init_function
  body: (_) @function.inside) @function.around

(bounced_function
  body: (_) @function.inside) @function.around

(receive_function
  body: (_) @function.inside) @function.around

(external_function
  body: (_) @function.inside) @function.around

(storage_function
  body: (_) @function.inside) @function.around

; class.inside & around
; ---------------------

(struct
  body: (_) @class.inside) @class.around

(message
  body: (_) @class.inside) @class.around

(contract
  body: (_) @class.inside) @class.around

; NOTE: Marked as @definition.interface in tags, as it's semantically correct
(trait
  body: (_) @class.inside) @class.around

; parameter.inside & around
; -------------------------

(parameter_list
  ((_) @parameter.inside @parameter.movement . ","? @parameter.around) @parameter.around)

(argument_list
  ((_) @parameter.inside @parameter.movement . ","? @parameter.around) @parameter.around)

(instance_argument_list
  ((_) @parameter.inside @parameter.movement . ","? @parameter.around) @parameter.around)

; single parameter

(receive_function
  parameter: (_) @parameter.inside @parameter.around)

(bounced_function
  parameter: (_) @parameter.inside @parameter.around)

(external_function
  parameter: (_) @parameter.inside @parameter.around)

; comment.inside
; --------------

(comment) @comment.inside

; comment.around
; --------------

(comment)+ @comment.around
