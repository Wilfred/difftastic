# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

  resource "null_resource" "sdb_create_shard" {
  # depends_on  = ["null_resource.sdb_add_standby_shard_group"]
  count = "${var.setup_mode == "new_install" ? length(var.shards) : 0}"

  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shard_directors[element(keys(var.shard_directors), 0)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

  # copying dbparamfile
  provisioner "file" {
    source = "${var.use_dbparamfile != "false" ? "${lookup(var.shards[element(keys(var.shards), count.index)], "dbparamfile")}" : "/etc/hosts"}"
    destination = "${local.gsm_home_full_path}/dbparamfile-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}"
  }

  # copying dbtemplatefile
  provisioner "file" {
    source = "${var.use_dbtemplatefile != "false" ? "${lookup(var.shards[element(keys(var.shards), count.index)], "dbtemplatefile")}" : "/etc/hosts"}"
    destination = "${local.gsm_home_full_path}/dbtemplatefile-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.dbt"
  }
  
  # copying netparamfile
  provisioner "file" {
    source = "${var.use_netparamfile != "false" ? "${lookup(var.shards[element(keys(var.shards), count.index)], "netparamfile")}" : "/etc/hosts"}"
    destination = "${local.gsm_home_full_path}/netparamfile-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.rsp"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash 
      echo "#! /bin/bash 
      source ${var.oracle_base}/shard-director.sh
      gdsctl connect ${var.sdb_admin_username}/${var.sdb_admin_pass}
      gdsctl add invitednode ${lookup(var.shards[element(keys(var.shards), count.index)], "host")}
      gdsctl create shard -shardgroup ${lookup(var.shards[element(keys(var.shards), count.index)], "shard_group")} -destination ${replace(element(split(".", lookup(var.shards[element(keys(var.shards), count.index)], "host")),0), "-", "_")} -credential oracle_cred -sys_password ${var.sys_pass} ${var.use_dbparamfile != "false" ? "-dbparamfile ${local.gsm_home_full_path}/dbparamfile-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}" : ""} ${var.use_dbtemplatefile != "false" ? "-dbtemplatefile ${local.gsm_home_full_path}/dbtemplatefile-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.dbt" : ""} ${var.use_netparamfile != "false" ? "-netparamfile ${local.gsm_home_full_path}/netparamfile-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.rsp" : ""}
      " >> "${local.gsm_home_full_path}/create-shard-config-setup-for-shards.sh"
      EOF
    destination = "${local.gsm_home_full_path}/create-shard-config-setup-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/create-shard-config-setup-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.sh", 
    "${local.gsm_home_full_path}/create-shard-config-setup-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.sh",
    "rm -f ${local.gsm_home_full_path}/create-shard-config-setup-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.sh"
    ]
  }


    # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/create-shard-config-setup-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.sh",
    "rm -f ${local.gsm_home_full_path}/dbparamfile-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}",
    "rm -f ${local.gsm_home_full_path}/dbtemplatefile-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.dbt",
    "rm -f ${local.gsm_home_full_path}/netparamfile-for-${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}.rsp"
    ]
  }
}