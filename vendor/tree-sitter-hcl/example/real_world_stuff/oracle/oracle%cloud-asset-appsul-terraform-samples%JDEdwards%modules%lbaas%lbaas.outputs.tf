/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "lb_private_ip" {
  value = ["${oci_load_balancer.lb.*.ip_addresses}"]
}
output "lb_id" {
  value = ["${oci_load_balancer.lb.*.id}"]
}
