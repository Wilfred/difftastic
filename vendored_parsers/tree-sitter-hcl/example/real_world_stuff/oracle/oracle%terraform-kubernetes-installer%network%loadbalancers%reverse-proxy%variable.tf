variable "nginx_version" {
  default = "1.13.1"
}

variable "nginx_listen_port" {
  default = "6443"
}

variable "hosts" {
  type = "list"
}

