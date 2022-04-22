// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable compartment_id {
  type        = string
  description = "ocid of the compartment to provision the resources in"
}

variable display_name {
  type        = string
  description = "name of routing vnic attachment"
}

variable hostname_label {
  type        = string
  description = "hostname label to assign to the vnic, must be unique within the subnet"
}

variable bastion_host {
  type        = string
  description = "host name or ip address of the bastion host for provisioning"
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

variable ssh_host {
  type        = string
  description = "host name or ip address of the instance to configure"
}

variable subnet_id {
  type        = string
  description = "the subnet to attach the vnic to"
}
variable instance_id {
  type        = string
  description = "the instance to attach the vnic to"
}

variable secondary_vnic_configuration_script_url {
  type        = string
  description = "location of the secondary_vnic_all_configure.sh script to be run when attaching a new secondary vnic to an instance"
  default     = "https://docs.cloud.oracle.com/iaas/Content/Resources/Assets/secondary_vnic_all_configure.sh"
  # see https://docs.cloud.oracle.com/iaas/Content/Network/Tasks/managingVNICs.htm#linux
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
