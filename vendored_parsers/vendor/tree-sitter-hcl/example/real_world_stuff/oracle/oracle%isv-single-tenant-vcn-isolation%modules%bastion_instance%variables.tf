// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable display_name {
  type        = string
  description = "root compartment for the individual tenant compartments"
  default     = "bastion"
}

variable hostname_label {
  type        = string
  description = "compartment name"
  default     = "bastion"
}

variable freeform_tags {
  type        = map
  description = "map of freeform tags to apply to all resources created by this module"
  default     = {}
}

variable defined_tags {
  type        = map
  description = "map of defined tags to apply to all resources created by this module"
  default     = {}
}

variable compartment_id {
  type        = string
  description = "ocid of the compartment to provision the resources in"
}

variable source_id {
  type        = string
  description = "ocid of the image to provistion the bastion instance with"
}

variable subnet_id {
  type        = string
  description = "ocid of the subnet to provision the bastion instance in"
}

variable availability_domain {
  type        = string
  description = "the availability downmain to provision the bastion instance in"
}

variable bastion_ssh_private_key_file {
  type        = string
  description = "the private ssh key file to access the bastion instance"
}

variable bastion_ssh_public_key_file {
  type        = string
  description = "the public ssh key file to be added to the bastion instance ssh_authorized_keys"
}

variable remote_ssh_private_key_file {
  type        = string
  description = "the private ssh key to provision on the bastion host for access to remote instances"
}

variable remote_ssh_public_key_file {
  type        = string
  description = "the public ssh key to provision on the bastion host for access to remote instances"
}

variable shape {
  type        = string
  description = "oci instance shape for the bastion instance"
  default     = "VM.Standard1.4"
}
