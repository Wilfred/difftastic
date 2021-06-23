variable "region" {}
variable "instance_type" {
  default = "t2.micro"
}
variable "subnet_id" {}
variable "aws_key_name" {}
variable "iam_instance_profile" {
  default = "describe-instances"
}
variable "security_group" {}
variable "repository" {}
