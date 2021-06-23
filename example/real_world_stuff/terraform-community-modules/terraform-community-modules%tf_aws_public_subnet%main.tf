variable "name" {
  default = "public"
}
variable "cidrs" {
  default = []
}
variable "azs" {
  description = "A list of availability zones"
  default     = []
}
variable "vpc_id" {
}
variable "igw_id" {
}
variable "map_public_ip_on_launch" {
  default = true
}
variable "tags" {
  description = "A map of tags to add to all resources"
  default     = {}
}

# Subnet
resource "aws_subnet" "public" {
  vpc_id                  = "${var.vpc_id}"
  cidr_block              = "${element(var.cidrs, count.index)}"
  availability_zone       = "${element(var.azs, count.index)}"
  count                   = "${length(var.cidrs)}"
  map_public_ip_on_launch = "${var.map_public_ip_on_launch}"

  lifecycle {
    create_before_destroy = true
  }
  tags = "${merge(var.tags, map("Name", format("%s.%s", var.name, element(var.azs, count.index))))}"
}

# Routes
resource "aws_route_table" "public" {
  vpc_id = "${var.vpc_id}"
  count  = "${length(var.cidrs)}"

  tags = "${merge(var.tags, map("Name", format("%s.%s", var.name, element(var.azs, count.index))))}"
}

resource "aws_route_table_association" "public" {
  subnet_id      = "${element(aws_subnet.public.*.id, count.index)}"
  route_table_id = "${element(aws_route_table.public.*.id, count.index)}"
  count          = "${length(var.cidrs)}"

  lifecycle {
    create_before_destroy = true
  }
}

resource "aws_route" "igw" {
  route_table_id         = "${element(aws_route_table.public.*.id, count.index)}"
  destination_cidr_block = "0.0.0.0/0"
  gateway_id             = "${var.igw_id}"
  count                  = "${length(var.cidrs)}"

  depends_on             = [
    "aws_route_table.public"
  ]

  lifecycle {
    create_before_destroy = true
  }
}

output "subnet_ids" {
  value = [
    "${aws_subnet.public.*.id}"
  ]
}

output "public_route_table_ids" {
  value = [
    "${aws_route_table.public.*.id}"
  ]
}
