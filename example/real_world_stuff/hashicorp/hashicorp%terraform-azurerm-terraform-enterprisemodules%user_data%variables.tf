# General
# -------
variable "fqdn" {
  type        = string
  description = "The fully qualified domain name for the TFE environment"
}

variable "active_active" {
  default     = true
  type        = bool
  description = "True if TFE running in active-active configuration"
}

# Database
# --------
variable "user_data_pg_dbname" {
  type        = string
  description = "Postgres database name"
}

variable "user_data_pg_netloc" {
  type        = string
  description = "Postgres database fqdn and port"
}

variable "user_data_pg_user" {
  type        = string
  description = "Postgres database username"
}

variable "user_data_pg_password" {
  type        = string
  description = "Postgres database password"
}

# Redis
# -----
variable "redis_enable_authentication" {
  default     = true
  type        = bool
  description = "If set to false, the Redis instance will be accessible without authentication."
}

variable "user_data_redis_host" {
  type        = string
  description = "Redis hostname"
}

variable "user_data_redis_port" {
  default     = "6380"
  type        = string
  description = "Redis port to use for communication"
}

variable "user_data_redis_pass" {
  type        = string
  description = "Redis password"
}

variable "user_data_redis_use_tls" {
  default     = true
  type        = bool
  description = "Boolean to determine if TLS should be used"
}

# Azure
# -----
variable "user_data_azure_container_name" {
  type        = string
  description = "Azure storage container name"
}

variable "user_data_azure_account_key" {
  type        = string
  description = "Azure storage account key"
}

variable "user_data_azure_account_name" {
  type        = string
  description = "Azure storage account name"
}

variable "user_data_bootstrap_storage_account_name" {
  type        = string
  description = "Azure bootstrap storage account name"
}

variable "user_data_bootstrap_storage_container_name" {
  type        = string
  description = "Azure boostrap storage container name"
}

# TFE
# ---
variable "user_data_release_sequence" {
  default     = ""
  type        = string
  description = "Terraform Enterprise version release sequence"
}

variable "user_data_tfe_license_name" {
  default     = ""
  type        = string
  description = "Terraform Enterprise license file name"
}

variable "user_data_ca" {
  default     = ""
  type        = string
  description = "(optional) Value to be provided for TFE ca_cert setting"
}

variable "user_data_cert" {
  default     = ""
  type        = string
  description = "(optional) Value to be provided for Replicated TlsBootstrapCert setting"
}

variable "user_data_cert_key" {
  default     = ""
  type        = string
  description = "(optional) Value to be provided for Replicated TlsBootstrapKey setting"
}

# Proxy
# -----
variable "proxy_ip" {
  default     = ""
  type        = string
  description = "IP Address of the proxy server"
}

variable "proxy_port" {
  default = "3128"
  type    = string
}

variable "proxy_cert_name" {
  default     = ""
  type        = string
  description = "Name for the stored proxy certificate bundle"
}

variable "proxy_cert_path" {
  default     = ""
  type        = string
  description = "Local path to the proxy certificate bundle"
}

variable "no_proxy" {
  default     = []
  type        = list(string)
  description = "Addresses which should not be accessed through the proxy server located at proxy_ip. This list will be combined with internal GCP addresses."
}
