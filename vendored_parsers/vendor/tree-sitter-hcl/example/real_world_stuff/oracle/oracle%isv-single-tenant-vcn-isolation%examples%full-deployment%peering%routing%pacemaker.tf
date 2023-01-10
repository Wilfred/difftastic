// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Configure the HA routing instances with Pacemaker
 */

locals {
  # TODO dynamically get the list of routing instances
  instances = [
    module.routing_instance_1.instance_a.private_ip,
    module.routing_instance_1.instance_b.private_ip,
  ]
}

# Routing Instance 1

module router_instance_1_pacemaker_config {
  source                       = "../../../../modules/pacemaker_config"
  hostname                     = "gateway1"
  instance_a_primary_vnic_id   = module.routing_instance_1.instance_vnics[0]
  instance_a_secondary_vnic_id = module.routing_instance_1_peering_1_vnic_attachement.routing_secondary_vnic_id
  instance_b_primary_vnic_id   = module.routing_instance_1.instance_vnics[1]
  instance_b_secondary_vnic_id = module.routing_instance_1b_peering_1_vnic_attachement.routing_secondary_vnic_id
  floating_ip                  = module.routing_instance_1.routing_ip.ip_address
  floating_secondary_ip        = oci_core_private_ip.routing_instance_1_peering_1_floating_ip.ip_address
}


# configure the fail-over actions
resource null_resource pacemaker_config {
  # TODO use for_each?
  count = length(local.instances)

  triggers = {
    instance_a_primary_vnic_id   = module.routing_instance_1.instance_vnics[0]
    instance_a_secondary_vnic_id = module.routing_instance_1_peering_1_vnic_attachement.routing_secondary_vnic_id
    instance_b_primary_vnic_id   = module.routing_instance_1.instance_vnics[1]
    instance_b_secondary_vnic_id = module.routing_instance_1b_peering_1_vnic_attachement.routing_secondary_vnic_id
    floating_ip                  = module.routing_instance_1.routing_ip.ip_address
    floating_secondary_ip        = oci_core_private_ip.routing_instance_1_peering_1_floating_ip.ip_address
  }

  connection {
    type        = "ssh"
    host        = local.instances[count.index]
    user        = "opc"
    private_key = file(var.remote_ssh_private_key_file) # TODO

    bastion_host        = local.bastion_ip
    bastion_user        = "opc"
    bastion_private_key = file(var.bastion_ssh_private_key_file) #TODO
  }

  provisioner remote-exec {
    inline = module.router_instance_1_pacemaker_config.config
  }
}
