/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {
  description = "Compartment name"
}

variable "fault_domain" {
  description = "Fault Domainr"
  type        = "list"
}
variable "compute_instance_count" {}
variable "compute_instance_shape" {}

variable "compute_hostname_prefix" {
description = "Host name"
}
variable "compute_image" {
description ="OS Image"
}

variable "compute_ssh_private_key" {
description = "SSH key"
}
variable "compute_ssh_public_key" {
description = "SSH key"
}
variable "bastion_ssh_private_key" {
description = "SSH key"
}
variable "compute_subnet" {
type = "list"
description = "subnet"
}
variable "availability_domain" {
  type = "list"
}
variable "AD" {
  type = "list"
}

variable "bastion_public_ip" {
  type="string"
}

variable "compute_boot_volume_size_in_gb" {}
variable "compute_block_volume_size_in_gb" {}
variable "timeout" {
  description = "Timeout setting for resource creation "
  default     = "10m"
}
variable timezone {}
variable bastion_user {}
variable compute_instance_user {}
variable user_data {}
variable remote_exec_script {}
variable compute_platform {}
