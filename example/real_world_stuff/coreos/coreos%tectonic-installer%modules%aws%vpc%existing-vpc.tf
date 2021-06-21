# These subnet data-sources import external subnets from their user-supplied subnet IDs
# whenever an external VPC is specified
#
data "aws_subnet" "external_worker" {
  count = "${var.external_vpc_id == "" ? 0 : length(var.external_worker_subnets)}"
  id    = "${var.external_worker_subnets[count.index]}"
}

data "aws_subnet" "external_master" {
  count = "${var.external_vpc_id == "" ? 0 : length(var.external_master_subnets)}"
  id    = "${var.external_master_subnets[count.index]}"
}
