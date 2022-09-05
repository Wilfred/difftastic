# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_add_osuser_credential" {
  depends_on  = ["null_resource.sdb_add_shard_director"]

  #creates ssh connection to gsm host
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
      echo ${var.sdb_shard_catalog_configure_deps_check}  
      source ${var.oracle_base}/shard-director.sh
      ${var.setup_mode == "new_install" ? local.gdsctl_add_osuser_credential : "echo from_existing_dbs"}
      EOF
    destination = "${local.gsm_home_full_path}/add_osuser_credential-config-setup.sh"
  }
  
  #shard director config setup
  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/add_osuser_credential-config-setup.sh",
    "${local.gsm_home_full_path}/add_osuser_credential-config-setup.sh",
    "rm -f ${local.gsm_home_full_path}/add_osuser_credential-config-setup.sh"
    ]
  }


    # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/add_osuser_credential-config-setup.sh"
    ]
  }
}