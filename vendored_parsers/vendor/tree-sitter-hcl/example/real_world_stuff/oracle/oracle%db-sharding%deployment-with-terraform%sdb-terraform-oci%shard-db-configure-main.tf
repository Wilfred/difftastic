# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_db_configure" {
  depends_on = ["null_resource.sdb_shard_env_configure"]
  count = "${length(var.shards)}"

  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${oci_database_db_system.shard_db[count.index].hostname}.${oci_database_db_system.shard_db[count.index].domain}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

  provisioner "file" {
    content  = <<-EOF
      ALTER SYSTEM SET EVENT='10798 trace name context forever, level 7' SCOPE=spfile;
      SHUTDOWN IMMEDIATE
      STARTUP MOUNT
      ALTER DATABASE ARCHIVELOG;
      ALTER DATABASE OPEN;
      ARCHIVE LOG LIST;
      alter database flashback on;
      ALTER DATABASE FORCE LOGGING;

      alter user gsmuser account unlock;
      alter user gsmuser identified by ${var.gsmuser_pass};
      grant debug connect session to gsmuser;

      alter user GSMROOTUSER account unlock;
      alter user GSMROOTUSER identified by ${var.gsmrootuser_pass};
      grant sysdg, sysbackup, gsmrootuser_role to gsmrootuser;

      ALTER SYSTEM SET DG_BROKER_START=TRUE scope=both sid='*';

      -- Create DATA_PUMP_DIR (for chunk migration)
      create or replace directory data_pump_dir as '??/oradata';
      select DIRECTORY_PATH from dba_directories where DIRECTORY_NAME='DATA_PUMP_DIR';

      --  PDB ops
      alter session set container=${data.oci_database_database.shard_database[count.index].pdb_name};
      grant sysdg, sysbackup, gsmuser_role to gsmuser;
      grant read,write on directory DATA_PUMP_DIR to gsmadmin_internal;
      grant read,write on directory DATA_PUMP_DIR to gsmuser;

      set serveroutput on
      execute DBMS_GSM_FIX.validateShard
     -- alter system set events 'immediate trace name GWM_TRACE level 7';
      exit
      EOF
    destination = "${local.db_home_path}/shard-db-config.sql"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      source ${local.db_home_path}/shard.sh
      sqlplus / as sysdba @${local.db_home_path}/shard-db-config.sql
      sed 's/SQLNET.ENCRYPTION_TYPES_SERVER=(AES256,AES192,AES128)/SQLNET.ENCRYPTION_TYPES_SERVER=(AES256,AES192,AES128,RC4_256)/' $TNS_ADMIN/sqlnet.ora > $TNS_ADMIN/sqlnet-temp.ora
      mv $TNS_ADMIN/sqlnet-temp.ora $TNS_ADMIN/sqlnet.ora
      EOF
    destination = "${local.db_home_path}/shard-db-config-setup.sh"
  }



  #Shard db config setup
  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.db_home_path}/shard-db-config-setup.sh",  
    "${local.db_home_path}/shard-db-config-setup.sh",
    "rm -f ${local.db_home_path}/shard-db-config.sql",
    "rm -f ${local.db_home_path}/shard-db-config-setup.sh"
    ]
  }


  provisioner "file" {
    when    = "destroy"
    content  = <<-EOF
      #! /bin/bash
      source ${local.db_home_path}/shard.sh
      rm -f ${local.db_home_path}/shard-db-config.sql 
      rm -f ${local.db_home_path}/shard-db-config-setup.sh
      EOF
    destination = "${local.db_home_path}/shard-db-config-teardown.sh"
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "chmod 700 ${local.db_home_path}/shard-db-config-teardown.sh",  
    "${local.db_home_path}/shard-db-config-teardown.sh",
    "rm -f ${local.db_home_path}/shard-db-config-teardown.sh"
    ]
   }
}
