# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "oci_database_db_system" "shard_db" {
  depends_on = ["null_resource.shard_config_consolidator"]
  count = "${length(var.shards)}"
  availability_domain = "${lookup(var.shards[element(keys(var.shards), count.index)], "availability_domain")}"
  compartment_id = "${var.compartment_ocid}"
  database_edition = "${var.database_edition}"

  db_home {
    database {
      admin_password = "${var.sys_pass}"
      db_name        = "${lookup(var.shards[element(keys(var.shards), count.index)], "db_name")}"
      character_set  = "AL32UTF8"
      ncharacter_set = "AL16UTF16"
      db_workload    = "OLTP"
      pdb_name       = "${lookup(var.shards[element(keys(var.shards), count.index)], "pdb_name")}"

      db_backup_config {
        auto_backup_enabled = false
      }
    }
    db_version   = "${var.db_version}.0"
    display_name = "${lookup(var.shards[element(keys(var.shards), count.index)], "db_name")}"
  }

  db_system_options {
    storage_management = "LVM"
  }
  disk_redundancy         = "NORMAL"
  shape                   = "${var.db_shape}"
  subnet_id               = "${lookup(var.shards[element(keys(var.shards), count.index)], "subnet_id")}"
  ssh_public_keys         = ["${file(var.ssh_public_key_path)}"]
  display_name            = "${lookup(var.shards[element(keys(var.shards), count.index)], "db_name")}"
  hostname                = "${lookup(var.shards[element(keys(var.shards), count.index)], "host")}"
  data_storage_size_in_gb = "${lookup(var.shards[element(keys(var.shards), count.index)], "data_storage_size_in_gb")}"
  license_model           = "LICENSE_INCLUDED"
  node_count              =  1
}

output "shard_db_system_id" {
 value = ["${oci_database_db_system.shard_db.*.id}"]
}

data "oci_database_db_homes" "shard_primary_db_homes" {
  count          = length(var.shards)
  compartment_id = "${var.compartment_ocid}"
  db_system_id = element(oci_database_db_system.shard_db.*.id, count.index)
}

data "oci_database_databases" "shard_primary_databases" {
  count = "${length(var.shards)}"
  compartment_id = "${var.compartment_ocid}"
  db_home_id = "${data.oci_database_db_homes.shard_primary_db_homes[count.index].db_homes.0.id}"
}
data "oci_database_database" "shard_database" {
   count = "${length(var.shards)}"
   database_id = "${data.oci_database_databases.shard_primary_databases[count.index].databases.0.id}"
}
