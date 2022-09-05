output "storage_account_name" {
  value = local.storage_account_name
}

output "storage_account_key" {
  value = local.storage_account_key
}

output "storage_account_primary_blob_connection_string" {
  value = local.storage_account_primary_blob_connection_string
}

output "bootstrap_storage_account_name" {
  value = local.bootstrap_storage_account_name
}

output "vmss_user_assigned_identity" {
  value = azurerm_user_assigned_identity.vmss

  description = "The user assigned identity to be assigned to the virtual machine scale set."
}
