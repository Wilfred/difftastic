# General
# -------
variable "friendly_name_prefix" {
  type        = string
  description = "(Required) Name prefix used for resources"
}

# Provider
# --------
variable "location" {
  type        = string
  description = "(Required) Azure location name e.g. East US"
}

variable "resource_group_name" {
  type        = string
  description = "(Required) Azure resource group name"
}

# Redis
# -----
variable "redis_size" {
  default     = "3"
  type        = string
  description = "The size of the Redis cache to deploy. Valid values for a SKU family of C (Basic/Standard) are 0, 1, 2, 3, 4, 5, 6, and for P (Premium) family are 1, 2, 3, 4."
}

variable "redis_subnet_id" {
  type        = string
  description = "(Required) Network subnet id for redis"
}

# ----
variable "redis_family" {
  default     = "P"
  type        = string
  description = "(Required) The SKU family/pricing group to use. Valid values are C (for Basic/Standard SKU family) and P (for Premium)"
}

variable "redis_sku_name" {
  default     = "Premium"
  type        = string
  description = "(Required) The SKU of Redis to use. Possible values are Basic, Standard and Premium."
}

variable "redis_enable_non_ssl_port" {
  default     = false
  type        = bool
  description = "Enable the non-SSL port (6379)"
}

variable "redis_enable_authentication" {
  default     = true
  type        = bool
  description = "If set to false, the Redis instance will be accessible without authentication. enable_authentication can only be set to false if a subnet_id is specified; and only works if there aren't existing instances within the subnet with enable_authentication set to true."
}

variable "redis_rdb_backup_enabled" {
  default     = false
  type        = bool
  description = "(Optional) Is Backup Enabled? Only supported on Premium SKU's."
}

variable "redis_rdb_backup_frequency" {
  default     = 60
  type        = number
  description = "(Optional) The Backup Frequency in Minutes. Only supported on Premium SKU's. Possible values are: 15, 30, 60, 360, 720 and 1440."
}

variable "redis_rdb_backup_max_snapshot_count" {
  default     = null
  type        = number
  description = "(Optional) The maximum number of snapshots to create as a backup. Only supported for Premium SKU's."
}

variable "redis_rdb_existing_storage_account" {
  default     = ""
  type        = string
  description = "(Optional) Existing Premium Storage Account for data encryption at rest. If empty string is given and backup is true, a new, Premium storage account will be created."
}

variable "redis_minimum_tls_version" {
  default     = "1.2"
  type        = string
  description = "(Optional) The minimum TLS version."
}

# Tagging
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
