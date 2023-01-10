// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

provider "opc" {
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.domain}"
  endpoint        = "${var.endpoint}"
}

data "opc_compute_storage_volume_snapshot" "snapshot1" {
  name = "my-bootable-storage-volume/my-storage-volume-snapshot"
}

resource "opc_compute_storage_volume" "volume1" {
  name        = "volume-from-storage-snapshot"
  snapshot_id = "${data.opc_compute_storage_volume_snapshot.snapshot1.snapshot_id}"
  size        = "${data.opc_compute_storage_volume_snapshot.snapshot1.size}"
  bootable    = true
}

resource "opc_compute_instance" "instance1" {
  name  = "instance1"
  label = "instance1"
  shape = "oc3"

  storage {
    index  = 1
    volume = "${opc_compute_storage_volume.volume1.name}"
  }

  boot_order = [1]
}
