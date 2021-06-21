variable "name" { default = "rchao" }
variable "private_subnets" { type = list(string)}
variable "public_subnets" { type = list(string)}
variable "cidr_block" {}
