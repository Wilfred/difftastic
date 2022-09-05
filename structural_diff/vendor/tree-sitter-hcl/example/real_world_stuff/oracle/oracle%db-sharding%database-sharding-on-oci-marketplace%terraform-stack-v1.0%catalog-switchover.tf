# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_catalog_switchover" {
  depends_on = ["null_resource.sdb_add_shard_director"]
  count      = "${(var.num_of_shard_groups > 1) ? var.num_of_gsm : 0}"

  #creates ssh connection to gsm host
  connection {
    type        = "ssh"
    user        = "${var.os_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${oci_core_instance.gsm_vm[count.index].public_ip}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  #mv $TNS_ADMIN/tnsnames.ora $TNS_ADMIN/tnsname-ora-backup-"${timestamp()}"

  provisioner "file" {
    content     = <<-EOF
    #!/bin/bash
    source ${var.oracle_base}/shard-director.sh
    echo "${upper(join("", [var.sharded_database_name, var.gsm_name_prefix, count.index]))}_CATALOG =
  (DESCRIPTION =
    (ADDRESS_LIST=
      (address = (protocol = tcp)(host = ${data.oci_core_vnic.catalog_db_node_vnic[0].public_ip_address})(port = ${oci_database_db_system.catalog_db[0].listener_port}))
      (address = (protocol = tcp)(host = ${data.oci_core_vnic.catalog_stby_db_node_vnic[0].public_ip_address})(port = ${data.oci_database_db_systems.catalog_stdby_db_systems[0].db_systems.0.listener_port}))
    )
    (CONNECT_DATA =
      (SERVICE_NAME = GDS\$CATALOG.oradbcloud)
    )
  )

${upper(join("", [var.sharded_database_name, var.gsm_name_prefix, count.index]))} =
  (DESCRIPTION =
    (ADDRESS = (HOST = ${oci_core_instance.gsm_vm[count.index].public_ip})(PORT = ${var.shard_director_port})(PROTOCOL = tcp))
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
      "${local.gsm_home_full_path}/enable-switchover-relocation-for-catalog.sh",
      "rm -f ${local.gsm_home_full_path}/enable-switchover-relocation-for-catalog.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "rm -f ${local.gsm_home_full_path}/enable-switchover-relocation-for-catalog.sh"
    ]
  }
}