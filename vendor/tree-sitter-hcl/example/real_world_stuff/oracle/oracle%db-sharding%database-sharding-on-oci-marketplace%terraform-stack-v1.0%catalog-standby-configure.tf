# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_catalog_standby_configure" {
  depends_on = ["null_resource.sdb_catalog_standby_cloud_init"]
  count      = "${var.database_edition == local.ee_xp ? var.num_of_shard_catalogs * (var.num_of_shard_groups - 1) : 0}"
  #creates ssh connection 
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${data.oci_core_vnic.catalog_stby_db_node_vnic[count.index].public_ip_address}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  # copying
  provisioner "file" {
    content     = <<-EOF
        #! /bin/bash
        export ORACLE_BASE="${var.oracle_base}"
        export ORACLE_HOME="${local.db_home_path}"
        export LD_LIBRARY_PATH=$ORACLE_HOME/lib
        export PATH=$PATH:$ORACLE_HOME/bin
        export TNS_ADMIN=$ORACLE_HOME/network/admin
        EOF
    destination = "${local.db_home_path}/shardcat.sh"
  }

  # provisioner "file" {
  #   content     = <<-EOF
  #     SPOOL ${var.oracle_base}/pdbguid.lst
  #     select guid from v$pdbs where name='${upper(data.oci_database_database.catalog_database[0].pdb_name)}';
  #     SPOOL OFF
  #     exit
  #     EOF
  #   destination = "${local.db_home_path}/pdbguid-config.sql"
  # }

  # provisioner "file" {
  #   content     = <<-EOF
  #     #! /bin/bash
  #     source ${local.db_home_path}/shardcat.sh
  #     sqlplus / as sysdba @${local.db_home_path}/pdbguid-config.sql
  #     cd ${var.oracle_base}
  #     sed '4q;d' pdbguid.lst > pdbguid
  #     chmod 600 pdbguid
  #     echo "alter system set db_file_name_convert='*','/u02/app/oracle/oradata/${data.oci_database_database.catalog_database[count.index].db_unique_name}/${upper(data.oci_database_database.catalog_database[count.index].db_unique_name)}/$(head -n 1 pdbguid | tr -d '[:space:]')/datafile/' scope=spfile;" >> ${local.db_home_path}/convert-params.sql
  #     echo "alter system set log_file_name_convert='*','/u03/app/oracle/redo/${upper(data.oci_database_database.catalog_database[count.index].db_unique_name)}/onlinelog/' scope=spfile;" >> ${local.db_home_path}/convert-params.sql
  #     echo "exit" >> ${local.db_home_path}/convert-params.sql    
  #     sqlplus / as sysdba @${local.db_home_path}/convert-params.sql
  #     EOF
  #   destination = "${local.db_home_path}/convertparams-pdbguid-interpolated.sh"
  # }

  # provisioner "remote-exec" {
  #   inline = [
  #     "chmod 700 ${local.db_home_path}/convertparams-pdbguid-interpolated.sh",
  #     "${local.db_home_path}/convertparams-pdbguid-interpolated.sh"
  #   ]
  # }

  provisioner "file" {
    content     = <<-EOF
      alter system set db_files=64000 scope=spfile;
      shutdown immediate
      startup
      ALTER PLUGGABLE DATABASE ${var.pdb_name} OPEN READ ONLY;
      exit
      EOF
    destination = "${local.db_home_path}/shard-standby-config.sql"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${local.db_home_path}/shardcat.sh
      sqlplus / as sysdba @${local.db_home_path}/shard-standby-config.sql
      sed 's/SQLNET.ENCRYPTION_TYPES_SERVER=(AES256,AES192,AES128)/SQLNET.ENCRYPTION_TYPES_SERVER=(AES256,AES192,AES128,RC4_256)/' $TNS_ADMIN/sqlnet.ora > $TNS_ADMIN/sqlnet-temp.ora
      mv $TNS_ADMIN/sqlnet-temp.ora $TNS_ADMIN/sqlnet.ora
      EOF
    destination = "~/shard-standby-configure.sh"
  }

  provisioner "remote-exec" {
    inline = [
      "chmod +x ~/shard-standby-configure.sh",
      "~/shard-standby-configure.sh > shard-standby-configure.log",
      "rm -f ~/shard-standby-configure.sh"
    ]
  }
}