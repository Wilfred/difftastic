// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable "ssh_public_key" {
  description = "(Required) Name of existing SSH Key resource"
}

variable "ssh_private_key" {
  description = "(Required) SSH private key."
}

variable "ssh_user" {
  description = "(Optional) SSH user to connect to bastion host. Default is `opc`"
  default     = "opc"
}

variable "hostname" {
  description = "(Optional) name of the host. Default is `bastion`"
  default     = "bastion"
}

variable "image" {
  description = "(Optional) Machine image. Default is Oracle Linux 7.2 R4"
  default     = "/oracle/public/OL_7.2_UEKR4_x86_64"
}

variable "private_ip_network" {
  description = "(Required) Name of the IP Network for private interface"
}
