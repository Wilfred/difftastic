# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
  
  resource "null_resource" "sdb_add_standby_shard" {
  # depends_on  = ["null_resource.sdb_add_shard"]
  count = "${var.setup_mode == "new_install" ? 0 : length(var.standby_shards)}"

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
      source ${var.oracle_base}/shard-director.sh
      gdsctl connect ${var.sdb_admin_username}/${var.sdb_admin_pass}
      gdsctl add invitednode ${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "host")}
      gdsctl add shard -shardgroup ${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "shard_group")} -connect ${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "host")}:${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "port")}/${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "globalDBName")} -pwd ${var.gsmuser_pass}
      EOF
    destination = "${local.gsm_home_full_path}/add-shard-config-setup-for-${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "sid")}.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/add-shard-config-setup-for-${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "sid")}.sh", 
    "${local.gsm_home_full_path}/add-shard-config-setup-for-${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "sid")}.sh",
    "rm -f ${local.gsm_home_full_path}/add-shard-config-setup-for-${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "sid")}.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/add-shard-config-setup-for-${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "sid")}.sh"
    ]
  }
}