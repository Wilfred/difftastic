# General
# -------
variable "friendly_name_prefix" {
  default     = "examplename"
  type        = string
  description = "(Required) Name prefix used for resources"
}

variable "domain_name" {
  default     = "example.com"
  type        = string
  description = "(Required) Domain to create Terraform Enterprise subdomain within"
}

variable "tfe_subdomain" {
  default     = "tfe"
  type        = string
  description = "Subdomain for TFE"
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

# Bastion
# -------
variable "create_bastion" {
  default     = true
  type        = bool
  description = "If true, will create Azure Bastion PaaS and required resources https://azure.microsoft.com/en-us/services/azure-bastion/"
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

# Load Balancer
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

# VM
# --
variable "vm_node_count" {
  default     = 2
  type        = number
  description = "The number of instances to create for TFE environment."

  validation {
    condition     = var.vm_node_count <= 5
    error_message = "The vm_node_count value must be less than or equal to 5."
  }
}

# Tagging
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
