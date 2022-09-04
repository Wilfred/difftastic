# General
# -------
variable "friendly_name_prefix" {
  type        = string
  description = "(Required) Name prefix used for resources"
}

variable "fqdn" {}

# Provider
# --------
variable "location" {
  type        = string
  description = "Azure location name e.g. East US"
}

variable "resource_group_name" {
  type        = string
  description = "Azure resource group name"
}

variable "resource_group_name_kv" {
  default     = ""
  type        = string
  description = "Name of resource group which contains desired key vault"
}

variable "tenant_id" {
  default     = null
  type        = string
  description = "The Azure Active Directory tenant ID that should be used for authenticating requests to the key vault."
}

variable "object_id" {
  default     = null
  type        = string
  description = "The object ID of a user, service principal or security group in the Azure Active Directory tenant for the vault. The object ID must be unique for the list of access policies."
}

# Certificate
# -----------
variable "validity_period_hours" {
  default     = 24 * 30 * 6
  description = "The number of hours after initial issuing that the certificate will become invalid."
}

variable "private_key_algorithm" {
  default     = "RSA"
  description = "The name of the algorithm to use for private keys (RSA or ECDSA)"
}

variable "private_key_ecdsa_curve" {
  default     = "P256"
  description = "ECDS - The name of the elliptic curve to use (P224, P256, P384 or P521)"
}

variable "private_key_rsa_bits" {
  default     = "2048"
  description = "RSA - The size of the generated RSA key in bits"
}

variable "organization_name" {
  default     = "Terraform Enterprise (untrusted)"
  description = "The name of the organization to associate with the certificates"
}

variable "certificate_name" {
  default     = ""
  type        = string
  description = "(recommended) Azure Key Vault Certificate name for Application Gateway"
}

variable "user_data_ca" {
  default     = ""
  type        = string
  description = "(optional) Value to be provided for TFE ca_cert setting"
}

variable "user_data_cert" {
  default     = ""
  type        = string
  description = "(optional) Value to be provided for Replicated TlsBootstrapCert setting"
}

variable "user_data_cert_key" {
  default     = ""
  type        = string
  description = "(optional) Value to be provided for Replicated TlsBootstrapKey setting"
}

# Key Vault
variable "key_vault_name" {
  default     = ""
  type        = string
  description = "(recommended) Azure Key Vault name containing required certificate"
}

variable "sku_name" {
  default     = "standard"
  type        = string
  description = "The Name of the SKU used for this Key Vault. Possible values are standard and premium."
}

variable "soft_delete_retention_days" {
  default     = 7
  type        = number
  description = "The number of days that items should be retained for once soft-deleted. This value can be between 7 and 90 (the default) days."
}

variable "enabled_for_deployment" {
  default     = true
  type        = bool
  description = "Boolean flag to specify whether Azure Virtual Machines are permitted to retrieve certificates stored as secrets from the key vault. Defaults to false."
}

variable "enabled_for_disk_encryption" {
  default     = true
  type        = bool
  description = "Boolean flag to specify whether Azure Disk Encryption is permitted to retrieve secrets from the vault and unwrap keys."
}

variable "certificate_permissions" {
  default = []
  type    = list(string)
}

variable "key_permissions" {
  default = []
  type    = list(string)
}

variable "secret_permissions" {
  default = []
  type    = list(string)
}

# Load balancer
# -------------
variable "load_balancer_type" {
  default     = "application_gateway"
  type        = string
  description = "Expected value of 'application_gateway' or 'load_balancer'"
  validation {
    condition = (
      var.load_balancer_type == "application_gateway" ||
      var.load_balancer_type == "load_balancer"
    )

    error_message = "The load_balancer_type value must be 'application_gateway' or 'load_balancer'."
  }
}

# Tagging
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
