//
// Module: tf_aws_asg
//

// Module specific variables

// Launch Configuration Variables

variable "lc_name" {}
variable "ami_id" {}
variable "instance_type" {}
variable "iam_instance_profile" {}
variable "key_name" {}
variable "security_group" {
  description = "The security group the instances to use"
}

variable "user_data" {
  description = "The path to a file with user_data for the instances"
}

// Auto-Scaling Group
variable "asg_name" {}
variable "asg_number_of_instances" {
  description = "The number of instances we want in the ASG"
  // We use this to populate the following ASG settings
  // - max_size
  // - desired_capacity
}

variable "asg_minimum_number_of_instances" {
  description = "The minimum number of instances the ASG should maintain"
  default = 1
  // Defaults to 1
  // Can be set to 0 if you never want the ASG to replace failed instances
}

variable "health_check_grace_period" {
  description = "Number of seconds for a health check to time out"
  default = 300
}
variable "health_check_type" {
  default = "EC2"
  //Types available are:
  // - ELB
  // - EC2
  // * http://docs.aws.amazon.com/cli/latest/reference/autoscaling/create-auto-scaling-group.html#options
}

variable "subnet_azs" {
  description = "The VPC subnet IDs"
  // comma separated list
}

variable "azs" {
  description = "Availability Zones"
  // comma separated list
}

// Variables for providers used in this module
variable "aws_access_key" {}
variable "aws_secret_key" {}
variable "aws_region" {}
