# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_db_configure" {
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
    content  = "${data.template_file.shard_db_config_template.rendered}" 
    destination = "${var.db_home_path}/shard-db-config.sql"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      echo ${var.sdb_shard_director_configure_deps_check}
      source ${var.db_home_path}/shard.sh
      sqlplus / as sysdba @${var.db_home_path}/shard-db-config.sql
      EOF
    destination = "${var.db_home_path}/shard-db-config-setup.sh"
  }

  #Shard db config setup
  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/shard-db-config-setup.sh",  
    "${var.db_home_path}/shard-db-config-setup.sh",
    "rm -f ${var.db_home_path}/shard-db-config.sql",
    "rm -f ${var.db_home_path}/shard-db-config-setup.sh"
    ]
  }

  provisioner "file" { 
    content  = "${data.template_file.deps_check_template.rendered}" 
    destination = "${var.db_home_path}/deps-check.sh"
  }


  provisioner "file" {
    when    = "destroy"
    content  = <<-EOF
      #! /bin/bash
      source ${var.db_home_path}/shard.sh
      rm -f ${var.db_home_path}/shard-db-config.sql 
      rm -f ${var.db_home_path}/deps-check.sh,
      rm -f ${var.db_home_path}/shard-db-config-setup.sh
      EOF
    destination = "${var.db_home_path}/shard-db-config-teardown.sh"
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "chmod 700 ${var.db_home_path}/shard-db-config-teardown.sh",  
    "${var.db_home_path}/shard-db-config-teardown.sh",
    "rm -f ${var.db_home_path}/shard-db-config-teardown.sh"
    ]
   }
}

