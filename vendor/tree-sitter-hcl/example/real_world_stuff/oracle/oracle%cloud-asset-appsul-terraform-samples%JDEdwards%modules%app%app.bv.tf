/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "oci_core_volume" "app_block" {
  #count               = "${var.app_instance_count}"
  count               = "${var.app_block_size != 0 ? var.app_instance_count : 0}"
  availability_domain = "${element(var.availability_domain, count.index)}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.app_hostname_prefix}vol${count.index+1}"
  size_in_gbs         = "${var.app_block_size}"
}

resource "oci_core_volume_attachment" "app_block_attach" {
  attachment_type = "iscsi"
  #count           = "${var.app_instance_count}"
  count               = "${var.app_block_size != 0 ? var.app_instance_count : 0}"
  compartment_id  = "${var.compartment_ocid}"
  instance_id     = "${element(oci_core_instance.jdeapp.*.id, count.index)}"
  volume_id       = "${element(oci_core_volume.app_block.*.id, count.index)}"

  provisioner "remote-exec" {
    connection {
      agent               = false
      timeout             = "30m"
      host                = "${element(oci_core_instance.jdeapp.*.private_ip, count.index)}"
      user                = "opc"
      private_key         = "${file(var.app_ssh_private_key)}"
      bastion_host        = "${var.bastion_public_ip}"
      bastion_port        = "22"
      bastion_user        = "opc"
      bastion_private_key = "${file(var.bastion_ssh_private_key)}"
    }

    inline = [
      "sudo mkdir /u01",
      "sudo service iscsi reload",
      "sudo -s bash -c 'iscsiadm -m node -o new -T ${self.iqn} -p ${self.ipv4}:${self.port}'",
      "sudo -s bash -c 'iscsiadm -m node -o update -T ${self.iqn} -n node.startup -v automatic '",
      "sudo -s bash -c 'iscsiadm -m node -T ${self.iqn} -p ${self.ipv4}:${self.port} -l '",
      "sudo -s bash -c 'mkfs.ext4 -F /dev/sdb'",
      "sudo -s bash -c 'mount -t ext4 /dev/sdb /u01'",
      "sudo -s bash -c 'echo \"/dev/sdb /u01 ext4 defaults,noatime,_netdev,nofail 0 2\" >> /etc/fstab'",
    ]
  }
}
