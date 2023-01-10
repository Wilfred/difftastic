# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_add_standby_shard" {
  depends_on  = ["null_resource.sdb_add_standby_shard_group"]
  count = "${length(var.shards) * (length(var.shard_groups) - 1)}"

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
      gdsctl add cdb -connect ${lookup(data.oci_database_database.stdby_shard_database[count.index].connection_strings[0],"cdb_default")} -pwd ${var.gsmrootuser_pass}
      gdsctl add invitednode ${var.standby_shard_name_prefix}${count.index}.${lookup(data.oci_core_subnet.shardgroup_subnet[floor(count.index/length(var.shards)) + 1],"subnet_domain_name")}
      gdsctl add shard -cdb ${data.oci_database_database.stdby_shard_database[count.index].db_unique_name} -shardgroup ${lookup(var.shard_groups[element(keys(var.shard_groups), floor(count.index/length(var.shards)) + 1)], "name")} -connect ${var.standby_shard_name_prefix}${count.index}.${lookup(data.oci_core_subnet.shardgroup_subnet[floor(count.index/length(var.shards)) + 1],"subnet_domain_name")}:${oci_database_db_system.shard_db[count.index%length(var.shards)].listener_port}/${data.oci_database_database.shard_database[count.index%length(var.shards)].pdb_name}.${lookup(data.oci_core_subnet.shardgroup_subnet[floor(count.index/length(var.shards)) + 1],"subnet_domain_name")} -pwd ${var.gsmuser_pass}
      EOF
    destination = "${local.gsm_home_full_path}/add-standby-shard-${count.index}-config-setup.sh"
  }

  #shard director config setup
  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/add-standby-shard-${count.index}-config-setup.sh", 
    "${local.gsm_home_full_path}/add-standby-shard-${count.index}-config-setup.sh",
    "rm -f ${local.gsm_home_full_path}/add-standby-shard-${count.index}-config-setup.sh"
    ]
  }

    # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/add-standby-shard-${count.index}-config-setup.sh"
    ]
  }
}