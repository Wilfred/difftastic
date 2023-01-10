// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Create a vNIC attachment and run the required vNIC configuration commands on the instance.
 */

resource oci_core_vnic_attachment routing_vnic_attachmment {
  instance_id = var.instance_id

  create_vnic_details {
    subnet_id      = var.subnet_id
    display_name   = var.display_name
    hostname_label = var.hostname_label

    defined_tags  = var.defined_tags
    freeform_tags = var.freeform_tags

    assign_public_ip       = false
    skip_source_dest_check = true
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
    inline = [
      "set -x",
      "# run the vnic configuration script",
      "curl -o secondary_vnic_all_configure.sh ${var.secondary_vnic_configuration_script_url}",
      "chmod a+x secondary_vnic_all_configure.sh",
      "while [ \"$(curl --silent -L http://169.254.169.254/opc/v1/vnics | jq '.[] | select(.vnicId==\"${self.vnic_id}\") != null')\" != \"true\" ]",
      "do",
      "  echo waiting for interface to be ready",
      "  sleep 1",
      "done",
      "sudo ./secondary_vnic_all_configure.sh -c",
      "# ENABLE IP FORWARDING",
      "echo 'net.ipv4.ip_forward = 1' | sudo tee /etc/sysctl.d/98-ip-forward.conf",
      "sudo sysctl -p /etc/sysctl.d/98-ip-forward.conf",
      "#configure for persisting on reboot",
      "ifacename=`sudo /home/opc/secondary_vnic_all_configure.sh | grep \"${self.vnic_id}\" | tr -s \" \" | cut -d' ' -f8`",
      "var.secondary_iface_name=$ifacename",
      "ifaceipaddr=`sudo /home/opc/secondary_vnic_all_configure.sh | grep \"${self.vnic_id}\" | tr -s \" \" | cut -d' ' -f2`",
      "echo -e \"DEVICE=$ifacename\nBOOTPROTO=static\nIPADDR=$ifaceipaddr\nNETMASK=255.255.255.248\nONBOOT=yes\n\" | sudo tee /etc/sysconfig/network-scripts/ifcfg-$ifacename",
      "# ENABLE NAT",
      "sudo firewall-offline-cmd --add-masquerade",
      "sudo systemctl restart firewalld",
    ]
  }
}
