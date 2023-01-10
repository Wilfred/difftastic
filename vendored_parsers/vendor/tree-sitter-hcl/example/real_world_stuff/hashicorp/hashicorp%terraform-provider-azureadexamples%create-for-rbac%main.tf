# Create Application
resource "azuread_application" "example" {
  display_name = "example"
}

# Create Service Principal linked to the Application
resource "azuread_service_principal" "example" {
  application_id = azuread_application.example.application_id
}

# Create role assignment for Service Principal
resource "azurerm_role_assignment" "contributor" {
  scope                = data.azurerm_subscription.main.id
  role_definition_name = "Contributor"
  principal_id         = azuread_service_principal.example.id
}

# Generate a private key
resource "tls_private_key" "example" {
  algorithm = "RSA"
  rsa_bits  = 2048
}

# Generate a self signed certificate
resource "tls_self_signed_cert" "example" {
  key_algorithm   = "RSA"
  private_key_pem = tls_private_key.example.private_key_pem

  subject {
    common_name  = azuread_application.example.name
    organization = "Example Corp"
  }

  allowed_uses          = ["client_auth", "server_auth"]
  validity_period_hours = 8760
}

# Create Application certificate (client certificate)
resource "azuread_application_certificate" "example" {
  application_object_id = azuread_application.example.object_id
  type                  = "AsymmetricX509Cert"
  end_date_relative     = "4320h" # expire in 6 months
  value                 = tls_self_signed_cert.example.cert_pem
}

# Create Application password (client secret)
resource "azuread_application_password" "example" {
  application_object_id = azuread_application.example.object_id
  end_date_relative     = "4320h" # expire in 6 months
}
