variable "base_domain" {
  type = "string"
}

variable "cluster_name" {
  type = "string"
}

variable "droplet_count" {
  type = "string"
}

variable "droplet_size" {
  type = "string"
}

variable "external_endpoints" {
  type = "list"
}

variable "extra_tags" {
  type    = "list"
  default = []
}

variable "ssh_keys" {
  type = "list"
}

variable "droplet_region" {
  type = "string"
}

variable "droplet_image" {
  type = "string"
}

variable "ign_etcd_dropin_id_list" {
  type = "list"
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

variable "tls_enabled" {
  type = "string"
}
