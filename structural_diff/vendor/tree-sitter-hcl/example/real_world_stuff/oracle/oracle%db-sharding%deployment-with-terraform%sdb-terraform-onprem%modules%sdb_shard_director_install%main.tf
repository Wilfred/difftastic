# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_director_install" {

  count = "${length(var.shard_directors)}"

  # ssh connection to gsm host
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

  provisioner "remote-exec" {
    inline = [
    "mkdir -p ${var.oracle_base}"
    ]
  }

  provisioner "file" {
    source = "${var.gsm_zip_location}/${var.gsm_zip_name}.zip"
    destination = "${var.oracle_base}/${var.gsm_zip_name}.zip"
  }

  provisioner "file" {
    content  = "${data.template_file.shard_director_env_template.rendered}"
    destination = "${var.oracle_base}/shard-director.sh"
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${var.oracle_base}/shard-director.sh"
    ]
   }

  provisioner "file" {
    content = "${data.template_file.shard_director_worker_template.rendered}"
    destination = "${var.oracle_base}/shard-director-worker.sh"
  }
  
  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${var.oracle_base}/shard-director-worker.sh"
    ]
  }

  provisioner "file" {
      content   = "${data.template_file.shard_director_rsp_template.rendered}"
      destination = "${var.oracle_base}/gsm_install.rsp"
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${var.oracle_base}/gsm_install.rsp"
    ]
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.oracle_base}/shard-director-worker.sh",
    "cd ${var.oracle_base}",
    "./shard-director-worker.sh",
    "rm -f ${var.oracle_base}/shard-director-worker.sh"
    ]
  }

  provisioner "file" { 
    content  = "${data.template_file.deps_check_template.rendered}" 
    destination = "${local.gsm_home_full_path}/deps-check.sh"
  }


  #Destroying
  provisioner "remote-exec" {
    when   = "destroy"
    inline = [
    "mkdir -p ${var.oracle_base}/deinstall-gsm",
    "cd ${local.gsm_home_full_path}/deinstall",
    "./deinstall -tmpdir ${var.oracle_base}  -silent -checkonly -o ${var.oracle_base}/deinstall-gsm/",
    "./deinstall -tmpdir ${var.oracle_base} -silent -paramfile ${var.oracle_base}/deinstall-gsm/deinstall_OraGSM${local.gsm_major_version}Home1.rsp",
    "cd ${var.oracle_base}",
    "rm -f ${var.oracle_base}/${var.gsm_zip_name}.zip",
    "rm -rf ${local.gsm_install_folder_name}",
    "rm -rf ${local.gsm_home_full_path}",
    "rm -rf ${var.oracle_base}/deinstall-gsm",
    "rm -rf ${var.ora_inventory_location}",
    "echo ${var.sudo_pass} | sudo -S rm -rf /etc/oraInst.loc",
    "echo ${var.sudo_pass} | sudo -S rm -rf /etc/oratab"
    ]
  }
}