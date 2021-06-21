locals {
  storage_account_container_name           = var.storage_account_container_name == "" ? azurerm_storage_container.storage_account_container[0].name : var.storage_account_container_name
  bootstrap_storage_account_container_name = var.bootstrap_storage_account_container_name == "" ? azurerm_storage_container.bootstrap_storage_account_container[0].name : var.bootstrap_storage_account_container_name
}

resource "azurerm_storage_container" "storage_account_container" {
  count = var.storage_account_container_name == "" ? 1 : 0

  name                  = var.storage_account_name
  storage_account_name  = var.storage_account_name
  container_access_type = "private"
}

resource "azurerm_storage_container" "bootstrap_storage_account_container" {
  count = var.bootstrap_storage_account_container_name == "" ? 1 : 0

  name                  = var.bootstrap_storage_account_name
  storage_account_name  = var.bootstrap_storage_account_name
  container_access_type = "private"
}

resource "azurerm_storage_blob" "bootstrap_license" {
  count = var.bootstrap_storage_account_container_name == "" ? 1 : 0

  source                 = var.tfe_license_filepath
  name                   = var.tfe_license_name
  storage_account_name   = var.bootstrap_storage_account_name
  storage_container_name = azurerm_storage_container.bootstrap_storage_account_container[0].name
  type                   = "Page"
}

resource "azurerm_storage_blob" "proxy_cert" {
  count = var.proxy_cert_name != "" && var.bootstrap_storage_account_container_name == "" ? 1 : 0

  source                 = var.proxy_cert_path
  name                   = var.proxy_cert_name
  storage_account_name   = var.bootstrap_storage_account_name
  storage_container_name = azurerm_storage_container.bootstrap_storage_account_container[0].name
  type                   = "Block"
}
