#
# Module: tf_aws_rds
#

# RDS Instance Variables

variable "rds_instance_identifier" {
  description = "Custom name of the instance"
}

variable "rds_is_multi_az" {
  description = "Set to true on production"
  default     = false
}

variable "rds_storage_type" {
  description = "One of 'standard' (magnetic), 'gp2' (general purpose SSD), or 'io1' (provisioned IOPS SSD)."
  default     = "standard"
}

variable "rds_iops" {
  description = "The amount of provisioned IOPS. Setting this implies a storage_type of 'io1', default is 0 if rds storage type is not io1"
  default     = "0"
}

variable "rds_allocated_storage" {
  description = "The allocated storage in GBs"

  # You just give it the number, e.g. 10
}

variable "rds_engine_type" {
  description = "Database engine type"

  # Valid types are
  # - mysql
  # - postgres
  # - oracle-*
  # - sqlserver-*
  # See http://docs.aws.amazon.com/cli/latest/reference/rds/create-db-instance.html
  # --engine
}

variable "rds_engine_version" {
  description = "Database engine version, depends on engine type"

  # For valid engine versions, see:
  # See http://docs.aws.amazon.com/cli/latest/reference/rds/create-db-instance.html
  # --engine-version
}

variable "rds_instance_class" {
  description = "Class of RDS instance"

  # Valid values
  # https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html
}

variable "auto_minor_version_upgrade" {
  description = "Allow automated minor version upgrade"
  default     = true
}

variable "allow_major_version_upgrade" {
  description = "Allow major version upgrade"
  default     = false
}

variable "apply_immediately" {
  description = "Specifies whether any database modifications are applied immediately, or during the next maintenance window"
  default     = false
}

variable "maintenance_window" {
  description = "The window to perform maintenance in. Syntax: 'ddd:hh24:mi-ddd:hh24:mi' UTC "
  default     = "Mon:03:00-Mon:04:00"
}

variable "database_name" {
  description = "The name of the database to create"
}

# Self-explainatory variables
variable "database_user" {}

variable "database_password" {}
variable "database_port" {}

# This is for a custom parameter to be passed to the DB
# We're "cloning" default ones, but we need to specify which should be copied
variable "db_parameter_group" {
  description = "Parameter group, depends on DB engine used"

  # default = "mysql5.6"
  # default = "postgres9.5"
}

variable "use_external_parameter_group" {
  description = "Use parameter group specified by `parameter_group_name` instead of built-in one"
  default = false
}

# Use an external parameter group (i.e. defined in caller of this module)
variable "parameter_group_name" {
  description = "Parameter group to use instead of the default"
  default     = ""
}

variable "publicly_accessible" {
  description = "Determines if database can be publicly available (NOT recommended)"
  default     = false
}

# RDS Subnet Group Variables
variable "subnets" {
  description = "List of subnets DB should be available at. It might be one subnet."
  type        = "list"
}

variable "private_cidr" {
  description = "VPC private addressing, used for a security group"
  type        = "list"
}

variable "rds_vpc_id" {
  description = "VPC to connect to, used for a security group"
  type        = "string"
}

variable "skip_final_snapshot" {
  description = "If true (default), no snapshot will be made before deleting DB"
  default     = true
}

variable "copy_tags_to_snapshot" {
  description = "Copy tags from DB to a snapshot"
  default     = true
}

variable "backup_window" {
  description = "When AWS can run snapshot, can't overlap with maintenance window"
  default     = "22:00-03:00"
}

variable "backup_retention_period" {
  type        = "string"
  description = "How long will we retain backups"
  default     = 0
}

variable "tags" {
  description = "A map of tags to add to all resources"
  default     = {}
}

variable "monitoring_interval" {
  description = "To disable collecting Enhanced Monitoring metrics, specify 0. The default is 0. Valid Values: 0, 1, 5, 10, 15, 30, 60."
  default     = "0"
}
