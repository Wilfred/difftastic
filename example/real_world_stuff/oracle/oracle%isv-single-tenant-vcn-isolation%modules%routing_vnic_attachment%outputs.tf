// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

output routing_secondary_vnic_id {
  description = "ocid of the vnic attachment"
  value       = oci_core_vnic_attachment.routing_vnic_attachmment.vnic_id
}