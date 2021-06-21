# General
# -------
variable "friendly_name_prefix" {
  type        = string
  description = "Name prefix used for resources"
}

# Object Storage
# --------------
variable "tfe_license_name" {
  default     = "license.rli"
  type        = string
  description = "TFE License name"
}

variable "tfe_license_filepath" {
  default     = null
  type        = string
  description = "TFE License filepath"
}

variable "storage_account_name" {
  default     = ""
  type        = string
  description = "Storage account name"
}

variable "storage_account_container_name" {
  default     = ""
  type        = string
  description = "Storage account container name"
}

variable "bootstrap_storage_account_name" {
  default     = ""
  type        = string
  description = "Bootstrap storage account name"
}

variable "bootstrap_storage_account_container_name" {
  default     = ""
  type        = string
  description = "Bootstrap storage account container name"
}

# Proxy
# -----
variable "proxy_cert_name" {
  default     = ""
  description = "Name for the stored proxy certificate bundle"
}

variable "proxy_cert_path" {
  default     = ""
  description = "Local path to the proxy certificate bundle"
}
