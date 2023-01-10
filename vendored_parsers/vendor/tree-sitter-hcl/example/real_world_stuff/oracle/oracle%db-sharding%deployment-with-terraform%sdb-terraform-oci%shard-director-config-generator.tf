# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "shard_director_config_generator" {
  count = "${length(var.shard_groups) * var.num_of_gsm_per_ad}"
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
    "shard-director-${count.index}" = {
      name = "${var.gsm_name_prefix}${count.index}"
      host = "${var.gsm_name_prefix}${count.index}"
      port = "1522"
      availability_domain = "${lookup(data.oci_core_subnet.shardgroup_subnet[floor(count.index/var.num_of_gsm_per_ad)],"availability_domain")}"
      subnet_id = "${lookup(var.shard_groups[element(keys(var.shard_groups), floor(count.index/var.num_of_gsm_per_ad))], "subnet_id")}"  # OCI mandatory var
      gds_region = "${element(var.gds_regions, floor(count.index/var.num_of_gsm_per_ad))}"
    }
    EOF
    destination = "${abspath(path.root)}/shard-directors-${count.index}.pvars"
   }
}