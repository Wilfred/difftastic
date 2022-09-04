variable "cluster_name" {
  type = "string"
}

variable "cluster_id" {
  type = "string"
}

// The base DNS domain of the cluster.
// Example: `azure.dev.coreos.systems`
variable "base_domain" {
  type = "string"
}

variable "resource_group_name" {
  type = "string"
}

variable "vnet_cidr_block" {
  type = "string"
}

variable "location" {
  type = "string"
}

variable "external_vnet_id" {
  type    = "string"
  default = ""
}

variable "external_master_subnet_id" {
  type    = "string"
  default = ""
}

variable "external_worker_subnet_id" {
  type    = "string"
  default = ""
}

variable "external_nsg_master_id" {
  type    = "string"
  default = ""
}

variable "external_nsg_worker_id" {
  type    = "string"
  default = ""
}

variable "etcd_cidr" {
  type    = "string"
  default = ""
}

variable "etcd_count" {
  type    = "string"
  default = ""
}

variable "master_cidr" {
  type    = "string"
  default = ""
}

variable "worker_cidr" {
  type    = "string"
  default = ""
}

variable "ssh_network_internal" {
  type    = "string"
  default = ""
}

variable "ssh_network_external" {
  type    = "string"
  default = ""
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

variable "private_cluster" {
  default = false
}
