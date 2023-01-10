# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_add_standby_shard" {
  depends_on = ["null_resource.sdb_add_standby_shard_group", "null_resource.sdb_shard_standby_configure"]
  count      = "${var.num_of_shards * (var.num_of_shard_groups - 1)}"

  #creates ssh connection to gsm host
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${oci_core_instance.gsm_vm[0].public_ip}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  # copying
  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      gdsctl add cdb -connect ${data.oci_core_vnic.shard_stby_db_node_vnic[count.index].public_ip_address}:${oci_database_db_system.shard_db[count.index % var.num_of_shards].listener_port}/${data.oci_database_database.stdby_shard_database[count.index].db_unique_name}.${data.oci_core_subnet.shardgroup_subnet.subnet_domain_name} -pwd sd${random_string.gsmrootuser_pass.result}
      gdsctl add invitednode ${data.oci_core_vnic.shard_stby_db_node_vnic[count.index].public_ip_address}
      gdsctl add invitednode ${data.oci_core_vnic.shard_stby_db_node_vnic[count.index].private_ip_address}
      gdsctl add shard -cdb ${data.oci_database_database.stdby_shard_database[count.index].db_unique_name} -shardgroup ${join("", [var.shardgroup_name_prefix, floor(count.index / var.num_of_shards) + 1])} -connect ${data.oci_core_vnic.shard_stby_db_node_vnic[count.index].public_ip_address}:${oci_database_db_system.shard_db[count.index % var.num_of_shards].listener_port}/${data.oci_database_database.shard_database[count.index % var.num_of_shards].pdb_name}.${data.oci_core_subnet.shardgroup_subnet.subnet_domain_name} -pwd sd${random_string.gsmuser_pass.result}
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
    when = "destroy"
    inline = [
      "rm -f ${local.gsm_home_full_path}/add-standby-shard-${count.index}-config-setup.sh"
    ]
  }
}