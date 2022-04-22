# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_schagent_register_standby_shard" {
  # depends_on  = ["null_resource.schagent_register_shard"]
  count = "${var.setup_mode == "new_install" ? length(var.standby_shards) : 0}"

  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      source ${var.db_home_path}/shard.sh
      mkdir -p ${var.oracle_base}/oradata
      mkdir -p ${var.oracle_base}/fast_recovery_area
      echo ${var.scheduler_agent_pass} | schagent -registerdatabase ${local.shard_catalog_host} ${local.scheduler_agent_port}
      sleep 10
      nohup schagent -start
      # sleep 10
      schagent -status
      EOF
    destination = "${var.db_home_path}/schagent-register-shard.sh"
  }
 
  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/schagent-register-shard.sh",  
    "${var.db_home_path}/schagent-register-shard.sh",
    "rm -f ${var.db_home_path}/schagent-register-shard.sh"
    ]
  }

  provisioner "file" {
    when    = "destroy"
    content  = <<-EOF
      #! /bin/bash
      source ${var.db_home_path}/shard.sh
      schagent -status
      schagent -stop
      sleep 10
      schagent -status
      EOF
    destination = "${var.db_home_path}/schagent-teardown.sh"
  }

  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "chmod 700 ${var.db_home_path}/schagent-teardown.sh",  
    "${var.db_home_path}/schagent-teardown.sh"
    ]
  }


  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${var.db_home_path}/schagent-register-shard.sh",
    "rm -f ${var.db_home_path}/schagent-teardown.sh"
    ]
   }
}