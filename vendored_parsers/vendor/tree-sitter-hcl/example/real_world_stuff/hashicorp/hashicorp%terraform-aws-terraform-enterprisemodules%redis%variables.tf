variable "active_active" {
  type        = bool
  description = "Flag for active-active configuation: true for active-active, false for standalone"
}

variable "kms_key_arn" {
  description = <<-EOD
  The Amazon Resource Name of the KMS key which will be used by the Redis Elasticache replication group to encrypt data 
  at rest.
  EOD
  type        = string
}

variable "tfe_instance_sg" {
  description = <<-EOD
  The identity of the security group attached to the TFE EC2 instance(s) which will be authorized to communicate with 
  the Redis Elasticache replication group.
  EOD
  type        = string
}

variable "network_id" {
  description = <<-EOD
  The identity of the VPC in which the security group attached to the Redis Elasticache replication group will be 
  deployed.
  EOD
  type        = string
}

variable "network_subnets_private" {
  description = <<-EOD
  A list of the identities of the private subnetworks in which the Redis Elasticache replication group will be deployed.
  EOD
  type        = list(string)
}

variable "friendly_name_prefix" {
  type        = string
  description = "(Required) Friendly name prefix used for tagging and naming AWS resources."
}

variable "network_private_subnet_cidrs" {
  type        = list(string)
  description = "(Optional) List of private subnet CIDR ranges to create in VPC."
  default     = ["10.0.32.0/20", "10.0.48.0/20"]
}

variable "redis_port" {
  type        = number
  description = "Set port for Redis. Defaults to 6379 default port"
  default     = 6379
}

variable "cache_size" {
  type        = string
  default     = "cache.m4.large"
  description = "Redis instance size."
}

variable "engine_version" {
  type        = string
  default     = "5.0.6"
  description = "Redis enginer version."
}

variable "parameter_group_name" {
  type        = string
  default     = "default.redis5.0"
  description = "Redis parameter group name."
}

# Security
variable "redis_encryption_in_transit" {
  type        = bool
  description = "Determine whether Redis traffic is encrypted in transit."
  default     = false
}

variable "redis_encryption_at_rest" {
  type        = bool
  description = "Determine whether Redis data is encrypted at rest."
  default     = false
}

variable "redis_require_password" {
  type        = bool
  description = "Determine if a password is required for Redis."
  default     = false
}
