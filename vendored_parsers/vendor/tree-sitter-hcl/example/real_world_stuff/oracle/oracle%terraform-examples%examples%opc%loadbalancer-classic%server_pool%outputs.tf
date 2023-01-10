// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

output "public_ip_addresses" {
  value = "${opc_compute_ip_address_reservation.ipres.*.ip_address}"
}

output "private_ip_addresses" {
  value = "${opc_compute_instance.server.*.ip_address}"
}

output "hostnames" {
  value = "${opc_compute_instance.server.*.hostname}"
}

output "vnicset" {
  value = "${opc_compute_vnic_set.vnicset.name}"
}

output "server_acl" {
  value = "${opc_compute_acl.acl.name}"
}
