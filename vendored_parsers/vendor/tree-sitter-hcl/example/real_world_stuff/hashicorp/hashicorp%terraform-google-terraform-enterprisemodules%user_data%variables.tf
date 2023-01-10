# Required Variables
variable "fqdn" {}
variable "install_id" {}
variable "tfe_license" {}
variable "active_active" {
  default = false
  type    = bool
}
variable "monitoring_enabled" {
  default = false
}
variable "namespace" {}
# Optional Variables
variable "proxy_cert" {
  default = ""
}
variable "proxy_ip" {
  default = ""
}
variable "no_proxy" {
  default     = []
  description = "Addresses which should not be accessed through the proxy server located at proxy_ip. This list will be combined with internal GCP addresses."
  type        = list(string)
}

## Base TFE Configs

variable "capacity_concurrency" {
  default = "10"
}

variable "capacity_memory" {
  default = "512"
}

variable "ca_certs" {
  default = ""
}

variable "custom_image_tag" {
  default = "hashicorp/build-worker:now"
}

variable "disk_path" {
  default = "/opt/hashicorp/data"
}

variable "enable_metrics_collection" {
  default = "1"
}

variable "extra_no_proxy" {
  default = ""
}

variable "hairpin_addressing" {
  default = false
  type    = bool
}

variable "iact_subnet_list" {
  default = ""
}
variable "iact_subnet_time_limit" {
  default = ""
}

variable "tbw_image" {
  default = "default_image"
}

variable "tls_vers" {
  default = "tls_1_2_tls_1_3"
}


## Base External Configs

variable "pg_dbname" {
  default = ""
}

variable "pg_extra_params" {
  default = ""
}

variable "pg_netloc" {
  default = ""
}

variable "pg_password" {
  default = ""
}

variable "pg_user" {
  default = ""
}

variable "redis_host" {
  default = ""
}

variable "redis_pass" {
  default = ""
}

variable "redis_port" {
  default = ""
}

variable "redis_use_password_auth" {
  default = true
  type    = bool
}

variable "redis_use_tls" {
  default = false
  type    = bool
}


## Replicated Configs

variable "airgap_url" {
  default = ""
}

variable "release_sequence" {
  description = "Release sequence of Terraform Enterprise to install."
  type        = number
  default     = 0
}


## External GCP Configs

variable "gcs_bucket" {
  default = ""
}

variable "gcs_credentials" {
  default = ""
}

variable "gcs_project" {
  default = ""
}


# Misc Variables

variable "letsencrypt_email" {
  default     = ""
  description = "The email address to use when obtaining a certificate from Let's Encrypt. An empty string disables the Let's Encrypt integration. (Do not set this if you are using the server_cert_path/server_key_path parameters)"
  type        = string
}

variable "server_cert_path" {
  default     = ""
  description = "Path on the remote server to a well known certificate in PEM format. (Do not set this if you are setting the letsencrypt_email parameter)"
  type        = string
}

variable "server_key_path" {
  default     = ""
  description = "Path on the remote server to the private key of the well known certificate set in server_cert_path. Required if server_cert_path is set. (Do not set this if you are setting the letsencrypt_email parameter"
}
