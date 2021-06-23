# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_catalog_switchover" {
   depends_on  = ["null_resource.sdb_add_shard_director"]
   count = "${(length(var.shard_groups)>1)?length(var.shard_directors):0}"

    #creates ssh connection to gsm host
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${oci_core_instance.gsm_vm[count.index].private_ip}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

  provisioner "file" {
    content  = <<-EOF
    #!/bin/bash
    source ${var.oracle_base}/shard-director.sh
    mv $TNS_ADMIN/tnsnames.ora $TNS_ADMIN/tnsname-ora-backup
    echo "${upper(lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "name"))}_CATALOG =
  (DESCRIPTION =
    (ADDRESS_LIST=
      (address = (protocol = tcp)(host = ${oci_database_db_system.catalog_db[0].hostname}.${oci_database_db_system.catalog_db[0].domain})(port = ${oci_database_db_system.catalog_db[0].listener_port}))
      (address = (protocol = tcp)(host = ${data.oci_database_db_systems.catalog_stdby_db_systems[0].db_systems.0.hostname}.${data.oci_database_db_systems.catalog_stdby_db_systems[0].db_systems.0.domain})(port = ${data.oci_database_db_systems.catalog_stdby_db_systems[0].db_systems.0.listener_port}))
    )
    (CONNECT_DATA =
      (SERVICE_NAME = GDS\$CATALOG.oradbcloud)
    )
  )

${upper(lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "name"))} =
  (DESCRIPTION =
    (ADDRESS = (HOST = ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "host")}.${lookup(data.oci_core_subnet.shardgroup_subnet[floor(count.index/var.num_of_gsm_per_ad)],"subnet_domain_name")})(PORT = ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "port")})(PROTOCOL = tcp))
    (CONNECT_DATA =
      (SERVICE_NAME = GDS\$CATALOG.oradbcloud)
    )
  )" >> $TNS_ADMIN/tnsnames.ora
    EOF
    destination = "${local.gsm_home_full_path}/enable-switchover-relocation-for-catalog.sh"
   }

  provisioner "remote-exec" {
    inline = [
    "chmod 700 ${local.gsm_home_full_path}/enable-switchover-relocation-for-catalog.sh",
    "${local.gsm_home_full_path}/enable-switchover-relocation-for-catalog.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when    = "destroy"
    inline = [
    "rm -f ${local.gsm_home_full_path}/enable-switchover-relocation-for-catalog.sh"
    ]
   }
}