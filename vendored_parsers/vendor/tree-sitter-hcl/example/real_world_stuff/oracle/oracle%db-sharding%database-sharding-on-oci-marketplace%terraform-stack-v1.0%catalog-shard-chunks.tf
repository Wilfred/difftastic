# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_catalog_shard_chunks" {
  depends_on = ["null_resource.sdb_deploy_invoker", "null_resource.sdb_add_shard"]
  count      = "${var.num_of_shards}"

  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${data.oci_core_vnic.catalog_db_node_vnic[0].public_ip_address}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  # copying
  provisioner "file" {
    content     = <<-EOF
        #! /bin/bash
        cd ${var.oracle_base}
        echo "Resource sdb_catalog_shard_chunks creation provisioner."
        EOF
    destination = "${local.db_home_path}/resource-creation-provisioner-chunks-for-${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh"
  }

  provisioner "file" {
    content     = <<-EOF
      alter session set container=${data.oci_database_database.catalog_database[0].pdb_name};
      SPOOL ${var.oracle_base}/chunks_${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}.lst
      select LISTAGG(chunk_number, ',') from gsmadmin_internal.chunk_loc c, gsmadmin_internal.database d where d.database_num = c.database_num and d.name = '${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}';
      SPOOL OFF
      exit
      EOF
    destination = "${local.db_home_path}/chunks_for_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}_config.sql"
  }

  # copying
  provisioner "file" {
    content     = <<-EOF
        #! /bin/bash
        cd ${var.oracle_base}
        echo "${tls_private_key.public_private_key_pair.private_key_pem}" > ${var.oracle_base}/ikey_chunks_${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}
        chmod 600 ikey_chunks_${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}
        sed -n '4,$ p' ${var.oracle_base}/chunks_${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}.lst | tr -d '\n' | tr -d '[:space:]' > ${var.oracle_base}/chunks_${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}
        chmod 600 ${var.oracle_base}/chunks_${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name}
        EOF
    destination = "${local.db_home_path}/ikey_chunks_for_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${local.db_home_path}/shardcat.sh
      sqlplus / as sysdba @${local.db_home_path}/chunks_for_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}_config.sql
      EOF
    destination = "${local.db_home_path}/chunks_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}_setup.sh"
  }

  #Catalog chunk config
  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "chmod 700 ${local.db_home_path}/chunks_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}_setup.sh",
      "${local.db_home_path}/chunks_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}_setup.sh",
      "chmod 700 ${local.db_home_path}/ikey_chunks_for_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh",
      "${local.db_home_path}/ikey_chunks_for_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh",
      "rm -f ${local.db_home_path}/chunks_for_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}_config.sql",
      "rm -f ${local.db_home_path}/chunks_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}_setup.sh",
      "rm -f ${local.db_home_path}/ikey_chunks_for_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh"
    ]
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      cd ${var.oracle_base}
      scp -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null -i ikey_chunks_${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name} ${var.oracle_base}/chunks_${data.oci_database_database.shard_database[count.index].db_unique_name}_${data.oci_database_database.shard_database[count.index].pdb_name} oracle@${oci_core_instance.gsm_vm[0].public_ip}:${local.gsm_home_full_path}/
      EOF
    destination = "${local.db_home_path}/scp_chunks_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh"
  }

  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "chmod 700 ${local.db_home_path}/scp_chunks_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh",
      "${local.db_home_path}/scp_chunks_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh",
      "rm -f ${local.db_home_path}/scp_chunks_${join("", [var.sharded_database_name, var.shard_name_prefix, count.index])}.sh"
    ]
  }
}