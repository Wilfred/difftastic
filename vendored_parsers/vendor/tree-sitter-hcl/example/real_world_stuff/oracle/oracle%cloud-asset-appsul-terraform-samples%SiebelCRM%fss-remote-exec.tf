/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "random_integer" "rand" {
  min = 1000000000
  max = 9999999999
}

resource "null_resource" "mountfss" {
  count = "${var.siebel_server_instance_count}"
  provisioner "local-exec" {
    command = "sleep 120" # Wait 
  }
  provisioner "file" {
    connection {
      agent               = false
      timeout             = "${var.timeout}"
      host                = "${module.create_app.ComputePrivateIPs[count.index % var.siebel_server_instance_count]}"
      user                = "${var.compute_instance_user}"
      private_key         = "${file("${var.ssh_private_key}")}"
      
      bastion_host        = "${module.create_bastion.Bastion_Public_IPs[0]}"
      bastion_user        = "${var.bastion_user}"
      bastion_private_key = "${file("${var.bastion_ssh_private_key}")}"
    }
    content       = "${data.template_file.mountfss.rendered}"
    destination   = "/tmp/fssmount_${random_integer.rand.result}.sh"
  }
 
  provisioner "remote-exec" {
    connection {  
      agent               = false
      timeout             = "${var.timeout}"
      host                = "${module.create_app.ComputePrivateIPs[count.index % var.siebel_server_instance_count]}"
      user                = "${var.compute_instance_user}"
      private_key         = "${file("${var.ssh_private_key}")}"
      
      bastion_host        = "${module.create_bastion.Bastion_Public_IPs[0]}"
      bastion_user        = "${var.bastion_user}"
      bastion_private_key = "${file("${var.bastion_ssh_private_key}")}"
    }

    inline = [
      "chmod +x  /tmp/fssmount_${random_integer.rand.result}.sh",
      "while [ ! -f /tmp/fss.mounted ]; do /tmp/fssmount_${random_integer.rand.result}.sh; sleep 10; done",     
    ]
  }
}
