// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Calculate the peering and tenant network cidr ranges for this deployment
 */

module network_topology {
  source = "../../../../modules/network_calculator"

  number_of_tenants = 4

  routing_instances_subnet_cidr = "10.254.100.0/24"

  tenant_peering_vcn_meta_cidr = "10.253.0.0/16"
  tenant_peering_vcn_mask      = 29

  tenant_vcn_meta_cidr      = "10.0.0.0/8"
  tenant_vcn_mask           = 16
  tenant_vcn_starting_block = 1 # first tenant is 10.1.0.0/16

  peering_vcns_per_routing_instance             = 1
  local_peering_gateways_per_tenany_peering_vcn = 2
}
