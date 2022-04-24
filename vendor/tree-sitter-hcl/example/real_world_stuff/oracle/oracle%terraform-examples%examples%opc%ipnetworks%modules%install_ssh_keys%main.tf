// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable "trigger" {}
variable "public_ip" {}
variable "ssh_private_key" {}
variable "ssh_public_key" {}
variable "ssh_user" {}

// Install the private ssh key used to access the other hosts
resource "null_resource" "install_ssh_keys" {
  triggers = {
    compute_instance = "${var.trigger}"
  }

  connection {
    type        = "ssh"
    host        = "${var.public_ip}"
    private_key = "${file(var.ssh_private_key)}"
    user        = "${var.ssh_user}"
    timeout     = "5m"
  }

  provisioner "file" {
    source      = "${var.ssh_private_key}"
    destination = "./.ssh/id_rsa"
  }

  provisioner "remote-exec" {
    inline = [
      "chmod go-r ~/.ssh/id_rsa",
    ]
  }
}
