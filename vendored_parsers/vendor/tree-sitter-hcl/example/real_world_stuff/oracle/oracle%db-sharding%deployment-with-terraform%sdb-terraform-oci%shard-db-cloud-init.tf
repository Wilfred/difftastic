# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_cloud_init" {
  depends_on  = ["oci_database_db_system.shard_db"]
  count = "${length(var.shards)}"

  connection {
    type = "ssh"
    user = "${var.opc_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${oci_database_db_system.shard_db[count.index].hostname}.${oci_database_db_system.shard_db[count.index].domain}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }
  
  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      sudo usermod --password $(echo ${var.sudo_pass} | openssl passwd -1 -stdin) ${var.os_user}
      sudo cp ~/.ssh/authorized_keys /home/${var.os_user}/.ssh/authorized_keys
      EOF
      destination = "~/shard-cloud-sdb-init-starter.sh"
  }

  provisioner "remote-exec" {
    inline = [ 
    "chmod +x ~/shard-cloud-sdb-init-starter.sh",
    "~/shard-cloud-sdb-init-starter.sh > shard-cloud-sdb-init-starter.log",
    "rm -f ~/shard-cloud-sdb-init-starter.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ~/shard-cloud-sdb-init-starter.sh"
    ]
   }
}
