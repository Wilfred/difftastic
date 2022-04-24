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
  description = "List of subnet IDs to use to launch instances."
}

# Optional variables.
variable "consul_binary_url" {
  type        = string
  default     = ""
  description = "The URL that points to the Consul binary to be used."
}

variable "desired_capacity" {
  type        = number
  default     = 1
  description = "Number of initial instances to launch."
}

variable "instance_type" {
  type        = string
  default     = "t2.small"
  description = "EC2 instance type to use for new instances."
}

variable "load_balancer_names" {
  type        = list(string)
  default     = []
  description = "List of ELB names useb by the ASG."
}

variable "max_size" {
  type        = number
  default     = 5
  description = "Maximum number of instances allowed."
}

variable "min_size" {
  type        = number
  default     = 0
  description = "Minimum number of instances allowed."
}

variable "nomad_datacenter" {
  type        = string
  default     = "dc1"
  description = "Nomad datacenter where the clients will be registered."
}

variable "nomad_node_class" {
  type        = string
  default     = "hashistack"
  description = "Node class associated with the Nomad clients provisioned by this module."
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
