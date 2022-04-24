// Location is the Azure Location (East US, West US, etc)
variable "location" {
  type = "string"
}

variable "resource_group_name" {
  type = "string"
}

variable "cluster_id" {
  type = "string"
}

// VM Size name
variable "vm_size" {
  type = "string"
}

// Storage account type
variable "storage_type" {
  type = "string"
}

variable "storage_id" {
  type = "string"
}

variable "root_volume_size" {
  type = "string"
}

// Count of etcd nodes to be created.
variable "etcd_count" {
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

variable "public_ssh_key" {
  type = "string"
}

variable "network_interface_ids" {
  type = "list"
}

variable "versions" {
  description = "(internal) Versions of the components to use"
  type        = "map"
}

variable "container_linux_channel" {
  type = "string"
}

variable "container_linux_version" {
  type = "string"
}

variable "const_internal_node_names" {
  type        = "list"
  default     = ["etcd-0", "etcd-1", "etcd-2", "etcd-3", "etcd-4"]
  description = "(internal) The list of hostnames assigned to etcd member nodes."
}

variable "tls_enabled" {
  default = false
}

variable "container_image" {
  type = "string"
}

variable "extra_tags" {
  type = "map"
}

variable "ign_etcd_dropin_id_list" {
  type = "list"
}

variable "fault_domains" {
  type = "string"
}

variable "ign_etcd_crt_id_list" {
  type = "list"
}

variable "ign_profile_env_id" {
  type = "string"
}

variable "ign_systemd_default_env_id" {
  type = "string"
}

variable "ign_ntp_dropin_id" {
  type = "string"
}
