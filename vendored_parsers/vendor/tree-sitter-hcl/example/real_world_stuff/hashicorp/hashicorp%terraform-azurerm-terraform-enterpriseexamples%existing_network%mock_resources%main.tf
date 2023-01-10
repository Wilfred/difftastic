provider "azurerm" {
  features {}
}

# Local variables and conditionals
# --------------------------------
locals {
  resource_group_name = var.resource_group_name == "" ? azurerm_resource_group.tfe_resource_group[0].name : var.resource_group_name

  active_active = var.vm_node_count >= 2 ? true : false
}

# Create Azure resource group
# ---------------------------
resource "azurerm_resource_group" "tfe_resource_group" {
  count = var.resource_group_name == "" ? 1 : 0

  name     = "${var.friendly_name_prefix}-rg"
  location = var.location

  tags = var.tags
}

# Create Azure virtual network for 'existing_network' example
# -----------------------------------------------------------
module "network" {
  source = "../../../modules/network"

  friendly_name_prefix = var.friendly_name_prefix
  resource_group_name  = local.resource_group_name
  location             = var.location

  active_active = local.active_active

  network_cidr                 = var.network_cidr
  network_private_subnet_cidr  = var.network_private_subnet_cidr
  network_frontend_subnet_cidr = var.network_frontend_subnet_cidr
  network_bastion_subnet_cidr  = var.network_bastion_subnet_cidr
  network_redis_subnet_cidr    = var.network_redis_subnet_cidr
  network_allow_range          = var.network_allow_range

  load_balancer_type   = var.load_balancer_type
  load_balancer_public = var.load_balancer_public

  tags = var.tags

  create_bastion = var.create_bastion
}
