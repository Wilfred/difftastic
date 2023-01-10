# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "oci_core_instance" "gsm_vm" {
  depends_on = ["null_resource.shard_director_config_consolidator"]
  count               = length(var.shard_directors)
  compartment_id      = var.compartment_ocid
  display_name        = var.shard_directors[element(keys(var.shard_directors), count.index)]["name"]
  availability_domain = var.shard_directors[element(keys(var.shard_directors), count.index)]["availability_domain"]
  shape               = var.compute_shape

  create_vnic_details {
    subnet_id        = var.shard_directors[element(keys(var.shard_directors), count.index)]["subnet_id"]
    display_name     = "Primary-vnic"
    assign_public_ip = var.assign_public_ip
    hostname_label   = var.shard_directors[element(keys(var.shard_directors), count.index)]["host"]
  }

  source_details {
    source_type = "image"
    source_id   = var.compute_image_source_ocid
  }

  metadata = {
    ssh_authorized_keys = file(var.ssh_public_key_path)
  }
  timeouts {
    create = "60m"
  }
}

output "gsm_instance_private_ips" {
  value = [oci_core_instance.gsm_vm.*.private_ip]
}
