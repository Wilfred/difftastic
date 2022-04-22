output "host_id" {
  value = azurerm_linux_virtual_machine.vm.id
}

output "host_public_ip" {
  value = azurerm_public_ip.vm.*.ip_address
}

output "host_dns" {
  value = azurerm_public_ip.vm.*.fqdn
}

output "host_private_ip" {
  value = azurerm_linux_virtual_machine.vm.private_ip_address
}

output "instance_private_key" {
  value = tls_private_key.proxy_ssh.private_key_pem
}

output "network_id" {
  value = module.network.network_id
}

output "network_redis_subnet_id" {
  value = module.network.network_redis_subnet_id
}

output "network_private_subnet_id" {
  value = module.network.network_private_subnet_id
}

output "network_frontend_subnet_id" {
  value = module.network.network_frontend_subnet_id
}

output "network_bastion_subnet_id" {
  value = module.network.network_bastion_subnet_id
}
