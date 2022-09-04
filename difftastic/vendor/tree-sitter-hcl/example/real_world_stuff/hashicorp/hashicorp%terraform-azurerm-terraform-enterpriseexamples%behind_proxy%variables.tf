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

variable "network_bastion_subnet_id" {
  default     = null
  type        = string
  description = "(Optional) Existing network Bastion subnet ID"
}

variable "network_redis_subnet_id" {
  default     = null
  type        = string
  description = "(Optional) Existing network Redis subnet ID"
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

# variable "proxy_cert_name" {
#   default     = ""
#   type        = string
#   description = "Name for the stored proxy certificate bundle"
# }

# variable "proxy_cert_path" {
#   default     = ""
#   type        = string
#   description = "Local path to the proxy certificate bundle"
# }

# Tagging
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
