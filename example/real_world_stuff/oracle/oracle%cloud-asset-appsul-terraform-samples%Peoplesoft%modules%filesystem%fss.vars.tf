/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {
description = "Compartment name"
}

variable "availability_domain" {
  type = "list"
}
variable "AD" {
  type = "list"
}
variable "fss_instance_prefix" {}
variable "fss_subnet" {
  type = "list"
}
variable "export_path_fs1_mt1" {
  default = "/stage/software"
}

variable "fss_limit_size_in_gb" {
}

variable fss_count {}


