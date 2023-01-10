/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "oci_core_subnet" "subnet" {
  count                       = "${length(var.availability_domain)}"
  availability_domain         = "${element(var.availability_domain, count.index)}"
  cidr_block                  = "${var.vcn_subnet_cidr[count.index]}"
  display_name                = "${var.dns_label}${var.AD[count.index]}"
  dns_label                   = "${var.dns_label}${var.AD[count.index]}"
  compartment_id              = "${var.compartment_ocid}"
  vcn_id                      = "${var.vcn_id}"
  route_table_id              = "${var.route_table_id}"
  security_list_ids           = ["${var.security_list_ids}"]
  prohibit_public_ip_on_vnic  = "${var.private_subnet}"
  dhcp_options_id             = "${var.dhcp_options_id}"
  lifecycle {
    ignore_changes            = ["availability_domain"]
  }
}
