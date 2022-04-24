// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.
resource "oci_core_virtual_network" "CoreVCN" {
  cidr_block     = "${var.vcn_cidr}"
  compartment_id = "${var.compartment_ocid}"
  display_name   = "VCN-1"
}

# First VCN configuration
resource "oci_core_internet_gateway" "MgmtIG" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "MgmtIG"
  vcn_id         = "${oci_core_virtual_network.CoreVCN.id}"
}

resource "oci_core_route_table" "MgmtRouteTable" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.CoreVCN.id}"
  display_name   = "MgmtRouteTable"

  route_rules {
    cidr_block        = "0.0.0.0/0"
    network_entity_id = "${oci_core_internet_gateway.MgmtIG.id}"
  }
}

resource "oci_core_security_list" "MgmtSecurityList" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "MgmtSecurityList"
  vcn_id         = "${oci_core_virtual_network.CoreVCN.id}"

  egress_security_rules {
    protocol    = "all"
    destination = "0.0.0.0/0"
  }

  ingress_security_rules {
    protocol = "all"
    source   = "${var.vcn_cidr}"
  }

  ingress_security_rules {
    protocol = "all"
    source   = "${var.vcn_cidr2}"
  }

  ingress_security_rules {
    protocol = "6"
    source   = "0.0.0.0/0"

    tcp_options {
      min = 22
      max = 22
    }
  }
  ingress_security_rules {
    protocol = "1"
    source   = "0.0.0.0/0"

    icmp_options {
      type = 3
      code = 4
    }
  }
}

resource "oci_core_subnet" "MgmtSubnet" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD - 1], "name")}"
  cidr_block          = "${var.mgmt_subnet_cidr}"
  display_name        = "MgmtSubnet"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.CoreVCN.id}"
  route_table_id      = "${oci_core_route_table.MgmtRouteTable.id}"
  security_list_ids   = ["${oci_core_security_list.MgmtSecurityList.id}"]
  dhcp_options_id     = "${oci_core_virtual_network.CoreVCN.default_dhcp_options_id}"
}

# Frist VCN Private instance details
resource "oci_core_security_list" "PrivateSecurityList" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "PrivateSecurityList"
  vcn_id         = "${oci_core_virtual_network.CoreVCN.id}"

  egress_security_rules {
    protocol    = "all"
    destination = "0.0.0.0/0"
  }

  ingress_security_rules {
    protocol = "all"
    source   = "${var.vcn_cidr}"
  }

  ingress_security_rules {
    protocol = "all"
    source   = "${var.vcn_cidr2}"
  }
}

resource "oci_core_route_table" "PrivateRouteTable" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.CoreVCN.id}"
  display_name   = "PrivateRouteTable"

  route_rules {
    cidr_block        = "0.0.0.0/0"
    network_entity_id = "${oci_core_private_ip.BridgeInstancePrivateIP.id}"
  }
}

resource "oci_core_subnet" "PrivateSubnet" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD - 1], "name")}"
  cidr_block                 = "${var.private_subnet_cidr}"
  display_name               = "PrivateSubnet"
  compartment_id             = "${var.compartment_ocid}"
  vcn_id                     = "${oci_core_virtual_network.CoreVCN.id}"
  route_table_id             = "${oci_core_route_table.PrivateRouteTable.id}"
  security_list_ids          = ["${oci_core_security_list.PrivateSecurityList.id}"]
  dhcp_options_id            = "${oci_core_virtual_network.CoreVCN.default_dhcp_options_id}"
  prohibit_public_ip_on_vnic = "true"
}

resource "oci_core_instance" "PrivateInstance" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD - 1], "name")}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "PrivateInstance"
  image               = "${var.InstanceImageOCID[var.region]}"
  shape               = "${var.InstanceShape}"

  create_vnic_details {
    subnet_id        = "${oci_core_subnet.PrivateSubnet.id}"
    assign_public_ip = false
  }

  metadata = {
    ssh_authorized_keys = "${file(var.ssh_public_key_path)}"
  }

  timeouts {
    create = "10m"
  }
}
