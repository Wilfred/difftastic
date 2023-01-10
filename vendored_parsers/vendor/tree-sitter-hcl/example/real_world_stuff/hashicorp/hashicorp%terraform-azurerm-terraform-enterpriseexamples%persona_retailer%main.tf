provider "azurerm" {
  features {}
}

module "tfe" {
  source = "../../"

  location             = var.location
  friendly_name_prefix = var.friendly_name_prefix
  tfe_license_filepath = "${path.module}/files/ptfe-license.rli"

  resource_group_name     = var.resource_group_name
  resource_group_name_dns = var.resource_group_name_dns

  domain_name   = var.domain_name
  tfe_subdomain = var.tfe_subdomain

  key_vault_name   = var.key_vault_name
  certificate_name = var.certificate_name

  tags = var.tags

  vm_node_count = 2

  # Behind proxy information
  proxy_ip   = var.proxy_ip
  proxy_port = var.proxy_port

  # Existing network information
  network_id                 = var.network_id
  network_private_subnet_id  = var.network_private_subnet_id
  network_frontend_subnet_id = var.network_frontend_subnet_id
  network_redis_subnet_id    = var.network_redis_subnet_id

  # Persona - Retailer
  vm_sku                      = "Standard_D16as_v4"
  vm_image_id                 = "rhel"
  load_balancer_public        = false
  load_balancer_type          = "application_gateway"
  load_balancer_sku_name      = "WAF_v2"
  load_balancer_sku_tier      = "WAF_v2"
  redis_enable_non_ssl_port   = true
  redis_enable_authentication = true
  user_data_redis_use_tls     = false

  create_bastion = false
}
