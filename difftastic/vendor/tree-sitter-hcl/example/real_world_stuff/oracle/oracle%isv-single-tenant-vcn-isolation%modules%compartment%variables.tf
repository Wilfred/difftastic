// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable root_compartment_id {
  type        = string
  description = "parent compartment for the new compartment to be created in"
}

variable compartment_name {
  type        = string
  description = "compartment name"
}

variable freeform_tags {
  type        = map
  description = "map of freeform tags to apply to all resources created by this module"
  default     = {}
}

variable defined_tags {
  type        = map
  description = "map of defined tags to apply to all resources created by this module"
  default     = {}
}

variable enable_delete {
  type        = bool
  description = "fully delete the compartment on destroy, by default compartments as retained for reuse"
  default     = false
}