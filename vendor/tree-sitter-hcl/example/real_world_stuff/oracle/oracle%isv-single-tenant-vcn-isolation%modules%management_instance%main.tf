// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Create an example management server instance
 */

resource oci_core_instance management_server {
  availability_domain = var.availability_domain
  compartment_id      = var.compartment_id
  display_name        = var.display_name
  hostname_label      = var.hostname_label

  source_details {
    source_type = "image"
    source_id   = var.source_id
  }

  shape = var.shape

  metadata = {
    ssh_authorized_keys = file(var.remote_ssh_public_key_file)
  }

  create_vnic_details {
    subnet_id        = var.subnet_id
    assign_public_ip = false
    hostname_label   = var.hostname_label
    defined_tags   = var.defined_tags
    freeform_tags  = var.freeform_tags
  }

  defined_tags   = var.defined_tags
  freeform_tags  = var.freeform_tags

  connection {
    type        = "ssh"
    host        = oci_core_instance.management_server.private_ip
    user        = "opc"
    private_key = file(var.remote_ssh_private_key_file)

    bastion_host        = var.bastion_ip
    bastion_user        = "opc"
    bastion_private_key = file(var.bastion_ssh_private_key_file)
  }
}
