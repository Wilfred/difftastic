/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "random_integer" "rand" {
  min = 1000000000
  max = 9999999999
}

locals {
  remote_exec_script_enabled = "${var.remote_exec_script != "" ? 1 : 0}"
}

resource "null_resource" "initlnx" {
  depends_on  = ["oci_core_instance.compute", "oci_core_volume_attachment.blockvolume_attach"]
  count       = "${local.remote_exec_script_enabled && var.compute_platform == "linux" ? var.compute_instance_count : 0}"
  
  provisioner "file" {
    connection {
      agent               = false
      timeout             = "${var.timeout}"
      host                = "${oci_core_instance.compute.*.private_ip[count.index % var.compute_instance_count]}"
      user                = "${var.compute_instance_user}"
      private_key         = "${file("${var.compute_ssh_private_key}")}"
      
      bastion_host        = "${var.bastion_public_ip}"
      bastion_user        = "${var.bastion_user}"
      bastion_private_key = "${file("${var.bastion_ssh_private_key}")}"
    }
    source        = "userdata/${var.remote_exec_script}"
    #content        = "${file("${var.remote_exec_script}")}"  
    destination   = "/tmp/init_${random_integer.rand.result}.sh"
  }

  provisioner "remote-exec" {
    connection {  
      agent               = false
      timeout             = "${var.timeout}"
      host                = "${oci_core_instance.compute.*.private_ip[count.index % var.compute_instance_count]}"
      user                = "${var.compute_instance_user}"
      private_key         = "${file("${var.compute_ssh_private_key}")}"
      
      bastion_host        = "${var.bastion_public_ip}"
      bastion_user        = "${var.bastion_user}"
      bastion_private_key = "${file("${var.bastion_ssh_private_key}")}"
    }

    inline = [
      "chmod +x  /tmp/init_${random_integer.rand.result}.sh",
      "while [ ! -f /tmp/init.done ]; do /tmp/init_${random_integer.rand.result}.sh; sleep 10; done",     
    ]
  }
}