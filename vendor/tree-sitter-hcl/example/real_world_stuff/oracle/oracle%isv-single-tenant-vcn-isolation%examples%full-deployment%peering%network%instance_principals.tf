// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Configure and enable instance principles to modify routing rules
 */

resource "oci_identity_dynamic_group" "routing" {
  provider       = "oci.home"
  compartment_id = var.tenancy_ocid # dynamic groups must be in the root compartment
  name           = "routing_instances"
  description    = "Dynamic Group for Routing Instance Principles"
  # include all instances in the peering compartment
  matching_rule = "ANY {instance.compartment.id = '${data.terraform_remote_state.compartments.outputs.peering_compartment_id}'}"

}

resource "oci_identity_policy" "routing" {
  provider       = "oci.home"
  compartment_id = var.compartment_ocid # place in the parent compartment
  description    = "Policy for Routing Instance Principles"
  name           = "routing_instances"
  statements = [
    # only allow permission to modify vnics
    "Allow dynamic-group ${oci_identity_dynamic_group.routing.name} to use vnics in compartment ${var.compartment_name}",
    "Allow dynamic-group ${oci_identity_dynamic_group.routing.name} to use private-ips in compartment ${var.compartment_name}",
  ]
}
