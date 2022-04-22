/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "random_integer" "rand" {
  min = 1000000000
  max = 9999999999
}

locals {
        enable_rsync       = "${length(var.availability_domain) >= "2" ? 1 : 0}"
}


# Enable rsync
resource "null_resource" "enable_rsync" {
  depends_on  = ["oci_core_instance.compute",
                "oci_file_storage_export.fss_exp"]
  count       = "${local.enable_rsync ? var.compute_instance_count : 0}"
  
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
    
    content      = "${data.template_file.rsync.rendered}"
    destination   = "/tmp/rsync_${random_integer.rand.result}.sh"
  }

  provisioner "local-exec" {
    command = "sleep 120" # Wait for cloud-init to complete
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
      "chmod +x  /tmp/rsync_${random_integer.rand.result}.sh",
      "while [ ! -f /tmp/rsync.done ]; do /tmp/rsync_${random_integer.rand.result}.sh; sleep 10; done",     
    ]
  }
}
