variable "container_linux_channel" {
  type = "string"
}

variable "container_linux_version" {
  type = "string"
}

variable "cloud_provider" {
  type    = "string"
  default = "azure"
}

variable "cloud_provider_config" {
  description = "Content of cloud provider config"
  type        = "string"
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
  type    = "string"
  default = ""
}

variable "location" {
  type        = "string"
  description = "Location is the Azure Location (East US, West US, etc)"
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

variable "tectonic_kube_dns_service_ip" {
  type = "string"
}

variable "vm_size" {
  type        = "string"
  description = "VM Size name"
}

variable "worker_count" {
  type        = "string"
  description = "Count of worker nodes to be created."
}

variable "fault_domains" {
  type = "string"
}
