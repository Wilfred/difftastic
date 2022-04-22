# Required variables.
variable "region" {
  type        = string
  description = "The AWS region where the image will be created."
}

variable "subnet_id" {
  type        = string
  description = "The subnet ID to use when launching the build instance."
}

variable "owner_name" {
  type        = string
  description = "The name used to identify the owner of the resources provisioned by this module. It will be stored in a tag called OwnerName."
}

variable "owner_email" {
  type        = string
  description = "The email used to contact the owner of the resources provisioned by this module. It will be stored in a tag called OwnerEmail."
}

variable "vpc_id" {
  type        = string
  description = "The VPC to use when launching the build instance."
}

# Optional variables.
variable "ami_id" {
  type        = string
  default     = ""
  description = "The ID of an existing AMI."
}

variable "stack_name" {
  type        = string
  default     = "hashistack"
  description = "Name used to identify resources provisioned by this module."
}
