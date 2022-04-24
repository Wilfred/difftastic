variable "additional_user_data_script" {
  default = ""
}

variable "allowed_cidr_blocks" {
  default     = ["0.0.0.0/0"]
  type        = "list"
  description = "List of subnets to allow into the ECS Security Group. Defaults to ['0.0.0.0/0']"
}

variable "ami" {
  default = ""
}

variable "ami_version" {
  default = "*"
}

variable "associate_public_ip_address" {
  default = false
}

variable "consul_image" {
  description = "Image to use when deploying consul, defaults to the hashicorp consul image"
  default     = "consul:latest"
}

variable "consul_memory_reservation" {
  description = "The soft limit (in MiB) of memory to reserve for the container, defaults 20"
  default     = "32"
}

variable "docker_storage_size" {
  default     = "22"
  description = "EBS Volume size in Gib that the ECS Instance uses for Docker images and metadata "
}

variable "dockerhub_email" {
  default     = ""
  description = "Email Address used to authenticate to dockerhub. http://docs.aws.amazon.com/AmazonECS/latest/developerguide/private-auth.html"
}

variable "dockerhub_token" {
  default     = ""
  description = "Auth Token used for dockerhub. http://docs.aws.amazon.com/AmazonECS/latest/developerguide/private-auth.html"
}

variable "enable_agents" {
  default     = false
  description = "Enable Consul Agent and Registrator tasks on each ECS Instance"
}

variable "ebs_block_device" {
  default     = "/dev/xvdcz"
  description = "EBS block devices to attach to the instance. (default: /dev/xvdcz)"
}

variable "extra_tags" {
  type    = "list"
  default = []
}

variable "heartbeat_timeout" {
  description = "Heartbeat Timeout setting for how long it takes for the graceful shutodwn hook takes to timeout. This is useful when deploying clustered applications like consul that benifit from having a deploy between autoscaling create/destroy actions. Defaults to 180"
  default     = "180"
}

variable "asg_delete_extra_timeout" {
  description = "Extra time that `terraform apply` will wait for ASG deletion (default 600). This is added on top of `heartbeat_timeout`. This variable is customizable for when the instances take longer than 600sec to shut down once shutdown is initiated."
  default     = "600"
}

variable "iam_path" {
  default     = "/"
  description = "IAM path, this is useful when creating resources with the same name across multiple regions. Defaults to /"
}

variable "custom_iam_policy" {
  default     = ""
  description = "Custom IAM policy (JSON). If set will overwrite the default one"
}

variable "instance_type" {
  default     = "t2.micro"
  description = "AWS Instance type, if you change, make sure it is compatible with AMI, not all AMIs allow all instance types "
}

variable "key_name" {
  description = "SSH key name in your AWS account for AWS instances."
}

variable "load_balancers" {
  type        = "list"
  default     = []
  description = "A list of elastic load balancer names to add to the autoscaling group names. Only valid for classic load balancers."
}

variable "min_servers" {
  description = "Minimum number of ECS servers to run."
  default     = 1
}

variable "max_servers" {
  description = "Maximum number of ECS servers to run."
  default     = 10
}

variable "name" {
  description = "AWS ECS Cluster Name"
}

variable "name_prefix" {
  default = ""
}

variable "region" {
  default     = "us-east-1"
  description = "The region of AWS, for AMI lookups."
}

variable "registrator_image" {
  default     = "gliderlabs/registrator:latest"
  description = "Image to use when deploying registrator agent, defaults to the gliderlabs registrator:latest image"
}

variable "registrator_memory_reservation" {
  description = "The soft limit (in MiB) of memory to reserve for the container, defaults 20"
  default     = "32"
}

variable "security_group_ids" {
  type        = "list"
  description = "A list of Security group IDs to apply to the launch configuration"
  default     = []
}

variable "servers" {
  default     = "1"
  description = "The number of servers to launch."
}

variable "spot_bid_price" {
  default     = ""
  description = "If specified, spot instances will be requested at this bid price.  If not specified, on-demand instances will be used."
}

variable "subnet_id" {
  type        = "list"
  description = "The AWS Subnet ID in which you want to delpoy your instances"
}

variable "tagName" {
  default     = "ECS Node"
  description = "Name tag for the servers"
}

variable "user_data" {
  default = ""
}

variable "vpc_id" {
  description = "The AWS VPC ID which you want to deploy your instances"
}

variable "enabled_metrics" {
  description = "A list of metrics to collect"
  type        = "list"
  default     = []
}
