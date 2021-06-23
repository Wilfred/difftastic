// Copyright © 2017 Oracle and/or its affiliates.  All rights reserved.
// Licensed under the Universal Permissive License v 1.0

variable ip_exchange_name {
  description = "Name for the IP Network Exchange resource."
}

variable subnet_cidrs {
  type        = "list"
  description = "List of CIDRs for the IP Network subnets. An separate IP Network resource will be created for each CIDR. Network address ranges must not overlap."
}

variable subnet_names {
  type        = "list"
  description = "List of names for the IP Networks subnets corresponding to the list of the `subnet_cidrs`."
}

variable public_napt_subnets {
  type        = "list"
  description = "Names of the IP Network subnets to be enabled for public internet access using NAPT. NAPT is disabled by default."
  default     = []
}

variable tags {
  type        = "list"
  description = "(Optional) List of Tags to apply to all resources created by this module."
  default     = []
}
