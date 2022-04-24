locals {
  # Azure Resource Groups
  # ---------------------
  # Determine Azure resource group names based on optional values
  #   by default a new resource group will be created and used
  #   additionally, the same resource group will be used for dns and kv if alternative resource group names are not supplied
  resource_group_name           = var.resource_group_name == "" ? azurerm_resource_group.tfe_resource_group[0].name : var.resource_group_name
  resource_group_name_dns       = var.resource_group_name_dns == "" ? local.resource_group_name : var.resource_group_name_dns
  resource_group_name_kv        = var.resource_group_name_kv == "" ? local.resource_group_name : var.resource_group_name_kv
  resource_group_name_bootstrap = var.resource_group_name_bootstrap == "" ? azurerm_resource_group.tfe_resource_group_bootstrap[0].name : var.resource_group_name_bootstrap
  resource_group_id_bootstrap   = var.resource_group_name_bootstrap == "" ? azurerm_resource_group.tfe_resource_group_bootstrap[0].id : data.azurerm_resource_group.bootstrap_resource_group[0].id
}

resource "azurerm_resource_group" "tfe_resource_group" {
  count = var.resource_group_name == "" ? 1 : 0

  name     = "${var.friendly_name_prefix}-rg"
  location = var.location

  tags = var.tags
}

resource "azurerm_resource_group" "tfe_resource_group_bootstrap" {
  count = var.resource_group_name_bootstrap == "" ? 1 : 0

  name     = "${var.friendly_name_prefix}-bootstrap-rg"
  location = var.location

  tags = var.tags
}

data "azurerm_resource_group" "bootstrap_resource_group" {
  count = var.resource_group_name_bootstrap == "" ? 0 : 1

  name = var.resource_group_name_bootstrap
}
