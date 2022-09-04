# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_shard_db_install_sw" {
  # depends_on  = ["null_resource.sdb_shard_db_install"]
  count = "${length(var.shards)}"

  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shards[element(keys(var.shards), count.index)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

provisioner "file" { 
    content  = "${data.template_file.shard_db_rsp_template.rendered}" 
    destination = "${var.db_home_path}/db.rsp"
}


  # Running db install 
  provisioner "remote-exec" {
    inline = [ <<EOF
    cd ${var.db_home_path}
    ./runInstaller -silent -ignorePrereqFailure -waitforcompletion -responseFile ${var.db_home_path}/db.rsp
    sleep 120
    echo ${var.sudo_pass} | sudo -S ${var.ora_inventory_location}/orainstRoot.sh
    echo ${var.sudo_pass} | sudo -S ${var.db_home_path}/root.sh
    EOF
    ]
  }


  provisioner "file" {
    when = "destroy"
    content  = <<-EOF
    #!/bin/bash
    source ${var.db_home_path}/shard.sh 
    lsnrctl stop
    EOF
    destination = "${var.db_home_path}/stop-tns-listener.sh"
  }

  provisioner "remote-exec" {
    when = "destroy"
    inline = [
    "chmod 700 ${var.db_home_path}/stop-tns-listener.sh",
    "${var.db_home_path}/stop-tns-listener.sh",
    "rm -f ${var.db_home_path}/stop-tns-listener.sh"
    ]
  }


  #Destroying
  provisioner "remote-exec" {
    when   = "destroy"
    inline = [
    "cd ${var.db_home_path}/bin",
    "echo ${local.db_major_version}",
    "mkdir -p ${var.oracle_base}/deinstall-db",
    "cd ${var.db_home_path}/deinstall",
    "./deinstall -tmpdir ${var.oracle_base}  -silent -checkonly -o ${var.oracle_base}/deinstall-db/",
    "./deinstall -tmpdir ${var.oracle_base} -silent -paramfile ${var.oracle_base}/deinstall-db/deinstall_OraDB${local.db_major_version}Home1.rsp",
    "rm -f ${var.oracle_base}/${var.db_zip_name}.zip",
    "rm -rf ${var.oracle_base}/deinstall-db",
    "rm -f ${var.oracle_base}/*.log",
    "rm -rf ${var.oracle_base}/admin",
    "rm -rf ${var.oracle_base}/oradata",
    "rm -rf ${var.oracle_base}/audit",
    "rm -rf ${var.ora_inventory_location}",
    "rm -rf ${var.oracle_base}/fast_recovery_area",
    "echo ${var.sudo_pass} | sudo -S rm -rf /etc/oraInst.loc",
    "echo ${var.sudo_pass} | sudo -S rm -rf /etc/oratab", 
    "echo ${var.sudo_pass} | sudo -S rm -rf /opt/ORCLfmap",
    "rm -rf ${var.db_home_path}"
    ]
  }
}