# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_dg_broker" {
  depends_on = ["null_resource.sdb_shard_db_convert_params"]
  count      = "${(var.num_of_shard_groups > 1) ? var.num_of_shards : 0}"

  #creates ssh connection 
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${data.oci_core_vnic.shard_db_node_vnic[count.index].public_ip_address}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${local.db_home_path}/shard.sh
      echo sd${random_string.sys_pass.result} | dgmgrl sys/ "DISABLE FAST_START FAILOVER"
      EOF
    destination = "${local.db_home_path}/shard-dg-fsfo-config-setup.sh"
  }

  #rm -f ikey-fsfo
  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      cd ${local.gsm_home_full_path}
      ssh -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null -i ikey-fsfo oracle@${data.oci_core_vnic.shard_db_node_vnic[count.index].public_ip_address} ${local.db_home_path}/shard-dg-fsfo-config-setup.sh                                                                                                                      
      EOF
    destination = "${local.db_home_path}/shard-dg-fsfo-config-disable-${count.index}.sh"
  }

  
  #rm -f ikey-fsfo-sh
  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      source ${local.db_home_path}/shard.sh
      cd ${local.db_home_path}
      echo "${tls_private_key.public_private_key_pair.private_key_pem}" > ikey-fsfo-sh
      chmod 600 ikey-fsfo-sh
      scp -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null -i ikey-fsfo-sh shard-dg-fsfo-config-disable-${count.index}.sh oracle@${oci_core_instance.gsm_vm[0].public_ip}:${local.gsm_home_full_path}/
      EOF
    destination = "${local.db_home_path}/shard_fsfo.sh"
  }

  #"rm -f ${local.db_home_path}/shard_fsfo.sh"
  provisioner "remote-exec" {
    inline = [
      "chmod 700 ${local.db_home_path}/shard-dg-fsfo-config-setup.sh",
      "chmod 700 ${local.db_home_path}/shard_fsfo.sh",
      "${local.db_home_path}/shard_fsfo.sh"
    ]
  }
}