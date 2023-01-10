# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_catalog_standby_configure" {
depends_on = ["null_resource.sdb_catalog_standby_cloud_init"]
  count =  "${var.database_edition==local.ee_xp?length(var.shard_catalogs) * (length(var.shard_groups) - 1):0}"
  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${var.standby_catalog_name_prefix}${count.index}.${lookup(data.oci_core_subnet.shardgroup_subnet[floor(count.index/length(var.shard_catalogs)) + 1],"subnet_domain_name")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

    # copying
  provisioner "file" { 
    content  = <<-EOF
        #! /bin/bash
        export ORACLE_BASE="${var.oracle_base}"
        export ORACLE_HOME="${local.db_home_path}"
        export LD_LIBRARY_PATH=$ORACLE_HOME/lib
        export PATH=$PATH:$ORACLE_HOME/bin
        export TNS_ADMIN=$ORACLE_HOME/network/admin  
        EOF
    destination = "${local.db_home_path}/shardcat.sh"
  }

  provisioner "file" {
    content  = <<-EOF
      ALTER PLUGGABLE DATABASE ${var.pdb_name} OPEN READ ONLY;
      exit
      EOF
    destination = "${local.db_home_path}/shard-standby-config.sql"
  }

    provisioner "file" {
    content  = <<-EOF
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

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ~/shard-standby-configure.sh"
    ]
   }
}