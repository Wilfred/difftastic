# Required variables.
variable "allowed_ips" {
  type        = list(string)
  description = "List of IP addresses that are allowed to connect to the cluster."
}

variable "owner_name" {
  type        = string
  description = "The name used to identify the owner of the resources provisioned by this module. It will be stored in a tag called OwnerName."
}

variable "owner_email" {
  type        = string
  description = "The email used to contact the owner of the resources provisioned by this module. It will be stored in a tag called OwnerEmail."
}

variable "server_ids" {
  type        = list(string)
  description = "List of EC2 instances running Nomad servers."
}

# Optional variables.
variable "client_load_balancers" {
  type = list(object({
    name = string
    listeners = list(object({
      port     = number
      protocol = string
    }))
  }))
  default     = []
  description = "List of a list of services. Each top-level list represents a load balancer, with multiple ports to expose within."
}

variable "stack_name" {
  type        = string
  default     = "hashistack"
  description = "Name used to identify resources provisioned by this module."
}

variable "vpc_cidr" {
  type        = string
  default     = "172.31.0.0/16"
  description = "The CIDR to use when defining the VPC"
}
