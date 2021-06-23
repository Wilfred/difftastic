/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {}

# VCN Variables
variable "vcn_cidr" {}

variable "vcn_dns_label" {}

variable "lbaas_es_port" {
  type = "list"
}

variable "lbaas_standalone_html" {
  type = "string"
}

variable "lbaas_html" {
  type = "string"
}

variable "lbaas_ais" {
  type = "string"
}

variable "standalone_jas_pd" {
  type = "list"
}

variable "jas_pd" {
  type = "list"
}

variable "ais_pd" {
  type = "list"
}

variable "web_nonpd" {
  type =  "list"
}
