variable "secgroup_id" {
  type = "string"
}

variable "self_hosted" {
  default = false
}

variable "cluster_cidr" {
  type = "string"
}
