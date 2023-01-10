# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_env_configure" {
  depends_on = ["null_resource.sdb_shard_cloud_init"]
  count      = var.num_of_shards

  #creates ssh connection 
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${data.oci_core_vnic.shard_db_node_vnic[count.index].public_ip_address}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  # copying
  provisioner "file" {

    content     = <<-EOF
        #! /bin/bash
        export ORACLE_SID="${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}"
        export ORACLE_BASE="${var.oracle_base}"
        export ORACLE_HOME="${local.db_home_path}"
        export LD_LIBRARY_PATH=$ORACLE_HOME/lib
        export PATH=$PATH:$ORACLE_HOME/bin
        export TNS_ADMIN=$ORACLE_HOME/network/admin  
        EOF
    destination = "${local.db_home_path}/shard.sh"
  }
}
