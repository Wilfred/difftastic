// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.

variable "compartment_id" {}
variable "availability_domain" {}
variable "image_id" {}
variable "compute_shape" {}
variable "ssh_public_key" {}
variable "boot_size_in_gbs" {}
variable "display_name" {}
variable "hostname_label" {}
variable "source_db" {}
variable "installations_directory" {
  default = "/u01/app/ogg"
}

variable "swap_volume_id" {}

variable "swap_device" {
  default = "/dev/oracleoci/oraclevdb"
}

variable "trails_volume_id" {}

variable "trails_device" {
  default = "/dev/oracleoci/oraclevdc"
}

variable "trails_directory" {
  default = "/u02/trails"
}

variable "deployments_volume_id" {}

variable "deployments_device" {
  default = "/dev/oracleoci/oraclevdd"
}

variable "deployments_directory" {
  default = "/u02/deployments"
}

variable "deployments" {
  default = ""
}

variable "subnet_id" {}
variable "assign_public_ip" {}
