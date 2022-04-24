variable "base_domain" {
  type = "string"
}

variable "container_images" {
  description = "Container images to use"
  type        = "map"
}

variable "image_re" {
  description = "(internal) Regular expression used to extract repo and tag components from image strings"
  type        = "string"
}

variable "instance_count" {
  type        = "string"
  description = "Number of nodes to be created."
}

variable "kubeconfig" {
  type        = "string"
  description = "Contents of Kubeconfig"
}

variable "private_key" {
  type        = "string"
  description = "SSH private key file in .pem format corresponding to tectonic_vmware_ssh_authorized_key. If not provided, SSH agent will be used."
  default     = ""
}

variable "vmware_folder" {
  type        = "string"
  description = "Name of the VMware folder to create objects in"
}

variable "core_public_keys" {
  type        = "list"
  description = "Public Key for Core User"
}

variable "dns_server" {
  type        = "string"
  description = "DNS Server of the nodes"
}

variable "gateways" {
  type        = "map"
  description = "Network gateway IP for the node"
}

variable "hostname" {
  type        = "map"
  description = "Hostname of the node"
}

variable "ip_address" {
  type        = "map"
  description = "IP Address of the node"
}

variable "vmware_resource_pool" {
  type        = "map"
  description = "vSphere resource pool to create VMs in"
}

variable vm_disk_datastores {
  type        = "map"
  description = "vSphere datastores to use for VMs"
}

variable vm_network_labels {
  type        = "map"
  description = "VMs PortGroups"
}

variable "vm_disk_template" {
  type        = "string"
  description = "Disk template to use for cloning CoreOS Container Linux"
}

variable "vm_disk_template_folder" {
  type        = "string"
  description = "vSphere Folder CoreOS Container Linux is located in"
}

variable "vm_memory" {
  type        = "string"
  description = "VMs Memory size in MB"
}

variable "vm_vcpu" {
  type        = "string"
  description = "VMs vCPU count"
}

variable "vmware_clusters" {
  type        = "map"
  description = "vSphere Cluster to create VMs in"
}

variable "vmware_datacenters" {
  type        = "map"
  description = "vSphere Datacenter to create VMs in"
}

variable "ign_bootkube_service_id" {
  type        = "string"
  description = "The ID of the bootkube systemd service unit"
  default     = ""
}

variable "ign_bootkube_path_unit_id" {
  type    = "string"
  default = ""
}

variable "ign_tectonic_service_id" {
  type        = "string"
  description = "The ID of the tectonic installer systemd service unit"
  default     = ""
}

variable "ign_tectonic_path_unit_id" {
  type    = "string"
  default = ""
}
