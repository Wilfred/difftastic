# Required variables.
variable "ami_id" {
  type        = string
  description = "The AMI ID to use when launching new instances."
}

variable "key_name" {
  type        = string
  description = "The SSH key name used to access instances."
}

variable "owner_name" {
  type        = string
  description = "The name used to identify the owner of the resources provisioned by this module. It will be stored in a tag called OwnerName."
}

variable "owner_email" {
  type        = string
  description = "The email used to contact the owner of the resources provisioned by this module. It will be stored in a tag called OwnerEmail."
}

variable "security_group_ids" {
  type        = list(string)
  description = "List of security group IDs to associate the instances."
}

variable "subnet_ids" {
  type        = list(string)
  description = "Subnets to use to provision instances."
}

# Optional variables.
variable "consul_binary_url" {
  type        = string
  default     = ""
  description = "The URL that points to the Consul binary to be used."
}

variable "instance_count" {
  type        = number
  default     = 1
  description = "The number of server instances to provision."
}

variable "instance_type" {
  type        = string
  default     = "t3.small"
  description = "EC2 instance type to use for new instances."
}

variable "nomad_binary_url" {
  type        = string
  default     = ""
  description = "The URL that points to the Nomad binary to be used."
}

variable "retry_join" {
  type        = string
  default     = "provider=aws tag_key=ConsulAutoJoin tag_value=auto-join"
  description = "Cloud auto-join expression by the Consul and Nomad agents."
}

variable "stack_name" {
  type        = string
  default     = "hashistack"
  description = "Name used to identify resources provisioned by this module."
}
