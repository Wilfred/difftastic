# Variables
# Please fill in the xxxxxx with your account values

variable "region" {
  # sample: eu-frankfurt-1
  default = "xxxxxx"
}

variable "admin_password" {
  #admin password of the autonomous database you want to use
  default = "xxxxxx"
}

variable "tenency_ocid" {
  # OCID of your OCI Account Tenancy
  default = "xxxxxx"
}

variable "adb_ocid" {
  # OCID of your Autonomous Database you wish to use
  default = "xxxxxx"
}

variable "database_name" {
  # Name of the autonomous database you wish to use
  default = "xxxxxx"
}

variable "domain_name" {
  # Your domain name you wish to use and own
  default = "xxxxxx"
}

variable "number_of_midtiers" {
  # how many midtiers you want to create
  default = 1
}

## These Variables are not used at this time

variable "ssh_public_key" {
  default = "xxxxxx"  
}

variable "ssh_private_key" {
  default = "xxxxxx"
}