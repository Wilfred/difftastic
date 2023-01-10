output "redis_hostname" {
  value = azurerm_redis_cache.tfe_redis.hostname
}

output "redis_ssl_port" {
  value = azurerm_redis_cache.tfe_redis.ssl_port
}

output "redis_pass" {
  value = azurerm_redis_cache.tfe_redis.primary_access_key
}
