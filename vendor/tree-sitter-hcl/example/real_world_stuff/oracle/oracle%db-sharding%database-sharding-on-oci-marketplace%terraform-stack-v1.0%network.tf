# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl


resource "oci_core_vcn" "vcn" {
  count          = "${var.create_new_network ? 1 : 0}"
  cidr_block     = "${var.vcn_cidr_block}"
  compartment_id = "${var.vcn_compartment_id}"
  display_name   = "${var.display_name} VCN"
  dns_label      = "${var.vcn_dns_label}"
}

data "oci_core_vcn" "vcn" {
  vcn_id = "${var.create_new_network ? join(",", oci_core_vcn.vcn.*.id) : var.vcn_id}"
}

resource "oci_core_security_list" "security_list" {
  count          = "${var.create_new_network ? 1 : 0}"
  compartment_id = "${var.vcn_compartment_id}"
  vcn_id         = "${oci_core_vcn.vcn.0.id}"
  display_name   = "${var.display_name} Allow ssh"

  ingress_security_rules {
    protocol  = "all"
    source    = "0.0.0.0/0"
    stateless = false
  }
}

resource "oci_core_internet_gateway" "igw" {
  count          = "${! var.create_new_network || ! var.assign_public_ip ? 0 : 1}"
  compartment_id = "${var.vcn_compartment_id}"
  vcn_id         = "${oci_core_vcn.vcn.0.id}"
  display_name   = "${var.display_name} Gateway"
}

resource "oci_core_route_table" "route_table" {
  count          = "${! var.create_new_network || ! var.assign_public_ip ? 0 : 1}"
  compartment_id = "${var.vcn_compartment_id}"
  vcn_id         = "${oci_core_vcn.vcn.0.id}"
  display_name   = "${var.display_name} Route Table"

  route_rules {
    destination       = "0.0.0.0/0"
    network_entity_id = "${oci_core_internet_gateway.igw.0.id}"
  }
}

resource "oci_core_subnet" "subnet" {
  count             = "${var.create_new_network ? 1 : 0}"
  vcn_id            = "${oci_core_vcn.vcn.0.id}"
  cidr_block        = "${var.subnet_cidr_block}"
  display_name      = "${var.display_name} Subnet"
  dns_label         = "${var.subnet_dns_label}"
  compartment_id    = "${var.subnet_compartment_id}"
  security_list_ids = ["${data.oci_core_vcn.vcn.default_security_list_id}", "${join(",", oci_core_security_list.security_list.*.id)}"]
  route_table_id    = "${join(",", oci_core_route_table.route_table.*.id)}"
}

output "subnet_id" {
  value = "${var.create_new_network ? join("", oci_core_subnet.subnet.*.id) : var.subnet_id}"
}
