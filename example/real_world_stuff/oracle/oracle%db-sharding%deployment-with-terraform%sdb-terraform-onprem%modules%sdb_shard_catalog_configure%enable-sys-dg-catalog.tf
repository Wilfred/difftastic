# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_enable_sys_dg_catalog" {
  count = "${length(var.shard_catalogs)}"

  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), count.index)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

  provisioner "file" {
    content  = <<-EOF
    #!/bin/bash
    source ${var.db_home_path}/shardcat.sh 
    cd ${var.db_home_path}/dbs/
    mv orapw${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), count.index)], "sid")} orapw${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), count.index)], "sid")}.bak
    echo ${var.sys_pass} | orapwd file=orapw${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), count.index)], "sid")} password=${var.sys_pass} sysdg=y
    EOF
    destination = "${var.db_home_path}/enable-sys-dg.sh"
   }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/enable-sys-dg.sh",  
    "${var.db_home_path}/enable-sys-dg.sh",
    "rm -f ${var.db_home_path}/enable-sys-dg.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${var.db_home_path}/enable-sys-dg.sh"
    ]
   }
}