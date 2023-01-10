// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Configure the management network
 */

module management_network {
  source = "../../../../modules/management_network"

  compartment_id         = data.terraform_remote_state.compartments.outputs.management_compartment_id
  peering_compartment_id = data.terraform_remote_state.compartments.outputs.peering_compartment_id
  vcn_name               = "isv management"
  dns_label              = "isv"
  vcn_cidr_block         = var.vcn_cidr_block
  management_subnet_cidr = var.management_subnet_cidr
  access_subnet_cidr     = var.access_subnet_cidr
  peering_subnet_cidr    = var.peering_subnet_cidr
  freeform_tags          = var.freeform_tags
  defined_tags           = var.defined_tags
}

output "management_vcn_id" {
  value = module.management_network.vcn.id
}

output "management_subnet_id" {
  value = module.management_network.management_subnet.id
}

output "management_nat_id" {
  value = module.management_network.nat_id
}

output "management_igw_id" {
  value = module.management_network.igw_id
}

output "access_subnet_id" {
  value = module.management_network.access_subnet.id
}

output "peering_subnet_id" {
  value = module.management_network.peering_subnet.id
}

output "peering_subnet_cidr" {
  value = module.management_network.peering_subnet.cidr_block
}

output "management_subnet_cidr" {
  value = module.management_network.management_subnet.cidr_block
}
