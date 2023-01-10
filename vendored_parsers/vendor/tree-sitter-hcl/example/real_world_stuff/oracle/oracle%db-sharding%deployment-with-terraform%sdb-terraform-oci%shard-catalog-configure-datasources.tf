# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

data "template_file" "shard_catalog_config_template" {
  template = "${file("shard-catalog-config-sql/shard-catalog-config.template.ql")}"
  
  vars = {
    oradata = "${local.oradata}"
    gsmcatuser_pass = "${var.gsmcatuser_pass}"
    sdb_admin_username = "${var.sdb_admin_username}"
    sdb_admin_pass = "${var.sdb_admin_pass}"
    total_num_of_shards = "${length(local.total_shards)}"
    catalog_host = "${oci_database_db_system.catalog_db[0].hostname}.${oci_database_db_system.catalog_db[0].domain}"
    catalog_port = "${oci_database_db_system.catalog_db[0].listener_port}"
  }
}
