# General
# -------
variable "friendly_name_prefix" {
  type        = string
  description = "(Required) Name prefix used for resources"
}

variable "domain_name" {
  default     = ""
  type        = string
  description = "(Required) Domain to create Terraform Enterprise subdomain within"
}

variable "tfe_subdomain" {
  default     = ""
  type        = string
  description = "Subdomain for TFE"
}

# DNS
# ---
variable "dns_create_record" {
  default     = true
  type        = bool
  description = "If true, will create a DNS record. If false, no record will be created and IP of load balancer will instead be output."
}

variable "dns_external_fqdn" {
  default     = ""
  type        = string
  description = "External DNS FQDN should be supplied if dns_create_record is false"
}

# Provider
# --------
variable "location" {
  default     = "East US"
  type        = string
  description = "(Required) Azure location name e.g. East US"
}

variable "zones" {
  default     = ["1", "2", "3"]
  type        = list(string)
  description = "Azure zones to use for applicable resources"
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
  default     = ""
  type        = string
  description = "(Optional) Existing network ID"
}

variable "network_private_subnet_id" {
  default     = ""
  type        = string
  description = "(Optional) Existing network private subnet ID"
}

variable "network_frontend_subnet_id" {
  default     = ""
  type        = string
  description = "(Optional) Existing network frontend subnet ID"
}

variable "network_bastion_subnet_id" {
  default     = ""
  type        = string
  description = "(Optional) Existing network Bastion subnet ID"
}

variable "network_redis_subnet_id" {
  default     = ""
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

variable "storage_account_key" {
  default     = ""
  type        = string
  description = "Storage account key"
}

variable "storage_account_container_name" {
  default     = ""
  type        = string
  description = "Storage account container name"
}

variable "storage_account_primary_blob_connection_string" {
  default     = ""
  type        = string
  description = "Storage account primary blob endpoint"
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

# Service Accounts
# ----------------
variable "storage_account_tier" {
  default     = "Standard"
  type        = string
  description = "Storage account tier Standard or Premium"
}

variable "storage_account_replication_type" {
  default     = "ZRS"
  type        = string
  description = "Storage account type LRS, GRS, RAGRS, ZRS"
}

# Database
# --------
variable "database_user" {
  default     = "tfeuser"
  description = "Postgres username"
}

variable "database_machine_type" {
  default     = "GP_Gen5_4"
  type        = string
  description = "Postgres sku short name: tier + family + cores"
}

variable "database_size_mb" {
  default     = 5120
  type        = number
  description = "Postgres storage size in MB"
}

variable "database_version" {
  default     = "9.5"
  type        = string
  description = "Postgres version"
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

variable "load_balancer_sku_name" {
  default     = "Standard_v2"
  type        = string
  description = "The Name of the SKU to use for Application Gateway, Standard_v2 or WAF_v2 accepted"

  validation {
    condition = (
      var.load_balancer_sku_name == "Standard_v2" ||
      var.load_balancer_sku_name == "WAF_v2"
    )

    error_message = "The load_balancer_sku_name value must be 'Standard_v2' or 'WAF_v2'."
  }
}

variable "load_balancer_sku_tier" {
  default     = "Standard_v2"
  type        = string
  description = "The Tier of the SKU to use for Application Gateway, Standard_v2 or WAF_v2 accepted"

  validation {
    condition = (
      var.load_balancer_sku_tier == "Standard_v2" ||
      var.load_balancer_sku_tier == "WAF_v2"
    )

    error_message = "The load_balancer_sku_tier value must be 'Standard_v2' or 'WAF_v2'."
  }
}

variable "load_balancer_waf_firewall_mode" {
  default     = "Prevention"
  type        = string
  description = "The Web Application Firewall mode (Detection or Prevention)"
}

variable "load_balancer_waf_rule_set_version" {
  default     = "3.1"
  type        = string
  description = "The Version of the Rule Set used for this Web Application Firewall. Possible values are 2.2.9, 3.0, and 3.1."
}

variable "load_balancer_waf_file_upload_limit_mb" {
  default     = 100
  type        = number
  description = "The File Upload Limit in MB. Accepted values are in the range 1MB to 750MB for the WAF_v2 SKU, and 1MB to 500MB for all other SKUs. Defaults to 100MB."
}

variable "load_balancer_waf_max_request_body_size_kb" {
  default     = 128
  type        = number
  description = "The Maximum Request Body Size in KB. Accepted values are in the range 1KB to 128KB. Defaults to 128KB."
}

# Redis
# -----
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

variable "redis_size" {
  default     = "3"
  type        = string
  description = "The size of the Redis cache to deploy. Valid values for a SKU family of C (Basic/Standard) are 0, 1, 2, 3, 4, 5, 6, and for P (Premium) family are 1, 2, 3, 4."
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
  description = "(Optional) Is Backup Enabled? Only supported on Premium SKU's. If rdb_backup_enabled is true and redis_rdb_storage_connection_string is null, a new, Premium storage account will be created."
}

variable "redis_rdb_backup_frequency" {
  default     = null
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
  description = "(Optional) Name of an existing Premium Storage Account for data encryption at rest. If empty string is given, a new, Premium storage account will be created."
}

variable "redis_rdb_existing_storage_account_rg" {
  default     = ""
  type        = string
  description = "(Optional) Name of the resource group that contains the existing Premium Storage Account for data encryption at rest."
}

variable "redis_minimum_tls_version" {
  default     = "1.2"
  type        = string
  description = "(Optional) The minimum TLS version."
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

variable "vm_user" {
  default     = "tfeuser"
  type        = string
  description = "Virtual machine user name"
}

variable "vm_public_key" {
  default     = ""
  type        = string
  description = "Virtual machine public key for authentication (2048-bit ssh-rsa)"
}

variable "vm_image_id" {
  default     = "ubuntu"
  type        = string
  description = "Virtual machine image id - may be 'ubuntu' (default), 'rhel', or custom image resource id"

  validation {
    condition = (
      var.vm_image_id == "ubuntu" ||
      var.vm_image_id == "rhel" ||
      substr(var.vm_image_id, 0, 14) == "/subscriptions"
    )

    error_message = "The vm_image_id value must be 'ubuntu', 'rhel', or an Azure image resource ID beginning with \"/subscriptions\"."
  }
}

variable "vm_sku" {
  default     = "Standard_D4_v3"
  type        = string
  description = "Azure virtual machine sku"
}

variable "vm_os_disk_storage_account_type" {
  default = "StandardSSD_LRS"
  type    = string
}

variable "vm_os_disk_disk_size_gb" {
  default     = 100
  type        = number
  description = "The size of the Data Disk which should be created."
}

# User Data
# ---------
variable "user_data_release_sequence" {
  default     = ""
  type        = string
  description = "Terraform Enterprise release sequence"
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

variable "user_data_redis_use_tls" {
  default = true
  type    = bool
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

# Tagging
# -------
variable "tags" {
  default     = {}
  type        = map(string)
  description = "Map of tags for resource"
}
