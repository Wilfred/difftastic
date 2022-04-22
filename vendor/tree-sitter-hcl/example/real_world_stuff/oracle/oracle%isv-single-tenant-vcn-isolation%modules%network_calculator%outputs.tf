// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

output peering_vcns {
  description = "list of peering vcn network cidrs"
  value       = local.peering_vcns
}

output tenant_vcns {
  description = "list of tenant vcn network cidrs"
  value       = local.tenant_vcns
}

output tenant_vcns_per_peering_vcn {
  description = "list tenant vcn network cidrs grouped by peering vcn index"
  value       = local.tenant_vcns_per_peering_vcn
}