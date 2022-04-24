resource "example" "literals" {
  attr1  = "val1"
  tupl1  = [ 1, 2, 3.4, "foo" ]
  tupl2  = []
  obj1   = { foo = "bar", baz = quz }
  null1  = null
  bool1  = true
  bool2  = false
  esc1   = "\" \t \UFF11FF22 \uFFFF \n"
  esc2   = "$${} %%{}"
  num1   = 2
  num2   = 2.112
  num3   = "Hello, World"
  num4   = 2.112e+12
  num5   = 2.112E+12
  num6   = 2.112E-12
  num7   = 0x21FF
  strx   = "Hello, Hcl"
}

resource "example" "comments" {
  // comment, World!
  /*
      comment
  */
}

resource "example" "splat_expressions" {
  splat1 = foo.*.bar.baz[0]
  splat2 = foo[*].bar.baz[0]
}

resource "example" "for_expressions" {
  for1   = { for i, v in ["a", "a", "b"] : v => i... }
  for2   = [ for k, v in x : "${k}-${v}" ]
  for3   = { for k, v in x: k => v }
  for5   = { for v in y : v => v + 1 }
  for6   = [ for v in x : v if v < 3 ]
}

resource "example" "function_expressions" {
  func1  = is_number("123")
  func3 = withobject({
    "foo" : 2,
    "bar" : baz,
    key   : val,
    fizz  : buzz,
  })
}

resource "example" "binary_expressions" {
  cond1  = (1 == 2) ? 1 : "Hello, HCL"
  bin1   = ((1+2)%3)*4
}

resource "example" "template_expressions" {
  tpl1   = "prefix-${var.bar}"
  tpl2   = "prefix-${func("bar")}"
  tpl3   = "prefix-${func("nested-${var.bar}")}"

  tpl4   = <<EOF
    %{ for a in f(b) ~}
      ${func("foo${ a }")}
    %{ endfor ~}
  EOF

  tpl5 = <<-EOF
    %{~if cond~}
      "foo"
    %{~else~}
      4
    %{~endif~}
	EOF

  tpl6 = <<-EOF
    %{ for a in f(x) ~}
      %{~if a~} "true" %{~else~} "false" %{~endif~}
    %{ endfor ~}
	EOF

  tpl7 = <<-EOF
    %{ for a in f(b) ~}
      "true"
    %{ endfor ~}
	EOF
}

resource "example" "nested_blocks" {
  nested_block "first" {
    attr1 = "foo"
    nested_block "second" {
      attr1 = "bar"
    }
  }
}
