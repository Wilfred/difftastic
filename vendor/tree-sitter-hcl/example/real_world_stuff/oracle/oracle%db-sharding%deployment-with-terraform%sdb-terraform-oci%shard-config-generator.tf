# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "shard_config_generator" {
  count = "${var.num_of_shards}"
  #creates ssh connection
  connection {
    type = "ssh"
    user = "${var.local_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "localhost"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

 provisioner "file" {
    content  = <<-EOF
    "shard-${count.index}" = {
      host = "${var.shard_name_prefix}${count.index}"
      db_name = "${var.shard_name_prefix}${count.index}"
      availability_domain = "${lookup(data.oci_core_subnet.shardgroup_subnet[0],"availability_domain")}"
      subnet_id = "${lookup(var.shard_groups[element(keys(var.shard_groups), 0)], "subnet_id")}"  # OCI mandatory var
      shard_group = "${lookup(var.shard_groups[element(keys(var.shard_groups), 0)], "name")}"
      pdb_name = "${var.pdb_name}"
      data_storage_size_in_gb = "${var.data_storage_size_in_gb}"
    }
    EOF
    destination = "${abspath(path.root)}/primary-shards-${count.index}.pvars"
   }
} 
 