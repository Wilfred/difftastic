/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "null_resource" "remote-exec" {
  count = "${var.app_instance_count}"

  depends_on = ["oci_core_instance.jdeapp",
    "oci_core_volume.app_block",
    "oci_core_volume_attachment.app_block_attach",
  ]
  provisioner "remote-exec" {
    connection {
      agent               = false
      timeout             = "30m"
      host                = "${oci_core_instance.jdeapp.*.private_ip[count.index % var.app_instance_count]}"
      user                = "opc"
      private_key         = "${file(var.app_ssh_private_key)}"
      bastion_host        = "${var.bastion_public_ip}"
      bastion_port        = "22"
      bastion_user        = "opc"
      bastion_private_key = "${file(var.bastion_ssh_private_key)}"
    }

    inline = [
      "sudo mkdir -p /u01/jde_tf/${var.init_dir_name}",
      "sudo chmod -R 777 /u01/jde_tf/${var.init_dir_name}",
    ]
  }

  provisioner "file" {
    connection {
      agent               = false
      timeout             = "30m"
      host                = "${oci_core_instance.jdeapp.*.private_ip[count.index % var.app_instance_count]}"
      user                = "opc"
      private_key         = "${file(var.app_ssh_private_key)}"
      bastion_host        = "${var.bastion_public_ip}"
      bastion_port        = "22"
      bastion_user        = "opc"
      bastion_private_key = "${file(var.bastion_ssh_private_key)}"
    }

    source      = "../modules/userdata/${var.init_dir_name}/"
    destination = "/u01/jde_tf/${var.init_dir_name}"
  }

  provisioner "remote-exec" {
    connection {  
      agent               = false
      timeout             = "30m"
      host                = "${oci_core_instance.jdeapp.*.private_ip[count.index % var.app_instance_count]}"
      user                = "opc"
      private_key         = "${file(var.app_ssh_private_key)}"
      bastion_host        = "${var.bastion_public_ip}"
      bastion_port        = "22"
      bastion_user        = "opc"
      bastion_private_key = "${file(var.bastion_ssh_private_key)}"
    }

    inline = [
      "sudo chmod -R 755 /u01/jde_tf/${var.init_dir_name}",
      "sudo setenforce 0",
      "sudo cd /u01/jde_tf/${var.init_dir_name}",
      "if [ -f /u01/jde_tf/${var.init_dir_name}/JDE_OCProv_*.tgz ]; then sudo tar -xvf /u01/jde_tf/${var.init_dir_name}/JDE_OCProv_*.tgz --directory /u01/; fi",
      "sudo chmod 770 /u01",
    ]
  }
}
