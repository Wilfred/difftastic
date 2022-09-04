variable "api_server_cert_pem" {}

variable "api_server_private_key_pem" {}

variable "name" {
  default = "bmcs-k8s"
}

variable "k8s_master" {}
