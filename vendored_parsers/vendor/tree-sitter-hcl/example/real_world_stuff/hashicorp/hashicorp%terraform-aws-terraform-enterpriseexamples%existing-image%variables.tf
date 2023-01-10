# -------
# General
# -------

variable "acm_certificate_arn" {
  type        = string
  description = "ACM certificate ARN to use with load balancer"
}

variable "domain_name" {
  type        = string
  description = "Domain to create Terraform Enterprise subdomain within"
}

variable "friendly_name_prefix" {
  type        = string
  description = "Name prefix used for resources"
}

variable "tfe_subdomain" {
  type        = string
  description = "Subdomain for TFE"
}

variable "tfe_license_name" {
  type        = string
  default     = "ptfe-license.rli"
  description = "The name to use when copying the TFE license file to the EC2 instance."
}

variable "tfe_license_filepath" {
  type        = string
  description = "The absolute path to the TFE license file on the system running Terraform."
}

variable "iact_subnet_list" {
  default     = ["0.0.0.0/0"]
  type        = list(string)
  description = "A list of CIDR masks that configure the ability to retrieve the IACT from outside the host."
}

variable "load_balancing_scheme" {
  type        = string
  default     = "PUBLIC"
  description = "Load Balancing Scheme. Supported values are: \"PRIVATE\"; \"PRIVATE_TCP\"; \"PUBLIC\"."

  validation {
    condition     = contains(["PRIVATE", "PRIVATE_TCP", "PUBLIC"], var.load_balancing_scheme)
    error_message = "The load_balancer value must be one of: \"PRIVATE\"; \"PRIVATE_TCP\"; \"PUBLIC\"."
  }
}

# ---
# AMI
# ---

variable "ami_id" {
  type        = string
  default     = null
  description = "AMI ID of the custom image to use for TFE instances. If this value is provided, you do not need any of the following ami variable values."
}

variable "ami_owners" {
  type        = list(string)
  default     = ["self"]
  description = "List of AMI owners to limit search. (Not needed if providing ami_id value.)"
}

variable "ami_filter_name" {
  type        = string
  default     = null
  description = "The name of a key off of which to filter with a key/value pair. Example: \"tag:Distro\" (Not needed if providing ami_id value.)"
}

variable "ami_filter_value" {
  type        = string
  default     = null
  description = "The value off of which to filter with a key/value pair. Example: \"Ubuntu\" (Not needed if providing ami_id value.)"
}

variable "ami_most_recent" {
  type        = bool
  default     = true
  description = "If more than one result is returned, use the most recent AMI. (Not needed if providing ami_id value.)"
}