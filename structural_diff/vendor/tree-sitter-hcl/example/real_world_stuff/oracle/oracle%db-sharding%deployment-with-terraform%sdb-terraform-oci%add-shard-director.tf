# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_add_shard_director" {
  depends_on  = ["null_resource.sdb_shard_director_configure"]
  count = "${length(var.shard_directors)}"

  #creates ssh connection to gsm host
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${oci_core_instance.gsm_vm[count.index].private_ip}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 
  
  # copying
  provisioner "file" {
    content  = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      # gdsctl add gsm -gsm ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "name")} -pwd ${var.gsmcatuser_pass} -catalog ${oci_database_db_system.catalog_db[0].hostname}.${oci_database_db_system.catalog_db[0].domain}:${oci_database_db_system.catalog_db[0].listener_port}/${data.oci_database_database.catalog_database[0].pdb_name}.${oci_database_db_system.catalog_db[0].domain} -region ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "gds_region")} -trace_level 16
      gdsctl add gsm -gsm ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "name")} -pwd ${var.gsmcatuser_pass} -catalog ${oci_database_db_system.catalog_db[0].hostname}.${oci_database_db_system.catalog_db[0].domain}:${oci_database_db_system.catalog_db[0].listener_port}/${data.oci_database_database.catalog_database[0].pdb_name}.${oci_database_db_system.catalog_db[0].domain} -region ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "gds_region")}
      gdsctl start gsm -gsm ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "name")}
      gdsctl add invitednode ${oci_database_db_system.catalog_db[0].hostname}.${oci_database_db_system.catalog_db[0].domain}
      gdsctl add invitednode ${data.oci_database_db_systems.catalog_stdby_db_systems[0].db_systems.0.hostname}.${data.oci_database_db_systems.catalog_stdby_db_systems[0].db_systems.0.domain}
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
    when     = "destroy"
    content  = <<-EOF
      #! /bin/bash
      source ${var.oracle_base}/shard-director.sh
      gdsctl stop gsm
      rm -f ${local.gsm_home_full_path}/add-shard-director-config-setup.sh
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
