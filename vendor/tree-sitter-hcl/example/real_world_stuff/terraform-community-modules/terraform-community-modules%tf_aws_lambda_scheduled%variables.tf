variable "lambda_name" {}

variable "runtime" {}

variable "memory_size" {
  default = 128
}

variable "lambda_zipfile" {}

variable "source_code_hash" {}

variable "handler" {}

variable "schedule_expression" {}

variable "iam_policy_document" {}

variable "enabled" {
  default = true
}

variable "timeout" {
  default = 3
}

variable "subnet_ids" {
  default = []
}

variable "security_group_ids" {
  default = []
}
