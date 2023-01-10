// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

output "ipnetwork" {
  value = "${opc_compute_ip_network.ipnetwork.name}"
}

output "cidr" {
  value = "${opc_compute_ip_network.ipnetwork.ip_address_prefix}"
}
