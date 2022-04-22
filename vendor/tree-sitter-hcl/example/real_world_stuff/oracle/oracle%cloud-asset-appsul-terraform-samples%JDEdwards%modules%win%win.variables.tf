/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {
  description = "Compartment name"
}

variable "app_instance_count" {}

variable "app_instance_shape" {}

variable "app_hostname_prefix" {
  description = "Host name"
}

variable "app_image" {
  description = "OS Image"
}

variable "app_subnet" {
  type        = "list"
  description = "subnet"
}

variable "availability_domain" {
  type = "list"
}

variable "fault_domain" {
  description = "Fault Domain"
  type        = "list"
}

variable "AD" {
  type = "list"
}
