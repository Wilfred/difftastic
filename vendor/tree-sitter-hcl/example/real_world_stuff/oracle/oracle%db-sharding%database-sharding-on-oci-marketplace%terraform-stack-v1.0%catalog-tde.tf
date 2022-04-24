# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_catalog_tde" {
  depends_on = ["null_resource.sdb_catalog_shard_chunks", "null_resource.sdb_deploy_invoker"]
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

  provisioner "file" {
    content     = <<-EOF
      alter session set container=${data.oci_database_database.catalog_database[count.index].pdb_name};
      ADMINISTER KEY MANAGEMENT EXPORT ENCRYPTION KEYS WITH SECRET "sd${random_string.tde_encryption_key_export_passwd.result}" TO '${var.oracle_base}/cat_pdb_tde.key' FORCE KEYSTORE IDENTIFIED BY sd${random_string.sys_pass.result};
      SPOOL ${var.oracle_base}/catkey.lst
      SELECT KEY_ID FROM V$ENCRYPTION_KEYS WHERE ACTIVATION_TIME =(SELECT MAX(ACTIVATION_TIME) FROM V$ENCRYPTION_KEYS WHERE ACTIVATING_DBID = (SELECT DBID FROM V$DATABASE));
      SPOOL OFF
      exit
      EOF
    destination = "${local.db_home_path}/catalog-tde-config.sql"
  }

  # copying
  provisioner "file" {
    content     = <<-EOF
        #! /bin/bash
        cd ${var.oracle_base}
        echo "${tls_private_key.public_private_key_pair.private_key_pem}" > ikey
        chmod 600 ikey
        sed '4q;d' catkey.lst > catkey
        chmod 600 catkey
        EOF
    destination = "${local.db_home_path}/ikey.sh"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${local.db_home_path}/shardcat.sh
      sqlplus / as sysdba @${local.db_home_path}/catalog-tde-config.sql
      EOF
    destination = "${local.db_home_path}/catalog-tde-setup.sh"
  }

  #Catalog config
  provisioner "remote-exec" {
    inline = [
      "chmod 700 ${local.db_home_path}/catalog-tde-setup.sh",
      "${local.db_home_path}/catalog-tde-setup.sh",
      "chmod 700 ${local.db_home_path}/ikey.sh",
      "${local.db_home_path}/ikey.sh",
      "rm -f ${local.db_home_path}/catalog-tde-config.sql",
      "rm -f ${local.db_home_path}/catalog-tde-setup.sh",
      "rm -f ${local.db_home_path}/ikey.sh"
    ]
  }

  provisioner "file" {
    when        = "destroy"
    content     = <<-EOF
      #! /bin/bash
      rm -f ${local.db_home_path}/catalog-tde-config.sql
      rm -f ${local.db_home_path}/catalog-tde-setup.sh
      rm -f ${local.db_home_path}/ikey.sh
      rm -f ${var.oracle_base}/ikey
      rm -f ${var.oracle_base}/cat_pdb_tde.key
      EOF
    destination = "${local.db_home_path}/catalog-tde-config-teardown.sh"
  }

  # destroying
  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "chmod 700 ${local.db_home_path}/catalog-tde-config-teardown.sh",
      "${local.db_home_path}/catalog-tde-config-teardown.sh",
      "rm -f ${local.db_home_path}/catalog-tde-config-teardown.sh"
    ]
  }
}
