# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_setup_data_guard_catalog" {
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
    source = "${path.module}/scripts/setup-adg.sh"
    destination = "${var.db_home_path}/setup-adg.sh"
  }
  provisioner "file" {
   content  = <<-EOF
      #! /bin/bash
      source ${var.db_home_path}/shardcat.sh
      cd ${var.db_home_path}
      ./setup-adg.sh -l sys/${var.sys_pass}@${lookup(var.shard_catalog_standbys[element(keys(var.shard_catalog_standbys), count.index)], "primary_host")}:${lookup(var.shard_catalog_standbys[element(keys(var.shard_catalog_standbys), count.index)], "primary_port")}/${lookup(var.shard_catalog_standbys[element(keys(var.shard_catalog_standbys), count.index)], "primary_sid")} -d ${lookup(var.shard_catalog_standbys[element(keys(var.shard_catalog_standbys), count.index)], "sid")}
      EOF
   destination = "${var.db_home_path}/invoke-adg-setup.sh"
  }

    provisioner "remote-exec" {
        inline = [
        "chmod 700 ${var.db_home_path}/invoke-adg-setup.sh",
        "chmod 700 ${var.db_home_path}/setup-adg.sh",
        "${var.db_home_path}/invoke-adg-setup.sh",
        "rm -f ${var.db_home_path}/invoke-adg-setup.sh"
        ]
    }

    # destroying
    provisioner "remote-exec" {
        when    = "destroy"
        inline = [
        "rm -f ${var.db_home_path}/setup-adg.sh",
        "rm -f ${var.db_home_path}/invoke-adg-setup.sh"
        ]
    }
}