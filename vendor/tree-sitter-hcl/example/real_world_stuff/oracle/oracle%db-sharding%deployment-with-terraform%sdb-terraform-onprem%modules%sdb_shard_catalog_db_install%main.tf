# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_shard_catalog_db_install" {

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

  provisioner "remote-exec" {
    inline = [
    "mkdir -p ${var.oracle_base}",
    "echo ${var.sdb_shard_db_install_deps_check}"
    ]
  }

 # copying the db binary
  provisioner "file" {
    source = "${var.db_zip_location}/${var.db_zip_name}.zip"
    destination = "${var.oracle_base}/${var.db_zip_name}.zip"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      rm -rf ${var.db_home_path}
      chmod 700 ${var.oracle_base}/${var.db_zip_name}.zip
      unzip -o ${var.oracle_base}/${var.db_zip_name}.zip -d ${var.db_home_path}
      EOF
    destination = "${var.oracle_base}/unzip-db.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.oracle_base}/unzip-db.sh",
    "${var.oracle_base}/unzip-db.sh"
    ]
  }

  # copying env
  provisioner "file" {
    
    content  = <<-EOF
        #! /bin/bash
        export ORACLE_SID="${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), count.index)], "sid")}"
        export ORACLE_BASE="${var.oracle_base}"
        export ORACLE_HOME="${var.db_home_path}"
        export LD_LIBRARY_PATH=$ORACLE_HOME/lib
        export PATH=$PATH:$ORACLE_HOME/bin
        export TNS_ADMIN=$ORACLE_HOME/network/admin  
        EOF
    destination = "${var.db_home_path}/shardcat.sh"
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${var.oracle_base}/unzip-db.sh",
    "rm -f ${var.oracle_base}/${var.db_zip_name}.zip",
    "rm -rf ${var.db_home_path}"
    ]
  }
}