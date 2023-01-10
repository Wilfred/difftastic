// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Adds IP routea to the target instance to route traffic via the seconardy vNIC
 */

locals {
  # generate an ip route provisioning command for each target network
  route_command      = var.peering_subnet_cidr == null ? [] : formatlist("%s via ${cidrhost(var.peering_subnet_cidr, 1)}", var.tenant_vcn_cidrs)
  add_route_commands = var.peering_subnet_cidr == null ? [] : formatlist("sudo ip route add %s", local.route_command)
  route_config_entry = var.peering_subnet_cidr == null ? [] : formatlist("echo %s | sudo tee -a /etc/sysconfig/network-scripts/route-spp", local.route_command)
}

resource null_resource ip_route_add {

  triggers = {
    vnic_id = var.vnic_id
  }

  connection {
    type        = "ssh"
    host        = var.ssh_host
    user        = "opc"
    private_key = file(var.remote_ssh_private_key_file)

    bastion_host        = var.bastion_host
    bastion_user        = "opc"
    bastion_private_key = file(var.bastion_ssh_private_key_file)
  }

  provisioner remote-exec {
    inline = flatten([[
      "set -x",
      "# add a route to the tenant network via the peer vnic",
      ], local.add_route_commands,
      local.route_config_entry,
      "interface_name=`sudo /home/opc/secondary_vnic_all_configure.sh | grep \"${var.vnic_id}\" | tr -s \" \" | cut -d' ' -f8`",
      "sudo mv /etc/sysconfig/network-scripts/route-spp /etc/sysconfig/network-scripts/route-$interface_name"
    ])
  }
}
