# Required variables.
variable "key_name" {}
variable "owner_name" {}
variable "owner_email" {}
variable "region" {}

# Optional variables.
variable "ami_id" {
  default     = ""
  description = "AMI ID to use to provision instances. If left empty, a new image will be created."
}

variable "allowed_ips" {
  default     = ""
  description = "List of IP addresses allowed to access the infrastructure. If left empty, only the IP of the machine running Terraform will be allowed."
}

variable "vpc_cidr" {
  default     = "172.31.0.0/16"
  description = ""
}
