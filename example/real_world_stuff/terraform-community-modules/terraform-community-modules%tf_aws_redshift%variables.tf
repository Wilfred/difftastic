#
# Module: tf_aws_redshift
#

# Redshift Cluster Variables

variable "cluster_identifier" {
  description = "Custom name of the cluster"
}

variable "cluster_version" {
  description = "Version of Redshift engine cluster"
  default     = "1.0"

  # Constraints: Only version 1.0 is currently available.
  # http://docs.aws.amazon.com/cli/latest/reference/redshift/create-cluster.html
}

variable "cluster_node_type" {
  description = "Node Type of Redshift cluster"

  # Valid Values: ds1.xlarge | ds1.8xlarge | ds2.xlarge | ds2.8xlarge | dc1.large | dc1.8xlarge.
  # http://docs.aws.amazon.com/cli/latest/reference/redshift/create-cluster.html
}

variable "cluster_number_of_nodes" {
  description = "Number of Node in the cluster"
  default     = 3
}

variable "cluster_database_name" {
  description = "The name of the database to create"
}

# Self-explainatory variables
variable "cluster_master_username" {}

variable "cluster_master_password" {}

variable "cluster_port" {
  default = 5439
}

# This is for a custom parameter to be passed to the DB
# We're "cloning" default ones, but we need to specify which should be copied
variable "cluster_parameter_group" {
  description = "Parameter group, depends on DB engine used"
  default     = "redshift-1.0"
}

variable "cluster_iam_roles" {
  description = "A list of IAM Role ARNs to associate with the cluster. A Maximum of 10 can be associated to the cluster at any time."
  type        = "list"
  default     = []
}

variable "publicly_accessible" {
  description = "Determines if Cluster can be publicly available (NOT recommended)"
  default     = false
}

# Redshift Subnet Group Variables
variable "subnets" {
  description = "List of subnets DB should be available at. It might be one subnet."
  type        = "list"
}

variable "private_cidr" {
  description = "VPC private addressing, used for a security group"
  type        = "list"
}

variable "redshift_vpc_id" {
  description = "VPC to connect to, used for a security group"
  type        = "string"
}

variable "skip_final_snapshot" {
  description = "If true (default), no snapshot will be made before deleting DB"
  default     = true
}

variable "preferred_maintenance_window" {
  description = "When AWS can run snapshot, can't overlap with maintenance window"
  default     = "sat:10:00-sat:10:30"
}

variable "automated_snapshot_retention_period" {
  type        = "string"
  description = "How long will we retain backups"
  default     = 0
}

variable "wlm_json_configuration" {
  default = "[{\"query_concurrency\": 5}]"
}

variable "default_tags" {
  type = "map"
}

variable "encrypted" {
  description = "(Optional) If true , the data in the cluster is encrypted at rest."
  default     = false
}

variable "kms_key_id" {
  description = "(Optional) The ARN for the KMS encryption key. When specifying kms_key_id, encrypted needs to be set to true."
  default     = ""
}
