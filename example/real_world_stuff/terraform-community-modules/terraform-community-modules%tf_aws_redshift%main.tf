#
# Module: tf_aws_redshift
#

# This template creates the following resources
# - An Redshift cluster
# - A Redshift subnet group
# - You should want your Redshift cluster in a VPC

resource "aws_redshift_cluster" "main_redshift_cluster" {
  cluster_identifier = "${var.cluster_identifier}"
  cluster_version    = "${var.cluster_version}"
  node_type          = "${var.cluster_node_type}"
  number_of_nodes    = "${var.cluster_number_of_nodes}"
  database_name      = "${var.cluster_database_name}"
  master_username    = "${var.cluster_master_username}"
  master_password    = "${var.cluster_master_password}"

  port = "${var.cluster_port}"

  # Because we're assuming a VPC, we use this option, but only one SG id
  vpc_security_group_ids = ["${aws_security_group.main_redshift_access.id}"]

  # We're creating a subnet group in the module and passing in the name
  cluster_subnet_group_name    = "${aws_redshift_subnet_group.main_redshift_subnet_group.name}"
  cluster_parameter_group_name = "${aws_redshift_parameter_group.main_redshift_cluster.id}"

  publicly_accessible = "${var.publicly_accessible}"

  # Snapshots and backups
  skip_final_snapshot                 = "${var.skip_final_snapshot}"
  automated_snapshot_retention_period = "${var.automated_snapshot_retention_period }"
  preferred_maintenance_window        = "${var.preferred_maintenance_window}"

  # IAM Roles
  iam_roles = ["${var.cluster_iam_roles}"]

  lifecycle {
    prevent_destroy = true
  }
  
  tags = "${var.default_tags}"

  # Encryption
  encrypted  = "${var.encrypted}"
  kms_key_id = "${var.kms_key_id}"

}

resource "aws_redshift_parameter_group" "main_redshift_cluster" {
  name   = "${var.cluster_identifier}-${replace(var.cluster_parameter_group, ".", "-")}-custom-params"
  family = "${var.cluster_parameter_group}"

  parameter {
    name  = "wlm_json_configuration"
    value = "${var.wlm_json_configuration}"
  }
}

resource "aws_redshift_subnet_group" "main_redshift_subnet_group" {
  name        = "${var.cluster_identifier}-redshift-subnetgrp"
  description = "Redshift subnet group of ${var.cluster_identifier}"
  subnet_ids  = ["${var.subnets}"]
  
  tags = "${var.default_tags}"
}

# Security groups
resource "aws_security_group" "main_redshift_access" {
  name        = "${var.cluster_identifier}-redshift-access"
  description = "Allow access to the cluster: ${var.cluster_identifier}"
  vpc_id      = "${var.redshift_vpc_id}"
  
  tags = "${merge(var.default_tags, map(
    "Name", "${var.cluster_identifier}-redshift-access"
  ))}"
}

# Keep rules separated to not recreate the cluster when deleting/adding rules
resource "aws_security_group_rule" "allow_port_inbound" {
  type = "ingress"

  from_port   = "${var.cluster_port}"
  to_port     = "${var.cluster_port}"
  protocol    = "tcp"
  cidr_blocks = ["${var.private_cidr}"]

  security_group_id = "${aws_security_group.main_redshift_access.id}"
}

resource "aws_security_group_rule" "allow_all_outbound" {
  type = "egress"

  from_port   = 0
  to_port     = 0
  protocol    = "-1"
  cidr_blocks = ["0.0.0.0/0"]

  security_group_id = "${aws_security_group.main_redshift_access.id}"
}
