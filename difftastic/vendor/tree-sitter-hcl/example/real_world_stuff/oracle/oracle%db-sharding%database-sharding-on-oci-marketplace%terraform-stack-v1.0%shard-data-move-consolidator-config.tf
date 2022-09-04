resource "null_resource" "sdb_shard_data_move_consolidator_config" {
  depends_on = ["null_resource.sdb_add_shard_group", "null_resource.sdb_shard_db_configure", "null_resource.sdb_shard_standby_configure", "null_resource.sdb_shard_standby_ee_configure"]

  # Add trigger for shards.

  triggers = {
    shard_db_ids = "${join(",", oci_database_db_system.shard_db.*.id)}"
  }

  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${oci_core_instance.gsm_vm[0].public_ip}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  provisioner "remote-exec" {
    inline = [
      "echo registering the sdb_shard_data_move_consolidator_config resource to create a destroy hook for data move of shards for scale-in user requests"
    ]
  }

  provisioner "file" {
    when        = "destroy"
    content     = <<-EOF
      #! /bin/bash
      rm -f ${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh
      echo "#! /bin/bash" >> ${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh
      echo "source ${var.oracle_base}/shard-director.sh" >> ${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh
      echo "cd ${local.gsm_home_full_path}" >> ${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh
      echo "gdsctl configure -timeout 604800 -save_config" >> ${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh
      cat ${local.gsm_home_full_path}/tfconfig-remove-shard-config-for-${var.shard_name_prefix}{9999..0}.tfconfig >> ${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh 2>/dev/null
      echo "rm -f tfconfig-remove-shard-config-for-${var.shard_name_prefix}*.tfconfig" >> ${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh
      EOF
    destination = "${local.gsm_home_full_path}/shard-data-move-consolidator-config.sh"
  }

  #"cat ${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh",

  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "chmod 700 ${local.gsm_home_full_path}/shard-data-move-consolidator-config.sh",
      "${local.gsm_home_full_path}/shard-data-move-consolidator-config.sh",
      "rm -f ${local.gsm_home_full_path}/shard-data-move-consolidator-config.sh",
      "chmod 700 ${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh",
      "${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh",
      "rm -f ${local.gsm_home_full_path}/tfconfig-remove-shard-config-consolidated.sh"
    ]
  }
}