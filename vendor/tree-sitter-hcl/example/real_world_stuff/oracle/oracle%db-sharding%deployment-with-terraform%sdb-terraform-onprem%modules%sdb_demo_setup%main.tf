# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_demo_setup" {
   count = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "sharding_method") == local.system_sharding ? 1 : 0}"

  #creates ssh connection
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

  provisioner "remote-exec" {
    inline = [
    "mkdir -p ${var.db_home_path}"
    ]
  }

  # copying sdb demo binary over
  provisioner "file" {
    source = "${path.module}/demo-binaries/${local.sdb_demo_dir}.zip"
    destination = "${var.db_home_path}/${local.sdb_demo_dir}.zip"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      echo ${var.sdb_schema_setup_deps_check}
      cd ${var.db_home_path}
      source ${var.db_home_path}/shardcat.sh
      chmod 700 ${local.sdb_demo_dir}.zip
      unzip -o ${local.sdb_demo_dir}.zip
      cd ${local.sdb_demo_dir}/sql
      sqlplus / as sysdba @demo_app_ext.sql
      exit
      EOF
    destination = "${var.db_home_path}/demo-additional-objects-setup.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/demo-additional-objects-setup.sh",
    "${var.db_home_path}/demo-additional-objects-setup.sh"
    ]
  }

  provisioner "file" {
    content = <<EOF
name=demo
connect_string=(ADDRESS_LIST=(LOAD_BALANCE=off)(FAILOVER=on)(ADDRESS=(HOST=${lookup(var.shard_directors[element(keys(var.shard_directors), 0)], "host")})(PORT=${lookup(var.shard_directors[element(keys(var.shard_directors), 0)], "port")})(PROTOCOL=tcp)))
monitor.user=dbmonuser
monitor.pass=TEZiPP4MsLLL
app.service.write=oltp_rw_srvc.cust_sdb.oradbcloud
app.service.readonly=oltp_ro_srvc.cust_sdb.oradbcloud
app.user=app_schema
app.pass=
app.threads=7
EOF
    destination = "${var.db_home_path}/${local.sdb_demo_dir}/demo.properties"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      cd ${var.db_home_path}/${local.sdb_demo_dir}
      source ${var.db_home_path}/shardcat.sh
      chmod 700 ${var.db_home_path}/${local.sdb_demo_dir}/run.sh
      cd ${var.db_home_path}/${local.sdb_demo_dir}      
      nohup ./run.sh demo >> nohup-run-demo.out 2>&1 &
      sleep 6
      EOF
    destination = "${var.db_home_path}/run-demo.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${var.db_home_path}/run-demo.sh",
    "${var.db_home_path}/run-demo.sh"
    ]
  }


  provisioner "file" {
    content  = "${data.template_file.deps_check_template.rendered}" 
    destination = "${var.db_home_path}/sdb-demo-setup-deps-check.sh"
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "kill $(ps aux | grep '[o]racle.demo.Main' | awk '{print $2}')",
    "rm -f ${var.db_home_path}/sdb-demo-setup-deps-check.sh",  
    "rm -f ${var.db_home_path}/run-monitor.sh",
    "rm -f ${var.db_home_path}/run-demo.sh",
    "rm -f ${var.db_home_path}/demo-additional-objects-setup.sh",
    "rm -f ${var.db_home_path}/${local.sdb_demo_dir}.zip",
    "rm -rf ${var.db_home_path}/${local.sdb_demo_dir}",
    "rm -rf ${var.db_home_path}/__MACOSX"
    ]
   }
}

