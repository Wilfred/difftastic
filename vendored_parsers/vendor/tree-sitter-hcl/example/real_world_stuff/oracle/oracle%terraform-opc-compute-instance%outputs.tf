// Copyright © 2017 Oracle and/or its affiliates.  All rights reserved.
// Licensed under the Universal Permissive License v 1.0

output "instance_id" {
  description = "The `opc_compute_instance` id."
  value       = "${opc_compute_instance.instance.id}"
}

output "private_ip_address" {
  description = "The private IP address of the instance."
  value       = "${opc_compute_instance.instance.ip_address}"
}
