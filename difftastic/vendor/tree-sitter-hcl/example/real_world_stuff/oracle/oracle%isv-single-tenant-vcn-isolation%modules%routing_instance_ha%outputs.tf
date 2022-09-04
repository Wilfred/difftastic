// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

output instance {
  description = "the instanace `oci_core_instance` resource of the initial active instance in the HA cluster"
  value       = oci_core_instance.routing_server_a
}

output instance_a {
  description = "the instanace `oci_core_instance` resource of the first instance"
  value       = oci_core_instance.routing_server_a
}

output instance_b {
  description = "the instanace `oci_core_instance` resource of the second instance"
  value       = oci_core_instance.routing_server_b
}

output routing_ip {
  description = "the floating ip for the routing HA cluster"
  value       = oci_core_private_ip.floating_ip
}

output instance_vnics {
  description = "the list primary vnics for the routing instances"
  value = [
    data.oci_core_private_ips.routing_server_a_private_ip.private_ips[0].vnic_id,
    data.oci_core_private_ips.routing_server_b_private_ip.private_ips[0].vnic_id,
  ]
}

output hostname_label {
  description = "the common hostname for the floating ip"
  value       = var.hostname_label
}
