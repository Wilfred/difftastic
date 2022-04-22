resource "aws_vpc" "mod" {
  cidr_block           = "${var.cidr}"
  instance_tenancy     = "${var.instance_tenancy}"
  enable_dns_hostnames = "${var.enable_dns_hostnames}"
  enable_dns_support   = "${var.enable_dns_support}"

  enable_classiclink              = "${var.enable_classiclink}"
  enable_classiclink_dns_support  = "${var.enable_classiclink_dns_support}"

  tags = "${merge(var.tags, map("Name", format("%s", var.name)))}"
}

resource "aws_internet_gateway" "mod" {
  count = "${length(var.public_subnets) > 0 ? 1 : 0}"

  vpc_id = "${aws_vpc.mod.id}"

  tags = "${merge(var.tags, map("Name", format("%s-igw", var.name)))}"
}

resource "aws_route_table" "public" {
  count = "${length(var.public_subnets) > 0 ? 1 : 0}"

  vpc_id           = "${aws_vpc.mod.id}"
  propagating_vgws = ["${var.public_propagating_vgws}"]

  tags = "${merge(var.tags, map("Name", format("%s-rt-public", var.name)))}"
}

resource "aws_route" "public_internet_gateway" {
  count = "${length(var.public_subnets) > 0 ? 1 : 0}"

  route_table_id         = "${aws_route_table.public.id}"
  destination_cidr_block = "0.0.0.0/0"
  gateway_id             = "${aws_internet_gateway.mod.id}"
}

resource "aws_route" "private_nat_gateway" {
  count = "${var.enable_nat_gateway ? length(var.azs) : 0}"

  route_table_id         = "${element(aws_route_table.private.*.id, count.index)}"
  destination_cidr_block = "0.0.0.0/0"
  nat_gateway_id         = "${element(aws_nat_gateway.natgw.*.id, count.index)}"
}

resource "aws_route_table" "private" {
  count = "${length(var.azs)}"

  vpc_id           = "${aws_vpc.mod.id}"
  propagating_vgws = ["${var.private_propagating_vgws}"]

  tags = "${merge(var.tags, map("Name", format("%s-rt-private-%s", var.name, element(var.azs, count.index))))}"
}

resource "aws_subnet" "private" {
  count = "${length(var.private_subnets)}"

  vpc_id            = "${aws_vpc.mod.id}"
  cidr_block        = "${var.private_subnets[count.index]}"
  availability_zone = "${element(var.azs, count.index)}"

  tags = "${merge(var.tags, var.private_subnet_tags, map("Name", format("%s-subnet-private-%s", var.name, element(var.azs, count.index))))}"
}

resource "aws_subnet" "database" {
  count = "${length(var.database_subnets)}"

  vpc_id            = "${aws_vpc.mod.id}"
  cidr_block        = "${var.database_subnets[count.index]}"
  availability_zone = "${element(var.azs, count.index)}"

  tags = "${merge(var.tags, var.database_subnet_tags, map("Name", format("%s-subnet-database-%s", var.name, element(var.azs, count.index))))}"
}

resource "aws_db_subnet_group" "database" {
  count = "${length(var.database_subnets) > 0 && var.create_database_subnet_group ? 1 : 0}"

  name        = "${var.name}-rds-subnet-group"
  description = "Database subnet groups for ${var.name}"
  subnet_ids  = ["${aws_subnet.database.*.id}"]

  tags = "${merge(var.tags, map("Name", format("%s-database-subnet-group", var.name)))}"
}

resource "aws_subnet" "elasticache" {
  count = "${length(var.elasticache_subnets)}"

  vpc_id            = "${aws_vpc.mod.id}"
  cidr_block        = "${var.elasticache_subnets[count.index]}"
  availability_zone = "${element(var.azs, count.index)}"

  tags = "${merge(var.tags, var.elasticache_subnet_tags, map("Name", format("%s-subnet-elasticache-%s", var.name, element(var.azs, count.index))))}"
}

resource "aws_elasticache_subnet_group" "elasticache" {
  count = "${length(var.elasticache_subnets) > 0 ? 1 : 0}"

  name        = "${var.name}-elasticache-subnet-group"
  description = "Elasticache subnet groups for ${var.name}"
  subnet_ids  = ["${aws_subnet.elasticache.*.id}"]
}

