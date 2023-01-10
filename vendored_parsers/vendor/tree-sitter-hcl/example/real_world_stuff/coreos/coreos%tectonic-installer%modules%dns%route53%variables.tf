variable "cluster_id" {
  description = "Cluster ID"
  type        = "string"
}

variable "cluster_name" {
  description = "The name of the cluster"
  type        = "string"
}

variable "base_domain" {
  description = "The base domain used in records"
  type        = "string"
}

variable "master_count" {
  description = "The number of masters"
  type        = "string"
}

variable "worker_count" {
  description = "The number of workers"
  type        = "string"
  default     = "0"
}

variable "master_ip_addresses" {
  description = "List of string IPs for masters"
  type        = "list"
  default     = []
}

variable "worker_ip_addresses" {
  description = "List of string IPs for workers"
  type        = "list"
  default     = []
}

variable "worker_public_ips" {
  description = "(optional) List of string public IPs for workers"
  type        = "list"
  default     = []
}

// hack: worker_public_ips_enabled is a workaround for https://github.com/hashicorp/terraform/issues/10857
variable "worker_public_ips_enabled" {
  description = "Worker nodes have public IPs assigned. worker_public_ips must be provided if true."
  default     = true
}

variable "api_ip_addresses" {
  description = "List of string IPs for k8s API"
  type        = "list"
}

variable "extra_tags" {
  type        = "map"
  description = "Extra tags to be applied to created resources."
}

// AWS specific internal zone variables

variable "elb_alias_enabled" {
  description = <<EOF
(optional) Whether to create an aliased record set to ELB endpoints.
Refer to http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/resource-record-sets-choosing-alias-non-alias.html
for additional information.
EOF

  default = false
}

variable "external_vpc_id" {
  type = "string"

  description = <<EOF
ID of an existing VPC to launch nodes into.
If unset a new VPC is created.

Example: `vpc-123456`
EOF
}

variable "private_endpoints" {
  description = <<EOF
If set to true, create private-facing ingress resources (ELB, A-records).
If set to false, no private-facing ingress resources will be provisioned and all DNS records will be created in the public Route53 zone.
EOF
}

variable "public_endpoints" {
  description = <<EOF
If set to true, create public-facing ingress resources (ELB, A-records).
If set to false, no public-facing ingress resources will be created.
EOF
}

variable "private_zone_id" {
  description = "Route53 Private Zone ID"
  type        = "string"
}

variable "api_external_elb_dns_name" {
  description = "External API's ELB DNS name"
  type        = "string"
}

variable "api_external_elb_zone_id" {
  description = "External API's ELB Zone ID"
  type        = "string"
}

variable "api_internal_elb_dns_name" {
  description = "Internal API's ELB DNS name"
  type        = "string"
}

variable "api_internal_elb_zone_id" {
  description = "Internal API's ELB Zone ID"
  type        = "string"
}

variable "console_elb_dns_name" {
  description = "Console's ELB DNS name"
  type        = "string"
}

variable "console_elb_zone_id" {
  description = "Console's ELB Zone ID"
  type        = "string"
}
