# Identity and access parameters

variable "oci_base_identity" {
  type = object({
    api_fingerprint          = string
    api_private_key_path     = string
    api_private_key_password = string
    compartment_id           = string
    tenancy_id               = string
    user_id                  = string
  })
  description = "identity and provider parameters"
}


# General oci parameters

variable "oci_base_general" {
  type = object({
    label_prefix = string
    region       = string
  })
  description = "general oci parameters"
  default = {
    label_prefix = "base"
    region       = ""
  }
}


# Base 64 encrypted password

variable "Base64_Password" {
  type  = string
}


# Infrastructe parameters

variable "Compartment_name" {
  type = string
}
variable "Dynamic_Group_name" {
  type = string
}
variable "Policy_name" {
  type = string
}
variable "Vault_name" {
  type = string
}
variable "Key_name" {
  type = string
}

