// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

# OCI Provider variables
variable "tenancy_ocid" {}
variable "user_ocid" {}
variable "fingerprint" {}
variable "private_key_path" {}
variable "region" {}

# Deployment variables
variable "compartment_ocid" {
  type        = string
  description = "ocid of the compartment to deploy the resources in"
}

variable "management_compartment_name" {
  type        = string
  description = "compartment name for management resources"
  default     = "management"
}

variable "peering_compartment_name" {
  type        = string
  description = "compartment name for peering resources"
  default     = "peering"
}

variable "tenant1_compartment_name" {
  type        = string
  description = "compartment name for tenant1 resources"
  default     = "tenant1"
}

variable "tenant2_compartment_name" {
  type        = string
  description = "compartment name for tenant2 resources"
  default     = "tenant2"
}

variable "tenant3_compartment_name" {
  type        = string
  description = "compartment name for tenant3 resources"
  default     = "tenant3"
}

variable "tenant4_compartment_name" {
  type        = string
  description = "compartment name for tenant4 resources"
  default     = "tenant4"
}

variable "freeform_tags" {
  type        = map
  description = "map of freeform tags to apply to all resources"
  default     = {
    "Environment" =  "Management"
  }
}

variable "defined_tags" {
  type        = map
  description = "map of defined tags to apply to all resources"
  default     = {}
}
