# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_standby_tde" {
  depends_on = ["null_resource.sdb_shard_tde", "null_resource.sdb_catalog_tde_master_shard", "null_resource.sdb_shard_catalog_tde", "null_resource.sdb_deploy_invoker"]
  count      = "${var.num_of_shards * (var.num_of_shard_groups - 1)}"

  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${data.oci_core_vnic.shard_stby_db_node_vnic[count.index].public_ip_address}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content     = <<-EOF
      administer key management set keystore close;
      select KEY_ID from V$ENCRYPTION_KEYS;
      alter session set container=${data.oci_database_database.shard_database[count.index % var.num_of_shards].pdb_name};
      SELECT KEY_ID FROM V$ENCRYPTION_KEYS WHERE ACTIVATION_TIME =(SELECT MAX(ACTIVATION_TIME) FROM V$ENCRYPTION_KEYS WHERE ACTIVATING_DBID = (SELECT DBID FROM V$DATABASE));
      exit
      EOF
    destination = "${local.db_home_path}/shard_standby_tde_wallet.sql"
  }


  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${local.db_home_path}/shard.sh
      cd /opt/oracle/dcs/commonstore/wallets/tde/${data.oci_database_database.stdby_shard_database[count.index].db_unique_name}
      echo "${tls_private_key.public_private_key_pair.private_key_pem}" > ikey
      chmod 600 ikey
      scp -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null -i ikey oracle@${data.oci_core_vnic.shard_db_node_vnic[count.index % var.num_of_shards].public_ip_address}:${var.oracle_base}/tde-wallet.zip /opt/oracle/dcs/commonstore/wallets/tde/${data.oci_database_database.stdby_shard_database[count.index].db_unique_name}/
      mv cwallet.sso cwallet-sso-backup-${timestamp()}
      mv ewallet.p12 ewallet-p12-backup-${timestamp()}
      unzip tde-wallet.zip
      rm -f ikey
      sqlplus / as sysdba @${local.db_home_path}/shard_standby_tde_wallet.sql
      EOF
    destination = "${local.db_home_path}/shard_standby_tde_wallet.sh"
  }

  provisioner "remote-exec" {
    inline = [
      "chmod 700 ${local.db_home_path}/shard_standby_tde_wallet.sh",
      "${local.db_home_path}/shard_standby_tde_wallet.sh",
      "rm -f ${local.db_home_path}/shard_standby_tde_wallet.sql",
      "rm -f ${local.db_home_path}/shard_standby_tde_wallet.sh",
      "echo Oracle Sharded Database provisioning or update is now complete."
    ]
  }


  # provisioner "file" {
  #   content     = <<-EOF
  #     alter session set container=${data.oci_database_database.shard_database[count.index % var.num_of_shards].pdb_name};
  #     ADMINISTER KEY MANAGEMENT IMPORT ENCRYPTION KEYS WITH SECRET sd${random_string.tde_encryption_key_export_passwd.result} FROM '${var.oracle_base}/cat_pdb_tde.key' FORCE KEYSTORE IDENTIFIED BY sd${random_string.sys_pass.result} WITH BACKUP;
  #     EOF
  #   destination = "${local.db_home_path}/shard-standby-tde-config.sql"
  # }


  #  provisioner "file" {
  #   content     = <<-EOF
  #     #! /bin/bash
  #     source ${local.db_home_path}/shard.sh
  #     cd ${var.oracle_base}
  #     echo "ADMINISTER KEY MANAGEMENT USE KEY '$(head -n 1 catkey | tr -d '[:space:]')' FORCE KEYSTORE IDENTIFIED BY sd${random_string.sys_pass.result} WITH BACKUP;" >> ${local.db_home_path}/shard-standby-tde-config.sql
  #     echo "SELECT KEY_ID  FROM V\$ENCRYPTION_KEYS WHERE ACTIVATION_TIME =(SELECT MAX(ACTIVATION_TIME) FROM V\$ENCRYPTION_KEYS WHERE ACTIVATING_DBID = (SELECT DBID FROM V\$DATABASE));" >> ${local.db_home_path}/shard-standby-tde-config.sql
  #     echo "exit" >> ${local.db_home_path}/shard-standby-tde-config.sql    
  #     sqlplus / as sysdba @${local.db_home_path}/shard-standby-tde-config.sql
  #     EOF
  #   destination = "${local.db_home_path}/shard-standby-tde-setup.sh"
  # }

  #   provisioner "remote-exec" {
  #   inline = [
  #     "chmod 700 ${local.db_home_path}/shard-standby-tde-setup.sh",
  #     "${local.db_home_path}/shard-standby-tde-setup.sh",
  #     "rm -f ${local.db_home_path}/shard-standby-tde-config.sql",
  #     "rm -f ${local.db_home_path}/shard-standby-tde-setup.sh"
  #   ]
  # }
}