# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_catalog_standby_cloud_init" {
  depends_on = ["oci_database_data_guard_association.catalog_data_guard_association"]
  count = "${length(var.shard_catalogs) * (length(var.shard_groups) - 1)}"

  connection {
    type = "ssh"
    user = "${var.opc_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${var.standby_catalog_name_prefix}${count.index}.${lookup(data.oci_core_subnet.shardgroup_subnet[floor(count.index/length(var.shard_catalogs)) + 1],"subnet_domain_name")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }
  
  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      sudo usermod --password $(echo ${var.sudo_pass} | openssl passwd -1 -stdin) ${var.os_user}
      sudo cp ~/.ssh/authorized_keys /home/${var.os_user}/.ssh/authorized_keys
      EOF
      destination = "~/shard-cat-standby-cloud-sdb-init-starter.sh"
  }

  provisioner "remote-exec" {
    inline = [ 
    "chmod +x ~/shard-cat-standby-cloud-sdb-init-starter.sh",
    "~/shard-cat-standby-cloud-sdb-init-starter.sh > shard-cat-standby-cloud-sdb-init-starter.log",
    "rm -f ~/shard-cat-standby-cloud-sdb-init-starter.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ~/shard-cat-standby-cloud-sdb-init-starter.sh"
    ]
   }
}