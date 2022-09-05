data "azurerm_key_vault" "kv" {
  count = var.key_vault_name != "" ? 1 : 0

  name                = var.key_vault_name
  resource_group_name = var.resource_group_name_kv
}

data "azurerm_key_vault_certificate" "cert" {
  count = var.certificate_name != "" ? 1 : 0

  name         = var.certificate_name
  key_vault_id = data.azurerm_key_vault.kv[0].id
}
