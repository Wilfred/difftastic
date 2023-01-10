resource "aws_route_table" "private_routes" {
  count  = "${local.new_worker_az_count}"
  vpc_id = "${data.aws_vpc.cluster_vpc.id}"

  tags = "${merge(map(
      "Name","${var.cluster_name}-private-${local.new_worker_subnet_azs[count.index]}",
      "kubernetes.io/cluster/${var.cluster_name}", "shared",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_route" "to_nat_gw" {
  count                  = "${local.new_worker_az_count}"
  route_table_id         = "${aws_route_table.private_routes.*.id[count.index]}"
  destination_cidr_block = "0.0.0.0/0"
  nat_gateway_id         = "${element(aws_nat_gateway.nat_gw.*.id, count.index)}"
  depends_on             = ["aws_route_table.private_routes"]
}

resource "aws_subnet" "worker_subnet" {
  count = "${local.new_worker_az_count}"

  vpc_id = "${data.aws_vpc.cluster_vpc.id}"

  cidr_block = "${lookup(var.new_worker_subnet_configs,
    local.new_worker_subnet_azs[count.index],
    cidrsubnet(local.new_worker_cidr_range, 3, count.index),
  )}"

  tags = "${merge(map(
    "Name", "${var.cluster_name}-worker-${local.new_worker_subnet_azs[count.index]}",
    "kubernetes.io/cluster/${var.cluster_name}","shared",
    "kubernetes.io/role/internal-elb", "",
    "tectonicClusterID", "${var.cluster_id}",
    ),
    var.extra_tags)}"
}

resource "aws_route_table_association" "worker_routing" {
  count          = "${local.new_worker_az_count}"
  route_table_id = "${aws_route_table.private_routes.*.id[count.index]}"
  subnet_id      = "${aws_subnet.worker_subnet.*.id[count.index]}"
}
