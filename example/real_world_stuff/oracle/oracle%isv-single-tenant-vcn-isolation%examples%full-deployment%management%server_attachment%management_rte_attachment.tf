// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Configure the routing for the peering routing instances
 */

module management_rte_attachement {
  source = "../../../../modules/management_rte_attachement"

  compartment_id = data.terraform_remote_state.compartments.outputs.management_compartment_id

  routing_ip_ids = [
    data.terraform_remote_state.peering_servers.outputs.routing_instance_1_ip_id,
    data.terraform_remote_state.peering_servers.outputs.routing_instance_2_ip_id,
  ]

  tenant_vcn_cidr_blocks = data.terraform_remote_state.configuration.outputs.tenant_vcns

  management_vcn_id    = data.terraform_remote_state.management_network.outputs.management_vcn_id
  management_subnet_id = data.terraform_remote_state.management_network.outputs.management_subnet_id
  management_nat_id    = data.terraform_remote_state.management_network.outputs.management_nat_id
  management_igw_id    = data.terraform_remote_state.management_network.outputs.management_igw_id
  access_subnet_id     = data.terraform_remote_state.management_network.outputs.access_subnet_id

  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output routing_id {
  value = module.management_rte_attachement.routing_id
}
