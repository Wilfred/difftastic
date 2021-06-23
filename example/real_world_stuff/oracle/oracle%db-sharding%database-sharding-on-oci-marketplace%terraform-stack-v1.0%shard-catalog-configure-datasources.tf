# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

data "template_file" "shard_catalog_config_template" {
  template = "${file("shard-catalog-config-sql/shard-catalog-config.template.ql")}"

  vars = {
    oradata             = "${local.oradata}"
    gsmcatuser_pass     = "sd${random_string.gsmcatuser_pass.result}"
    sdb_admin_username  = "${var.sdb_admin_username}"
    sdb_admin_pass      = "sd${random_string.sdb_admin_pass.result}"
    total_num_of_shards = "${var.num_of_shards * var.num_of_shard_groups}"
    catalog_host        = "${data.oci_core_vnic.catalog_db_node_vnic[0].public_ip_address}"
    catalog_port        = "${oci_database_db_system.catalog_db[0].listener_port}"
  }
}
