/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


# Virtual Cloud Network (VCN)
resource "oci_core_virtual_network" "vcn" {
  compartment_id  = "${var.compartment_ocid}"
  cidr_block      = "${var.vcn_cidr}"
  dns_label       = "${var.vcn_dns_label}" 
  display_name    = "${var.vcn_dns_label}"
}


# Internet Gateway
resource "oci_core_internet_gateway" "igw" {
  compartment_id  = "${var.compartment_ocid}"
  vcn_id          = "${oci_core_virtual_network.vcn.id}"
  display_name    = "${var.vcn_dns_label}igw"
}

# NAT (Network Address Translation) Gateway
resource "oci_core_nat_gateway" "natgtw" {
  compartment_id  = "${var.compartment_ocid}"
  vcn_id          = "${oci_core_virtual_network.vcn.id}"
  display_name    = "${var.vcn_dns_label}natgtw"
}


# Service Gateway
resource "oci_core_service_gateway" "svcgtw" {
  compartment_id    = "${var.compartment_ocid}"
  
    services {                
      service_id    = "${lookup(data.oci_core_services.svcgtw_services.services[0], "id")}"
    }
      vcn_id        = "${oci_core_virtual_network.vcn.id}"
      display_name  = "${var.vcn_dns_label}svcgtw"
}

# Dynamic Routing Gateway (DRG)
resource "oci_core_drg" "drg" {
  compartment_id  = "${var.compartment_ocid}"
  display_name    = "${var.vcn_dns_label}drg"
}
resource "oci_core_drg_attachment" "drg_attachment" {
  drg_id        = "${oci_core_drg.drg.id}"
  vcn_id        = "${oci_core_virtual_network.vcn.id}"
  display_name  = "${var.vcn_dns_label}drgattchmt"
}
