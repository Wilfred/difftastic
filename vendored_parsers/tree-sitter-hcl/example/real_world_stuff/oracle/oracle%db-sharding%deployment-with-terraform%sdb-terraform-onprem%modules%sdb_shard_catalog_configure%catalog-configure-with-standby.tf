# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_catalog_configure_with_standby" {
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
    content  = "${data.template_file.shard_catalog_config_template.rendered}" 
    destination = "${var.db_home_path}/catalog-config.sql"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      echo ${var.sdb_shard_catalog_create_deps_check}  
      source ${var.db_home_path}/shardcat.sh
      sqlplus / as sysdba @${var.db_home_path}/catalog-config.sql
      EOF
    destination = "${var.db_home_path}/catalog-config-setup.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/catalog-config-setup.sh", 
    "${var.db_home_path}/catalog-config-setup.sh",
    "rm -f ${var.db_home_path}/catalog-config.sql",
    "rm -f ${var.db_home_path}/catalog-config-setup.sh"
    ]
  }

  provisioner "file" { 
    content  = "${data.template_file.shard_db_config_template.rendered}" 
    destination = "${var.db_home_path}/shard-db-config.sql"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      source ${var.db_home_path}/shardcat.sh
      sqlplus / as sysdba @${var.db_home_path}/shard-db-config.sql
      EOF
    destination = "${var.db_home_path}/shard-db-config-setup.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/shard-db-config-setup.sh",  
    "${var.db_home_path}/shard-db-config-setup.sh",
    "rm -f ${var.db_home_path}/shard-db-config.sql",
    "rm -f ${var.db_home_path}/shard-db-config-setup.sh"
    ]
  }

  provisioner "file" { 
    content  = "${data.template_file.shard_catalog_configure_deps_check_template.rendered}" 
    destination = "${var.db_home_path}/shard-catalog-configure-deps-check.sh"
  }


  provisioner "file" {
    when    = "destroy"
    content  = <<-EOF
      #! /bin/bash
      source ${var.db_home_path}/shardcat.sh
      lsnrctl stop
      rm -f ${var.db_home_path}/catalog-config.sql 
      rm -f ${var.db_home_path}/shard-db-config.sql
      rm -f ${var.db_home_path}/shard-db-config-setup.sh
      rm -f ${var.db_home_path}/catalog-config-setup.sh
      EOF
    destination = "${var.db_home_path}/catalog-config-teardown.sh"
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "chmod 700 ${var.db_home_path}/catalog-config-teardown.sh",  
    "${var.db_home_path}/catalog-config-teardown.sh",
    "rm -f ${var.db_home_path}/catalog-config-teardown.sh"
    ]
   }
}