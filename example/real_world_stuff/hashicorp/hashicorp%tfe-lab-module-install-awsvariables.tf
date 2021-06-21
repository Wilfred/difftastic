################################################
# Common
################################################
variable "friendly_name_prefix" {
  type        = string
  description = "String value for freindly name prefix for AWS resource names and tags"
}

variable "common_tags" {
  type        = map(string)
  description = "Map of common tags for taggable AWS resources"
  default     = {}
}

################################################
# TFE
################################################
variable "tfe_hostname" {
  type        = string
  description = "Hostname of TFE instance"
}

variable "tfe_license_file_path" {
  type        = string
  description = "Local file path to tfe-license.rli file including file name"
}

variable "tfe_release_sequence" {
  type        = string
  description = "TFE application version release sequence number within Replicated (leave blank to default to latest version)"
  default     = ""
}

variable "tfe_initial_admin_username" {
  type        = string
  description = "Username for initial TFE local adminitrator account"
  default     = ""
}

variable "tfe_initial_admin_email" {
  type        = string
  description = "Email address for initial TFE local adminitrator account"
  default     = null
}

variable "tfe_initial_admin_pw" {
  type        = string
  description = "Login password for TFE initial admin user created by this module - must be >= 8 characters"
  default     = null
}

variable "tfe_initial_org_name" {
  type        = string
  description = "Name of initial TFE Organization created by bootstrap process / cloud-init script"
  default     = ""
}

variable "tfe_initial_org_email" {
  type        = string
  description = "Email address of initial TFE Organization created by bootstrap process / cloud-init script"
  default     = null
}

################################################
# Network
################################################
# Uncomment these variables if you prefer to create your VPC and subnets manually.
# variable "vpc_id" {
#   type        = string
#   description = "VPC ID that TFE will be deployed into"
# }

# variable "alb_subnet_ids" {
#   type        = list(string)
#   description = "List of subnet IDs to use for Application Load Balancer (ALB)"
# }

# variable "ec2_subnet_ids" {
#   type        = list(string)
#   description = "List of subnet IDs to use for EC2 instance - preferably private subnets"
# }

variable "route53_hosted_zone_name" {
  type        = string
  description = "Route53 Hosted Zone where TFE Alias Record and Certificate Validation record will reside (required if tls_certificate_arn is left blank)"
  default     = null
}

variable "load_balancer_is_internal" {
  type        = bool
  description = "Boolean value determining if Application Load Balancer (ALB) is internal or exteral"
  default     = false
}

################################################
# Security
################################################
variable "ingress_cidr_alb_allow" {
  type        = list(string)
  description = "List of CIDR ranges to allow web traffic ingress to TFE LB"
  default     = ["0.0.0.0/0"]
}

variable "ingress_cidr_console_allow" {
  type        = list(string)
  description = "List of CIDR ranges to allow TFE Replicated admin console (port 8800) traffic ingress to TFE LB"
  default     = null
}

variable "ingress_cidr_ec2_allow" {
  type        = list(string)
  description = "List of CIDRs to allow SSH ingress to TFE EC2 instance (i.e. Bastion host IP, workstation IP, etc.)"
  default     = []
}

variable "tls_certificate_arn" {
  type        = string
  description = "ARN of ACM or IAM certificate to be used for Application Load Balancer HTTPS listeners (required if route53_hosted_zone_name is left blank)"
  default     = null
}

variable "kms_key_arn" {
  type        = string
  description = "ARN of KMS key to encrypt TFE S3 and RDS resources"
  default     = ""
}

# Uncomment if you have an existing SSH key pair that you want to specify
# variable "ssh_key_pair" {
#   type        = string
#   description = "Name of SSH key pair for TFE EC2 instance"
#   default     = null
# }

################################################
# Compute
################################################
variable "os_distro" {
  type        = string
  description = "Linux OS distribution for TFE EC2 instance"
  default     = "amzn2"
}

variable "ami_id" {
  type        = string
  description = "Optional AMI ID for TFE EC2 Launch Template"
  default     = null
}

variable "instance_size" {
  type        = string
  description = "EC2 instance type for TFE server"
  default     = "m5.large"
}

################################################
# Storage
################################################
# Uncomment if you prefer to create your subnets manually
# variable "rds_subnet_ids" {
#   type        = list(string)
#   description = "Subnet IDs to use for RDS Database Subnet Group - preferably private subnets"
# }

variable "rds_storage_capacity" {
  type        = string
  description = "Size capacity (GB) of RDS PostgreSQL database"
  default     = 50
}

variable "rds_engine_version" {
  type        = string
  description = "Version of PostgreSQL for RDS engine"
  default     = "11"
}

variable "rds_multi_az" {
  type        = string
  description = "Set to true to enable multiple availability zone RDS"
  default     = "true"
}

variable "rds_instance_size" {
  type        = string
  description = "Instance size for RDS"
  default     = "db.m4.large"
}
