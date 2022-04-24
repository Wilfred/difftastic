variable "ecs_cluster_arn" {
  description = "ARN of pre-existing ECS cluster."
  type        = string
}

variable "subnet_ids" {
  description = "Subnet IDs into which the task should be deployed. If these are private subnets then there must be a NAT gateway for image pulls to work. If these are public subnets then you must also set assign_public_ip for image pulls to work."
  type        = list(string)
}

variable "lb_enabled" {
  description = "Whether to create an ALB for the server task. Useful for accessing the UI."
  type        = bool
  default     = false
}

variable "lb_vpc_id" {
  description = "VPC ID for ALB."
  type        = string
  default     = null
}

variable "lb_subnets" {
  description = "Subnet IDs to attach to the load balancer. NOTE: These must be public subnets if you wish to access the load balancer externally."
  type        = list(string)
  default     = null
}

variable "lb_ingress_rule_cidr_blocks" {
  description = "CIDR blocks that are allowed access to the load balancer."
  type        = list(string)
  default     = null
}

variable "lb_ingress_rule_security_groups" {
  description = "Security groups that are allowed access to the load balancer."
  type        = list(string)
  default     = null
}

variable "consul_image" {
  description = "Consul Docker image."
  type        = string
  default     = "docker.mirror.hashicorp.services/hashicorp/consul:1.9.5"
}

variable "log_configuration" {
  description = "Task definition log configuration object (https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_LogConfiguration.html)."
  type        = any
  default     = null
}

variable "name" {
  description = "Name to be used on all the resources as identifier."
  type        = string
  default     = "consul-server"
}

variable "tags" {
  description = "A map of tags to add to all resources."
  type        = map(string)
  default     = {}
}

variable "launch_type" {
  description = "Launch type on which to run service. Valid values are EC2 and FARGATE."
  type        = string
  default     = "EC2"
}

variable "assign_public_ip" {
  description = "Assign a public IP address to the ENI. If running in public subnets this is required so that ECS can pull the Docker images."
  type        = bool
  default     = false
}
