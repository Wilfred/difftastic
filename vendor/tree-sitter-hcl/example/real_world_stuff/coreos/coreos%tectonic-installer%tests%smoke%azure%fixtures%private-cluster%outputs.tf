/***
    Outputs
***/

output "vpn_gw_endpoint" {
  value = "${azurerm_public_ip.vpn_gw_ip.fqdn}"
}

output "vpn_gw_private_ip" {
  value = "${azurerm_network_interface.vpn_gw.private_ip_address}"
}

output "vpn_gw_dns_servers" {
  value = "${azurerm_network_interface.vpn_gw.applied_dns_servers}"
}

output "tectonic_azure_external_resource_group" {
  value = "${azurerm_resource_group.tectonic_cluster.id}"
}

output "tectonic_azure_external_vnet_id" {
  value = "${azurerm_virtual_network.tectonic_private_vnet.id}"
}
