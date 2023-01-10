/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "ComputePrivateIPs" {
value = ["${oci_core_instance.compute.*.private_ip}"]
}

output "ComputeWinHostNames" {
  value = ["${oci_core_instance.compute.*.display_name}"]
}

output "ComputeWinusers" {
value = ["${data.oci_core_instance_credentials.win.*.username}"]
}

output "ComputeWincreds" {
value = ["${data.oci_core_instance_credentials.win.*.password}"]
}

