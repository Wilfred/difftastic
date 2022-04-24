/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "tenancy_ocid" {}
variable "user_ocid" {}
variable "fingerprint" {}
variable "region" {}

variable "compartment_ocid" {}

variable "private_key_path" {}

variable "ssh_public_key" {}
variable "ssh_private_key" {}
variable "AD" {
    type= "list"
}


# VCN variables
variable "vcn_cidr" {
  description = "CIDR for Virtual Cloud Network (VCN)"
}

variable "vcn_dns_label" {
  description = "DNS label for Virtual Cloud Network (VCN)"
}

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

variable "InstanceOS" {
  description = "Operating system for compute instances"
  default     = "Oracle Linux"
}

variable "linux_os_version" {
  description = "Operating system version for all compute instances except NAT"
  default     = "7.5"
}

variable "bastion_instance_shape" {
  description = "Instance shape of bastion host"
  default     = "VM.Standard2.1"
}

variable "bastion_ssh_public_key" {} 

variable "env_prefix" {
}
