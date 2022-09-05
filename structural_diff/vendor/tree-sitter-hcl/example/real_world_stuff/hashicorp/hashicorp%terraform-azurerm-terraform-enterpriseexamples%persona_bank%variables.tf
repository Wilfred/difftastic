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

variable "tfe_license_filepath" {
  default     = null
  type        = string
  description = "TFE License filepath"
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

# Network
# -------
variable "network_id" {
  default     = null
  type        = string
  description = "(Optional) Existing network ID"
}

variable "network_private_subnet_id" {
  default     = null
  type        = string
  description = "(Optional) Existing network private subnet ID"
}

variable "network_frontend_subnet_id" {
  default     = null
  type        = string
  description = "(Optional) Existing network public subnet ID"
}

variable "network_redis_subnet_id" {
  default     = null
  type        = string
  description = "(Optional) Existing network Redis subnet ID"
}

# Storage
# -------
variable "redis_rdb_existing_storage_account" {
  default     = ""
  type        = string
  description = "(Optional) Name of an existing Premium Storage Account for data encryption at rest. If empty string is given, a new, Premium storage account will be created."
}

variable "redis_rdb_existing_storage_account_rg" {
  default     = ""
  type        = string
  description = "(Optional) Name of the resource group that contains the existing Premium Storage Account for data encryption at rest."
}

# Proxy
# -----
variable "proxy_ip" {
  type        = string
  description = "(Required) IP Address of the proxy server"
}

variable "proxy_port" {
  default = "3128"
  type    = string
}

variable "proxy_cert_name" {
  default = "mitmproxy"
  type    = string
}

variable "proxy_cert_path" {
  default     = ""
  type        = string
  description = "Local path to the proxy's CA cert pem"
}


# Tagging
# -------
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
