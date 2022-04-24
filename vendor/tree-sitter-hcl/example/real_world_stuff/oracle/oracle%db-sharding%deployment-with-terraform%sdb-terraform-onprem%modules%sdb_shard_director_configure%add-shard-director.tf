# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_add_shard_director" {
  depends_on  = ["null_resource.sdb_shard_director_configure"]
  count = "${length(var.shard_directors)}"

  #creates ssh connection to gsm host
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 
  
  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      gdsctl add gsm -gsm ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "name")} -pwd ${var.gsmcatuser_pass} -catalog ${local.shard_catalog_host}:${local.shard_catalog_port}:${local.shard_catalog_sid} -region ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "region")}
      gdsctl start gsm -gsm ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "name")}
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

  provisioner "file" { 
    content  = "${data.template_file.deps_check_template.rendered}" 
    destination = "${local.gsm_home_full_path}/deps-check.sh"
  }


  #teardown config copy
  provisioner "file" {
    when     = "destroy"
    content  = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      gdsctl stop gsm
      rm -f ${local.gsm_home_full_path}/add-shard-director-config-setup.sh
      rm -f ${local.gsm_home_full_path}/deps-check.sh
      EOF
    destination = "${local.gsm_home_full_path}/teardown-add-shard-director-config-setup.sh"
  }

  #teardown add shard director config setup
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/teardown-add-shard-director-config-setup.sh", 
    "${local.gsm_home_full_path}/teardown-add-shard-director-config-setup.sh",
    "rm -f ${local.gsm_home_full_path}/teardown-add-shard-director-config-setup.sh"
    ]
  }

}

