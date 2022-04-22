# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_standby_shard_db_install_sw" {
  # depends_on  = ["null_resource.sdb_shard_db_create"]
  count = "${length(var.standby_shards)}"

  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

  provisioner "remote-exec" {
    inline = [
    "mkdir -p ${var.oracle_base}"
    ]
  }

 # copying the db binary
  provisioner "file" {
    source = "${var.db_zip_location}/${var.db_zip_name}.zip"
    destination = "${var.oracle_base}/${var.db_zip_name}.zip"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      rm -rf ${var.db_home_path}
      chmod 700 ${var.oracle_base}/${var.db_zip_name}.zip
      unzip -o ${var.oracle_base}/${var.db_zip_name}.zip -d ${var.db_home_path}
      EOF
    destination = "${var.oracle_base}/unzip-db.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.oracle_base}/unzip-db.sh",
    "${var.oracle_base}/unzip-db.sh"
    ]
  }


  # copying env
  provisioner "file" {
    
    content  = <<-EOF
        #! /bin/bash
        export ORACLE_SID="${lookup(var.standby_shards[element(keys(var.standby_shards), count.index)], "sid")}"
        export ORACLE_BASE="${var.oracle_base}"
        export ORACLE_HOME="${var.db_home_path}"
        export LD_LIBRARY_PATH=$ORACLE_HOME/lib
        export PATH=$PATH:$ORACLE_HOME/bin
        export TNS_ADMIN=$ORACLE_HOME/network/admin  
        EOF
    destination = "${var.db_home_path}/shard.sh"
  }

provisioner "file" { 
    content  = "${data.template_file.shard_db_rsp_template.rendered}" 
    destination = "${var.db_home_path}/db.rsp"
}


  # db install 
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
    "echo ${local.db_major_version}",
    "rm -f ${var.oracle_base}/unzip-db.sh",
    "mkdir -p ${var.oracle_base}/deinstall-db",
    "cd ${var.db_home_path}/deinstall",
    "./deinstall -tmpdir ${var.oracle_base} -silent -checkonly -o ${var.oracle_base}/deinstall-db/",
    "./deinstall -tmpdir ${var.oracle_base} -silent -paramfile ${var.oracle_base}/deinstall-db/deinstall_OraDB${local.db_major_version}Home1.rsp",
    "rm -f ${var.oracle_base}/${var.db_zip_name}.zip",
    "rm -rf ${var.oracle_base}/deinstall-db",
    "rm -f ${var.oracle_base}/*.log",
    "rm -rf ${var.oracle_base}/admin",
    "rm -rf ${var.oracle_base}/oradata",
    "rm -rf ${var.oracle_base}/audit",
    "rm -rf ${var.oracle_base}/diag",
    "rm -rf ${var.ora_inventory_location}",
    "rm -rf ${var.oracle_base}/fast_recovery_area",
    "echo ${var.sudo_pass} | sudo -S rm -rf /etc/oraInst.loc",
    "echo ${var.sudo_pass} | sudo -S rm -rf /etc/oratab", 
    "echo ${var.sudo_pass} | sudo -S rm -rf /opt/ORCLfmap",
    "rm -rf ${var.db_home_path}"
    ]
  }
}