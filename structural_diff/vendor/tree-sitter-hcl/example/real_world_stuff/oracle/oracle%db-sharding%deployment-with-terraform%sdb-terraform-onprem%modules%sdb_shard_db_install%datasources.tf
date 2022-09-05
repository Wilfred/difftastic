# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

data "template_file" "shard_db_rsp_template" {
  template = "${file("${path.module}/rsps/shard-db-rsp.template.rsp")}"

  vars = {
    unix_group_name = "${var.unix_group_name}"
    ora_inventory_location = "${var.ora_inventory_location}"
    oracle_base = "${var.oracle_base}"
    db_major_version = "${local.db_major_version}"
  }
}

data "template_file" "deps_check_template" {
  template = "${file("${path.module}/scripts/deps_check.template.sh")}"

  vars = {
    oracle_base = "${var.oracle_base}"
  }
}
