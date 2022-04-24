# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

  resource "null_resource" "sdb_create_standby_shard_exec" {
  count = "${var.setup_mode == "new_install" ? 1 : 0}"

  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shard_directors[element(keys(var.shard_directors), 0)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/create-standby-shard-config-setup-for-shards.sh", 
    "${local.gsm_home_full_path}/create-standby-shard-config-setup-for-shards.sh",
    "rm -f ${local.gsm_home_full_path}/create-standby-shard-config-setup-for-shards.sh"
    ]
  }

 # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/create-standby-shard-config-setup-for-shards.sh"
    ]
  }
}