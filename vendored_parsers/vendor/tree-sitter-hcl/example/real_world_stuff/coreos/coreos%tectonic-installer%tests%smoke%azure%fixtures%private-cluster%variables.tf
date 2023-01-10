/***
  Variables
***/

variable "tectonic_cluster_name" {}
variable "tectonic_azure_location" {}
variable "tectonic_azure_ssh_key" {}

variable "admin_username" {}
variable "admin_password" {}

variable "tectonic_azure_vnet_cidr_block" {}

variable "tectonic_azure_worker_vm_size" {
  default = "Standard_D2_v2"
}

variable "tectonic_azure_extra_tags" {
  default = {}
}
