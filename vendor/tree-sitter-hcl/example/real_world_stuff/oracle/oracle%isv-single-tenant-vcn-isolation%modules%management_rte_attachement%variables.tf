// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable display_name {
  type        = string
  description = "name of routing instance"
  default     = "private_tenant_rte_table"
}

variable display_name_public {
  type        = string
  description = "name of routing instance"
  default     = "public_tenant_rte_table"
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

variable management_vcn_id {
  type        = string
  description = "ocid of the management vcn"
}

variable management_subnet_id {
  type        = string
  description = "ocid of the management subnet"
}

variable access_subnet_id {
  type        = string
  description = "ocid of the access subnet"
}

variable management_nat_id {
  type        = string
  description = "ocid of the nat gateway"
}

variable management_igw_id {
  type        = string
  description = "ocid of the internet gateway"
}

variable routing_ip_ids {
  description = "ordered list of private ip address resource ocids for the routing instances"
  type        = list(string)
}

variable tenant_vcn_cidr_blocks {
  type = list(string)
}
