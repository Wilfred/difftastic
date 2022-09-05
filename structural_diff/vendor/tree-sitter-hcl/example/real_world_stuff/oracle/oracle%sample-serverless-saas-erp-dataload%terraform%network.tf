# Copyright (c)  2021,  Oracle and/or its affiliates.
# Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

resource "oci_core_internet_gateway" "ServerlessIntegration_igtw" {
  compartment_id = var.compartment_ocid
  vcn_id = oci_core_vcn.ServerlessIntegration_vcn.id
  display_name = "ServerlessIntegration_igtw"
}

resource "oci_core_default_route_table" "ServerlessIntegration_routetable" {
  manage_default_resource_id = oci_core_vcn.ServerlessIntegration_vcn.default_route_table_id
  display_name = "ServerlessIntegration_routetable"

  route_rules {
    destination = "0.0.0.0/0"
    network_entity_id = oci_core_internet_gateway.ServerlessIntegration_igtw.id
  }
}

resource "oci_core_default_security_list" "ServerlessIntegration_igtw_sec_list" {
  manage_default_resource_id = oci_core_vcn.ServerlessIntegration_vcn.default_security_list_id
  display_name = "ServerlessIntegration_seclist"
  egress_security_rules {
    protocol = "all"
    destination = "0.0.0.0/0"
    stateless = false
  }

  // allow inbound icmp traffic of a specific type
  ingress_security_rules {
    protocol = 1
    source = oci_core_vcn.ServerlessIntegration_vcn.cidr_block
    stateless = false

    icmp_options {
      type = 3
    }
  }

  ingress_security_rules {
    protocol = "6"
    // tcp
    source = "0.0.0.0/0"
    stateless = false

    tcp_options {
      min = 443
      max = 443
    }
  }
}

resource "oci_core_subnet" "ServerlessIntegration_subnet" {
  cidr_block = var.functionsapp.subnet
  compartment_id = var.compartment_ocid
  vcn_id = oci_core_vcn.ServerlessIntegration_vcn.id
  display_name = "ServerlessIntegration_subnet"
}

resource "oci_core_vcn" "ServerlessIntegration_vcn" {
  cidr_block = var.functionsapp.subnet
  compartment_id = var.compartment_ocid
  display_name = "ServerlessIntegration_VCN"
}
