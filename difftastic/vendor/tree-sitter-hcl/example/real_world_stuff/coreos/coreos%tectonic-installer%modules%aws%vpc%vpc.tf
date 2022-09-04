locals {
  new_worker_cidr_range = "${cidrsubnet(data.aws_vpc.cluster_vpc.cidr_block,1,1)}"
  new_master_cidr_range = "${cidrsubnet(data.aws_vpc.cluster_vpc.cidr_block,1,0)}"
}

resource "aws_vpc" "new_vpc" {
  count                = "${var.external_vpc_id == "" ? 1 : 0}"
  cidr_block           = "${var.cidr_block}"
  enable_dns_hostnames = true
  enable_dns_support   = true

  tags = "${merge(map(
      "Name", "${var.cluster_name}.${var.base_domain}",
      "kubernetes.io/cluster/${var.cluster_name}", "shared",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}
