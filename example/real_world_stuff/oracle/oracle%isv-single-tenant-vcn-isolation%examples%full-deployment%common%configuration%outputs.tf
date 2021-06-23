// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

output "tenant_vcns" {
  value = module.network_topology.tenant_vcns
}

output "peering_vcns" {
  value = module.network_topology.peering_vcns
}

output "tenant_vcns_per_peering_vcn" {
  value = module.network_topology.tenant_vcns_per_peering_vcn
}
