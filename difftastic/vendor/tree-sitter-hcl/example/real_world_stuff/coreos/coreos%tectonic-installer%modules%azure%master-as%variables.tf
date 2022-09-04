variable "container_linux_channel" {
  type = "string"
}

variable "container_linux_version" {
  type = "string"
}

variable "cloud_provider_config" {
  type = "string"
}

variable "cluster_id" {
  type = "string"
}

variable "cluster_name" {
  type        = "string"
  description = "The name of the cluster."
}

variable "extra_tags" {
  type = "map"
}

variable "ign_azure_udev_rules_id" {
  type = "string"
}

variable "ign_tx_off_service_id" {
  type = "string"
}

variable "kubeconfig_content" {
  type = "string"
}

variable "location" {
  type        = "string"
  description = "Location is the Azure Location (East US, West US, etc)"
}

variable "master_count" {
  type        = "string"
  description = "Count of master nodes to be created."
}

variable "network_interface_ids" {
  type        = "list"
  description = "List of NICs to use for master VMs"
}

variable "public_ssh_key" {
  type = "string"
}

variable "resource_group_name" {
  type = "string"
}

variable "storage_id" {
  type = "string"
}

variable "storage_type" {
  type        = "string"
  description = "Storage account type"
}

variable "root_volume_size" {
  type = "string"
}

variable "vm_size" {
  type        = "string"
  description = "VM Size name"
}

variable "ign_bootkube_service_id" {
  type        = "string"
  description = "The ID of the bootkube systemd service unit"
}

variable "ign_bootkube_path_unit_id" {
  type = "string"
}

variable "ign_tectonic_service_id" {
  type        = "string"
  description = "The ID of the tectonic installer systemd service unit"
}

variable "ign_tectonic_path_unit_id" {
  type = "string"
}

variable "fault_domains" {
  type = "string"
}
