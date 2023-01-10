# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "oci_database_data_guard_association" "shard_data_guard_association" {
  depends_on = ["null_resource.sdb_shard_db_configure"]
  count      = "${var.num_of_shards * (var.num_of_shard_groups - 1)}"

  #Required
  creation_type           = "NewDbSystem"
  database_admin_password = "sd${random_string.sys_pass.result}"
  database_id             = "${data.oci_database_databases.shard_primary_databases[count.index % var.num_of_shards].databases.0.id}"
  protection_mode         = "${var.protection_mode}"
  transport_type          = "${var.transport_type}"

  #required for NewDbSystem creation_type
  display_name                     = join("", [var.sharded_database_name, var.standby_shard_name_prefix, count.index])
  subnet_id                        = var.create_new_network ? join("", oci_core_subnet.subnet.*.id) : var.subnet_id
  availability_domain              = "${data.oci_identity_availability_domains.ADs.availability_domains[(count.index + 1) % local.num_of_ads].name}"
  hostname                         = join("", [var.sharded_database_name, var.standby_shard_name_prefix, count.index])
  delete_standby_db_home_on_delete = "${var.delete_standby_db_home_on_delete}"

}

data "oci_database_db_systems" "shard_stdby_db_systems" {
  depends_on = ["oci_database_data_guard_association.shard_data_guard_association"]
  count      = "${var.num_of_shards * (var.num_of_shard_groups - 1)}"
  #Required
  compartment_id = "${var.compartment_ocid}"
  #Optional
  display_name = join("", [var.sharded_database_name, var.standby_shard_name_prefix, count.index])
}

data "oci_database_db_nodes" "shard_stby_db_nodes" {
  depends_on     = ["oci_database_data_guard_association.shard_data_guard_association"]
  count          = var.num_of_shards * (var.num_of_shard_groups - 1)
  compartment_id = var.compartment_ocid
  db_system_id   = lookup(data.oci_database_db_systems.shard_stdby_db_systems[count.index].db_systems[0], "id")
}

# Get DB node details
data "oci_database_db_node" "shard_stby_db_node_details" {
  count      = "${var.num_of_shards * (var.num_of_shard_groups - 1)}"
  db_node_id = "${lookup(data.oci_database_db_nodes.shard_stby_db_nodes[count.index].db_nodes[0], "id")}"
}

# Gets the OCID of the first (default) vNIC
data "oci_core_vnic" "shard_stby_db_node_vnic" {
  count   = "${var.num_of_shards * (var.num_of_shard_groups - 1)}"
  vnic_id = "${data.oci_database_db_node.shard_stby_db_node_details[count.index].vnic_id}"
}

output "shard_standby_public_ip" {
  value = ["${data.oci_core_vnic.shard_stby_db_node_vnic.*.public_ip_address}"]
}

data "oci_database_database" "stdby_shard_database" {
  count       = "${var.num_of_shards * (var.num_of_shard_groups - 1)}"
  database_id = "${oci_database_data_guard_association.shard_data_guard_association[count.index].peer_database_id}"
}

# output "stdby_shard_db_dataguard_association_id" {
#  value = ["${oci_database_data_guard_association.shard_data_guard_association.*.id}"]
# }

# output "stdby_shard_db_dataguard_association_peer_db_id" {
#  value = ["${oci_database_data_guard_association.shard_data_guard_association.*.peer_database_id}"]
# }

# output "stdby_shard_db_dataguard_association_db_id" {
#  value = ["${oci_database_data_guard_association.shard_data_guard_association.*.database_id}"]
# }

# output "stdby_shard_db_dataguard_association_peer_db_home_id" {
#  value = ["${oci_database_data_guard_association.shard_data_guard_association.*.peer_db_home_id}"]
# }

# output "stdby_shard_db_dataguard_association_peer_db_system_id" {
#  value = ["${oci_database_data_guard_association.shard_data_guard_association.*.peer_db_system_id}"]
# }

# output "stdby_shard_db_dataguard_association_peer_role" {
#  value = ["${oci_database_data_guard_association.shard_data_guard_association.*.peer_role}"]
# }

