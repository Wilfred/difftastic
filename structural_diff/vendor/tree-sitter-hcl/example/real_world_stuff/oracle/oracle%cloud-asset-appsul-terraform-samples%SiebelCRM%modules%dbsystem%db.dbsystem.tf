/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "oci_database_db_system" "database" {
  count               = "${length(var.availability_domain)}"
  compartment_id      = "${var.compartment_ocid}"
  availability_domain = "${element(var.availability_domain, count.index)}"
  cpu_core_count      = "${lookup(data.oci_database_db_system_shapes.db_system_shapes.db_system_shapes[0], "minimum_core_count")}"
  database_edition    = "${var.db_edition}"
  db_home {
    database = {
      "admin_password"  = "${var.db_admin_password}"
      "db_name"         = "${var.db_name}"
      "character_set"   = "${var.db_characterset}"
      "ncharacter_set"  = "${var.db_nls_characterset}"
      "db_workload"     = "${var.db_workload}"
      "pdb_name"        = "${var.db_pdb_name}"
      }
    db_version    = "${var.db_version}"
    display_name  = "${var.db_name}"
  }
  shape                   = "${var.db_instance_shape}"
  node_count              = "${var.db_node_count}"
  data_storage_size_in_gb = "${var.db_size_in_gb}"
  #data_storage_percentage = "40"
  license_model   = "${var.db_license_model}"
  disk_redundancy = "${var.db_disk_redundancy}"
  subnet_id       = "${element(var.db_subnet, count.index)}"
  ssh_public_keys = ["${trimspace(file("${var.db_ssh_public_key}"))}"]
  display_name    = "${var.db_hostname_prefix}${element(var.AD,count.index)}${count.index + 1}"
  hostname        = "${var.db_hostname_prefix}${element(var.AD,count.index)}${count.index + 1}" 
}
