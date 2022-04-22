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

variable "external_master_subnet_ids" {
  type = "list"
}

variable "external_worker_subnet_ids" {
  type = "list"
}

variable "extra_tags" {
  description = "Extra AWS tags to be applied to created resources."
  type        = "map"
  default     = {}
}

variable "new_master_subnet_configs" {
  description = "{az_name = new_subnet_cidr}: Empty map means create new subnets in all availability zones in region with generated cidrs"
  type        = "map"
}

variable "new_worker_subnet_configs" {
  description = "{az_name = new_subnet_cidr}: Empty map means create new subnets in all availability zones in region with generated cidrs"
  type        = "map"
}

variable "private_master_endpoints" {
  description = "If set to true, private-facing ingress resources are created."
  default     = true
}

variable "public_master_endpoints" {
  description = "If set to true, public-facing ingress resources are created."
  default     = true
}

variable "depends_on" {
  default = []
  type    = "list"
}
