# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_db_convert_params" {
  depends_on = ["null_resource.sdb_shard_standby_cloud_init"]
  count      = "${(var.num_of_shard_groups > 1) ? var.num_of_shards : 0}"

  #creates ssh connection 
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${data.oci_core_vnic.shard_db_node_vnic[count.index].public_ip_address}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content     = <<-EOF
      SPOOL ${var.oracle_base}/pdbguid.lst
      select guid from v$pdbs where name='${upper(data.oci_database_database.shard_database[count.index].pdb_name)}';
      SPOOL OFF
      exit
      EOF
    destination = "${local.db_home_path}/pdbguid-config.sql"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${local.db_home_path}/shard.sh
      sqlplus / as sysdba @${local.db_home_path}/pdbguid-config.sql
      cd ${var.oracle_base}
      sed '4q;d' pdbguid.lst > pdbguid
      chmod 600 pdbguid
      echo "alter system set db_file_name_convert='*','/u02/app/oracle/oradata/${data.oci_database_database.shard_database[count.index].db_unique_name}/${upper(data.oci_database_database.shard_database[count.index].db_unique_name)}/$(head -n 1 pdbguid | tr -d '[:space:]')/datafile/' scope=spfile;" >> ${local.db_home_path}/convert-params.sql
      echo "alter system set log_file_name_convert='*','/u03/app/oracle/redo/${upper(data.oci_database_database.shard_database[count.index].db_unique_name)}/onlinelog/' scope=spfile;" >> ${local.db_home_path}/convert-params.sql
      echo "shutdown immediate" >> ${local.db_home_path}/convert-params.sql
      echo "startup" >> ${local.db_home_path}/convert-params.sql
      echo "exit" >> ${local.db_home_path}/convert-params.sql    
      sqlplus / as sysdba @${local.db_home_path}/convert-params.sql
      EOF
    destination = "${local.db_home_path}/convertparams-pdbguid-interpolated.sh"
  }

  provisioner "remote-exec" {
    inline = [
      "chmod 700 ${local.db_home_path}/convertparams-pdbguid-interpolated.sh",
      "${local.db_home_path}/convertparams-pdbguid-interpolated.sh"
    ]
  }
  # provisioner "remote-exec" {
  #   when = "destroy"
  #   inline = [
  #     "chmod 700 ${local.db_home_path}/shard-dg-fsfo-config-setup.sh",
  #     "${local.db_home_path}/shard-dg-fsfo-config-setup.sh",
  #     "rm -f ${local.db_home_path}/shard-dg-fsfo-config-setup.sh"
  #   ]
  # }
}