# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_add_static_dg_listener" {
  # depends_on  = ["null_resource.sdb_setup_data_guard"]
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
    echo "SID_LIST_LISTENER =
      (SID_LIST =
        (SID_DESC =
          (GLOBAL_DBNAME = ${lookup(var.shards[element(keys(var.shards), count.index)], "globalDBName")}_DGMGRL)
          (ORACLE_HOME = ${var.db_home_path})
          (SID_NAME = ${lookup(var.shards[element(keys(var.shards), count.index)], "sid")})
        )
      )" >> $TNS_ADMIN/listener.ora

    lsnrctl stop
    lsnrctl start
    EOF
    destination = "${var.db_home_path}/add-static-dg-listener.sh"
   }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/add-static-dg-listener.sh",  
    "${var.db_home_path}/add-static-dg-listener.sh",
    "rm -f ${var.db_home_path}/add-static-dg-listener.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${var.db_home_path}/add-static-dg-listener.sh"
    ]
   }

}