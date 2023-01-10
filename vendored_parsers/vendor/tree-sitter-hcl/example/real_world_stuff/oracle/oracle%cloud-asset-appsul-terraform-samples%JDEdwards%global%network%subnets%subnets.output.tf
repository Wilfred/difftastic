/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/

output "subnet_ids" {
  value = ["${oci_core_subnet.subnet.*.id}"]
}

output "subnet_names" {
  value = ["${oci_core_subnet.subnet.*.subnet_domain_name}"]
}