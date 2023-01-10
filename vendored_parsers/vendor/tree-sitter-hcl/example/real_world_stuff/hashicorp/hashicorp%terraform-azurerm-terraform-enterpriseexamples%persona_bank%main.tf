provider "azurerm" {
  features {}
}

module "tfe" {
  source = "../../"

  location             = var.location
  friendly_name_prefix = var.friendly_name_prefix
  tfe_license_filepath = var.tfe_license_filepath

  resource_group_name     = var.resource_group_name
  resource_group_name_dns = var.resource_group_name_dns

  domain_name   = var.domain_name
  tfe_subdomain = var.tfe_subdomain

  tags = var.tags

  vm_node_count = 2

  # Behind proxy information
  proxy_ip        = var.proxy_ip
  proxy_port      = var.proxy_port
  proxy_cert_name = var.proxy_cert_name
  proxy_cert_path = var.proxy_cert_path

  # Existing network information
  network_id                 = var.network_id
  network_private_subnet_id  = var.network_private_subnet_id
  network_frontend_subnet_id = var.network_frontend_subnet_id
  network_redis_subnet_id    = var.network_redis_subnet_id

  # Persona - Bank
  vm_sku                                = "Standard_D32a_v4"
  vm_image_id                           = "rhel"
  load_balancer_public                  = false
  load_balancer_type                    = "load_balancer"
  redis_enable_non_ssl_port             = false
  redis_enable_authentication           = true
  user_data_redis_use_tls               = true
  redis_rdb_backup_enabled              = true
  redis_rdb_backup_frequency            = 60
  redis_rdb_existing_storage_account    = var.redis_rdb_existing_storage_account
  redis_rdb_existing_storage_account_rg = var.redis_rdb_existing_storage_account_rg

  create_bastion = false
}
