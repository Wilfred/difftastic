# General
# -------
variable "friendly_name_prefix" {
  type        = string
  description = "Name prefix used for resources"
}

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

variable "resource_group_name_bootstrap" {
  type        = string
  description = "Azure resource group name for bootstrap"
}

# Service Accounts
# ----------------
variable "storage_account_tier" {
  default     = "Standard"
  type        = string
  description = "Storage account tier Standard or Premium"
}

variable "storage_account_replication_type" {
  default     = "ZRS"
  type        = string
  description = "Storage account type LRS, GRS, RAGRS, ZRS"
}

variable "storage_account_name" {
  default     = ""
  type        = string
  description = "Storage account name"
}

variable "storage_account_key" {
  default     = ""
  type        = string
  description = "Storage account key"
}

variable "storage_account_primary_blob_connection_string" {
  default     = ""
  type        = string
  description = "Storage account primary blob endpoint"
}

variable "bootstrap_storage_account_name" {
  default     = ""
  type        = string
  description = "Bootstrap storage account name"
}

# Tagging
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
