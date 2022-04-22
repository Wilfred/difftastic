output "bastion_host_id" {
  value = azurerm_bastion_host.bastion_host.id
}

output "bastion_host_dns_name" {
  value = azurerm_bastion_host.bastion_host.dns_name
}
