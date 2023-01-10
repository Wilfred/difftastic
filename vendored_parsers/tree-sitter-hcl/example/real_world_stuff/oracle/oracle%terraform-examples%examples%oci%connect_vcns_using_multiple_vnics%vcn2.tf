// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

# Second VCN
resource "oci_core_virtual_network" "CoreVCN2" {
  cidr_block     = "${var.vcn_cidr2}"
  compartment_id = "${var.compartment_ocid}"
  display_name   = "VCN-2"
}

resource "oci_core_security_list" "MgmtSecurityList2" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "MgmtSecurityList2"
  vcn_id         = "${oci_core_virtual_network.CoreVCN2.id}"

  egress_security_rules {
    protocol    = "all"
    destination = "0.0.0.0/0"
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

resource "oci_core_subnet" "MgmtSubnet2" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD - 1], "name")}"
  cidr_block          = "${var.mgmt_subnet_cidr2}"
  display_name        = "MgmtSubnet2"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.CoreVCN2.id}"
  security_list_ids   = ["${oci_core_security_list.MgmtSecurityList2.id}"]
  dhcp_options_id     = "${oci_core_virtual_network.CoreVCN2.default_dhcp_options_id}"
}

# Second VCN private instance details
resource "oci_core_security_list" "PrivateSecurityList2" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "PrivateSecurityList2"
  vcn_id         = "${oci_core_virtual_network.CoreVCN2.id}"

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

resource "oci_core_route_table" "PrivateRouteTable2" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.CoreVCN2.id}"
  display_name   = "PrivateRouteTable2"

  route_rules {
    cidr_block        = "0.0.0.0/0"
    network_entity_id = "${lookup(data.oci_core_private_ips.BridgeInstancePrivateIP2.private_ips[0], "id")}"
  }
}

resource "oci_core_subnet" "PrivateSubnet2" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD - 1], "name")}"
  cidr_block                 = "${var.private_subnet_cidr2}"
  display_name               = "PrivateSubnet2"
  compartment_id             = "${var.compartment_ocid}"
  vcn_id                     = "${oci_core_virtual_network.CoreVCN2.id}"
  route_table_id             = "${oci_core_route_table.PrivateRouteTable2.id}"
  security_list_ids          = ["${oci_core_security_list.PrivateSecurityList2.id}"]
  dhcp_options_id            = "${oci_core_virtual_network.CoreVCN2.default_dhcp_options_id}"
  prohibit_public_ip_on_vnic = "true"
}

resource "oci_core_instance" "PrivateInstance2" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD - 1], "name")}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "PrivateInstance2"
  image               = "${var.InstanceImageOCID[var.region]}"
  shape               = "${var.InstanceShape2}"

  create_vnic_details {
    subnet_id        = "${oci_core_subnet.PrivateSubnet2.id}"
    assign_public_ip = false
  }

  metadata = {
    ssh_authorized_keys = "${file(var.ssh_public_key_path)}"
  }

  timeouts {
    create = "10m"
  }
}
