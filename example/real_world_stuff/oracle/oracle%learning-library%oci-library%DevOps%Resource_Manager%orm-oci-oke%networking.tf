
// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.

resource "oci_core_virtual_network" "test_vcn" {
  cidr_block     = "${var.vcn_cidr}"
  compartment_id = "${var.compartment_ocid}"
  display_name   = "tfVcnForClusters"
  dns_label      = "${var.cluster_name}"
}

resource "oci_core_internet_gateway" "test_ig" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "tfClusterInternetGateway"
  vcn_id         = "${oci_core_virtual_network.test_vcn.id}"
}


resource "oci_core_nat_gateway" "test_nat_gateway" {


  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.test_vcn.id}"
  display_name   = "tfNatGateway"

  count = "${(var.worker_mode == "private") ? 1 : 0}"

}

resource "oci_core_service_gateway" "test_service_gateway" {

  compartment_id = "${var.compartment_ocid}"
  services {
    service_id = "${lookup(data.oci_core_services.test_services.services[0], "id")}"
  }
  vcn_id         = "${oci_core_virtual_network.test_vcn.id}"
  display_name = "testServiceGateway"

  count = "${(var.worker_mode == "private") ? 1 : 0}"


}

resource "oci_core_route_table" "test_route_table" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.test_vcn.id}"
  display_name   = "tfClustersRouteTable"

  route_rules {
    destination       = "0.0.0.0/0"
    destination_type  = "CIDR_BLOCK"
    network_entity_id = "${oci_core_internet_gateway.test_ig.id}"
  }
}

resource "oci_core_route_table" "test_route_table_private" {


  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.test_vcn.id}"
  display_name   = "tfWorkerPrivateRouteTable"


  route_rules {

    destination       = "0.0.0.0/0"
    destination_type  = "CIDR_BLOCK"
    network_entity_id = "${oci_core_nat_gateway.test_nat_gateway[count.index].id}"
  }

 route_rules {
    destination       = "${lookup(data.oci_core_services.test_services.services[0], "cidr_block")}"
    destination_type  = "SERVICE_CIDR_BLOCK"
    network_entity_id = "${oci_core_service_gateway.test_service_gateway[count.index].id}"
  }


  count = "${(var.worker_mode == "private") ? 1 : 0}"

}

resource "oci_core_subnet" "lb_regional_subnet" {
  #Required
  cidr_block          = "${var.lb_cidr}"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.test_vcn.id}"

  # Provider code tries to maintain compatibility with old versions.
  security_list_ids = ["${oci_core_security_list.lb_seclist.id}"]
  display_name      = "tflbRegionalSubNet"
  route_table_id    = "${oci_core_route_table.test_route_table.id}"
  #Public subnet
  prohibit_public_ip_on_vnic = false
}


resource "oci_core_subnet" "nodepool_regional_subnet" {
  #Required
  cidr_block          = "${var.nodepools_cidr}"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.test_vcn.id}"

  # Provider code tries to maintain compatibility with old versions.
  security_list_ids =  ["${var.worker_mode}" == "private" ? "${oci_core_security_list.workers_private_seclist[0].id}" : "${oci_core_security_list.workers_public_seclist[0].id}"] 
  display_name      = "tfRegionalSubnetForNodePool"
  route_table_id    =  var.worker_mode == "private" ? "${oci_core_route_table.test_route_table_private[0].id}" : "${oci_core_route_table.test_route_table.id}"
  # private subnet
  prohibit_public_ip_on_vnic = var.worker_mode == "private" ? true : false
}
