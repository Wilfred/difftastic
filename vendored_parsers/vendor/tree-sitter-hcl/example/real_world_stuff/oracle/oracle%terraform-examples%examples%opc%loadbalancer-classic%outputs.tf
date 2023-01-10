// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

output "server_ip_address" {
  value = "${module.server_pool.public_ip_addresses}"
}

output "server_hostnames" {
  value = "${module.server_pool.hostnames}"
}

output "dns_instructions" {
  value = "Follow your DNS providers guidelines to create/update the CNAME record to redirect the domain `${var.dns_name}` to load balancers `canonical_host_name`"
}

output "canonical_host_name" {
  value = "${module.load_balancer.canonical_host_name}"
}
