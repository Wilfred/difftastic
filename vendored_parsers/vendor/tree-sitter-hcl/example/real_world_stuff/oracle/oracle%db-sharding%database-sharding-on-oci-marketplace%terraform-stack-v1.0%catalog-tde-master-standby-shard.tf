# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_catalog_tde_master_standby_shard" {
  depends_on = ["null_resource.sdb_shard_catalog_tde", "null_resource.sdb_deploy_invoker"]
  count      = "${var.num_of_shards * (var.num_of_shard_groups - 1)}"

  #creates ssh connection to gsm host
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${data.oci_core_vnic.catalog_db_node_vnic[0].public_ip_address}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      cd ${var.oracle_base}
      scp -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null -i ikey ${var.oracle_base}/cat_pdb_tde.key ${var.oracle_base}/catkey oracle@${data.oci_core_vnic.shard_stby_db_node_vnic[count.index].public_ip_address}:${var.oracle_base}/
      EOF
    destination = "${local.db_home_path}/catalog-tde-master-stdby-shard-setup-${count.index}.sh"
  }

  provisioner "remote-exec" {
    inline = [
      "chmod 700 ${local.db_home_path}/catalog-tde-master-stdby-shard-setup-${count.index}.sh",
      "${local.db_home_path}/catalog-tde-master-stdby-shard-setup-${count.index}.sh",
      "rm -f ${local.db_home_path}/catalog-tde-master-stdby-shard-setup-${count.index}.sh"
    ]
  }
}