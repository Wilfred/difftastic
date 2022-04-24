// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

locals {
  # commands to be run on all nodes in the cluster
  pacemaker_install = [
    "set -x",
    "sudo yum -y install pacemaker pcs resource-agents",
    "sudo systemctl start pcsd.service",
    "sudo systemctl enable pcsd.service",
    "sudo systemctl enable pacemaker",
    "sudo systemctl enable corosync",
    "echo '${var.hacluster_password}' | sudo passwd --stdin hacluster",
    "sudo firewall-cmd --permanent --add-service=high-availability",
    "sudo firewall-cmd --reload",
  ]
}

# bootstrap the cluster on the primary node
resource null_resource pacemaker_bootstrap {

  triggers = {
    primary_host_id    = oci_core_instance.routing_server_a.id
    secondary_host_id  = oci_core_instance.routing_server_b.id
    hostname_label     = var.hostname_label
    hacluster_password = var.hacluster_password
    ip_address         = oci_core_private_ip.floating_ip.ip_address
    monitor_interval   = var.monitor_interval
  }

  connection {
    type        = "ssh"
    host        = oci_core_instance.routing_server_a.private_ip
    user        = "opc"
    private_key = file(var.remote_ssh_private_key_file)

    bastion_host        = var.bastion_ip
    bastion_user        = "opc"
    bastion_private_key = file(var.bastion_ssh_private_key_file)
  }

  provisioner remote-exec {
    inline = [
      "set -x",
      "sudo pcs cluster auth ${var.hostname_label}a ${var.hostname_label}b -u hacluster -p '${var.hacluster_password}' --force",
      "sudo pcs cluster setup --force --name pacemaker1  ${var.hostname_label}a ${var.hostname_label}b",
      "sudo pcs cluster start --all",
      "sudo pcs property set stonith-enabled=false",
      "sudo pcs property set no-quorum-policy=ignore",
      "sudo pcs resource defaults migration-threshold=1",
      "sudo pcs resource create Cluster_VIP ocf:heartbeat:IPaddr2 ip=${oci_core_private_ip.floating_ip.ip_address} cidr_netmask=${local.cidr_netmask} op monitor interval=${var.monitor_interval}s",
    ]
  }
}


# TODO: NSG only needs to be created once for the VCN

# Pacemaker uses: TCP ports 2224, 3121, and 21064, and UDP port 5405
resource oci_core_network_security_group pacemaker {
  compartment_id = var.compartment_id
  vcn_id         = local.vcn_id
  display_name   = "Pacemaker"
}

resource "oci_core_network_security_group_security_rule" "tcp2224" {
  network_security_group_id = oci_core_network_security_group.pacemaker.id

  description = "Pacemaker TCP 2224"
  direction   = "INGRESS"
  protocol    = 6
  source_type = "NETWORK_SECURITY_GROUP"
  source      = oci_core_network_security_group.pacemaker.id
  tcp_options {
    destination_port_range {
      min = 2224
      max = 2224
    }
  }
}

resource "oci_core_network_security_group_security_rule" "tcp3121" {
  network_security_group_id = oci_core_network_security_group.pacemaker.id

  description = "Pacemaker TCP 3121"
  direction   = "INGRESS"
  protocol    = 6
  source_type = "NETWORK_SECURITY_GROUP"
  source      = oci_core_network_security_group.pacemaker.id
  tcp_options {
    destination_port_range {
      min = 3121
      max = 3121
    }
  }
}

resource "oci_core_network_security_group_security_rule" "tcp21064" {
  network_security_group_id = oci_core_network_security_group.pacemaker.id

  description = "Pacemaker TCP 21064"
  direction   = "INGRESS"
  protocol    = 6
  source_type = "NETWORK_SECURITY_GROUP"
  source      = oci_core_network_security_group.pacemaker.id
  tcp_options {
    destination_port_range {
      min = 21064
      max = 21064
    }
  }
}

resource "oci_core_network_security_group_security_rule" "udp5405" {
  network_security_group_id = oci_core_network_security_group.pacemaker.id

  description = "Pacemaker UDP 5405"
  direction   = "INGRESS"
  protocol    = 17
  source_type = "NETWORK_SECURITY_GROUP"
  source      = oci_core_network_security_group.pacemaker.id
  udp_options {
    destination_port_range {
      min = 5405
      max = 5405
    }
  }
}