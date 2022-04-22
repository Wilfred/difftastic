// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

module bastion_instance {
  source = "../../../../modules/bastion_instance"

  compartment_id      = data.terraform_remote_state.compartments.outputs.management_compartment_id
  source_id           = data.oci_core_images.oraclelinux.images.0.id
  subnet_id           = data.terraform_remote_state.management_network.outputs.access_subnet_id
  availability_domain = local.availability_domain

  bastion_ssh_public_key_file  = var.bastion_ssh_public_key_file
  bastion_ssh_private_key_file = var.bastion_ssh_private_key_file
  remote_ssh_public_key_file   = var.remote_ssh_public_key_file
  remote_ssh_private_key_file  = var.remote_ssh_private_key_file

  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "bastion_ip" {
  value = module.bastion_instance.instance_ip
}
