output "private_subnets" {
  value = ["${aws_subnet.private.*.id}"]
}

output "database_subnets" {
  value = ["${aws_subnet.database.*.id}"]
}

output "database_subnet_group" {
  value = "${aws_db_subnet_group.database.id}"
}

output "public_subnets" {
  value = ["${aws_subnet.public.*.id}"]
}

output "elasticache_subnets" {
  value = ["${aws_subnet.elasticache.*.id}"]
}

output "elasticache_subnet_group" {
  value = "${aws_elasticache_subnet_group.elasticache.id}"
}

output "vpc_id" {
  value = "${aws_vpc.mod.id}"
}

output "vpc_cidr_block" {
  value = "${aws_vpc.mod.cidr_block}"
}

output "public_route_table_ids" {
  value = ["${aws_route_table.public.*.id}"]
}

output "private_route_table_ids" {
  value = ["${aws_route_table.private.*.id}"]
}

output "default_security_group_id" {
  value = "${aws_vpc.mod.default_security_group_id}"
}

output "nat_eips" {
  value = ["${aws_eip.nateip.*.id}"]
}

output "nat_eips_public_ips" {
  value = ["${aws_eip.nateip.*.public_ip}"]
}

output "natgw_ids" {
  value = ["${aws_nat_gateway.natgw.*.id}"]
}

output "igw_id" {
  value = "${aws_internet_gateway.mod.id}"
}

output "default_network_acl_id" {
  value = "${aws_vpc.mod.default_network_acl_id}"
}

output "vpc_endpoint_s3_id" {
  value = "${aws_vpc_endpoint.s3.id}"
}

output "vpc_endpoint_dynamodb_id" {
  value = "${aws_vpc_endpoint.dynamodb.id}"
}
