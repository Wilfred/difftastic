// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable compartment_id {
  type        = string
  description = "compartment for the tenant resources"
}

variable vcn_name {
  type        = string
  description = "display name for the tenant vcn"
}

variable dns_label {
  type        = string
  description = "dns label for the tenant vcn"
}

variable vcn_cidr_block {
  type        = string
  description = "network cidr for the tenant vcn"
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

variable peering_lpg_id {
  type        = string
  description = "ocid of the local peering gatewate in the peering vcn"
}

variable igw_name {
  type        = string
  description = "display name for the internet gateway"
  default     = "igw"
}

variable nat_name {
  type        = string
  description = "display name for the nat gateway"
  default     = "nat"
}

variable public_rte_name {
  type        = string
  description = "display name for public subnet route table"
  default     = "public_rte"
}

variable private_rte_name {
  type        = string
  description = "display name for private subnet route table"
  default     = "private_rte"
}

variable tenant_public_sec_list {
  type        = string
  description = "display name for the public subnet security list"
  default     = "tenant_public_sec_list"
}

variable tenant_private_sec_list {
  type        = string
  description = "display name for the public subnet security list"
  default     = "tenant_private_sec_list"
}

variable tenant_public_subnet_name {
  type        = string
  description = "display name for the public subnet"
  default     = "public subnet"
}

variable tenant_public_subnet_dns_label {
  type        = string
  description = "dns label for the public subnet "
  default     = "public"
}

variable tenant_public_subnet_cidr {
  type        = string
  description = "network cidr for the public subnet"
}

variable tenant_private_subnet_name {
  type        = string
  description = "display name for the private subnet"
  default     = "private subnet"
}

variable tenant_private_subnet_dns_label {
  type        = string
  description = "dns label for the private subnet"
  default     = "private"
}

variable tenant_private_subnet_cidr {
  type        = string
  description = "network cidr for the private subnet"
}

variable management_peering_subnet_cidr {
  type        = string
  description = "network cidr for the management peering subnet"
}

variable tenant_peering_subnet_cidr {
  type        = string
  description = "network cidr for the tenant peering subnet"
}

