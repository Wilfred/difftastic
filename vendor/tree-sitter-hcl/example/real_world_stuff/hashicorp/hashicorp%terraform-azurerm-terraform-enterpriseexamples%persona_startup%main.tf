provider "azurerm" {
  features {}
}

module "tfe" {
  source = "../../"

  friendly_name_prefix = "example"                          # Friendly name to use for resources
  tfe_license_filepath = "${path.module}/files/license.rli" # Relative local file path to TFE license

  resource_group_name = "example" # Existing Azure Resource Group to build TFE environment within
  # resource_group_name_dns = "example" # Existing Azure Resource Group which contains desired DNS zone

  domain_name   = "example.com" # Domain used to determine existing DNS zone
  tfe_subdomain = "tfe"         # Desired DNS record subdomain

  vm_node_count = 2 # Number of instances >= 2 indicates active active environment

  # Persona - Startup
  vm_sku                      = "Standard_D4_v3"
  vm_image_id                 = "ubuntu"
  load_balancer_public        = true
  load_balancer_type          = "load_balancer"
  redis_enable_non_ssl_port   = true
  redis_enable_authentication = false
  user_data_redis_use_tls     = false
}
