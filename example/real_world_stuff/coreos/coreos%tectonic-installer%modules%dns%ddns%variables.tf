variable "dns_server" {
  type = "string"
}

variable "dns_key_name" {
  type = "string"
}

variable "dns_key_algorithm" {
  type = "string"
}

variable "dns_key_secret" {
  type = "string"
}

variable "base_domain" {
  type = "string"
}

// The name of the cluster.
variable "cluster_name" {
  type = "string"
}

variable "master_ip_addresses" {
  type = "list"
}

variable "worker_ip_addresses" {
  type = "list"
}

variable "console_ip_addresses" {
  type = "list"
}

variable "etcd_ip_addresses" {
  type = "list"
}

variable "api_ip_addresses" {
  type = "list"
}

variable "etcd_count" {
  type = "string"
}

variable "master_count" {
  type = "string"
}

variable "worker_count" {
  type = "string"
}
