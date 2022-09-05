// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

output routing_id {
  description = "ocid of the new route table for the management subnet"
  value       = oci_core_route_table_attachment.management_route_table_attachment.id
}