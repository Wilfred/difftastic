# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "oci_database_data_guard_association" "catalog_data_guard_association" {
  depends_on = ["null_resource.sdb_shard_catalog_configure"]
  count = "${length(var.shard_catalogs) * (length(var.shard_groups) - 1)}"

  #Required
  creation_type                    = "NewDbSystem"
  database_admin_password          = "${var.sys_pass}"
  database_id                      = "${data.oci_database_databases.primary_databases[0].databases.0.id}"
  protection_mode                  = "${var.protection_mode}"
  transport_type                   = "${var.transport_type}"

  #required for NewDbSystem creation_type
  display_name        = "${var.standby_catalog_name_prefix}${count.index}"
  subnet_id           = "${lookup(data.oci_core_subnet.shardgroup_subnet[floor(count.index/length(var.shard_catalogs)) + 1],"id")}"
  availability_domain = "${lookup(data.oci_core_subnet.shardgroup_subnet[floor(count.index/length(var.shard_catalogs)) + 1],"availability_domain")}"
  hostname            = "${var.standby_catalog_name_prefix}${count.index}"
  delete_standby_db_home_on_delete = "${var.delete_standby_db_home_on_delete}"

}

data "oci_database_db_systems" "catalog_stdby_db_systems" {
    count = "${length(var.shard_catalogs) * (length(var.shard_groups) - 1)}"
    #Required
    compartment_id = "${var.compartment_ocid}"

    #Optional
    display_name = "${var.standby_catalog_name_prefix}${count.index}"
}

data "oci_database_database" "stdby_catalog_database" {
   count = "${length(var.shard_catalogs) * (length(var.shard_groups) - 1)}"
   database_id = "${oci_database_data_guard_association.catalog_data_guard_association[count.index].peer_database_id}"
}

output "stdby_catalog_db_dataguard_association_id" {
 value = ["${oci_database_data_guard_association.catalog_data_guard_association.*.id}"]
}

output "stdby_catalog_db_dataguard_association_peer_db_id" {
 value = ["${oci_database_data_guard_association.catalog_data_guard_association.*.peer_database_id}"]
}

output "stdby_catalog_db_dataguard_association_db_id" {
 value = ["${oci_database_data_guard_association.catalog_data_guard_association.*.database_id}"]
}

output "stdby_catalog_db_dataguard_association_peer_db_home_id" {
 value = ["${oci_database_data_guard_association.catalog_data_guard_association.*.peer_db_home_id}"]
}

output "stdby_catalog_db_dataguard_association_peer_db_system_id" {
 value = ["${oci_database_data_guard_association.catalog_data_guard_association.*.peer_db_system_id}"]
}

output "stdby_catalog_db_dataguard_association_peer_role" {
 value = ["${oci_database_data_guard_association.catalog_data_guard_association.*.peer_role}"]
}

