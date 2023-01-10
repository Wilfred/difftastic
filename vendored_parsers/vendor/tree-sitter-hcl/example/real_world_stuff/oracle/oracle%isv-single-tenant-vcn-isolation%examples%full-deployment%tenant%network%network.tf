// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Configure the tenant networks
 */

# Tenant 1
module tenant_1_network {
  source = "../../../../modules/tenant_network"

  compartment_id = data.terraform_remote_state.compartments.outputs.tenant_1_compartment_id
  vcn_name       = "tenant1"
  dns_label      = "tenant1"
  vcn_cidr_block = data.terraform_remote_state.configuration.outputs.tenant_vcns[0]

  tenant_public_subnet_cidr  = "${cidrsubnet(data.terraform_remote_state.configuration.outputs.tenant_vcns[0], 8, 0)}"
  tenant_private_subnet_cidr = "${cidrsubnet(data.terraform_remote_state.configuration.outputs.tenant_vcns[0], 8, 1)}"

  tenant_peering_subnet_cidr     = data.terraform_remote_state.configuration.outputs.peering_vcns[0]
  management_peering_subnet_cidr = data.terraform_remote_state.mgmt_network.outputs.management_subnet_cidr

  # TODO calculate index
  peering_lpg_id = (length(data.terraform_remote_state.peering_network.outputs) == 0 ? null : data.terraform_remote_state.peering_network.outputs.peering_1_network.peering_gateway_ids[0])
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "tenant_1_vcn_id" {
  value = module.tenant_1_network.tenant_vcn.id
}

output "tenant_1_private_subnet_id" {
  value = module.tenant_1_network.tenant_private_subnet.id
}

output "tenant_1_vcn_cidr" {
  value = module.tenant_1_network.tenant_vcn.cidr_block
}

output "tenant_1_private_subnet_cidr" {
  value = module.tenant_1_network.tenant_private_subnet.cidr_block
}

# Tenant 2
module tenant_2_network {
  source = "../../../../modules/tenant_network"

  compartment_id = data.terraform_remote_state.compartments.outputs.tenant_2_compartment_id
  vcn_name       = "tenant2"
  dns_label      = "tenant2"
  vcn_cidr_block = data.terraform_remote_state.configuration.outputs.tenant_vcns[1]

  tenant_public_subnet_cidr  = "${cidrsubnet(data.terraform_remote_state.configuration.outputs.tenant_vcns[1], 8, 0)}"
  tenant_private_subnet_cidr = "${cidrsubnet(data.terraform_remote_state.configuration.outputs.tenant_vcns[1], 8, 1)}"

  tenant_peering_subnet_cidr     = data.terraform_remote_state.configuration.outputs.peering_vcns[0]
  management_peering_subnet_cidr = data.terraform_remote_state.mgmt_network.outputs.management_subnet_cidr

  # TODO calculate index
  peering_lpg_id = (length(data.terraform_remote_state.peering_network.outputs) == 0 ? null : data.terraform_remote_state.peering_network.outputs.peering_1_network.peering_gateway_ids[1])
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "tenant_2_vcn_id" {
  value = module.tenant_2_network.tenant_vcn.id
}

output "tenant_2_private_subnet_id" {
  value = module.tenant_2_network.tenant_private_subnet.id
}

output "tenant_2_vcn_cidr" {
  value = module.tenant_2_network.tenant_vcn.cidr_block
}

output "tenant_2_private_subnet_cidr" {
  value = module.tenant_2_network.tenant_private_subnet.cidr_block
}

# Tenant 3
module tenant_3_network {
  source = "../../../../modules/tenant_network"

  compartment_id = data.terraform_remote_state.compartments.outputs.tenant_3_compartment_id
  vcn_name       = "tenant3"
  dns_label      = "tenant3"
  vcn_cidr_block = data.terraform_remote_state.configuration.outputs.tenant_vcns[2]

  tenant_public_subnet_cidr  = "${cidrsubnet(data.terraform_remote_state.configuration.outputs.tenant_vcns[2], 8, 0)}"
  tenant_private_subnet_cidr = "${cidrsubnet(data.terraform_remote_state.configuration.outputs.tenant_vcns[2], 8, 1)}"

  tenant_peering_subnet_cidr     = data.terraform_remote_state.configuration.outputs.peering_vcns[1]
  management_peering_subnet_cidr = data.terraform_remote_state.mgmt_network.outputs.management_subnet_cidr

  # TODO calculate index
  peering_lpg_id = (length(data.terraform_remote_state.peering_network.outputs) == 0 ? null : data.terraform_remote_state.peering_network.outputs.peering_2_network.peering_gateway_ids[0])
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "tenant_3_vcn_id" {
  value = module.tenant_3_network.tenant_vcn.id
}

output "tenant_3_private_subnet_id" {
  value = module.tenant_3_network.tenant_private_subnet.id
}

output "tenant_3_vcn_cidr" {
  value = module.tenant_3_network.tenant_vcn.cidr_block
}

output "tenant_3_private_subnet_cidr" {
  value = module.tenant_3_network.tenant_private_subnet.cidr_block
}

# Tenant 4
module tenant_4_network {
  source = "../../../../modules/tenant_network"

  compartment_id = data.terraform_remote_state.compartments.outputs.tenant_4_compartment_id
  vcn_name       = "tenant4"
  dns_label      = "tenant4"
  vcn_cidr_block = data.terraform_remote_state.configuration.outputs.tenant_vcns[3]

  tenant_public_subnet_cidr  = "${cidrsubnet(data.terraform_remote_state.configuration.outputs.tenant_vcns[3], 8, 0)}"
  tenant_private_subnet_cidr = "${cidrsubnet(data.terraform_remote_state.configuration.outputs.tenant_vcns[3], 8, 1)}"

  tenant_peering_subnet_cidr     = data.terraform_remote_state.configuration.outputs.peering_vcns[1]
  management_peering_subnet_cidr = data.terraform_remote_state.mgmt_network.outputs.management_subnet_cidr

  # TODO calculate index
  peering_lpg_id = (length(data.terraform_remote_state.peering_network.outputs) == 0 ? null : data.terraform_remote_state.peering_network.outputs.peering_2_network.peering_gateway_ids[1])
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "tenant_4_vcn_id" {
  value = module.tenant_4_network.tenant_vcn.id
}

output "tenant_4_private_subnet_id" {
  value = module.tenant_4_network.tenant_private_subnet.id
}

output "tenant_4_vcn_cidr" {
  value = module.tenant_4_network.tenant_vcn.cidr_block
}

output "tenant_4_private_subnet_cidr" {
  value = module.tenant_4_network.tenant_private_subnet.cidr_block
}
