// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.


/*
 * Configure all of the peering networks
 *
 * TODO: dynamically create required number of peering networks
 */

# Peering Network 1
module peering_1_network {
  source = "../../../../modules/peering_network"

  compartment_id = data.terraform_remote_state.compartments.outputs.peering_compartment_id
  vcn_name       = "peering01"
  dns_label      = "peering01"

  local_peering_gateways_per_vcn = 2

  vcn_cidr_block         = data.terraform_remote_state.configuration.outputs.peering_vcns[0]
  peering_subnet_cidr    = data.terraform_remote_state.configuration.outputs.peering_vcns[0]
  tenant_vcn_cidr_blocks = data.terraform_remote_state.configuration.outputs.tenant_vcns_per_peering_vcn[0]

  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "peering_1_network" {
  value = module.peering_1_network
}

# Peering Network 2
module peering_2_network {
  source = "../../../../modules/peering_network"

  compartment_id = data.terraform_remote_state.compartments.outputs.peering_compartment_id
  vcn_name       = "peering02"
  dns_label      = "peering02"

  local_peering_gateways_per_vcn = 2

  vcn_cidr_block         = data.terraform_remote_state.configuration.outputs.peering_vcns[1]
  peering_subnet_cidr    = data.terraform_remote_state.configuration.outputs.peering_vcns[1]
  tenant_vcn_cidr_blocks = data.terraform_remote_state.configuration.outputs.tenant_vcns_per_peering_vcn[1]

  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "peering_2_network" {
  value = module.peering_2_network
}
