// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.

resource "oci_core_volume" "block_volume" {
  count               = var.existing_volume_id != "" ? 0 : 1
  compartment_id      = var.compartment_ocid
  availability_domain = var.availability_domain
  display_name        = var.display_name
  size_in_gbs         = var.size_in_gbs
}
