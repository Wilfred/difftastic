variable "droplet_count" {
  type = "string"
}

variable "cluster_name" {
  type = "string"
}

variable "droplet_image" {
  type = "string"
}

variable "droplet_region" {
  type = "string"
}

variable "droplet_size" {
  type = "string"
}

variable "ssh_keys" {
  type = "list"
}

variable "extra_tags" {
  type = "list"
}

variable "base_domain" {
  type = "string"
}

variable "ign_do_puller_id" {
  type = "string"
}

variable "ign_resolved_conf_id" {
  type = "string"
}
