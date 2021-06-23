# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_add_shard_group" {
  count = "${length(var.primary_shard_groups)}"

  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shard_directors[element(keys(var.shard_directors), 0)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      echo ${var.sdb_shard_db_configure_deps_check}
      source ${var.oracle_base}/shard-director.sh
      gdsctl connect ${var.sdb_admin_username}/${var.sdb_admin_pass}
      gdsctl add shardgroup -shardgroup ${lookup(var.primary_shard_groups[element(keys(var.primary_shard_groups), count.index)], "name")} -deploy_as ${lookup(var.primary_shard_groups[element(keys(var.primary_shard_groups), count.index)], "deploy_as")} -region ${lookup(var.primary_shard_groups[element(keys(var.primary_shard_groups), count.index)], "region")}
      EOF
    destination = "${local.gsm_home_full_path}/shard-group-config-setup-for-${lookup(var.primary_shard_groups[element(keys(var.primary_shard_groups), count.index)], "name")}.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/shard-group-config-setup-for-${lookup(var.primary_shard_groups[element(keys(var.primary_shard_groups), count.index)], "name")}.sh", 
    "${local.gsm_home_full_path}/shard-group-config-setup-for-${lookup(var.primary_shard_groups[element(keys(var.primary_shard_groups), count.index)], "name")}.sh",
    "rm -f ${local.gsm_home_full_path}/shard-group-config-setup-for-${lookup(var.primary_shard_groups[element(keys(var.primary_shard_groups), count.index)], "name")}.sh"
    ]
  }

    # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/shard-group-config-setup-for-${lookup(var.primary_shard_groups[element(keys(var.primary_shard_groups), count.index)], "name")}.sh"
    ]
  }
}