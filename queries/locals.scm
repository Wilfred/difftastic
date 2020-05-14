((method) @local.scope
 (#set! local.scope-inherits false))

(block) @local.scope
(do_block) @local.scope

(method_parameters (identifier) @local.definition)
(lambda_parameters (identifier) @local.definition)
(block_parameters (identifier) @local.definition)
(splat_parameter name: (identifier) @local.definition)
(hash_splat_parameter name: (identifier) @local.definition)
(optional_parameter name: (identifier) @local.definition)
(destructured_parameter name: (identifier) @local.definition)
(block_parameter name: (identifier) @local.definition)
(keyword_parameter name: (identifier) @local.definition)

(identifier) @local.reference

(assignment left:(identifier) @local.definition)
(left_assignment_list (identifier) @local.definition)
(rest_assignment (identifier) @local.definition)
(destructured_left_assignment (identifier) @local.definition)
