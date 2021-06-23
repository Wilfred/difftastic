# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_add_shard" {
  depends_on = ["null_resource.sdb_add_standby_shard_group", "null_resource.sdb_add_shard_group", "null_resource.sdb_shard_db_configure", "null_resource.sdb_shard_data_move_consolidator_config"]
  count      = "${var.num_of_shards}"

  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${oci_core_instance.gsm_vm[0].public_ip}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      cd ${local.gsm_home_full_path}
      gdsctl add cdb -connect ${data.oci_core_vnic.shard_db_node_vnic[count.index].public_ip_address}:${oci_database_db_system.shard_db[count.index].listener_port}/${data.oci_database_database.shard_database[count.index].db_unique_name}.${oci_database_db_system.shard_db[count.index].domain} -pwd sd${random_string.gsmrootuser_pass.result}
      gdsctl add invitednode ${data.oci_core_vnic.shard_db_node_vnic[count.index].public_ip_address}
      gdsctl add invitednode ${data.oci_core_vnic.shard_db_node_vnic[count.index].private_ip_address}
      gdsctl add shard -cdb ${data.oci_database_database.shard_database[count.index].db_unique_name} -shardgroup ${join("", [var.shardgroup_name_prefix, floor(count.index / var.num_of_shards)])} -connect ${data.oci_core_vnic.shard_db_node_vnic[count.index].public_ip_address}:${oci_database_db_system.shard_db[count.index].listener_port}/${data.oci_database_database.shard_database[count.index].pdb_name}.${oci_database_db_system.shard_db[count.index].domain} -pwd sd${random_string.gsmuser_pass.result}
      echo "${tls_private_key.public_private_key_pair.private_key_pem}" > ikey-fsfo
      chmod 600 ikey-fsfo
      EOF
    destination = "${local.gsm_home_full_path}/add-shard-config-setup-for-${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh"
  }

  provisioner "remote-exec" {
    inline = [
      "chmod 700 ${local.gsm_home_full_path}/add-shard-config-setup-for-${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh",
      "${local.gsm_home_full_path}/add-shard-config-setup-for-${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh",
      "rm -f ${local.gsm_home_full_path}/add-shard-config-setup-for-${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh"
    ]
  }

  provisioner "file" {
    content     = <<-EOF
      echo "chunk move starting for ${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}"
      ${count.index > 0 ? join("", [join("_", [join("", ["gdsctl move chunk -chunk $(head -n 1 chunks_${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}) -source ", data.oci_database_database.shard_database[count.index].db_unique_name]), data.oci_database_database.shard_database[count.index].pdb_name]), " -target ${data.oci_database_database.shard_database[0].db_unique_name}_${data.oci_database_database.shard_database[0].pdb_name}"]) : "echo move chunk will not be executed for shard : ${data.oci_database_database.shard_database[count.index].db_unique_name} as it is the last remaining shard. The shard will be force removed now."}    
      sleep 240
      echo "chunk move with wait completed for ${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}"
      ${count.index > 0 ? join("", [join("_", [join("", ["gdsctl remove shard -shard ", data.oci_database_database.shard_database[count.index].db_unique_name]), data.oci_database_database.shard_database[count.index].pdb_name]), ""]) : join("", [join("_", [join("", ["gdsctl remove shard -force -shard ", data.oci_database_database.shard_database[count.index].db_unique_name]), data.oci_database_database.shard_database[count.index].pdb_name]), ""])}
      #sleep 120
      echo "Remove Shard with wait completed for ${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}"
      gdsctl remove invitednode ${data.oci_core_vnic.shard_db_node_vnic[count.index].public_ip_address}
      gdsctl remove invitednode ${data.oci_core_vnic.shard_db_node_vnic[count.index].private_ip_address}
      #sleep 120
      echo "Remove Invited node with wait completed for ${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}"
      ${count.index > 0 ? join("", ["gdsctl remove cdb -cdb ", data.oci_database_database.shard_database[count.index].db_unique_name]) : join("", ["gdsctl remove cdb -force -cdb ", data.oci_database_database.shard_database[count.index].db_unique_name])}
      #sleep 120
      echo "Remove CDB with wait completed for ${data.oci_database_database.shard_database[count.index].db_unique_name}"
      EOF
    destination = "${local.gsm_home_full_path}/remove-shard-config-for-${var.shard_name_prefix}${count.index}.tfconfig"
  }

  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "mv ${local.gsm_home_full_path}/remove-shard-config-for-${var.shard_name_prefix}${count.index}.tfconfig ${local.gsm_home_full_path}/tfconfig-remove-shard-config-for-${var.shard_name_prefix}${count.index}.tfconfig",
      "echo Checking whether FSFO is enabled on shard${count.index}",
      "[ -e ${local.gsm_home_full_path}/shard-dg-fsfo-config-disable-${count.index}.sh ] && chmod 700 ${local.gsm_home_full_path}/shard-dg-fsfo-config-disable-${count.index}.sh || echo no-op",
      "[ -e ${local.gsm_home_full_path}/shard-dg-fsfo-config-disable-${count.index}.sh ] && ${local.gsm_home_full_path}/shard-dg-fsfo-config-disable-${count.index}.sh || echo no-op",
      "[ -e ${local.gsm_home_full_path}/shard-dg-fsfo-config-disable-${count.index}.sh ] && rm -f ${local.gsm_home_full_path}/shard-dg-fsfo-config-disable-${count.index}.sh || echo Primary only setup. Hence fsfo cannot be disabled.",
      "echo FSFO was disabled on shard${count.index} if it was enabled."
    ]
  }
}