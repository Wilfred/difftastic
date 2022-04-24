/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


# Fetch Windows instance credemtials
data "oci_core_instance_credentials" "win" {
  count       = "${var.compute_platform != "linux" ? var.compute_instance_count : 0}"
  instance_id = "${oci_core_instance.compute.*.id[count.index]}"
}
