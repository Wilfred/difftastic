# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_deploy_invoker" {

  depends_on = ["null_resource.sdb_add_shard", "null_resource.sdb_add_standby_shard", "null_resource.sdb_catalog_tns_ingest", "null_resource.sdb_catalog_standby_tns_ingest", "null_resource.sdb_shard_director_tns_ingest", "null_resource.sdb_shard_tns_ingest", "null_resource.sdb_shard_standby_tns_ingest"]

  triggers = {
    shard_db_ids              = "${join(",", oci_database_db_system.shard_db.*.id)}"
    shard_stdby_db_ips        = "${join(",", data.oci_core_vnic.shard_stby_db_node_vnic.*.public_ip_address)}"
    shard_catalog_standby_ips = "${join(",", data.oci_core_vnic.catalog_stby_db_node_vnic.*.public_ip_address)}"
  }

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
      gdsctl deploy
      echo "Oracle sharded database shards are now deployed."
      EOF
    destination = "${local.gsm_home_full_path}/sdb-deploy.sh"
  }

  #shard deploy config setup
  provisioner "remote-exec" {
    inline = [
      "chmod 700 ${local.gsm_home_full_path}/sdb-deploy.sh",
      "${local.gsm_home_full_path}/sdb-deploy.sh",
      "rm -f ${local.gsm_home_full_path}/sdb-deploy.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "rm -f ${local.gsm_home_full_path}/sdb-deploy.sh"
    ]
  }
}
