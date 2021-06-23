// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

module network_topology {
  source = "../../modules/network_calculator"

  number_of_tenants = var.number_of_tenants

  routing_instances_subnet_cidr = var.routing_instances_subnet_cidr

  tenant_peering_vcn_meta_cidr = var.tenant_peering_vcn_meta_cidr
  tenant_peering_vcn_mask      = var.tenant_peering_vcn_mask

  tenant_vcn_meta_cidr = var.tenant_vcn_meta_cidr
  tenant_vcn_mask      = var.tenant_vcn_mask

  peering_vcns_per_routing_instance             = var.peering_vcns_per_routing_instance
  local_peering_gateways_per_tenany_peering_vcn = var.local_peering_gateways_per_tenany_peering_vcn

}

output "tenant_vcns" {
  value = module.network_topology.tenant_vcns
}

output "peering_vcns" {
  value = module.network_topology.peering_vcns
}

output "tenant_vcns_per_peering_vcn" {
  value = module.network_topology.tenant_vcns_per_peering_vcn
}
