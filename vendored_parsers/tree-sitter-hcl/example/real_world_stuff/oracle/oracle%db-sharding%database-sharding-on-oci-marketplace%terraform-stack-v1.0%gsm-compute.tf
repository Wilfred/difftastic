# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "oci_core_instance" "gsm_vm" {
  depends_on          = ["tls_private_key.public_private_key_pair"]
  count               = var.num_of_gsm
  compartment_id      = var.compartment_ocid
  display_name        = join("", [var.sharded_database_name, var.gsm_name_prefix, count.index])
  availability_domain = data.oci_identity_availability_domains.ADs.availability_domains[count.index % local.num_of_ads].name
  shape               = var.compute_shape

  create_vnic_details {
    subnet_id        = var.create_new_network ? join("", oci_core_subnet.subnet.*.id) : var.subnet_id
    display_name     = "Primary-vnic"
    assign_public_ip = var.assign_public_ip
    hostname_label   = join("", [var.sharded_database_name, var.gsm_name_prefix, count.index])
  }

  fault_domain = data.oci_identity_fault_domains.FDs[count.index % local.num_of_ads].fault_domains[floor(count.index / length(data.oci_identity_fault_domains.FDs[count.index % local.num_of_ads].fault_domains))].name

  source_details {
    source_type = "image"
    source_id   = local.mp_listing_resource_id
  }

  metadata = {
    ssh_authorized_keys = join(
      "\n",
      [
        var.ssh_public_key,
        tls_private_key.public_private_key_pair.public_key_openssh
      ]
    )
  }

  timeouts {
    create = "60m"
  }
}

output "shard_directors_public_ip" {
  value = [oci_core_instance.gsm_vm.*.public_ip]
}