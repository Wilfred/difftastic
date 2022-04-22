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

output "proxy_ca_cert" {
  value = tls_self_signed_cert.ca.cert_pem
}

# private key local file excluded via gitignore
# ---------------------------------------------
resource "local_file" "proxy_key" {
  filename        = "${path.module}/proxy_key.pem"
  file_permission = "0600"
  content         = tls_private_key.proxy_ssh.private_key_pem
}

# bastion fqdn
output "bastion_fqdn" {
  value = azurerm_public_ip.vm_bastion.fqdn
}

# private key local file excluded via gitignore
# ---------------------------------------------
resource "local_file" "bastion_key" {
  filename        = "${path.module}/bastion_key.pem"
  file_permission = "0600"
  content         = tls_private_key.bastion_ssh.private_key_pem
}
