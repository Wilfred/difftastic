provider "azurerm" {
  features {}
}

module "tfe" {
  source = "../../"

  location             = var.location
  friendly_name_prefix = var.friendly_name_prefix
  tfe_license_filepath = "${path.module}/files/license.rli"

  resource_group_name     = var.resource_group_name
  resource_group_name_dns = var.resource_group_name_dns

  domain_name   = var.domain_name
  tfe_subdomain = var.tfe_subdomain

  key_vault_name   = var.key_vault_name
  certificate_name = var.certificate_name

  tags = var.tags

  vm_node_count = 2

  # Existing network information
  network_id                 = var.network_id
  network_private_subnet_id  = var.network_private_subnet_id
  network_bastion_subnet_id  = var.network_bastion_subnet_id
  network_frontend_subnet_id = var.network_frontend_subnet_id
  network_redis_subnet_id    = var.network_redis_subnet_id
}
