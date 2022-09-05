# General
# -------
variable "friendly_name_prefix" {
  default     = "examplename"
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

# VM
# --
variable "vm_image_id" {
  default     = "ubuntu"
  type        = string
  description = "Virtual machine image id - may be 'ubuntu' (default) or custom image resource id"

  validation {
    condition = (
      var.vm_image_id == "ubuntu" ||
      substr(var.vm_image_id, 0, 14) == "/subscriptions"
    )

    error_message = "The vm_image_id value must be 'ubuntu' or an Azure image resource ID beginning with \"/subscriptions\"."
  }
}

variable "vm_user" {
  default     = "proxyuser"
  type        = string
  description = "Virtual machine user name"
}

variable "vm_public_ip" {
  default     = false
  type        = bool
  description = "If true, will create a public IP resource and associate with VM NIC."
}

variable "vm_userdata_script" {
  default = ""
  type    = string
}

variable "vm_userdata_http_proxy_port" {
  default = "3128"
  type    = string
}

# Network
# -------
variable "network_allow_range" {
  default     = "*"
  type        = string
  description = "Network range to allow access to TFE"
}

variable "network_subnet_cidr" {
  default     = "10.0.64.0/20"
  type        = string
  description = "Subnet CIDR range for additional compute instance"
}

variable "network_bastion_subnet_cidr" {
  default     = "10.0.16.0/20"
  type        = string
  description = "(Optional) Subnet CIDR range for Bastion"
}

# Tagging
# -------
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
