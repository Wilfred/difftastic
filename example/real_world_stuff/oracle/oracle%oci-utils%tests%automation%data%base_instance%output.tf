// Copyright (c) 2021 Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown
// at http:/oss.oracle.com/licenses/upl.

output "instance_private_ip" {
    value = oci_core_instance.test_instance.*.private_ip[0]
}

output "boot_volume_ocid" {
    value = oci_core_instance.test_instance.*.boot_volume_id[0]
}

output "instance_ocid" {
    value = oci_core_instance.test_instance.*.id[0]
}

