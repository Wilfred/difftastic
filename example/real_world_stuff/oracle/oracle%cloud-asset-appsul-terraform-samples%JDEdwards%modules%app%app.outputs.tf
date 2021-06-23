/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "PrvIPs" {
  value = ["${oci_core_instance.jdeapp.*.private_ip}"]
}

output "HostNames" {
  value = ["${oci_core_instance.jdeapp.*.display_name}"]
}
