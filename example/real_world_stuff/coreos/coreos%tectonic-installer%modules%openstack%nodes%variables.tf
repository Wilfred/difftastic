variable "cluster_name" {
  type        = "string"
  description = "The name of the cluster. The master hostnames will be prefixed with this."
}

variable "core_public_keys" {
  type = "list"
}

variable "hostname_infix" {
  type = "string"
}

variable "instance_count" {
  type        = "string"
  description = "The amount of nodes to be created. Example: `3`"
}

variable "kubeconfig_content" {
  type        = "string"
  description = "The content of the kubeconfig file."
}

variable "resolv_conf_content" {
  type        = "string"
  description = "The content of the /etc/resolv.conf file."
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
