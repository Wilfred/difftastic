# General
# -------
output "resource_group_name" {
  value = local.resource_group_name
}

# Network
# -------
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
