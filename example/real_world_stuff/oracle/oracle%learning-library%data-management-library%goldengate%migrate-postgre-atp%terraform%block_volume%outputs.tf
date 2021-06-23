// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.

output "volume_id" {
  value = "${var.existing_volume_id == "" ? join("", oci_core_volume.block_volume.*.id) : var.existing_volume_id}"
}
