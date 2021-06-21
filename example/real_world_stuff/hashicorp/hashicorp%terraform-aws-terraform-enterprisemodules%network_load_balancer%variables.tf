variable "domain_name" {
  description = "The name of the Route 53 Hosted Zone in which a record will be created."
  type        = string
}

variable "certificate_arn" {
  description = "The Amazon Resource Name of the SSL certificate to associate with the load balancer."
  type        = string
}

variable "fqdn" {
  description = "The fully qualified domain name to assign to the Route 53 record."
  type        = string
}

variable "ssl_policy" {
  description = "The name of the SSL policy to assign to the load balancer listeners."
  type        = string
}

variable "network_id" {
  description = "The identity of the VPC in which to deploy the load balancer target groups."
  type        = string
}

variable "network_private_subnets" {
  description = "A list of the identities of the private subnetworks in which to deploy the load balancer."
  type        = list(string)
}

variable "active_active" {
  type        = bool
  description = "Flag for active-active configuation: true for active-active, false for standalone."
}

variable "friendly_name_prefix" {
  type        = string
  description = "(Required) Friendly name prefix used for tagging and naming AWS resources."
}
