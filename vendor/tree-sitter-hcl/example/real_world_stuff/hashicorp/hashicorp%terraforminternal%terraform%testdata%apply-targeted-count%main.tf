resource "aws_instance" "foo" {
  count = 3
}

resource "aws_instance" "bar" {
  count = 3
}
