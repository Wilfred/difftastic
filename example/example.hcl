// comment
# comment
/*
    comment
*/

resource_1 "strlit1" "strlit2" {
  attr1  = "val1"
  tupl1  = [ 1, 2, 3.4, "foo" ]
  tupl2  = []
  obj1   = { foo = "bar", baz = quoz }
  null1  = null
  bool1  = true
  bool2  = false
  splat1 = tuple.*.foo.bar[0]
  splat2 = tuple[*].foo.bar[0]
  for1   = { for i, v in ["a", "a", "b"] : v => i... }
  for2   = [ for k, v in var.map : "${k}-${v}" ]
  for3   = { for k, v in var.map : k => v }
  for4   = [ for v in var.list : v ]
  for5   = { for v in var.list : v => v }
  for6   = [ for v in var.list : v if v < 3 ]
  func1  = is_number("123")
  cond1  = (1 == 2) ? 1 : "foobar"
  bin1   = ((1+2)%3)*4
  esc1   = "\" \t \UFF11FF22 \uFFFF \n"
  esc2   = "$${} %%{}"
  tpl1   = "prefix-${var.bar}"
  tpl2   = "prefix-${func("bar")}"
  tpl3   = "prefix-${func("nested-${var.bar}")}"

  tpl4   = <<EOF
    prefix
    ${func("foo${ var.bar }")}
    suffix
  EOF

  func_of_object = func({
    "foo" : 2,
    "bar" : baz,
    key   : val,
    fizz  : buzz,
  })

  nested_resource_1 {
    attr1 = 2
    attr2 = 2.112
    attr3 = 2.112e-12
    attr4 = 2.112e+12
    attr5 = 2.112E+12
    attr6 = 2.112E-12
    attr7 = 0x21FF
  }
}
