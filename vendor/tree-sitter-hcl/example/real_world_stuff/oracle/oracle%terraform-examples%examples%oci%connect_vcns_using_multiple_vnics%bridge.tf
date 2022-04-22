// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.
resource "oci_core_instance_configuration" "bridge_instance_configuration" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "BridgeInstance"

  instance_details {
    instance_type = "compute"

    launch_details {
      source_details {
        source_type = "image"
        image_id    = "${var.InstanceImageOCID[var.region]}"
      }

      create_vnic_details {
        skip_source_dest_check = true
      }

      compartment_id = "${var.compartment_ocid}"
      display_name   = "BridgeInstance"
      shape          = "${var.InstanceShape}"

      metadata = {
        ssh_authorized_keys = "${file(var.ssh_public_key_path)}"
        user_data           = "${base64encode(file("user_data.tpl"))}"
      }
    }

    secondary_vnics {
      display_name = "SecondaryVNIC"

      create_vnic_details {
        skip_source_dest_check = true
        assign_public_ip       = false
      }
    }
  }

  timeouts {
    create = "10m"
  }
}

resource "oci_core_instance_pool" "bridge_instance_pool" {
  display_name              = "BridgeInstancePool"
  compartment_id            = "${var.compartment_ocid}"
  instance_configuration_id = "${oci_core_instance_configuration.bridge_instance_configuration.id}"

  placement_configurations {
    availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD - 1], "name")}"
    primary_subnet_id   = "${oci_core_subnet.MgmtSubnet.id}"

    secondary_vnic_subnets {
      subnet_id    = "${oci_core_subnet.MgmtSubnet2.id}"
      display_name = "SecondaryVNIC"
    }
  }

  size = "1"
}

resource "oci_core_private_ip" "BridgeInstancePrivateIP" {
  depends_on   = ["oci_core_instance_pool.bridge_instance_pool"]
  vnic_id      = "${data.oci_core_vnic.BridgeInstanceVnic1.id}"
  display_name = "BridgeInstancePrivateIP"
}

# Configurations for setting up the secondary VNIC
resource "null_resource" "configure-secondary-vnic" {
  depends_on = ["oci_core_instance_pool.bridge_instance_pool"]

  connection {
    type        = "ssh"
    user        = "opc"
    private_key = "${file(var.ssh_private_key_path)}"
    host        = "${data.oci_core_instance.bridge_instance.public_ip}"
    timeout     = "30m"
  }

  provisioner "file" {
    source      = "scripts/secondary_vnic_all_configure.sh"
    destination = "/tmp/secondary_vnic_all_configure.sh"
  }

  provisioner "remote-exec" {
    inline = [
      "sudo chmod 777 /tmp/secondary_vnic_all_configure.sh",
      "sudo /tmp/secondary_vnic_all_configure.sh -c ${lookup(data.oci_core_private_ips.BridgeInstancePrivateIP2.private_ips[0], "id")}",
      "sudo ip route add ${var.vcn_cidr2} dev ens4 via ${oci_core_subnet.MgmtSubnet2.virtual_router_ip}",
    ]
  }
}
