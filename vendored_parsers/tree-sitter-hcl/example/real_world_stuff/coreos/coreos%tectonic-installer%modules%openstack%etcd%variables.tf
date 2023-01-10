// The content of the /etc/resolv.conf file.
variable resolv_conf_content {
  type = "string"
}

variable "base_domain" {
  type = "string"
}

variable "cluster_name" {
  type = "string"
}

variable "container_image" {
  type = "string"
}

variable "core_public_keys" {
  type = "list"
}

variable "self_hosted_etcd" {
  default     = ""
  description = "See tectonic_self_hosted_etcd in config.tf"
}

variable "instance_count" {
  default = ""
}

variable "tls_enabled" {
  default = false
}

variable "ign_etcd_dropin_id_list" {
  type = "list"
}

variable "ign_coreos_metadata_dropin_id" {
  type = "string"
}

variable "ign_etcd_crt_id_list" {
  type = "list"
}

variable "ign_profile_env_id" {
  type    = "string"
  default = ""
}

variable "ign_systemd_default_env_id" {
  type    = "string"
  default = ""
}

variable "ign_ntp_dropin_id" {
  type = "string"
}
