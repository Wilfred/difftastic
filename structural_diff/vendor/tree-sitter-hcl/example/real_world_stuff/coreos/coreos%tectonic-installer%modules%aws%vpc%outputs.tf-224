output "vpc_id" {
  value = "${data.aws_vpc.cluster_vpc.id}"
}

# We have to do this join() & split() 'trick' because null_data_source and
# the ternary operator can't output lists or maps
output "master_subnet_ids" {
  value = "${local.master_subnet_ids}"
}

output "worker_subnet_ids" {
  value = "${local.worker_subnet_ids}"
}

output "etcd_sg_id" {
  value = "${element(concat(aws_security_group.etcd.*.id, list("")), 0)}"
}

output "master_sg_id" {
  value = "${aws_security_group.master.id}"
}

output "worker_sg_id" {
  value = "${aws_security_group.worker.id}"
}

output "api_sg_id" {
  value = "${aws_security_group.api.id}"
}

output "console_sg_id" {
  value = "${aws_security_group.console.id}"
}

output "aws_elb_api_external_id" {
  value = "${aws_elb.api_external.*.id}"
}

output "aws_elb_internal_id" {
  value = "${aws_elb.api_internal.*.id}"
}

output "aws_elb_console_id" {
  value = "${aws_elb.console.id}"
}

output "aws_lbs" {
  value = ["${compact(concat(aws_elb.api_internal.*.id, list(aws_elb.console.id), aws_elb.api_external.*.id))}"]
}

output "aws_api_external_dns_name" {
  value = "${element(concat(aws_elb.api_external.*.dns_name, list("")), 0)}"
}

output "aws_elb_api_external_zone_id" {
  value = "${element(concat(aws_elb.api_external.*.zone_id, list("")), 0)}"
}

output "aws_api_internal_dns_name" {
  value = "${element(concat(aws_elb.api_internal.*.dns_name, list("")), 0)}"
}

output "aws_elb_api_internal_zone_id" {
  value = "${element(concat(aws_elb.api_internal.*.zone_id, list("")), 0)}"
}

output "aws_console_dns_name" {
  value = "${aws_elb.console.dns_name}"
}

output "aws_elb_console_zone_id" {
  value = "${aws_elb.console.zone_id}"
}
