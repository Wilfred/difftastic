// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable compartment_id {
  type        = string
  description = "compartment for the peering network resources"
}

variable vcn_name {
  type        = string
  description = "name of the peering vcn"
}

variable dns_label {
  type        = string
  description = "dns label for the peering vcn"
  default     = null
}

variable vcn_cidr_block {
  type        = string
  description = "network cidr for the peering VCN"
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

variable peering_rte_name {
  type        = string
  description = "display name for the peering route table"
  default     = "peering_rte"
}

variable peering_sec_list {
  type        = string
  description = "display name for the peering network security list"
  default     = "peering_sec_list"
}

variable tenant_vcn_cidr_blocks {
  type        = list
  description = "list of tenant vcn cidr blocks"
}

variable peering_subnet_name {
  type        = string
  description = "display name for the peering route table"
  default     = "peering subnet"
}

variable peering_subnet_dns_label {
  type        = string
  description = "dns label for the peering subnet"
  default     = "peering"
}

variable peering_subnet_cidr {
  type        = string
  description = "network cidr range for the peering subnet"
}

variable local_peering_gateways_per_vcn {
  type        = number
  description = "number of local peering gateways per peering vcn"
  default     = 10
}