resource "aws_subnet" "public" {
  count = "${length(var.public_subnets)}"

  vpc_id                  = "${aws_vpc.mod.id}"
  cidr_block              = "${var.public_subnets[count.index]}"
  availability_zone       = "${element(var.azs, count.index)}"
  map_public_ip_on_launch = "${var.map_public_ip_on_launch}"

  tags = "${merge(var.tags, var.public_subnet_tags, map("Name", format("%s-subnet-public-%s", var.name, element(var.azs, count.index))))}"
}

resource "aws_eip" "nateip" {
  count = "${var.enable_nat_gateway ? (var.single_nat_gateway ? 1 : length(var.azs)) : 0}"

  vpc = true
}

resource "aws_nat_gateway" "natgw" {
  count = "${var.enable_nat_gateway ? (var.single_nat_gateway ? 1 : length(var.azs)) : 0}"

  allocation_id = "${element(aws_eip.nateip.*.id, (var.single_nat_gateway ? 0 : count.index))}"
  subnet_id     = "${element(aws_subnet.public.*.id, (var.single_nat_gateway ? 0 : count.index))}"

  depends_on = ["aws_internet_gateway.mod"]
}

data "aws_vpc_endpoint_service" "s3" {
  service = "s3"
}

resource "aws_vpc_endpoint" "s3" {
  count = "${var.enable_s3_endpoint}"

  vpc_id       = "${aws_vpc.mod.id}"
  service_name = "${data.aws_vpc_endpoint_service.s3.service_name}"
}

resource "aws_vpc_endpoint_route_table_association" "private_s3" {
  count = "${var.enable_s3_endpoint ? length(var.private_subnets) : 0}"

  vpc_endpoint_id = "${aws_vpc_endpoint.s3.id}"
  route_table_id  = "${element(aws_route_table.private.*.id, count.index)}"
}

resource "aws_vpc_endpoint_route_table_association" "public_s3" {
  count = "${var.enable_s3_endpoint ? length(var.public_subnets) : 0}"

  vpc_endpoint_id = "${aws_vpc_endpoint.s3.id}"
  route_table_id  = "${aws_route_table.public.id}"
}

data "aws_vpc_endpoint_service" "dynamodb" {
  service = "dynamodb"
}

resource "aws_vpc_endpoint" "dynamodb" {
  count = "${var.enable_dynamodb_endpoint}"

  vpc_id       = "${aws_vpc.mod.id}"
  service_name = "${data.aws_vpc_endpoint_service.dynamodb.service_name}"
}

resource "aws_vpc_endpoint_route_table_association" "private_dynamodb" {
  count = "${var.enable_dynamodb_endpoint ? length(var.private_subnets) : 0}"

  vpc_endpoint_id = "${aws_vpc_endpoint.dynamodb.id}"
  route_table_id  = "${element(aws_route_table.private.*.id, count.index)}"
}

resource "aws_vpc_endpoint_route_table_association" "public_dynamodb" {
  count = "${var.enable_dynamodb_endpoint ? length(var.public_subnets) : 0}"

  vpc_endpoint_id = "${aws_vpc_endpoint.dynamodb.id}"
  route_table_id  = "${aws_route_table.public.id}"
}

resource "aws_route_table_association" "private" {
  count = "${length(var.private_subnets)}"

  subnet_id      = "${element(aws_subnet.private.*.id, count.index)}"
  route_table_id = "${element(aws_route_table.private.*.id, count.index)}"
}

resource "aws_route_table_association" "database" {
  count = "${length(var.database_subnets)}"

  subnet_id      = "${element(aws_subnet.database.*.id, count.index)}"
  route_table_id = "${element(aws_route_table.private.*.id, count.index)}"
}

resource "aws_route_table_association" "elasticache" {
  count = "${length(var.elasticache_subnets)}"

  subnet_id      = "${element(aws_subnet.elasticache.*.id, count.index)}"
  route_table_id = "${element(aws_route_table.private.*.id, count.index)}"
}

resource "aws_route_table_association" "public" {
  count = "${length(var.public_subnets)}"

  subnet_id      = "${element(aws_subnet.public.*.id, count.index)}"
  route_table_id = "${aws_route_table.public.id}"
}
