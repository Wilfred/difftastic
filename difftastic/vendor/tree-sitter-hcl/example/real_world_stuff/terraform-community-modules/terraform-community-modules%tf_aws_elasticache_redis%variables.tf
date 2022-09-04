/*
# These vars would be used by cloudwatch.tf and should be uncommented if we decide to use them.
variable "alarm_cpu_threshold" {
  default = "75"
}

variable "alarm_memory_threshold" {
  # 10MB
  default = "10000000"
}

variable "alarm_actions" {
  type = "list"
}
*/

variable "apply_immediately" {
  description = "Specifies whether any modifications are applied immediately, or during the next maintenance window. Default is false."
  type        = bool
  default     = false
}

variable "allowed_cidr" {
  description = "A list of Security Group ID's to allow access to."
  type        = list(string)
  default     = ["127.0.0.1/32"]
}

variable "allowed_security_groups" {
  description = "A list of Security Group ID's to allow access to."
  type        = list(string)
  default     = []
}

variable "env" {
  description = "env to deploy into, should typically dev/staging/prod"
  type        = string
}

variable "name" {
  description = "Name for the Redis replication group i.e. UserObject"
  type        = string
}

variable "redis_clusters" {
  description = "Number of Redis cache clusters (nodes) to create"
  type        = string
}

variable "redis_failover" {
  type    = bool
  default = false
}

variable "multi_az_enabled" {
  type    = bool
  default = false
}

variable "redis_node_type" {
  description = "Instance type to use for creating the Redis cache clusters"
  type        = string
  default     = "cache.m3.medium"
}

variable "redis_port" {
  type    = number
  default = 6379
}

variable "subnets" {
  type        = list(string)
  description = "List of VPC Subnet IDs for the cache subnet group"
}

# might want a map
variable "redis_version" {
  description = "Redis version to use, defaults to 3.2.10"
  type        = string
  default     = "3.2.10"
}

variable "vpc_id" {
  description = "VPC ID"
  type        = string
}

variable "redis_parameters" {
  description = "additional parameters modifyed in parameter group"
  type        = list(map(any))
  default     = []
}

variable "redis_maintenance_window" {
  description = "Specifies the weekly time range for when maintenance on the cache cluster is performed. The format is ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window is a 60 minute period"
  type        = string
  default     = "fri:08:00-fri:09:00"
}

variable "redis_snapshot_window" {
  description = "The daily time range (in UTC) during which ElastiCache will begin taking a daily snapshot of your cache cluster. The minimum snapshot window is a 60 minute period"
  type        = string
  default     = "06:30-07:30"
}

variable "redis_snapshot_retention_limit" {
  description = "The number of days for which ElastiCache will retain automatic cache cluster snapshots before deleting them. For example, if you set SnapshotRetentionLimit to 5, then a snapshot that was taken today will be retained for 5 days before being deleted. If the value of SnapshotRetentionLimit is set to zero (0), backups are turned off. Please note that setting a snapshot_retention_limit is not supported on cache.t1.micro or cache.t2.* cache nodes"
  type        = number
  default     = 0
}

variable "tags" {
  description = "Tags for redis nodes"
  type        = map(string)
  default     = {}
}

variable "auto_minor_version_upgrade" {
  description = "Specifies whether a minor engine upgrades will be applied automatically to the underlying Cache Cluster instances during the maintenance window"
  type        = bool
  default     = true
}

variable "availability_zones" {
  description = "A list of EC2 availability zones in which the replication group's cache clusters will be created. The order of the availability zones in the list is not important"
  type        = list(string)
  default     = []
}

variable "at_rest_encryption_enabled" {
  description = "Whether to enable encryption at rest"
  type        = bool
  default     = false
}

variable "kms_key_id" {
  description = "The ARN of the key that you wish to use if encrypting at rest. If not supplied, uses service managed encryption. Can be specified only if at_rest_encryption_enabled = true"
  type        = string
  default     = ""
}

variable "transit_encryption_enabled" {
  description = "Whether to enable encryption in transit. Requires 3.2.6 or >=4.0 redis_version"
  type        = bool
  default     = false
}

variable "auth_token" {
  description = "The password used to access a password protected server. Can be specified only if transit_encryption_enabled = true. If specified must contain from 16 to 128 alphanumeric characters or symbols"
  type        = string
  default     = null
}

variable "security_group_names" {
  description = "A list of cache security group names to associate with this replication group"
  type        = list(string)
  default     = []
}

variable "snapshot_arns" {
  description = "A single-element string list containing an Amazon Resource Name (ARN) of a Redis RDB snapshot file stored in Amazon S3. Example: arn:aws:s3:::my_bucket/snapshot1.rdb"
  type        = list(string)
  default     = []
}

variable "snapshot_name" {
  description = " The name of a snapshot from which to restore data into the new node group. Changing the snapshot_name forces a new resource"
  type        = string
  default     = ""
}

variable "notification_topic_arn" {
  description = "An Amazon Resource Name (ARN) of an SNS topic to send ElastiCache notifications to. Example: arn:aws:sns:us-east-1:012345678999:my_sns_topic"
  type        = string
  default     = ""
}
