// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

resource "oci_core_virtual_network" "tf-vcn1" {
  cidr_block     = "10.0.0.0/16"
  dns_label      = "vcn1"
  compartment_id = "${var.compartment_ocid}"
  display_name   = "tf-vcn1"
}

resource "oci_core_internet_gateway" "tf-ig1" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "tf-ig1"
  vcn_id         = "${oci_core_virtual_network.tf-vcn1.id}"
}

resource "oci_core_default_route_table" "tf-default-route-table" {
  manage_default_resource_id = "${oci_core_virtual_network.tf-vcn1.default_route_table_id}"
  display_name               = "tf-default-route-table"

  route_rules {
    destination       = "0.0.0.0/0"
    network_entity_id = "${oci_core_internet_gateway.tf-ig1.id}"
  }
}

resource "oci_core_route_table" "tf-route-table1" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.tf-vcn1.id}"
  display_name   = "tf-route-table1"

  route_rules {
    destination       = "0.0.0.0/0"
    network_entity_id = "${oci_core_internet_gateway.tf-ig1.id}"
  }
}

resource "oci_core_default_dhcp_options" "tf-default-dhcp-options" {
  manage_default_resource_id = "${oci_core_virtual_network.tf-vcn1.default_dhcp_options_id}"
  display_name               = "tf-default-dhcp-options"

  // required
  options {
    type        = "DomainNameServer"
    server_type = "VcnLocalPlusInternet"
  }
}

resource "oci_core_dhcp_options" "tf-dhcp-options1" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.tf-vcn1.id}"
  display_name   = "tf-dhcp-options1"

  // required
  options {
    type        = "DomainNameServer"
    server_type = "VcnLocalPlusInternet"
  }
}

resource "oci_core_default_security_list" "tf-default-security-list" {
  manage_default_resource_id = "${oci_core_virtual_network.tf-vcn1.default_security_list_id}"
  display_name               = "tf-default-security-list"

  // allow outbound tcp traffic on all ports
  egress_security_rules {
    destination = "0.0.0.0/0"
    protocol    = "6"
  }

  // allow outbound udp traffic on a port range
  egress_security_rules {
    destination = "0.0.0.0/0"
    protocol    = "17"        // udp
    stateless   = true

    udp_options {
      min = 319
      max = 320
    }
  }

  // allow inbound ssh traffic
  ingress_security_rules {
    protocol  = "6"         // tcp
    source    = "0.0.0.0/0"
    stateless = false

    tcp_options {
      min = 22
      max = 22
    }
  }

  // allow inbound icmp traffic of a specific type
  ingress_security_rules {
    protocol  = 1
    source    = "0.0.0.0/0"
    stateless = true

    icmp_options {
      type = 3
      code = 4
    }
  }
}
