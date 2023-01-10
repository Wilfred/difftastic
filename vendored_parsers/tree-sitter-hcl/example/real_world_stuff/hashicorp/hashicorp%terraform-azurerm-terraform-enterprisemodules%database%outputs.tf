output "database_server_id" {
  value = azurerm_postgresql_server.tfe_pg.id
}

output "database_server_name" {
  value = azurerm_postgresql_server.tfe_pg.name
}

output "database_server_fqdn" {
  value = azurerm_postgresql_server.tfe_pg.fqdn
}

output "database_user" {
  value = var.database_user
}

output "database_password" {
  value = random_string.tfe_pg_password.result
}

output "database_id" {
  value = azurerm_postgresql_database.tfe_pg_db.id
}

output "database_name" {
  value = azurerm_postgresql_database.tfe_pg_db.name
}
