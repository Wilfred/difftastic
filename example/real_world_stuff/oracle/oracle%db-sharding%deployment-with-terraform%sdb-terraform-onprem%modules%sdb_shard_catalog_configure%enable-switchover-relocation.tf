# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_enable_switchover_relocation_catalog" {
   count = "${length(var.shard_directors)}"

  #creates ssh connection 
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
    #!/bin/bash
    source ${var.oracle_base}/shard-director.sh 
    mv $TNS_ADMIN/tnsnames.ora $TNS_ADMIN/tnsname-ora-backup
    echo "${upper(lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "name"))}_CATALOG =
  (DESCRIPTION =
    (ADDRESS_LIST=
      (address = (protocol = tcp)(host = ${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "host")})(port = ${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "port")}))
      (address = (protocol = tcp)(host = ${lookup(var.shard_catalog_standbys[element(keys(var.shard_catalog_standbys), 0)], "host")})(port = ${lookup(var.shard_catalog_standbys[element(keys(var.shard_catalog_standbys), 0)], "port")}))
    )
    (CONNECT_DATA =
      (SERVICE_NAME = GDS\$CATALOG.oradbcloud)
    )
  )

${upper(lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "name"))} =
  (DESCRIPTION =
    (ADDRESS = (HOST = ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "host")})(PORT = ${lookup(var.shard_directors[element(keys(var.shard_directors), count.index)], "port")})(PROTOCOL = tcp))
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