// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

# variables
variable "number_of_tenants" {
  type        = string
  description = "number of tenants"
  default     = "30"
}

variable "routing_instances_subnet_cidr" {
  type        = string
  description = "routing instances subnet cidr block"
  default     = "10.254.100.0/24"
}

variable "tenant_peering_vcn_meta_cidr" {
  type        = string
  description = "tenant peering vcn meta cidr"
  default     = "10.253.0.0/16"
}

variable "tenant_peering_vcn_mask" {
  type        = string
  description = "tenant peering vcn mask"
  default     = "29"
}

variable "tenant_vcn_meta_cidr" {
  type        = string
  description = "tenant vcn meta cidr"
  default     = "10.1.0.0/16"
}

variable "tenant_vcn_mask" {
  type        = string
  description = "tenant vcn mask"
  default     = "29"
}

variable "peering_vcns_per_routing_instance" {
  type        = string
  description = "peering vcns per routing instance"
  default     = "3"
}

variable "local_peering_gateways_per_tenany_peering_vcn" {
  type        = string
  description = "local peering gateways per tenany peering vcn"
  default     = "10"
}
