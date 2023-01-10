variable "master_az_count" {
  type = "string"
}

variable "worker_az_count" {
  type = "string"
}

variable "cidr_block" {
  type = "string"
}

variable "cluster_id" {
  type = "string"
}

variable "base_domain" {
  type = "string"
}

variable "cluster_name" {
  type = "string"
}

variable "external_vpc_id" {
  type = "string"
}

variable "external_master_subnets" {
  type = "list"
}

variable "external_worker_subnets" {
  type = "list"
}

variable "extra_tags" {
  description = "Extra AWS tags to be applied to created resources."
  type        = "map"
  default     = {}
}

variable "enable_etcd_sg" {
  description = "If set to true, security groups for etcd nodes are being created"
  default     = true
}

variable "master_subnets" {
  type = "list"
}

variable "worker_subnets" {
  type = "list"
}

variable "master_azs" {
  type = "list"
}

variable "worker_azs" {
  type = "list"
}

variable "private_master_endpoints" {
  description = "If set to true, private-facing ingress resources are created."
  default     = true
}

variable "public_master_endpoints" {
  description = "If set to true, public-facing ingress resources are created."
  default     = true
}

variable "custom_dns_name" {
  type        = "string"
  default     = ""
  description = "DNS prefix used to construct the console and API server endpoints."
}
