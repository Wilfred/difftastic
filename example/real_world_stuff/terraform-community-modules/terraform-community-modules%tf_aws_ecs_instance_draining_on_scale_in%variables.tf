variable "region" {}

variable "cluster_name" {}

variable "autoscaling_group_name" {}

variable "function_sleep_time" {
  description = "Number of seconds the function should sleep before checking ECS Instance Task Count again"
  default = 15
}

variable "lambda_enabled" {
  default = true
}

variable "hook_heartbeat_timeout" {
  default = 900
}

variable "hook_default_result" {
  default = "ABANDON"
}
