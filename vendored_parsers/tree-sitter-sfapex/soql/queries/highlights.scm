; https://code.visualstudio.com/api/language-extensions/semantic-highlight-guide#semantic-token-classification
(field_identifier
  (identifier) @property)

(field_identifier
  (dotted_identifier
    (identifier) @property))

(type_of_clause
  (identifier) @property)

(when_expression
  (identifier) @type)

(when_expression
  (field_list
    (identifier) @property))

(when_expression
  (field_list
    (dotted_identifier
      (identifier) @property )))

(else_expression
  (field_list
    (identifier) @property ))

(else_expression
  (field_list
    (dotted_identifier
      (identifier) @property )))

(alias_expression
  (identifier) @label)

(storage_identifier) @type
(function_name) @function
(date_literal) @variable.readonly.defaultLibrary

[
  ","
  "."
  ":"
  "?"
  "("
  ")"
] @punctuation

[
  "AND"
  "OR"
  "NOT"
  "="
  "!="
  "LIKE"
  "NOT_IN"
  "INCLUDES"
  "EXCLUDES"
] @operator
(value_comparison_operator "<" @operator)
"<=" @operator
(value_comparison_operator ">" @operator)
">=" @operator
 @operator
(set_comparison_operator "IN" @operator)

(int) @number
(decimal) @number
(currency_literal) @number
(string_literal) @string
(date) @variable.readonly
(date_time) @variable.readonly

[
  "TRUE"
  "FALSE"
  (null_literal)
] @variable.readonly.defaultLibrary

[
  "ABOVE"
  "ABOVE_OR_BELOW"
  "ALL_ROWS"
  "ALL"
  "AS"
  "ASC"
  "AT"
  "BELOW"
  "CUSTOM"
  "DATA_CATEGORY"
  "DESC"
  "ELSE"
  "END"
  "FIELDS"
  "FOR"
  "FROM"
  "GROUP_BY"
  "HAVING"
  "LIMIT"
  "NULLS_FIRST"
  "NULLS_LAST"
  "OFFSET"
  "ORDER_BY"
  "REFERENCE"
  "SELECT"
  "STANDARD"
  "THEN"
  "TRACKING"
  "TYPEOF"
  "UPDATE"
  "USING_SCOPE"
  "VIEW"
  "VIEWSTAT"
  "WITH"
  "WHERE"
  "WHEN"
] @keyword

; Using Scope
[
  "delegated"
  "everything"
  "mine"
  "mine_and_my_groups"
  "my_territory"
  "my_team_territory"
  "team"
] @enumMember

; With
[
  "maxDescriptorPerRecord"
  "RecordVisibilityContext"
  "Security_Enforced"
  "supportsDomains"
  "supportsDelegates"
  "System_Mode"
  "User_Mode"
  "UserId"
] @enumMember


