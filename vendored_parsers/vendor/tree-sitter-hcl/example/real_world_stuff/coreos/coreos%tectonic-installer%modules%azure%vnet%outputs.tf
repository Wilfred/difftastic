locals {
  # A regular expression that parses a Azure subnet id to extract subnet name.
  const_id_to_subnet_name_regex = "/^/subscriptions/[-\\w]+/resourceGroups/[-\\w]+/providers/Microsoft.Network/virtualNetworks/[.\\w]+/subnets/([.\\w-]+)$/"

  # A regular expression that parses Azure resource IDs into component identifiers
  const_id_to_group_name_regex = "/^/subscriptions/[-\\w]+/resourceGroups/([\\w()-\\.]+)/providers/[.\\w]+/[.\\w]+/([.\\w-]+)$/"
}

output "vnet_id" {
  value = "${var.external_vnet_id == "" ? element(concat(azurerm_virtual_network.tectonic_vnet.*.name, list("")), 0) : replace(var.external_vnet_id, local.const_id_to_group_name_regex, "$2")}"
}

output "master_subnet" {
  value = "${var.external_master_subnet_id == "" ?  element(concat(azurerm_subnet.master_subnet.*.id, list("")), 0) : var.external_master_subnet_id}"
}

output "worker_subnet" {
  value = "${var.external_worker_subnet_id == "" ?  element(concat(azurerm_subnet.worker_subnet.*.id, list("")), 0) : var.external_worker_subnet_id}"
}

output "worker_subnet_name" {
  value = "${var.external_worker_subnet_id == "" ?  element(concat(azurerm_subnet.worker_subnet.*.name, list("")), 0) : replace(var.external_worker_subnet_id, local.const_id_to_subnet_name_regex, "$1")}"
}

output "vnet_resource_group" {
  value = "${var.external_vnet_id == "" ?  "" : replace(var.external_vnet_id, local.const_id_to_group_name_regex, "$1")}"
}

# TODO: Allow user to provide their own network
output "etcd_cidr" {
  value = "${element(concat(azurerm_subnet.master_subnet.*.address_prefix, list("")), 0)}"
}

output "master_cidr" {
  value = "${element(concat(azurerm_subnet.master_subnet.*.address_prefix, list("")), 0)}"
}

output "worker_cidr" {
  value = "${element(concat(azurerm_subnet.worker_subnet.*.address_prefix, list("")), 0)}"
}

output "worker_nsg_name" {
  value = "${var.external_nsg_worker_id == "" ? element(concat(azurerm_network_security_group.worker.*.name, list("")), 0) : var.external_nsg_worker_id}"
}

output "etcd_network_interface_ids" {
  value = ["${azurerm_network_interface.etcd_nic.*.id}"]
}

output "etcd_endpoints" {
  value = "${azurerm_network_interface.etcd_nic.*.private_ip_address}"
}

output "master_network_interface_ids" {
  value = ["${azurerm_network_interface.tectonic_master.*.id}"]
}

output "worker_network_interface_ids" {
  value = ["${azurerm_network_interface.tectonic_worker.*.id}"]
}

output "master_private_ip_addresses" {
  value = ["${azurerm_network_interface.tectonic_master.*.private_ip_address}"]
}

output "worker_private_ip_addresses" {
  value = ["${azurerm_network_interface.tectonic_worker.*.private_ip_address}"]
}

output "api_ip_addresses" {
  value = ["${split("|", var.private_cluster ? join("|", azurerm_network_interface.tectonic_master.*.private_ip_address) : join("|", azurerm_public_ip.api_ip.*.ip_address))}"]
}

output "console_ip_addresses" {
  value = ["${split("|", var.private_cluster ? join("|", azurerm_network_interface.tectonic_worker.*.private_ip_address) : join("|", azurerm_public_ip.console_ip.*.ip_address))}"]
}

output "ingress_fqdn" {
  value = "${var.base_domain == "" ? element(concat(azurerm_public_ip.console_ip.*.fqdn, list("")), 0) : "${var.cluster_name}.${var.base_domain}${var.private_cluster ? ":32000" : ""}"}"
}

output "api_fqdn" {
  value = "${var.base_domain == "" ? element(concat(azurerm_public_ip.api_ip.*.fqdn, list("")), 0) : "${var.cluster_name}-api.${var.base_domain}"}"
}
