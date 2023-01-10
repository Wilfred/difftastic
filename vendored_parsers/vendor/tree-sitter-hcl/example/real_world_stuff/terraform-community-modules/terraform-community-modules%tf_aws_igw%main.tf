variable "name" { default = "igw" }
variable "vpc_id" {}
variable "tags" {
  description = "A map of tags to add to all resources"
  default     = {}
}

resource "aws_internet_gateway" "igw" {
  vpc_id = "${var.vpc_id}"

  tags = "${merge(var.tags, map("Name", format("%s", var.name)))}"
}

output "igw_id" { value = "${aws_internet_gateway.igw.id}" }
