# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_catalog_configure" {
  depends_on = ["null_resource.sdb_shard_catalog_cloud_init"]
  count      = var.num_of_shard_catalogs

  #creates ssh connection 
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${data.oci_core_vnic.catalog_db_node_vnic[count.index].public_ip_address}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  # alter system set open_links=${var.num_of_shards * var.num_of_shard_groups} scope=spfile;
  # alter system set open_links_per_instance=${var.num_of_shards * var.num_of_shard_groups} scope=spfile;

  provisioner "file" {
    content     = <<-EOF
      alter system set open_links=255 scope=spfile;
      alter system set open_links_per_instance=255 scope=spfile;
      alter system set db_files=64000 scope=spfile;
      shutdown immediate
      startup
      set echo on
      set termout on
      spool setup_grants_privs.lst
      alter user gsmcatuser account unlock;
      alter user gsmcatuser identified by sd${random_string.gsmcatuser_pass.result};
      spool off
      alter system set local_listener='${oci_database_db_system.catalog_db[count.index].hostname}.${oci_database_db_system.catalog_db[count.index].domain}:${oci_database_db_system.catalog_db[count.index].listener_port}' scope=both;
      alter system register reconnect;
      exit
      EOF
    destination = "${local.db_home_path}/catalog-config.sql"
  }

  # alter system set db_file_name_convert='*','/u02/app/oracle/oradata/' scope=spfile;
  # alter system set log_file_name_convert='*','/u03/app/oracle/redo/' scope=spfile;

  provisioner "file" {
    content     = <<-EOF
      SHUTDOWN IMMEDIATE
      STARTUP MOUNT
      ALTER DATABASE ARCHIVELOG;
      ALTER DATABASE OPEN;
      ARCHIVE LOG LIST;
      alter database flashback on;
      -- ALTER DATABASE FORCE LOGGING;

      alter user gsmuser account unlock;
      alter user gsmuser identified by sd${random_string.gsmuser_pass.result};
      grant debug connect session to gsmuser;

      alter user GSMROOTUSER account unlock;
      alter user GSMROOTUSER identified by sd${random_string.gsmrootuser_pass.result};
      grant sysdg, sysbackup, gsmrootuser_role to gsmrootuser;

      ALTER SYSTEM SET DG_BROKER_START=TRUE scope=both sid='*';

      -- Create DATA_PUMP_DIR (for chunk migration)
      create or replace directory data_pump_dir as '??/oradata';
      select DIRECTORY_PATH from dba_directories where DIRECTORY_NAME='DATA_PUMP_DIR';

      --  PDB ops
      alter session set container=${data.oci_database_database.catalog_database[count.index].pdb_name};
      grant sysdg, sysbackup, gsmuser_role to gsmuser;
      grant read,write on directory DATA_PUMP_DIR to gsmadmin_internal;
      grant read,write on directory DATA_PUMP_DIR to gsmuser;

      set serveroutput on
      execute DBMS_GSM_FIX.validateShard
      exit
      EOF
    destination = "${local.db_home_path}/catalog-db-config.sql"
  }


  # copying
  provisioner "file" {
    content     = <<-EOF
        #! /bin/bash
        export ORACLE_SID="${join("", [var.sharded_database_name, var.catalog_name_prefix, count.index])}"
        export ORACLE_BASE="${var.oracle_base}"
        export ORACLE_HOME="${local.db_home_path}"
        export LD_LIBRARY_PATH=$ORACLE_HOME/lib
        export PATH=$PATH:$ORACLE_HOME/bin
        export TNS_ADMIN=$ORACLE_HOME/network/admin
        EOF
    destination = "${local.db_home_path}/shardcat.sh"
  }

  #   provisioner "file" {
  #   content     = <<-EOF
  #     SPOOL ${var.oracle_base}/pdbguid.lst
  #     select guid from v$pdbs where name='${upper(data.oci_database_database.catalog_database[count.index].pdb_name)}';
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
      #! /bin/bash
      source ${local.db_home_path}/shardcat.sh
      lsnrctl start
      sqlplus / as sysdba @${local.db_home_path}/catalog-config.sql
      sqlplus / as sysdba @${local.db_home_path}/catalog-db-config.sql
      sed 's/SQLNET.ENCRYPTION_TYPES_SERVER=(AES256,AES192,AES128)/SQLNET.ENCRYPTION_TYPES_SERVER=(AES256,AES192,AES128,RC4_256)/' $TNS_ADMIN/sqlnet.ora > $TNS_ADMIN/sqlnet-temp.ora
      mv $TNS_ADMIN/sqlnet-temp.ora $TNS_ADMIN/sqlnet.ora
      EOF
    destination = "${local.db_home_path}/catalog-config-setup.sh"
  }

  #Catalog config
  provisioner "remote-exec" {
    inline = [
      "chmod 700 ${local.db_home_path}/catalog-config-setup.sh",
      "${local.db_home_path}/catalog-config-setup.sh",
      "rm -f ${local.db_home_path}/catalog-config.sql",
      "rm -f ${local.db_home_path}/catalog-db-config.sql",
      "rm -f ${local.db_home_path}/catalog-config-setup.sh"
    ]
  }


  provisioner "file" {
    when        = "destroy"
    content     = <<-EOF
      #! /bin/bash
      source ${local.db_home_path}/shardcat.sh
      lsnrctl stop
      rm -f ${local.db_home_path}/catalog-config.sql
      rm -f ${local.db_home_path}/catalog-db-config.sql
      rm -f ${local.db_home_path}/catalog-config-setup.sh
      EOF
    destination = "${local.db_home_path}/catalog-config-teardown.sh"
  }

  # destroying
  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "chmod 700 ${local.db_home_path}/catalog-config-teardown.sh",
      "${local.db_home_path}/catalog-config-teardown.sh",
      "rm -f ${local.db_home_path}/catalog-config-teardown.sh"
    ]
  }
}
