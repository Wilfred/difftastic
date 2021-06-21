output "tls_ca_cert" {
  value = var.user_data_cert == "" ? tls_self_signed_cert.ca[0].cert_pem : var.user_data_ca
}

output "tls_cert" {
  value = var.user_data_cert == "" ? tls_locally_signed_cert.cert[0].cert_pem : var.user_data_cert
}

output "tls_key" {
  value = var.user_data_cert == "" ? tls_private_key.cert[0].private_key_pem : var.user_data_cert_key
}

output "key_vault_id" {
  value = var.load_balancer_type == "application_gateway" ? element(concat(azurerm_key_vault.kv.*.id, data.azurerm_key_vault.kv.*.id), 0) : ""
}

# makes sure that if cert name supplied but kv not, then new is used
output "certificate_name" {
  value = var.load_balancer_type == "application_gateway" ? element(concat(azurerm_key_vault_certificate.cert.*.name, data.azurerm_key_vault_certificate.cert.*.name), 0) : ""
}

output "certificate_key_vault_secret_id" {
  value = var.load_balancer_type == "application_gateway" ? element(concat(azurerm_key_vault_certificate.cert.*.secret_id, data.azurerm_key_vault_certificate.cert.*.secret_id), 0) : ""
}
