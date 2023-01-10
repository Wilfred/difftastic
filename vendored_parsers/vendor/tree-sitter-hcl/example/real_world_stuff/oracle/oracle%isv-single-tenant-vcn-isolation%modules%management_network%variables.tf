// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable compartment_id {
  type        = string
  description = "compartment for the management resources"
}

variable peering_compartment_id {
  type        = string
  description = "compartment for the peering subnet"
}

variable vcn_name {
  type        = string
  description = "CIDR range for the management VCN"
}

variable dns_label {
  type        = string
  description = "CIDR range for the management VCN"
  default     = ""
}

variable vcn_cidr_block {
  type        = string
  description = "CIDR range for the management VCN"
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

variable igw_name {
  type        = string
  description = "Internet gateway name for management VCN"
  default     = "igw"
}

variable nat_name {
  type        = string
  description = "NAT gateway name for management VCN"
  default     = "nat"
}

variable public_rte_name {
  type        = string
  description = "route table namefor public subnet"
  default     = "public_rte"
}

variable private_rte_name {
  type        = string
  description = "route table namefor private subnet"
  default     = "private_rte"
}

variable management_sec_list {
  type        = string
  description = "seclist to open ports 80/443 to allow access to nagios server"
  default     = "management_sec_list"
}

variable peering_sec_list {
  type        = string
  description = "seclist to open ICMP ports"
  default     = "peering_sec_list"
}

variable access_sec_list {
  type        = string
  description = "seclist to open ports 80/443 to allow load balancer traffic"
  default     = "access_sec_list"
}

variable access_subnet_name {
  type        = string
  description = "Access Subnet display name"
  default     = "access subnet"
}

variable access_subnet_dns_label {
  type        = string
  description = "Access Subnet display name"
  default     = "access"
}

variable access_subnet_cidr {
  type        = string
  description = "CIDR range for the peering subnet"
}

variable peering_subnet_name {
  type        = string
  description = "Access Subnet display name"
  default     = "peering subnet"
}

variable peering_subnet_dns_label {
  type        = string
  description = "Access Subnet display name"
  default     = "peering"
}

variable peering_subnet_cidr {
  type        = string
  description = "CIDR range for the peering subnet"
}

variable management_subnet_name {
  type        = string
  description = "Management Subnet display name"
  default     = "management subnet"
}

variable management_subnet_dns_label {
  type        = string
  description = "Management Subnet display name"
  default     = "management"
}

variable management_subnet_cidr {
  type        = string
  description = "CIDR range for the management subnet"
}

