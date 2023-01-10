locals {
  storage_account_name                           = var.storage_account_name == "" ? azurerm_storage_account.tfe_storage_account[0].name : var.storage_account_name
  storage_account_key                            = var.storage_account_key == "" ? azurerm_storage_account.tfe_storage_account[0].primary_access_key : var.storage_account_key
  storage_account_primary_blob_connection_string = var.storage_account_primary_blob_connection_string == "" ? azurerm_storage_account.tfe_storage_account[0].primary_blob_connection_string : var.storage_account_primary_blob_connection_string
  bootstrap_storage_account_name                 = var.bootstrap_storage_account_name == "" ? azurerm_storage_account.bootstrap_storage_account[0].name : var.bootstrap_storage_account_name
}

resource "random_pet" "random_pet_tfe_storage_account_name" {
  count = var.storage_account_name == "" ? 1 : 0

  length    = 3
  separator = ""
}

resource "azurerm_storage_account" "tfe_storage_account" {
  count = var.storage_account_name == "" ? 1 : 0

  name                = substr(random_pet.random_pet_tfe_storage_account_name[0].id, 0, 24)
  location            = var.location
  resource_group_name = var.resource_group_name

  account_tier             = "Standard"
  account_replication_type = var.storage_account_replication_type

  tags = var.tags
}

resource "random_pet" "random_pet_bootstrap_storage_account_name" {
  count = var.bootstrap_storage_account_name == "" ? 1 : 0

  length    = 3
  separator = ""
}

resource "azurerm_storage_account" "bootstrap_storage_account" {
  count = var.bootstrap_storage_account_name == "" ? 1 : 0

  name                = substr(random_pet.random_pet_bootstrap_storage_account_name[0].id, 0, 24)
  location            = var.location
  resource_group_name = var.resource_group_name_bootstrap

  account_tier             = var.storage_account_tier
  account_replication_type = var.storage_account_replication_type

  tags = var.tags
}

resource "azurerm_user_assigned_identity" "vmss" {
  location            = var.location
  name                = "${var.friendly_name_prefix}-vmss"
  resource_group_name = var.resource_group_name

  tags = var.tags
}
