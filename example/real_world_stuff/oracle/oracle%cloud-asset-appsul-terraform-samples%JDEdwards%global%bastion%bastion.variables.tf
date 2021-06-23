/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {
    description = "Compartment name"
}
variable "availability_domain" {
    type = "list"
    description = "Availability domain"
}

variable "AD" {
    type= "list"
}
#Bastion host variables
variable "bastion_hostname_prefix" {}

variable "bastion_instance_shape" {
    description = "Instance shape of bastion host"
}

variable "bastion_subnet" {
    type = "list"
description = "Subnet for Bastion host"
}

variable "bastion_image" {
description ="OS Image"
}

variable "bastion_ssh_public_key" {
description = "Bastion Host SSH public key"
}
