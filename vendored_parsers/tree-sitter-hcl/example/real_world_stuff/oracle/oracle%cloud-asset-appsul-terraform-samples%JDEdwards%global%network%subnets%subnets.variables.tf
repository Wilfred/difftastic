/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {}



variable "vcn_id" {}

variable "route_table_id" {}

variable "availability_domain" {
  type    = "list"
  default = []
}


variable "AD" {
  type    = "list"
}
variable "dhcp_options_id" {}

variable "vcn_subnet_cidr" {
  type    = "list"
  default = []
}
variable "security_list_ids" {}

variable "dns_label" {}

variable "private_subnet" {}
