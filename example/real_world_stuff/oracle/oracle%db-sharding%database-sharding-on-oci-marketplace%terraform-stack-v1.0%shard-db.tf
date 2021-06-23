# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "oci_database_db_system" "shard_db" {
  depends_on          = ["tls_private_key.public_private_key_pair"]
  count               = "${var.num_of_shards}"
  availability_domain = "${data.oci_identity_availability_domains.ADs.availability_domains[count.index % local.num_of_ads].name}"
  compartment_id      = "${var.compartment_ocid}"
  database_edition    = "${var.database_edition}"

  db_home {
    database {
      admin_password = "sd${random_string.sys_pass.result}"
      db_name        = join("", [var.sharded_database_name, var.shard_name_prefix, count.index])
      character_set  = "AL32UTF8"
      ncharacter_set = "AL16UTF16"
      db_workload    = "OLTP"
      pdb_name       = "${var.pdb_name}"

      db_backup_config {
        auto_backup_enabled = false
      }
    }
    db_version   = "${var.db_version}.0"
    display_name = join("", [var.sharded_database_name, var.shard_name_prefix, count.index])
  }

  db_system_options {
    storage_management = "LVM"
  }
  disk_redundancy         = "NORMAL"
  shape                   = "${var.db_shape}"
  subnet_id               = var.create_new_network ? join("", oci_core_subnet.subnet.*.id) : var.subnet_id
  ssh_public_keys         = ["${tls_private_key.public_private_key_pair.public_key_openssh}", "${var.ssh_public_key}"]
  display_name            = join("", [var.sharded_database_name, var.shard_name_prefix, count.index])
  hostname                = join("", [var.sharded_database_name, var.shard_name_prefix, count.index])
  data_storage_size_in_gb = "${var.data_storage_size_in_gb}"
  license_model           = var.license_type
  node_count              = 1
  fault_domains           = ["${data.oci_identity_fault_domains.FDs[count.index % local.num_of_ads].fault_domains[floor(count.index / length(data.oci_identity_fault_domains.FDs[count.index % local.num_of_ads].fault_domains))].name}"]
}

# output "shard_db_system_id" {
#  value = ["${oci_database_db_system.shard_db.*.id}"]
# }

data "oci_database_db_homes" "shard_primary_db_homes" {
  count          = "${var.num_of_shards}"
  compartment_id = "${var.compartment_ocid}"
  db_system_id   = "${element(oci_database_db_system.shard_db.*.id, count.index)}"
}

data "oci_database_databases" "shard_primary_databases" {
  count          = "${var.num_of_shards}"
  compartment_id = "${var.compartment_ocid}"
  db_home_id     = "${data.oci_database_db_homes.shard_primary_db_homes[count.index].db_homes.0.id}"
}
data "oci_database_database" "shard_database" {
  count       = "${var.num_of_shards}"
  database_id = "${data.oci_database_databases.shard_primary_databases[count.index].databases.0.id}"
}

data "oci_database_db_nodes" "shard_db_nodes" {
  count          = "${var.num_of_shards}"
  compartment_id = "${var.compartment_ocid}"
  db_system_id   = "${element(oci_database_db_system.shard_db.*.id, count.index)}"
}

# Get DB node details
data "oci_database_db_node" "shard_db_node_details" {
  count      = "${var.num_of_shards}"
  db_node_id = "${lookup(data.oci_database_db_nodes.shard_db_nodes[count.index].db_nodes[0], "id")}"
}

# Gets the OCID of the first (default) vNIC
data "oci_core_vnic" "shard_db_node_vnic" {
  count   = "${var.num_of_shards}"
  vnic_id = "${data.oci_database_db_node.shard_db_node_details[count.index].vnic_id}"
}

output "shards_public_ip" {
  value = ["${data.oci_core_vnic.shard_db_node_vnic.*.public_ip_address}"]
}