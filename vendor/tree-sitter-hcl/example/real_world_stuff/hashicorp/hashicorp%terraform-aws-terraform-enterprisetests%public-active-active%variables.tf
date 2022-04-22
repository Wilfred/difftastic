variable "aws_role_arn" {
  type        = string
  description = "The AWS Role ARN to assume for this module."
}

variable "domain_name" {
  type        = string
  description = "Domain for creating the Terraform Enterprise subdomain on."
}

variable "external_bootstrap_bucket" {
  type        = string
  description = "The name of the S3 bucket for bootstrap artifacts."
  default     = null
}

variable "iact_subnet_list" {
  description = "A list of CIDR masks that configure the ability to retrieve the IACT from outside the host."
  type        = list(string)
}

variable "acm_certificate_arn" {
  type        = string
  description = "The ARN of an existing ACM certificate."
}
