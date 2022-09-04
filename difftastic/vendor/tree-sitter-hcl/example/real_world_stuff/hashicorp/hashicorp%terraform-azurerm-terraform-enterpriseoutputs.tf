# Application
# -----------
output "tfe_application_url" {
  value       = "https://${local.fqdn}"
  description = "Terraform Enterprise Application URL"
}

output "login_url" {
  value       = "https://${local.fqdn}/admin/account/new?token=${module.user_data.user_token.value}"
  description = "Login URL to setup the TFE instance once it is initialized"
}

output "tfe_console_url" {
  value       = "https://${local.fqdn}:8800"
  description = "Terraform Enterprise Console URL"
}

# General
# -------
output "resource_group_name" {
  value = module.resource_groups.resource_group_name
}

output "resource_group_name_bootstrap" {
  value = module.resource_groups.resource_group_name_bootstrap
}

# Network
# -------
output "network_id" {
  value = local.network_id
}

output "network_private_subnet_id" {
  value = local.network_private_subnet_id
}

output "network_frontend_subnet_id" {
  value = local.network_frontend_subnet_id
}

output "network_bastion_subnet_id" {
  value = var.network_id != "" && var.create_bastion == true ? module.network.*.network_bastion_subnet_id : []
}

output "network_redis_subnet_id" {
  value = var.network_id != "" && local.active_active == true ? module.network.*.network_redis_subnet_id : []
}

# Service Accounts
# ----------------
output "storage_account_name" {
  value = module.service_accounts.storage_account_name
}

output "bootstrap_storage_account_name" {
  value = module.service_accounts.bootstrap_storage_account_name
}

# Object Storage
# --------------
output "storage_account_container_name" {
  value = module.object_storage.storage_account_container_name
}

output "bootstrap_storage_account_container_name" {
  value = module.object_storage.bootstrap_storage_account_container_name
}

# Database
# --------
output "database_server_id" {
  value = module.database.database_server_id
}

output "database_server_name" {
  value = module.database.database_server_name
}

output "database_server_fqdn" {
  value = module.database.database_server_fqdn
}

output "database_user" {
  value = module.database.database_user
}

output "database_password" {
  value = module.database.database_password
}

output "database_id" {
  value = module.database.database_id
}

output "database_name" {
  value = module.database.database_name
}

# SSH
# ---
output "instance_private_key" {
  value = var.vm_public_key == "" ? tls_private_key.tfe_ssh[0].private_key_pem : "An existing 'vm_public_key' was provided"
}

# Bastion
# -------
output "bastion_host_id" {
  value = var.create_bastion == true ? module.bastion.*.bastion_host_id : []
}

output "bastion_host_dns_name" {
  value = var.create_bastion == true ? module.bastion.*.bastion_host_dns_name : []
}

# User_data
# ---------
output "tfe_userdata_base64_encoded" {
  value = module.user_data.tfe_userdata_base64_encoded
}

output "tfe_console_password" {
  value = module.user_data.tfe_console_password
}

# Redis
# -----
output "redis_hostname" {
  value = local.active_active == true ? module.redis[0].redis_hostname : null
}

output "redis_ssl_port" {
  value = local.active_active == true ? module.redis[0].redis_ssl_port : null
}

output "redis_pass" {
  value = local.active_active == true ? module.redis[0].redis_pass : null
}

# Load balancer
# -------------
output "load_balancer_backend_id" {
  value = module.load_balancer.load_balancer_backend_id
}

output "load_balancer_ip" {
  value = var.dns_create_record == false ? "External DNS record must be configured for: ${module.load_balancer.load_balancer_ip}" : module.load_balancer.load_balancer_ip
}

# VM
# --
output "instance_user_name" {
  value = var.vm_user
}
