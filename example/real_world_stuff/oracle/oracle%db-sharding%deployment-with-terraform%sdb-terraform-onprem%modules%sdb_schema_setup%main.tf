# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_schema_setup" {
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
    content  = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), count.index)], "sharding_method")} == ${local.system_sharding}?${data.template_file.system_sharding_schema_setup_template.rendered}:${local.not_supported_phantom}" 
    destination = "${var.db_home_path}/sharding-schema.sql"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      echo ${var.sdb_deploy_deps_check}
      source ${var.db_home_path}/shardcat.sh
      sqlplus / as sysdba @${var.db_home_path}/sharding-schema.sql
      EOF
    destination = "${var.db_home_path}/sharding-schema-setup.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/sharding-schema-setup.sh",  
    "${var.db_home_path}/sharding-schema-setup.sh"
    ]
  }

  provisioner "file" { 
    content  = "${data.template_file.deps_check_template.rendered}" 
    destination = "${var.db_home_path}/sdb-schema-setup-deps-check.sh"
  }

  provisioner "file" {
    when    = "destroy"
    content  = <<-EOF
      #! /bin/bash
      source ${var.db_home_path}/shardcat.sh
      rm -f ${var.db_home_path}/sharding-schema.sql  
      EOF
    destination = "${var.db_home_path}/sharding-schema-teardown.sh"
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "chmod 700 ${var.db_home_path}/sharding-schema-teardown.sh",  
    "${var.db_home_path}/sharding-schema-teardown.sh",
    "rm -f ${var.db_home_path}/sharding-schema-teardown.sh",
    "rm -f ${var.db_home_path}/sdb-schema-setup-deps-check.sh"
    ]
   }
}

