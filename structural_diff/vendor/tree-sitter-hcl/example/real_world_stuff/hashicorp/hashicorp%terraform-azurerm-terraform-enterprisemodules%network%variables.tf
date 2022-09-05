# General
# -------
variable "friendly_name_prefix" {
  type        = string
  description = "Name prefix used for resources"
}

variable "active_active" {
  default     = true
  type        = bool
  description = "True if TFE running in active-active configuration"
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

# Bastion
# -------
variable "create_bastion" {
  default     = true
  type        = bool
  description = "If true, will create Azure Bastion PaaS and required resources https://azure.microsoft.com/en-us/services/azure-bastion/"
}

# Network
# -------
variable "network_cidr" {
  default     = "10.0.0.0/16"
  type        = string
  description = "(Optional) CIDR range for network"
}

variable "network_private_subnet_cidr" {
  default     = "10.0.32.0/20"
  type        = string
  description = "(Optional) Subnet CIDR range for TFE"
}

variable "network_frontend_subnet_cidr" {
  default     = "10.0.0.0/20"
  type        = string
  description = "(Optional) Subnet CIDR range for frontend"
}

variable "network_bastion_subnet_cidr" {
  default     = "10.0.16.0/20"
  type        = string
  description = "(Optional) Subnet CIDR range for Bastion"
}

variable "network_redis_subnet_cidr" {
  default     = "10.0.48.0/20"
  type        = string
  description = "(Optional) Subnet CIDR range for Redis"
}

variable "network_allow_range" {
  default     = "*"
  type        = string
  description = "(Optional) Network range to allow access to TFE"
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

variable "load_balancer_public" {
  default     = true
  type        = bool
  description = "Load balancer will use public IP if true"
}

# Tagging
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
