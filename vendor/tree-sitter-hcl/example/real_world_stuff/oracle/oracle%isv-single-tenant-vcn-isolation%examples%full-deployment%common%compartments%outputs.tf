// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

output "management_compartment_id" {
  value = module.management_compartment.compartment_id
}

output "peering_compartment_id" {
  value = module.peering_compartment.compartment_id
}

output "tenant_1_compartment_id" {
  value = module.tenant_1_compartment.compartment_id
}

output "tenant_2_compartment_id" {
  value = module.tenant_2_compartment.compartment_id
}

output "tenant_3_compartment_id" {
  value = module.tenant_3_compartment.compartment_id
}

output "tenant_4_compartment_id" {
  value = module.tenant_4_compartment.compartment_id
}