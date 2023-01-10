# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_demo_monitor" {
  depends_on = ["null_resource.sdb_demo_setup"]
  count = "${var.demo_setup=="false"?0:var.sharding_method==local.system_sharding?1:0}"

  #creates ssh connection
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${oci_database_db_system.catalog_db[0].hostname}.${oci_database_db_system.catalog_db[0].domain}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      cd ${local.db_home_path}/${local.sdb_demo_dir}
      source ${local.db_home_path}/shardcat.sh
      chmod 700 ${local.db_home_path}/${local.sdb_demo_dir}/run.sh
      cd ${local.db_home_path}/${local.sdb_demo_dir}
      nohup ./run.sh monitor >> nohup-run-monitor.out 2>&1 &
      sleep 6
      EOF
    destination = "${local.db_home_path}/run-monitor.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.db_home_path}/run-monitor.sh",
    "${local.db_home_path}/run-monitor.sh",
    "echo !!! SDB deployment completed !!!"
    ]
   }

     # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "kill $(ps aux | grep '[o]racle.monitor.Main' | awk '{print $2}')",
    "rm -f ${local.db_home_path}/run-monitor.sh",
    "rm -rf ${local.db_home_path}/__MACOSX"
    ]
   }
 }
