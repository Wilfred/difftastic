variable "cluster_name" {
  type = "string"
}

variable "self_hosted_etcd" {
  default     = ""
  description = "See tectonic_self_hosted_etcd in config.tf"
}

variable "cluster_cidr" {
  type = "string"
}
