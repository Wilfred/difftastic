// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable hostname {
  type        = string
  description = "the HA hostname, i.e the hostname of the floating ip "
}

variable instance_a_primary_vnic_id {
  type        = string
  description = "ocid of the primary vnic of the first instance in the cluster"
}

variable instance_a_secondary_vnic_id {
  type        = string
  description = "ocid of the secondary vnic of the first instance in the cluster"
}

variable instance_b_primary_vnic_id {
  type        = string
  description = "ocid of the primary vnic of the second instance in the cluster"
}

variable instance_b_secondary_vnic_id {
  type        = string
  description = "ocid of the secondary vnic of the second instance in the cluster"
}

variable floating_ip {
  type        = string
  description = "the floating ip for the primary vnics"
}

variable floating_secondary_ip {
  type        = string
  description = "the floating ip for the secondary vnics"
}
