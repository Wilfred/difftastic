// This var is for internal use only.
// It is to be considered a constant, because Terraform can't acutally define constants.
variable "const_id_to_group_name_regex" {
  default     = "/^/subscriptions/[-\\w]+/resourceGroups/([\\w()-\\.]+)/providers/[.\\w]+/[.\\w]+/([.\\w-]+)$/"
  type        = "string"
  description = "(internal) A regular expression that parses Azure resource IDs into component identifiers."
}

// Location is the Azure Location (East US, West US, etc)
variable "location" {
  type = "string"
}

// The base DNS domain of the cluster.
// Example: `azure.dev.coreos.systems`
variable "base_domain" {
  type = "string"
}

// The name of the cluster.
variable "cluster_name" {
  type = "string"
}

variable "cluster_id" {
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

variable "external_dns_zone_id" {
  type = "string"
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

variable "extra_tags" {
  type = "map"
}
