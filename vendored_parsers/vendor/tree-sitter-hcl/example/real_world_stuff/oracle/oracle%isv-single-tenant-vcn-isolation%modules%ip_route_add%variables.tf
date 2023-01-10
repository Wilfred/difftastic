// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable vnic_id {
  type        = string
  description = "ocid of the vNIC the route is configured for"
}

variable peering_subnet_cidr {
  type        = string
  description = "the peering network cidr to route through"
}

variable tenant_vcn_cidrs {
  type        = list
  description = "list of network cidrs accessable through this route"
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
  description = "host name or ip address of the instance to provision the ip route on"
}
