
output "vcn_id" {
  value = "${local.vcn_id}"
}

output "gateway_id" {
  value = "${local.gateway_id}"
}

output "dhcp_options_id" {
  value = "${local.dhcp_options_id}"
}

output "route_table_id" {
  value = "${oci_core_route_table.route_table.*.id}"
}

output "security_list_id" {
  value = "${oci_core_security_list.security_list.*.id}"
}

output "subnet_id_list" {
  value = [ "${concat(oci_core_subnet.subnets.*.id, var.existing_subnet_ids)}" ]
}
