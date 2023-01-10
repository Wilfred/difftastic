// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

output peering_vcn {
  description = "the peering vcn `oci_core_vcn` resource"
  value       = oci_core_vcn.peering_vcn
}

output peering_subnet {
  description = "the peering subnet `oci_core_subnet` resource"
  value       = oci_core_subnet.peering_subnet
}

output peering_gateway_ids {
  description = "list of local peering gateway ocids"
  value       = [for lpg in oci_core_local_peering_gateway.peering_gateways : lpg.id]
}
