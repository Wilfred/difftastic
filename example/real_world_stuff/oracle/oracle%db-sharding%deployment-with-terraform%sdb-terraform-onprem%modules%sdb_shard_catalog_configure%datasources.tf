# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

data "template_file" "shard_catalog_config_template" {
  template = "${file("${path.module}/sql/shard-catalog-config.template.ql")}"
  
  vars = {
    oradata = "${local.oradata}"
    gsmcatuser_pass = "${var.gsmcatuser_pass}"
    sdb_admin_username = "${var.sdb_admin_username}"
    sdb_admin_pass = "${var.sdb_admin_pass}"
    total_num_of_shards = "${length(local.total_shards)}"
  }
}

data "template_file" "shard_db_config_template" {
  template = "${file("${path.module}/sql/shard-db-config.template.ql")}"
  
  vars = {
    oradata = "${local.oradata}"
    gsmuser_pass = "${var.gsmuser_pass}"
  }
}

data "template_file" "shard_catalog_configure_deps_check_template" {
  template = "${file("${path.module}/scripts/shard_catalog_configure_deps_check.template.sh")}"

  vars = {
    oracle_base = "${var.oracle_base}"
  }
}