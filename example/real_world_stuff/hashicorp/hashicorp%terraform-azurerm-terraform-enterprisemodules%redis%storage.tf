resource "azurerm_storage_account" "tfe_redis_storage_account" {
  count = var.redis_rdb_backup_enabled == true && var.redis_rdb_existing_storage_account == "" ? 1 : 0

  name                = substr(random_pet.tfe_redis_random_pet.id, 0, 24)
  location            = var.location
  resource_group_name = var.resource_group_name

  account_tier             = "Premium"
  account_replication_type = "LRS"

  tags = var.tags
}
