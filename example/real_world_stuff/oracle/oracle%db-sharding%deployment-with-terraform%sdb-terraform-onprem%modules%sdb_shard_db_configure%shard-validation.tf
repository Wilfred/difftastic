# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_validation" {
  # depends_on  = ["null_resource.sdb_add_static_dg_listener"]
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
    content  = "${data.template_file.shard_validation_template.rendered}" 
    destination = "${var.db_home_path}/shard-validation.sql"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      source ${var.db_home_path}/shard.sh
      sqlplus / as sysdba @${var.db_home_path}/shard-validation.sql
      EOF
    destination = "${var.db_home_path}/shard-validation.sh"
  }

  #Shard validation 
  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/shard-validation.sh",  
    "${var.db_home_path}/shard-validation.sh",
    "rm -f ${var.db_home_path}/shard-validation.sh",
    "rm -f ${var.db_home_path}/shard-validation.sql"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${var.db_home_path}/shard-validation.sh",
    "rm -f ${var.db_home_path}/shard-validation.sql"
    ]
   }

}