# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_director_configure" {

  depends_on = ["null_resource.sdb_shard_director_install_main", "null_resource.sdb_catalog_standby_configure", "null_resource.sdb_catalog_standby_ee_configure", "null_resource.sdb_shard_standby_configure", "null_resource.sdb_shard_standby_ee_configure", "null_resource.sdb_shard_catalog_configure", "null_resource.sdb_shard_db_configure"]

  #creates ssh connection to gsm host
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${oci_core_instance.gsm_vm[0].public_ip}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  # copying
  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      gdsctl create shardcatalog -autovncr OFF -database ${data.oci_core_vnic.catalog_db_node_vnic[0].public_ip_address}:${oci_database_db_system.catalog_db[0].listener_port}/${data.oci_database_database.catalog_database[0].pdb_name}.${oci_database_db_system.catalog_db[0].domain} -sharding ${local.sharding_methods[var.sharding_method]} -user gsmcatuser/sd${random_string.gsmcatuser_pass.result} -sdb ${var.sharded_database_name} -protectmode ${var.replication_protection_mode} -region ${replace(var.region, "-", "")} -chunks ${var.chunks}
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
    when = "destroy"
    inline = [
      "rm -f ${local.gsm_home_full_path}/shard-director-config-setup.sh"
    ]
  }
}
