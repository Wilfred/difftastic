resource "random_pet" "tfe_redis_random_pet" {
  length    = 3
  separator = ""
}

resource "azurerm_redis_cache" "tfe_redis" {
  name                = substr(random_pet.tfe_redis_random_pet.id, 0, 24)
  location            = var.location
  resource_group_name = var.resource_group_name

  subnet_id = var.redis_subnet_id
  capacity  = var.redis_size
  family    = var.redis_family
  sku_name  = var.redis_sku_name

  enable_non_ssl_port = var.redis_enable_non_ssl_port

  minimum_tls_version = var.redis_minimum_tls_version

  redis_configuration {
    enable_authentication         = var.redis_enable_authentication
    rdb_backup_enabled            = var.redis_rdb_backup_enabled
    rdb_backup_frequency          = var.redis_rdb_backup_frequency
    rdb_backup_max_snapshot_count = var.redis_rdb_backup_max_snapshot_count
    rdb_storage_connection_string = var.redis_rdb_backup_enabled == true && var.redis_rdb_existing_storage_account == "" ? azurerm_storage_account.tfe_redis_storage_account[0].primary_blob_connection_string : var.redis_rdb_existing_storage_account
  }

  lifecycle {
    ignore_changes = [
      redis_configuration.0.rdb_backup_frequency,
      redis_configuration.0.rdb_backup_max_snapshot_count,
      redis_configuration.0.rdb_storage_connection_string,
    ]
  }

  tags = var.tags
}
