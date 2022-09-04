# General
# -------
variable "friendly_name_prefix" {
  type        = string
  description = "(Required) Name prefix used for resources"
}

# Provider
# --------
variable "location" {
  default     = "East US"
  type        = string
  description = "(Required) Azure location name e.g. East US"
}

variable "resource_group_name" {
  default     = ""
  type        = string
  description = "(Required) Azure resource group name"
}

variable "resource_group_name_dns" {
  default     = ""
  type        = string
  description = "Name of resource group which contains desired DNS zone"
}

variable "resource_group_name_kv" {
  default     = ""
  type        = string
  description = "Name of resource group which contains desired key vault"
}

variable "resource_group_name_bootstrap" {
  default     = ""
  type        = string
  description = "Azure resource group name for bootstrap"
}

# Tagging
# -------
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
