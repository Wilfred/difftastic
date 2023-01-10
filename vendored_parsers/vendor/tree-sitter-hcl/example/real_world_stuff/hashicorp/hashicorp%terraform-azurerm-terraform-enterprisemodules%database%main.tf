resource "random_string" "tfe_pg_password" {
  length  = 24
  special = true
}

resource "azurerm_postgresql_server" "tfe_pg" {
  name                = "${var.friendly_name_prefix}-pg"
  location            = var.location
  resource_group_name = var.resource_group_name

  sku_name   = var.database_machine_type
  storage_mb = var.database_size_mb
  version    = var.database_version

  administrator_login          = var.database_user
  administrator_login_password = random_string.tfe_pg_password.result

  backup_retention_days        = var.database_backup_retention_days
  geo_redundant_backup_enabled = var.database_geo_redundant_backup_enabled
  auto_grow_enabled            = var.database_auto_grow_enabled
  ssl_enforcement_enabled      = var.database_ssl_enforcement_enabled

  tags = var.tags
}

resource "azurerm_postgresql_database" "tfe_pg_db" {
  name                = "${var.friendly_name_prefix}-pg-db"
  resource_group_name = var.resource_group_name

  server_name = azurerm_postgresql_server.tfe_pg.name
  charset     = "UTF8"
  collation   = "English_United States.1252"
}

resource "azurerm_postgresql_virtual_network_rule" "tfe_pg_vnet_rule" {
  name                = "${var.friendly_name_prefix}-db-vnet-rule"
  resource_group_name = var.resource_group_name

  subnet_id   = var.database_subnet
  server_name = azurerm_postgresql_server.tfe_pg.name
}
