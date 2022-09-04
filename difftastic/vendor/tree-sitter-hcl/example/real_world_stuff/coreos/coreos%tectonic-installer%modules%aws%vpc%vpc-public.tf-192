resource "aws_internet_gateway" "igw" {
  count  = "${var.external_vpc_id == "" ? 1 : 0}"
  vpc_id = "${data.aws_vpc.cluster_vpc.id}"

  tags = "${merge(map(
      "Name", "${var.cluster_name}-igw",
      "kubernetes.io/cluster/${var.cluster_name}", "shared",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_route_table" "default" {
  count  = "${var.external_vpc_id == "" ? 1 : 0}"
  vpc_id = "${data.aws_vpc.cluster_vpc.id}"

  tags = "${merge(map(
      "Name", "${var.cluster_name}-public",
      "kubernetes.io/cluster/${var.cluster_name}", "shared",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_main_route_table_association" "main_vpc_routes" {
  count          = "${var.external_vpc_id == "" ? 1 : 0}"
  vpc_id         = "${data.aws_vpc.cluster_vpc.id}"
  route_table_id = "${aws_route_table.default.id}"
}

resource "aws_route" "igw_route" {
  count                  = "${var.external_vpc_id == "" ? 1 : 0}"
  destination_cidr_block = "0.0.0.0/0"
  route_table_id         = "${aws_route_table.default.id}"
  gateway_id             = "${aws_internet_gateway.igw.id}"
}

resource "aws_subnet" "master_subnet" {
  count = "${var.external_vpc_id == "" ? var.master_az_count : 0}"

  vpc_id = "${data.aws_vpc.cluster_vpc.id}"

  cidr_block = "${length(var.master_subnets) > 1 ?
    "${element(var.master_subnets, count.index)}" :
    "${cidrsubnet(data.aws_vpc.cluster_vpc.cidr_block, 4, count.index)}"
  }"

  availability_zone = "${var.master_azs[count.index]}"

  tags = "${merge(map(
      "Name", "${var.cluster_name}-master-${ "${length(var.master_azs)}" > 0 ?
     "${var.master_azs[count.index]}" :
     "${data.aws_availability_zones.azs.names[count.index]}" }",
      "kubernetes.io/cluster/${var.cluster_name}", "shared",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_route_table_association" "route_net" {
  count          = "${var.external_vpc_id == "" ? var.master_az_count : 0}"
  route_table_id = "${aws_route_table.default.id}"
  subnet_id      = "${aws_subnet.master_subnet.*.id[count.index]}"
}

resource "aws_eip" "nat_eip" {
  count = "${var.external_vpc_id == "" ? min(var.master_az_count, var.worker_az_count) : 0}"
  vpc   = true

  # Terraform does not declare an explicit dependency towards the internet gateway.
  # this can cause the internet gateway to be deleted/detached before the EIPs.
  # https://github.com/coreos/tectonic-installer/issues/1017#issuecomment-307780549
  depends_on = ["aws_internet_gateway.igw"]
}

resource "aws_nat_gateway" "nat_gw" {
  count         = "${var.external_vpc_id == "" ? min(var.master_az_count, var.worker_az_count) : 0}"
  allocation_id = "${aws_eip.nat_eip.*.id[count.index]}"
  subnet_id     = "${aws_subnet.master_subnet.*.id[count.index]}"
}
