/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "Bastion_Public_IPs" {
value = ["${oci_core_instance.bastion.*.public_ip}"]
}