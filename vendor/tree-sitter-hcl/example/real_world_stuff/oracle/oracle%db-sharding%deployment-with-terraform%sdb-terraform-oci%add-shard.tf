# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_add_shard" {
  depends_on  = ["null_resource.sdb_add_standby_shard_group"]
  count = "${length(var.shards)}"

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
      gdsctl add cdb -connect ${lookup(data.oci_database_database.shard_database[count.index].connection_strings[0],"cdb_default")} -pwd ${var.gsmrootuser_pass}
      gdsctl add invitednode ${oci_database_db_system.shard_db[count.index].hostname}.${oci_database_db_system.shard_db[count.index].domain}
      gdsctl add shard -cdb ${data.oci_database_database.shard_database[count.index].db_unique_name} -shardgroup ${lookup(var.shards[element(keys(var.shards), count.index)], "shard_group")} -connect ${oci_database_db_system.shard_db[count.index].hostname}.${oci_database_db_system.shard_db[count.index].domain}:${oci_database_db_system.shard_db[count.index].listener_port}/${data.oci_database_database.shard_database[count.index].pdb_name}.${oci_database_db_system.shard_db[count.index].domain} -pwd ${var.gsmuser_pass}
      EOF
    destination = "${local.gsm_home_full_path}/add-shard-config-setup-for-${lookup(var.shards[element(keys(var.shards), count.index)], "db_name")}.sh"
  }

  #shard director config setup
  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/add-shard-config-setup-for-${lookup(var.shards[element(keys(var.shards), count.index)], "db_name")}.sh", 
    "${local.gsm_home_full_path}/add-shard-config-setup-for-${lookup(var.shards[element(keys(var.shards), count.index)], "db_name")}.sh",
    "rm -f ${local.gsm_home_full_path}/add-shard-config-setup-for-${lookup(var.shards[element(keys(var.shards), count.index)], "db_name")}.sh"
    ]
  }

    # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/add-shard-config-setup-for-${lookup(var.shards[element(keys(var.shards), count.index)], "db_name")}.sh"
    ]
  }
}
