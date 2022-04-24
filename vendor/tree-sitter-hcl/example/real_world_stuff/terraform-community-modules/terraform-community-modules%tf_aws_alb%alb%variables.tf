/*
Module variables
*/

variable "alb_is_internal" {
  description = "Determines if the ALB is internal. Default: false"
  default     = false
}

variable "alb_name" {
  description = "The name of the ALB as will show in the AWS EC2 ELB console."
  default     = "my-alb"
}

variable "alb_protocols" {
  description = "A comma delimited list of the protocols the ALB accepts. e.g.: HTTPS"
  default     = "HTTPS"
}

variable "alb_security_groups" {
  description = "A comma separated string of security groups with which we associate the ALB. e.g. 'sg-edcd9784,sg-edcd9785'"
  type        = "list"
}

variable "aws_region" {
  description = "AWS region to use."
}

variable "aws_account_id" {
  description = "AWS account ID."
}

variable "backend_port" {
  description = "The port the service on the EC2 instances listen on."
  default     = 80
}

variable "backend_protocol" {
  description = "The protocol the backend service speaks. Options: HTTP, HTTPS, TCP, SSL (secure tcp)."
  default     = "HTTP"
}

variable "certificate_arn" {
  description = "The ARN of the SSL Certificate. e.g. 'arn:aws:iam::123456789012:server-certificate/ProdServerCert'"
}

variable "cookie_duration" {
  description = "If load balancer connection stickiness is desired, set this to the duration that cookie should be valid. If no stickiness is wanted, leave it blank. e.g.: 300"
  default     = "1"
}

variable "health_check_path" {
  description = "The URL the ELB should use for health checks. e.g. /health"
  default     = "/"
}

variable "log_bucket" {
  description = "S3 bucket for storing ALB access logs."
  default     = ""
}

variable "log_prefix" {
  description = "S3 prefix within the log_bucket under which logs are stored."
  default     = ""
}

variable "principle_account_id" {
  description = "A map of ELB/ALB root account numbers used to set up logging."

  default = {
    us-east-1      = "127311923021"
    us-east-2      = "033677994240"
    us-west-1      = "027434742980"
    us-west-2      = "797873946194"
    ca-central-1   = "985666609251"
    eu-west-1      = "156460612806"
    eu-central-1   = "054676820928"
    eu-west-2      = "652711504416"
    ap-northeast-1 = "582318560864"
    ap-northeast-2 = "600734575887"
    ap-southeast-1 = "114774131450"
    ap-southeast-2 = "783225319266"
    ap-south-1     = "718504428378"
    sa-east-1      = "507241528517"
    us-gov-west-1  = "048591011584"
    cn-north-1     = "638102146993"
  }
}

variable "subnets" {
  description = "A list of subnets to associate with the ALB. e.g. ['subnet-1a2b3c4d','subnet-1a2b3c4e','subnet-1a2b3c4f']"
  type        = "list"
}

variable "vpc_id" {
  description = "VPC id where the ALB and other resources will be deployed."
}

variable "tags" {
  description = "A map of tags to add to all resources"
  default     = {}
}
