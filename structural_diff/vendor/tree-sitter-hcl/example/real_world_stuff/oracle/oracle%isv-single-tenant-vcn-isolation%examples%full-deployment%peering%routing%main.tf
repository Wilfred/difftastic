// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

terraform {
  required_version = ">= 0.12.0"

  backend "local" {
    path = "../state/peering/routing/terraform.tfstate"
  }
}

locals {
  availability_domain = lookup(data.oci_identity_availability_domains.ADs.availability_domains[0], "name")

  compartment_id = data.terraform_remote_state.compartments.outputs.peering_compartment_id

  bastion_ip = data.terraform_remote_state.access.outputs.bastion_ip
} 