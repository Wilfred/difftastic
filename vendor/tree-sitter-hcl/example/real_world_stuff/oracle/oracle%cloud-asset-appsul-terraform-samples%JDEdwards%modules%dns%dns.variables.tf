/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {
}

variable "dns_server_zone_name" {
}

variable "batch_alias" {
	default = "batch"
}

variable "logic_alias" {
	default = "logic"
}

variable "web_alias" {
	default = "web"
}

variable "batch_rdata" {
	type = "list"
}

variable "logic_rdata" {
	type = "list"
}

variable "web_rdata" {
	type = "list"
}
