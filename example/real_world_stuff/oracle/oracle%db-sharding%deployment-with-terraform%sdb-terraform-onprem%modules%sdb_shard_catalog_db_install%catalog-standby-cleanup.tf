# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_catalog_standby_cleanup" {
  count = "${length(var.shard_catalog_standbys)}"

  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shard_catalog_standbys[element(keys(var.shard_catalog_standbys), count.index)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

  provisioner "file" { 
    content  = "catalog-stdby-cleanup-zero-byte-file" 
    destination = "${var.db_home_path}/catalog-stdby-cleanup.lock"
  }

  provisioner "remote-exec" {
    inline = [
    "rm -f ${var.db_home_path}/catalog-stdby-cleanup.lock"
    ]
  }


  #Destroying
  provisioner "remote-exec" {
    when   = "destroy"
    inline = [
    "rm -f ${var.db_home_path}/catalog-stdby-cleanup.lock",
    "rm -f ${var.oracle_base}/*.log",
    "rm -rf ${var.oracle_base}/admin",
    "rm -rf ${var.oracle_base}/oradata",
    "rm -rf ${var.oracle_base}/audit",
    "rm -rf ${var.oracle_base}/diag",
    "rm -rf ${var.ora_inventory_location}",
    "echo ${var.sudo_pass} | sudo -S rm -rf /etc/oraInst.loc",
    "echo ${var.sudo_pass} | sudo -S rm -rf /etc/oratab", 
    "echo ${var.sudo_pass} | sudo -S rm -rf /opt/ORCLfmap",
    "rm -rf ${var.db_home_path}"
    ]
   }
}