# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "catalog_config_consolidator" {
  depends_on = ["null_resource.catalog_config_generator"]
  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.local_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "localhost"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

    provisioner "remote-exec" {
    inline = [
    "rm -f ${abspath(path.root)}/shard-catalogs.auto.tfvars",
    "echo shard_catalogs = { >> ${abspath(path.root)}/shard-catalogs.auto.tfvars",
    "cat ${abspath(path.root)}/shard-catalogs-*.pvars >> ${abspath(path.root)}/shard-catalogs.auto.tfvars",
    "echo } >> ${abspath(path.root)}/shard-catalogs.auto.tfvars",
    "rm -f ${abspath(path.root)}/shard-catalogs-*.pvars"
    ]
  }
}