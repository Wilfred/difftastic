# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

data "template_file" "system_sharding_schema_setup_template" {
  template = "${file("demo-schema-sql/system-sharding-schema-setup.template.ql")}"

  vars = {
    oracle_home         = "${local.db_home_path}"
    cat_pdb_name        = "${data.oci_database_database.catalog_database[0].pdb_name}"
    catalog_host_name   = "${data.oci_core_vnic.catalog_db_node_vnic[0].public_ip_address}"
    catalog_domain_name = "${oci_database_db_system.catalog_db[0].domain}"
    catalog_port        = "${oci_database_db_system.catalog_db[0].listener_port}"
  }
}
