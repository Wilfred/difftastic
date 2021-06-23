// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable display_name {
  type        = string
  description = "name of routing instance"
}

variable hostname_label {
  type        = string
  description = "hostname label"
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

variable tenancy_id {
  type        = string
  description = "oci tenancy ocid"
}

variable region {
  type        = string
  description = "oci region"
}

variable compartment_id {
  type        = string
  description = "ocid of the compartment to provision the resources in"
}

variable source_id {
  type        = string
  description = "ocid of the image to provision the routing instance with"
}

variable subnet_id {
  type        = string
  description = "ocid of the subnet to provision the routing instance in"
}

variable availability_domain {
  type        = string
  description = "the availability downmain to provision the routing instance in"
}

# TODO rename to `bastion_host` for consistency
variable bastion_ip {
  type        = string
  description = "host name or ip address of the bastion host for provisioning"
}

variable shape {
  type        = string
  description = "oci instance shape"
  default     = "VM.Standard2.1"
}

variable bastion_ssh_private_key_file {
  type        = string
  description = "the private ssh key file to access the bastion instance"
  default     = "~/.ssh/id_rsa"
}

variable remote_ssh_private_key_file {
  type        = string
  description = "the private ssh key to provision on the bastion host for access to remote instances"
  default     = "~/.ssh/id_rsa"
}

variable remote_ssh_public_key_file {
  type        = string
  description = "the public ssh key to provision on the bastion host for access to remote instances"
  default     = "~/.ssh/id_rsa.pub"
}

variable hacluster_password {
  type        = string
  description = "password for the HA cluster (must be at least 8 characters containing uppercase, lowercase, digits, and non-alphanumeric characters)"
  # values that do not meet the required password criteria will generate the following error during provisioning:
  # `passwd: Have exhausted maximum number of retries for service`
}

variable monitor_interval {
  type        = number
  description = "cluster monitor interval in seconds"
  default     = 20
}
