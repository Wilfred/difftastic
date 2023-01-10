# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_add_shard_director" {
  depends_on = ["null_resource.sdb_shard_director_install_main", "null_resource.sdb_add_shard_director_wo_stdby", "null_resource.sdb_shard_director_configure"]
  count      = "${(var.num_of_shard_groups > 1) ? var.num_of_gsm : 0}"

  #creates ssh connection to gsm host
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${oci_core_instance.gsm_vm[count.index].public_ip}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  # copying
  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      gdsctl add gsm -gsm ${join("", [var.sharded_database_name, var.gsm_name_prefix, count.index])} -pwd sd${random_string.gsmcatuser_pass.result} -catalog ${data.oci_core_vnic.catalog_db_node_vnic[0].public_ip_address}:${oci_database_db_system.catalog_db[0].listener_port}/${data.oci_database_database.catalog_database[0].pdb_name}.${oci_database_db_system.catalog_db[0].domain} -region ${replace(var.region, "-", "")} -trace_level 16
      gdsctl start gsm -gsm ${join("", [var.sharded_database_name, var.gsm_name_prefix, count.index])}
      gdsctl add invitednode ${data.oci_core_vnic.catalog_db_node_vnic[0].public_ip_address}
      gdsctl add invitednode ${data.oci_core_vnic.catalog_db_node_vnic[0].private_ip_address}
      gdsctl add invitednode ${data.oci_core_vnic.catalog_stby_db_node_vnic[0].public_ip_address}
      gdsctl add invitednode ${data.oci_core_vnic.catalog_stby_db_node_vnic[0].private_ip_address}
      gdsctl config
      EOF
    destination = "${local.gsm_home_full_path}/add-shard-director-config-setup.sh"
  }

  # add shard director config setup
  provisioner "remote-exec" {
    inline = [
      "chmod 700 ${local.gsm_home_full_path}/add-shard-director-config-setup.sh",
      "${local.gsm_home_full_path}/add-shard-director-config-setup.sh",
      "rm -f ${local.gsm_home_full_path}/add-shard-director-config-setup.sh"
    ]
  }


  #teardown config copy
  provisioner "file" {
    when        = "destroy"
    content     = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      ${count.index > 0 ? "gdsctl stop gsm" : "echo first gsm, so not stopping it."}
      ${count.index > 0 ? "sleep 240" : "echo skipping noop"}
      ${count.index > 0 ? "gdsctl stop gsm" : "echo first gsm, so not stopping it again."}
      ${count.index > 0 ? "gdsctl remove gsm -gsm ${join("", [var.sharded_database_name, var.gsm_name_prefix, count.index])}" : "echo First gsm so not removing gsm."}
      ${count.index > 0 ? "sleep 240" : "echo skipping noop"}
      gdsctl config
      rm -f ${local.gsm_home_full_path}/add-shard-director-config-setup.sh
      EOF
    destination = "${local.gsm_home_full_path}/teardown-add-shard-director-config-setup.sh"
  }

  #teardown add shard director config setup
  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "chmod 700 ${local.gsm_home_full_path}/teardown-add-shard-director-config-setup.sh",
      "${local.gsm_home_full_path}/teardown-add-shard-director-config-setup.sh",
      "rm -f ${local.gsm_home_full_path}/teardown-add-shard-director-config-setup.sh"
    ]
  }
}
