// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable routing_instances_subnet_cidr {
  type        = string
  description = "subnet cidr for the routing instances"
}

variable tenant_peering_vcn_meta_cidr {
  type        = string
  description = "netork cidr for that al tenant peering vcn must bee within"
}

variable tenant_peering_vcn_mask {
  type        = number
  description = "a minimum of /29 is needed for HA deployments"
  default     = 29
}

variable tenant_vcn_meta_cidr {
  type        = string
  description = "network cidr that all tenant vcns must be within"
}

variable tenant_vcn_mask {
  type        = number
  description = "network mask for each tenant vcn"
}

variable tenant_vcn_starting_block {
  type        = number
  description = "first subnet cidr block in the meta range to allocate"
  default     = 0
}

variable peering_vcns_per_routing_instance {
  type        = number
  description = "number of tenany peering VCNs per routing instance. i.e. number of secondard vnic attachments per instance"
  default     = 1
}

variable local_peering_gateways_per_tenany_peering_vcn {
  type        = number
  description = "number of local peering gateways per tanenct peering vcn."
  default     = 10
}

variable number_of_tenants {
  type        = number
  description = "number of tenant vcns to peer"
}
