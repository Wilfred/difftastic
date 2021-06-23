# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_enable_sys_dg" {
  # depends_on  = ["null_resource.sdb_shard_db_configure"]
  count = "${var.setup_mode == "new_install" ? 0 : length(var.shards)}"

  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shards[element(keys(var.shards), count.index)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

  provisioner "file" {
    content  = <<-EOF
    #!/bin/bash
    source ${var.db_home_path}/shard.sh 
    cd ${var.db_home_path}/dbs/
    mv orapw${lookup(var.shards[element(keys(var.shards), count.index)], "sid")} orapw${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.bak
    echo ${var.sys_pass} | orapwd file=orapw${lookup(var.shards[element(keys(var.shards), count.index)], "sid")} password=${var.sys_pass} sysdg=y
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