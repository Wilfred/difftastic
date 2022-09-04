/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "vcn_id" {
  description = "ocid of VCN"
  value = "${oci_core_virtual_network.vcn.id}"
}
output "default_dhcp_id" {
  description = "ocid of default DHCP options"
  value = "${oci_core_virtual_network.vcn.default_dhcp_options_id}"
}

output "igw_id" {
  description = "ocid of internet gateway"
  value = "${oci_core_internet_gateway.igw.id}"
}

output "natgtw_id" {
  description = "ocid of service gateway"
  value = "${oci_core_nat_gateway.natgtw.id}"
}
output "svcgtw_id" {
  description = "ocid of service gateway"
  value = "${oci_core_service_gateway.svcgtw.id}"
}



output "pubslid" {
  value = "${oci_core_security_list.publicsl.id}"
}



output "dbslid" {
  value = "${oci_core_security_list.dbsl.id}"
}

output "psntslid" {
  value = "${oci_core_security_list.psntsl.id}"
}
output "midslid" {
  value = "${oci_core_security_list.middlesl.id}"
}

output "admslid" {
  value = "${oci_core_security_list.adminsl.id}"
}

output "lbslid" {
  value = "${oci_core_security_list.lbsl.id}"
}
