/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


# Get a list of Availability Domains

data "oci_database_db_system_shapes" "db_system_shapes" {
	availability_domain = "${element(var.availability_domain, count.index)}"
	compartment_id = "${var.compartment_ocid}"
    filter {
        name = "shape"
        values = ["${var.db_instance_shape}"]
    }
}

data "oci_database_db_nodes" "DBNodeList" {
  compartment_id = "${var.compartment_ocid}"
  count    = "${length(var.availability_domain)}"
  #count = "${length(var.availability_domain)}"
  #db_system_id = "${oci_database_db_system.ebsdb.0.id}"
  db_system_id ="${element(flatten(oci_database_db_system.database.*.id), count.index)}"
  /*filter {
    name = "id"
    #values = ["${oci_file_storage_mount_target.ebsappfss_mt1.*.private_ip_ids[count.index]}"]
    values = ["${element(flatten(oci_database_db_system.ebsdb.*.db_nodes), count.index)}"]
  }*/
}
/*
data "oci_database_db_node" "db_node_details" {
  #count    = "${length(var.availability_domain) * var.db_node_count}"
  count    = "${length(var.availability_domain) * (var.db_node_count)}"
  #db_node_id = "${lookup(data.oci_database_db_nodes.db_nodes.db_nodes[0], "id")}"
  db_node_id = "${element(data.oci_database_db_nodes.DBNodeList.*.db_nodes, count.index)}" 
}*/
/*
data "oci_core_private_ips" "DBNodeIPs" {
  count    = "${length(var.availability_domain) * var.db_node_count}"
  #subnet_id= "${oci_file_storage_mount_target.ebsappfss_mt1.*.subnet_id[count.index]}"
   vnic_id= "${lookup(data.oci_database_db_nodes.DBNodeList.*.db_nodes, count.index)}"

  filter {
    name = "id"
    #values = ["${oci_file_storage_mount_target.ebsappfss_mt1.*.private_ip_ids[count.index]}"]
    values = ["${element(flatten(data.oci_database_db_nodes.DBNodeList.*.vnic_id), count.index)}"]
  #values = ["${element(flatten(oci_file_storage_mount_target.ebsappfss_mt1.*.private_ip_ids), count.index)}"]
  }
}

*/


/*
locals {
  fss-private-ips = "${flatten(concat(data.oci_core_private_ips.ip_mount_target.*.private_ips))}"
}

data "template_file" "fss-ips" {
  template = "$${ip_address}"
  count    = "${length(var.availability_domain)}"

  vars = {
    ip_address = "${lookup(local.fss-private-ips[count.index], "ip_address")}"
  }
}

*/

