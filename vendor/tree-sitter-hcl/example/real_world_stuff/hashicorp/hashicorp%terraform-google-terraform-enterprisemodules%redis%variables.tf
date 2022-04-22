variable "namespace" {}
variable "memory_size" {}
variable "network" {}
variable "enabled" {
  default = true
  type    = bool
}

variable "auth_enabled" {
  type = bool
}
