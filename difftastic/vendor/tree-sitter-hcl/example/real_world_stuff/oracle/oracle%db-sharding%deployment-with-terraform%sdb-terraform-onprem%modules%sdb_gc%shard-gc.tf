# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
resource "null_resource" "sdb_shard_gc" {
  count = "${length(var.shards)}"

  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shards[element(keys(var.shards), count.index)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  } 

  provisioner "remote-exec" {
    inline = [
    "rm -rf /tmp/terraform_*"
    ]
  }

  provisioner "remote-exec" {
    when = "destroy"
    inline = [
    "rm -rf /tmp/terraform_*"
    ]
  }
}