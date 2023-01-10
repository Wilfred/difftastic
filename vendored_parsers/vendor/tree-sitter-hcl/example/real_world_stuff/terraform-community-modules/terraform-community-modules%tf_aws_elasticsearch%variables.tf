variable "create_iam_service_linked_role" {
  description = "Whether to create IAM service linked role for AWS ElasticSearch service. Can be only one per AWS account."
  type        = bool
  default     = true
}

variable "domain_name" {
  description = "Domain name for Elasticsearch cluster"
  type        = string
  default     = "es-domain"
}

variable "es_version" {
  description = "Version of Elasticsearch to deploy (default 5.1)"
  type        = string
  default     = "5.1"
}

variable "instance_type" {
  description = "ES instance type for data nodes in the cluster (default t2.small.elasticsearch)"
  type        = string
  default     = "t2.small.elasticsearch"
}

variable "instance_count" {
  description = "Number of data nodes in the cluster (default 6)"
  type        = number
  default     = 6
}

variable "dedicated_master_type" {
  description = "ES instance type to be used for dedicated masters (default same as instance_type)"
  type        = string
  default     = "false"
}

variable "encrypt_at_rest" {
  description = "Enable encrption at rest (only specific instance family types support it: m4, c4, r4, i2, i3 default: false)"
  type        = bool
  default     = false
}

variable "management_iam_roles" {
  description = "List of IAM role ARNs from which to permit management traffic (default ['*']).  Note that a client must match both the IP address and the IAM role patterns in order to be permitted access."
  type        = list(string)
  default     = ["*"]
}

variable "management_public_ip_addresses" {
  description = "List of IP addresses from which to permit management traffic (default []).  Note that a client must match both the IP address and the IAM role patterns in order to be permitted access."
  type        = list(string)
  default     = []
}

variable "es_zone_awareness" {
  description = "Enable zone awareness for Elasticsearch cluster (default false)"
  type        = bool
  default     = false
}

variable "es_zone_awareness_count" {
  description = "Number of availability zones used for data nodes (default 2)"
  type        = number
  default     = 2
}

variable "ebs_volume_size" {
  description = "Optionally use EBS volumes for data storage by specifying volume size in GB (default 0)"
  type        = number
  default     = 0
}

variable "ebs_volume_type" {
  description = "Storage type of EBS volumes, if used (default gp2)"
  type        = string
  default     = "gp2"
}

variable "kms_key_id" {
  description = "KMS key used for elasticsearch"
  type        = string
  default     = ""
}

variable "snapshot_start_hour" {
  description = "Hour at which automated snapshots are taken, in UTC (default 0)"
  type        = number
  default     = 0
}

variable "vpc_options" {
  description = "A map of supported vpc options"
  type        = map(list(string))

  default = {
    security_group_ids = []
    subnet_ids         = []
  }
}

variable "tags" {
  description = "tags to apply to all resources"
  type        = map(string)
  default     = {}
}

variable "use_prefix" {
  description = "Flag indicating whether or not to use the domain_prefix. Default: true"
  type        = bool
  default     = true
}

variable "domain_prefix" {
  description = "String to be prefixed to search domain. Default: tf-"
  type        = string
  default     = "tf-"
}

variable "dedicated_master_threshold" {
  description = "The number of instances above which dedicated master nodes will be used. Default: 10"
  type        = number
  default     = 10
}

variable "advanced_options" {
  description = "Map of key-value string pairs to specify advanced configuration options. Note that the values for these configuration options must be strings (wrapped in quotes) or they may be wrong and cause a perpetual diff, causing Terraform to want to recreate your Elasticsearch domain on every apply."
  type        = map(string)
  default     = {}
}

variable "log_publishing_options" {
  description = "List of maps of options for publishing slow logs to CloudWatch Logs."
  type        = list(map(string))
  default     = []
}

variable "node_to_node_encryption_enabled" {
  description = "Whether to enable node-to-node encryption."
  type        = bool
  default     = false
}

variable "enforce_https" {
  description = "Whether or not to require HTTPS."
  type        = bool
  default     = false
}

variable "tls_security_policy" {
  description = "The name of the TLS security policy that needs to be applied to the HTTPS endpoint. Example values: Policy-Min-TLS-1-0-2019-07 and Policy-Min-TLS-1-2-2019-07. Terraform will only perform drift detection if a configuration value is provided."
  type        = string
  default     = null
}
