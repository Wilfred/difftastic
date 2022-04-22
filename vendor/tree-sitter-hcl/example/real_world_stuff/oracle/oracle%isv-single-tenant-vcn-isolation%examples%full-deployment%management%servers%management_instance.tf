// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Create the management server instance
 */

module management_instance {
  source = "../../../../modules/management_instance"

  compartment_id      = data.terraform_remote_state.compartments.outputs.management_compartment_id
  source_id           = data.oci_core_images.oraclelinux.images.0.id
  subnet_id           = data.terraform_remote_state.management_network.outputs.management_subnet_id
  availability_domain = local.availability_domain
  bastion_ip          = local.bastion_ip

  bastion_ssh_private_key_file = var.bastion_ssh_private_key_file
  remote_ssh_public_key_file   = var.remote_ssh_public_key_file
  remote_ssh_private_key_file  = var.remote_ssh_private_key_file

  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "management_ip" {
  value = module.management_instance.instance_ip
}
