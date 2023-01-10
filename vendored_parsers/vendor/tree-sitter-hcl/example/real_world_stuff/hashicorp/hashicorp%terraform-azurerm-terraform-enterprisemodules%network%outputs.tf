output "network_id" {
  value = azurerm_virtual_network.tfe_network.id
}

output "network_private_subnet_id" {
  value = azurerm_subnet.tfe_network_private_subnet.id
}

output "network_frontend_subnet_id" {
  value = azurerm_subnet.tfe_network_frontend_subnet.id
}

output "network_bastion_subnet_id" {
  value = var.create_bastion == true ? azurerm_subnet.tfe_network_bastion_subnet[0].id : ""
}

output "network_redis_subnet_id" {
  value = var.active_active == true ? azurerm_subnet.tfe_network_redis_subnet[0].id : ""
}
