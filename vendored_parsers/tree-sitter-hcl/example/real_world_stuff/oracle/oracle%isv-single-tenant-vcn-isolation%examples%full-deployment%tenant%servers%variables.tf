// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
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

variable "bastion_ssh_private_key_file" {
  type        = string
  description = "path to private ssh key to access the bastion host"
  default     = "~/.ssh/id_rsa"
}

variable "remote_ssh_public_key_file" {
  type        = string
  description = "path to public ssh key for all instances deployed in the environment"
  default     = "~/.ssh/id_rsa.pub"
}

variable "remote_ssh_private_key_file" {
  type        = string
  description = "path to private ssh key to acccess all instance in the deployed environment"
  default     = "~/.ssh/id_rsa"
}

variable "freeform_tags" {
  type        = map
  description = "map of freeform tags to apply to all resources"
  default     = {
    "Environment" =  "Tenant"
  }
}

variable "defined_tags" {
  type        = map
  description = "map of defined tags to apply to all resources"
  default     = {}
}
