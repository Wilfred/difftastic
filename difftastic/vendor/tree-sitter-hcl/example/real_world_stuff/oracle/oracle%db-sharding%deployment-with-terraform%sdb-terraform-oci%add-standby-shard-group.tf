# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_add_standby_shard_group" {
  depends_on  = ["null_resource.sdb_add_shard_group"]
  count = "${(length(var.shard_groups) - 1)}"

  #creates ssh connection to gsm host
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${oci_core_instance.gsm_vm[0].private_ip}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

  # copying
  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      gdsctl add shardgroup -shardgroup ${lookup(var.shard_groups[element(keys(var.shard_groups), count.index+1)], "name")} -deploy_as ${lookup(var.shard_groups[element(keys(var.shard_groups), count.index+1)], "deploy_as")} -region ${element(var.gds_regions, count.index+1)}
      EOF
    destination = "${local.gsm_home_full_path}/shard-group-config-setup-for-${lookup(var.shard_groups[element(keys(var.shard_groups), count.index+1)], "name")}.sh"
  }

  #shard director config setup
  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/shard-group-config-setup-for-${lookup(var.shard_groups[element(keys(var.shard_groups), count.index+1)], "name")}.sh", 
    "${local.gsm_home_full_path}/shard-group-config-setup-for-${lookup(var.shard_groups[element(keys(var.shard_groups), count.index+1)], "name")}.sh",
    "rm -f ${local.gsm_home_full_path}/shard-group-config-setup-for-${lookup(var.shard_groups[element(keys(var.shard_groups), count.index+1)], "name")}.sh"
    ]
  }

    # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/shard-group-config-setup-for-${lookup(var.shard_groups[element(keys(var.shard_groups), count.index+1)], "name")}.sh"
    ]
  }
}