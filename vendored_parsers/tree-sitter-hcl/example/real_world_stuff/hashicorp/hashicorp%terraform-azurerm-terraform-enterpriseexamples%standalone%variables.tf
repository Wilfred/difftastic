# General
# -------
variable "friendly_name_prefix" {
  type        = string
  description = "(Required) Name prefix used for resources"
}

variable "domain_name" {
  default     = ""
  type        = string
  description = "Domain to create Terraform Enterprise subdomain within"
}

variable "tfe_subdomain" {
  default     = ""
  type        = string
  description = "Subdomain for TFE"
}

# Provider
# --------
variable "location" {
  default     = "East US"
  type        = string
  description = "Azure location name e.g. East US"
}

variable "resource_group_name" {
  default     = ""
  type        = string
  description = "Azure resource group name"
}

variable "resource_group_name_dns" {
  default     = ""
  type        = string
  description = "Name of resource group which contains desired DNS zone"
}

variable "key_vault_name" {
  default     = ""
  type        = string
  description = "(recommended) Azure Key Vault name containing required certificate"
}

variable "certificate_name" {
  default     = ""
  type        = string
  description = "(recommended) Azure Key Vault Certificate name for Application Gateway"
}

# Tagging
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
