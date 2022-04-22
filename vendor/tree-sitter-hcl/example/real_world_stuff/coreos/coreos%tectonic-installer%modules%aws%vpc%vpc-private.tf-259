resource "aws_route_table" "private_routes" {
  count  = "${var.external_vpc_id == "" ? var.worker_az_count : 0}"
  vpc_id = "${data.aws_vpc.cluster_vpc.id}"

  tags = "${merge(map(
      "Name", "${var.cluster_name}-private-${data.aws_availability_zones.azs.names[count.index]}",
      "kubernetes.io/cluster/${var.cluster_name}", "shared",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_route" "to_nat_gw" {
  count                  = "${var.external_vpc_id == "" ? var.worker_az_count : 0}"
  route_table_id         = "${aws_route_table.private_routes.*.id[count.index]}"
  destination_cidr_block = "0.0.0.0/0"
  nat_gateway_id         = "${element(aws_nat_gateway.nat_gw.*.id, count.index)}"
  depends_on             = ["aws_route_table.private_routes"]
}

resource "aws_subnet" "worker_subnet" {
  count = "${var.external_vpc_id == "" ? var.worker_az_count : 0}"

  vpc_id = "${data.aws_vpc.cluster_vpc.id}"

  cidr_block = "${length(var.worker_subnets) > 1 ?
    "${element(var.worker_subnets, count.index)}" :
    "${cidrsubnet(data.aws_vpc.cluster_vpc.cidr_block, 4, count.index + var.worker_az_count)}"
  }"

  availability_zone = "${var.worker_azs[count.index]}"

  tags = "${merge(map(
      "Name", "${var.cluster_name}-worker-${ "${length(var.worker_azs)}" > 0 ?
    "${var.worker_azs[count.index]}" :
    "${data.aws_availability_zones.azs.names[count.index]}" }",
      "kubernetes.io/cluster/${var.cluster_name}", "shared",
      "kubernetes.io/role/internal-elb", "",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_route_table_association" "worker_routing" {
  count          = "${var.external_vpc_id == "" ? var.worker_az_count : 0}"
  route_table_id = "${aws_route_table.private_routes.*.id[count.index]}"
  subnet_id      = "${aws_subnet.worker_subnet.*.id[count.index]}"
}
