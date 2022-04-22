
variable "lc_name" {
  default = "example_lc"
}
variable "ami_id" {
  default = "ami-sadfasd"
}
variable "instance_type" {
  default = "m3.medium"
}
variable "iam_instance_profile" {
  default = "test_profile"
}
variable "key_name" {
  default = "my_keypair_name"
}
variable "security_group_id" {
  default = "sg-abcdef"
}
variable "user_data_file" {
  default = "user-data.sh"
}
variable "asg_name" {
  default = "my-custom-asg"
}
variable "asg_number_of_instances" {
  default = 2
}
variable "asg_minimum_number_of_instances" {
  default = 1
}
variable "elb_names" {
  default = "my-elb-name"
}
variable "health_check_type" {
  default = "ELB"
}
variable "availability_zones" {
  default = "us-west-2a,us-west-2b"
}
variable "vpc_zone_subnets" {
  default = "subnet-d2jdfd,subnet-2ell2kd"
}
