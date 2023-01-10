// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Add the ip route rules to each routing instance.
 */

# Routing Instance 1
# HA ROUTING INSTANCE
module routing_instance_1_peering_1_routes {
  source = "../../../../modules/ip_route_add"

  vnic_id = module.routing_instance_1_peering_1_vnic_attachement.routing_secondary_vnic_id

  peering_subnet_cidr = data.terraform_remote_state.configuration.outputs.peering_vcns[0]
  tenant_vcn_cidrs    = data.terraform_remote_state.configuration.outputs.tenant_vcns_per_peering_vcn[0]

  bastion_host = local.bastion_ip
  ssh_host     = module.routing_instance_1.instance.private_ip

  bastion_ssh_private_key_file = var.bastion_ssh_private_key_file
  remote_ssh_private_key_file  = var.remote_ssh_private_key_file
}

module routing_instance_1b_peering_1_routes {
  source = "../../../../modules/ip_route_add"

  vnic_id = module.routing_instance_1b_peering_1_vnic_attachement.routing_secondary_vnic_id

  peering_subnet_cidr = data.terraform_remote_state.configuration.outputs.peering_vcns[0]
  tenant_vcn_cidrs    = data.terraform_remote_state.configuration.outputs.tenant_vcns_per_peering_vcn[0]

  bastion_host = local.bastion_ip
  ssh_host     = module.routing_instance_1.instance_b.private_ip

  bastion_ssh_private_key_file = var.bastion_ssh_private_key_file
  remote_ssh_private_key_file  = var.remote_ssh_private_key_file
}



# Routing Instance 2
# SINGLE ROUTING INSTANCE
module routing_instance_2_peering_1_routes {
  source = "../../../../modules/ip_route_add"

  vnic_id = module.routing_instance_2_peering_1_vnic_attachement.routing_secondary_vnic_id

  peering_subnet_cidr = data.terraform_remote_state.configuration.outputs.peering_vcns[1]
  tenant_vcn_cidrs    = data.terraform_remote_state.configuration.outputs.tenant_vcns_per_peering_vcn[1]

  bastion_host = local.bastion_ip
  ssh_host     = module.routing_instance_2.instance.private_ip

  bastion_ssh_private_key_file = var.bastion_ssh_private_key_file
  remote_ssh_private_key_file  = var.remote_ssh_private_key_file
}

output ip_route_add_status {
  value = "IP Route Add successfull"
}
