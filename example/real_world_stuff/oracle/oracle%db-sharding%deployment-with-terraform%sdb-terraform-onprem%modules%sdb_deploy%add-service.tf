# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
  
  resource "null_resource" "sdb_add_service" {
  # depends_on  = ["null_resource.sdb_deploy_invoker"]
  count = "${length(var.global_services)}"

  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shard_directors[element(keys(var.shard_directors), 0)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash 
      source ${var.oracle_base}/shard-director.sh
      gdsctl connect ${var.sdb_admin_username}/${var.sdb_admin_pass}
      gdsctl add service -service ${lookup(var.global_services[element(keys(var.global_services), count.index)], "service_name")} -role ${lookup(var.global_services[element(keys(var.global_services), count.index)], "role")}
      gdsctl start service -service ${lookup(var.global_services[element(keys(var.global_services), count.index)], "service_name")}
      gdsctl config
      EOF
    destination = "${local.gsm_home_full_path}/add-service-config-setup-for-${lookup(var.global_services[element(keys(var.global_services), count.index)], "service_name")}.sh"
  }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/add-service-config-setup-for-${lookup(var.global_services[element(keys(var.global_services), count.index)], "service_name")}.sh", 
    "${local.gsm_home_full_path}/add-service-config-setup-for-${lookup(var.global_services[element(keys(var.global_services), count.index)], "service_name")}.sh",
    "rm -f ${local.gsm_home_full_path}/add-service-config-setup-for-${lookup(var.global_services[element(keys(var.global_services), count.index)], "service_name")}.sh"
    ]
  }

  provisioner "file" { 
    content  = "${data.template_file.deps_check_template.rendered}" 
    destination = "${local.gsm_home_full_path}/deps-check.sh"
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/add-service-config-setup-for-${lookup(var.global_services[element(keys(var.global_services), count.index)], "service_name")}.sh",
    "rm -f ${local.gsm_home_full_path}/deps-check.sh"
    ]
  }
}