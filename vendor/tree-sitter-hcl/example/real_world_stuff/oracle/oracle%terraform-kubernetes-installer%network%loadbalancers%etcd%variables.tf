variable "compartment_ocid" {}
variable "etcd_subnet_0_id" {}

variable "etcd_subnet_1_id" {}

variable "label_prefix" {
  default = ""
}

variable "etcdAd1Count" {}

variable "etcdAd2Count" {}

variable "etcdAd3Count" {}

variable "etcd_lb_enabled" {}

variable "etcd_ad1_private_ips" {
  type    = "list"
  default = []
}

variable "etcd_ad2_private_ips" {
  type    = "list"
  default = []
}

variable "etcd_ad3_private_ips" {
  type    = "list"
  default = []
}

variable "shape" {
  default = "100Mbs"
}

variable "is_private" {
  default = "true"
}
