
variable "dns_create_record" {
  default     = true
  type        = bool
  description = "If true, will create a DNS record. If false, no record will be created and IP of load balancer will instead be output"
}
variable "dns_zone_name" {
  default     = ""
  type        = string
  description = "Name of the DNS zone set up in GCP"
}
variable "namespace" {
  description = "Prefix for naming resources"
}
variable "node_count" {
  validation {
    condition     = var.node_count <= 5
    error_message = "The node_count value must be less than or equal to 5."
  }
  description = "Number of TFE nodes. Between 1 and 5"
  type        = number
}
variable "proxy_ip" {
  default     = ""
  description = "IP Address of the proxy server"
}
variable "proxy_cert_name" {
  default     = "proxy-cert"
  description = "Name for the stored proxy certificate bundle"
}
variable "proxy_cert_path" {
  default     = ""
  description = "Local path to the proxy certificate bundle"
}
# NETWORKING VARS
variable "networking_firewall_ports" {
  type        = list(string)
  default     = []
  description = "Additional ports to open in the firewall"
}
variable "networking_healthcheck_ips" {
  default     = ["35.191.0.0/16", "209.85.152.0/22", "209.85.204.0/22", "130.211.0.0/22"]
  description = "Allowed IPs required for healthcheck. Provided by GCP"
}
variable "networking_subnet_range" {
  default     = "10.0.0.0/16"
  description = "CIDR block for the created subnet"
}
variable "networking_reserve_subnet_range" {
  default = "10.1.0.0/16"
}
variable "networking_ip_allow_list" {
  default     = ["0.0.0.0/0"]
  description = "List of allowed IPs for the firewall"
}
variable "network" {
  default     = ""
  description = "Pre-existing network self-link"
}
variable "subnetwork" {
  default     = ""
  description = "Pre-existing subnetwork self-link"
}
variable "load_balancer" {
  default     = "PRIVATE"
  description = "Load Balancing Scheme. Supported values are: \"PRIVATE\"; \"PRIVATE_TCP\"; \"PUBLIC\"."
  type        = string

  validation {
    condition     = contains(["PRIVATE", "PRIVATE_TCP", "PUBLIC"], var.load_balancer)
    error_message = "The load_balancer value must be one of: \"PRIVATE\"; \"PRIVATE_TCP\"; \"PUBLIC\"."
  }
}
# DATABASE VARS
variable "database_name" {
  default     = "tfe"
  description = "Postgres database name"
}
variable "database_user" {
  default     = "tfe_user"
  description = "Postgres username"
}
variable "database_machine_type" {
  default     = "db-custom-4-16384"
  description = "Database machine type"
}
variable "database_availability_type" {
  default     = "ZONAL"
  description = "Database Availability Type"
}
variable "database_backup_start_time" {
  default     = "00:00"
  description = "Database backup start time"
}
# REDIS VARS
variable "redis_auth_enabled" {
  default     = true
  description = "A toggle to enable Redis authentication"
  type        = bool
}
variable "redis_memory_size" {
  default     = 6
  description = "Redis memory size in GiB"
}
# REPLICATED VARS
variable "release_sequence" {
  description = "Release sequence of Terraform Enterprise to install."
  type        = number
  default     = 0
}
# VM VARS
variable "vm_machine_type" {
  default     = "n1-standard-4"
  description = "VM Machine Type"
}
variable "vm_disk_size" {
  default     = 50
  description = "VM Disk size. Should be at least 50"
}
variable "vm_disk_source_image" {
  default     = "projects/ubuntu-os-cloud/global/images/family/ubuntu-2004-lts"
  description = "VM Disk source image"
}
variable "vm_disk_type" {
  default     = "pd-ssd"
  description = "VM Disk type. SSD recommended"
}
variable "vm_auto_healing_enabled" {
  default     = false
  description = "Auto healing for the instance group"
}
# TFE VARS
variable "tfe_license_name" {
  default     = "license.rli"
  description = "Name of the stored TFE license"
}
variable "tfe_license_path" {
  description = "Local path to the TFE license file"
}
variable "fqdn" {
  description = "Fully qualified domain name for the TFE endpoint"
}
variable "ssl_certificate_name" {
  description = "Name of the created managed SSL certificate. Required when load_balancer == \"PUBLIC\" or load_balancer == \"PRIVATE\"."
}
