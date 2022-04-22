// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Create the secondary vNICs for routing through the peering subnets
 */

# Routing Instance 1
# HA ROUTING INSTANCE - two vNIC attachments and floating IP
module routing_instance_1_peering_1_vnic_attachement {
  source         = "../../../../modules/routing_vnic_attachment"
  hostname_label = "${module.routing_instance_1.instance.hostname_label}"
  display_name   = "${module.routing_instance_1.instance.hostname_label} peering interface 1"
  compartment_id = local.compartment_id

  instance_id = module.routing_instance_1.instance.id
  subnet_id   = data.terraform_remote_state.peering_network.outputs.peering_1_network.peering_subnet.id

  ssh_host     = module.routing_instance_1.instance.private_ip
  bastion_host = local.bastion_ip

  bastion_ssh_private_key_file = var.bastion_ssh_private_key_file
  remote_ssh_private_key_file  = var.remote_ssh_private_key_file

  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

module routing_instance_1b_peering_1_vnic_attachement {
  source         = "../../../../modules/routing_vnic_attachment"
  hostname_label = "${module.routing_instance_1.instance_b.hostname_label}"
  display_name   = "${module.routing_instance_1.instance_b.hostname_label} peering interface 1"
  compartment_id = local.compartment_id

  instance_id = module.routing_instance_1.instance_b.id
  subnet_id   = data.terraform_remote_state.peering_network.outputs.peering_1_network.peering_subnet.id

  ssh_host     = module.routing_instance_1.instance_b.private_ip
  bastion_host = local.bastion_ip

  bastion_ssh_private_key_file = var.bastion_ssh_private_key_file
  remote_ssh_private_key_file  = var.remote_ssh_private_key_file

  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

resource oci_core_private_ip routing_instance_1_peering_1_floating_ip {
  vnic_id        = module.routing_instance_1_peering_1_vnic_attachement.routing_secondary_vnic_id
  hostname_label = "gateway1"

  lifecycle {
    ignore_changes = [
      # ignore changes to vnic_id as it can be moved dynamically for HA failover
      vnic_id,
    ]
  }
}

# TODO add additional interface on routing instance
#  - disabled for now, using VM.Standard2.1 shape for testing with just one secondary vnic


# Routing Instance 2
# SINGLE ROUTING INSTANCE - single vNIC
module routing_instance_2_peering_1_vnic_attachement {
  source         = "../../../../modules/routing_vnic_attachment"
  hostname_label = "${module.routing_instance_2.instance.hostname_label}"
  display_name   = "${module.routing_instance_2.instance.hostname_label} peering interface 1"
  compartment_id = local.compartment_id

  instance_id = module.routing_instance_2.instance.id
  subnet_id   = data.terraform_remote_state.peering_network.outputs.peering_2_network.peering_subnet.id

  ssh_host     = module.routing_instance_2.instance.private_ip
  bastion_host = local.bastion_ip

  bastion_ssh_private_key_file = var.bastion_ssh_private_key_file
  remote_ssh_private_key_file  = var.remote_ssh_private_key_file

  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}
