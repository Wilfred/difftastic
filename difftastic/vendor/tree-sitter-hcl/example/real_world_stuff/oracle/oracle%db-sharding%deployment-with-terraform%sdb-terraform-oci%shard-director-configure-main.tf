# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_director_configure" {

  depends_on = ["null_resource.sdb_catalog_standby_configure", "null_resource.sdb_catalog_standby_ee_configure", "null_resource.sdb_shard_standby_configure","null_resource.sdb_shard_standby_ee_configure","null_resource.sdb_shard_director_install_main"]
  
  #creates ssh connection to gsm host
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${oci_core_instance.gsm_vm[0].private_ip}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

  # copying
  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      gdsctl create shardcatalog -autovncr OFF -database ${oci_database_db_system.catalog_db[0].hostname}.${oci_database_db_system.catalog_db[0].domain}:${oci_database_db_system.catalog_db[0].listener_port}/${data.oci_database_database.catalog_database[0].pdb_name}.${oci_database_db_system.catalog_db[0].domain} -sharding ${var.sharding_method} -user gsmcatuser/${var.gsmcatuser_pass} -sdb ${local.shard_catalog_sdb_name} -protectmode ${var.replication_protection_mode} -region ${local.shard_catalog_regions}
      EOF
    destination = "${local.gsm_home_full_path}/shard-director-config-setup.sh"
  }
  
  #shard director config setup
  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/shard-director-config-setup.sh",
    "${local.gsm_home_full_path}/shard-director-config-setup.sh",
    "rm -f ${local.gsm_home_full_path}/shard-director-config-setup.sh"
    ]
  }


  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/shard-director-config-setup.sh"
    ]
  }
}
