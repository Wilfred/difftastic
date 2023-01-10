# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

  resource "null_resource" "sdb_demo_monitor" {
   count = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "sharding_method") == local.system_sharding ? 1 : 0}"

  #creates ssh connection
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      cd ${var.db_home_path}/${local.sdb_demo_dir}
      source ${var.db_home_path}/shardcat.sh
      chmod 700 ${var.db_home_path}/${local.sdb_demo_dir}/run.sh
      cd ${var.db_home_path}/${local.sdb_demo_dir}
      nohup ./run.sh monitor >> nohup-run-monitor.out 2>&1 &
      sleep 6
      EOF
    destination = "${var.db_home_path}/run-monitor.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/run-monitor.sh",
    "${var.db_home_path}/run-monitor.sh"
    ]
   }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "kill $(ps aux | grep '[o]racle.monitor.Main' | awk '{print $2}')",
    "rm -f ${var.db_home_path}/run-monitor.sh",
    "rm -rf ${var.db_home_path}/__MACOSX"
    ]
   }
  }