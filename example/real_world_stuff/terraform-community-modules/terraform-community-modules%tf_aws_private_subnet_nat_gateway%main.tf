variable "name" {
  default = "private"
}
variable "cidrs" {
  description = "A list of CIDR"
  default     = []
}
variable "azs" {
  description = "A list of availability zones"
  default     = []
}
variable "vpc_id" {
}
variable "public_subnet_ids" {
  description = "A list of public subnet ids"
  default     = []
}
variable "nat_gateways_count" {
}
variable "map_public_ip_on_launch" {
  default = true
}
variable "tags" {
  description = "A map of tags to add to all resources"
  default     = {}
}

# Subnet
resource "aws_subnet" "private" {
  vpc_id                  = "${var.vpc_id}"
  cidr_block              = "${element(var.cidrs, count.index)}"
  availability_zone       = "${element(var.azs, count.index)}"
  count                   = "${length(var.cidrs)}"
  map_public_ip_on_launch = "${var.map_public_ip_on_launch}"

  tags = "${merge(var.tags, map("Name", format("%s.%s", var.name, element(var.azs, count.index))))}"
}

# Routes
resource "aws_route_table" "private" {
  vpc_id = "${var.vpc_id}"
  count  = "${length(var.cidrs)}"

  tags = "${merge(var.tags, map("Name", format("%s.%s", var.name, element(var.azs, count.index))))}"
}

resource "aws_route_table_association" "private" {
  subnet_id      = "${element(aws_subnet.private.*.id, count.index)}"
  route_table_id = "${element(aws_route_table.private.*.id, count.index)}"
  count          = "${length(var.cidrs)}"
}

resource "aws_route" "nat_gateway" {
  route_table_id         = "${element(aws_route_table.private.*.id, count.index)}"
  destination_cidr_block = "0.0.0.0/0"
  nat_gateway_id         = "${element(aws_nat_gateway.nat.*.id, count.index)}"
  count                  = "${length(var.cidrs)}"

  depends_on             = [
    "aws_route_table.private"
  ]
}

# NAT
resource "aws_eip" "nat" {
  vpc   = true
  count = "${var.nat_gateways_count}"
}

resource "aws_nat_gateway" "nat" {
  allocation_id = "${element(aws_eip.nat.*.id, count.index)}"
  subnet_id     = "${element(var.public_subnet_ids, count.index)}"
  count         = "${var.nat_gateways_count}"
}

# Output
output "subnet_ids" {
  value = [
    "${aws_subnet.private.*.id}"
  ]
}

output "private_route_table_ids" {
  value = [
    "${aws_route_table.private.*.id}"
  ]
}

output "nat_eips" {
  value = [
    "${aws_eip.nat.*.public_ip}"
  ]
}
