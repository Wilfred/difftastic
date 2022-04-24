# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_deploy_invoker" {
 # depends_on  = ["null_resource.sdb_create_standby_shard"]

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
      gdsctl deploy
      EOF
    destination = "${local.gsm_home_full_path}/sdb-deploy.sh"
  }

  #shard deploy config setup
  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/sdb-deploy.sh", 
    "${local.gsm_home_full_path}/sdb-deploy.sh",
    "rm -f ${local.gsm_home_full_path}/sdb-deploy.sh"
    ]
  }

 # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/sdb-deploy.sh"
    ]
  }
}

