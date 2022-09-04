#
# Module: tf_aws_redshift
#

# Output the ID of the Redshift cluster
output "redshift_cluster_id" {
  value = "${aws_redshift_cluster.main_redshift_cluster.id}"
}

# Output address (hostname) of the Redshift cluster
output "redshift_cluster_address" {
  value = "${replace(aws_redshift_cluster.main_redshift_cluster.endpoint, format(":%s", aws_redshift_cluster.main_redshift_cluster.port), "")}"
}

# Output endpoint (hostname:port) of the Redshift cluster
output "redshift_cluster_endpoint" {
  value = "${aws_redshift_cluster.main_redshift_cluster.endpoint}"
}

# Output the ID of the Subnet Group
output "subnet_group_id" {
  value = "${aws_redshift_subnet_group.main_redshift_subnet_group.id}"
}

# Output DB security group ID
output "security_group_id" {
  value = "${aws_security_group.main_redshift_access.id}"
}
