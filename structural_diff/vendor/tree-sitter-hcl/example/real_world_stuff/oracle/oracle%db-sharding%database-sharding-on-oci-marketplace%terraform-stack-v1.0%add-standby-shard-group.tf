# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_add_standby_shard_group" {
  depends_on = ["null_resource.sdb_add_shard_group"]
  count      = "${(var.num_of_shard_groups - 1)}"

  #creates ssh connection to gsm host
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${oci_core_instance.gsm_vm[0].public_ip}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  # copying
  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      gdsctl add shardgroup -shardgroup ${join("", [var.shardgroup_name_prefix, count.index + 1])} -deploy_as active_standby -region ${replace(var.region, "-", "")}
      EOF
    destination = "${local.gsm_home_full_path}/shard-group-config-setup-for-${join("", [var.shardgroup_name_prefix, count.index + 1])}.sh"
  }

  #shard director config setup
  provisioner "remote-exec" {
    inline = [
      "chmod 700 ${local.gsm_home_full_path}/shard-group-config-setup-for-${join("", [var.shardgroup_name_prefix, count.index + 1])}.sh",
      "${local.gsm_home_full_path}/shard-group-config-setup-for-${join("", [var.shardgroup_name_prefix, count.index + 1])}.sh",
      "rm -f ${local.gsm_home_full_path}/shard-group-config-setup-for-${join("", [var.shardgroup_name_prefix, count.index + 1])}.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "rm -f ${local.gsm_home_full_path}/shard-group-config-setup-for-${join("", [var.shardgroup_name_prefix, count.index + 1])}.sh"
    ]
  }
}