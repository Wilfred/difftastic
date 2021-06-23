// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

provider "opc" {
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.domain}"
  endpoint        = "${var.endpoint}"
}

data "opc_compute_storage_volume_snapshot" "snapshot1" {
  name = "my-bootable-storage-volume/my-colocated-snapshot"
}

resource "opc_compute_storage_volume" "volume1" {
  name         = "volume-from-storage-snapshot"
  snapshot     = "/Compute-${var.domain}/${var.user}/${data.opc_compute_storage_volume_snapshot.snapshot1.name}"
  size         = "${data.opc_compute_storage_volume_snapshot.snapshot1.size}"
  storage_type = "/oracle/public/storage/default"
  bootable     = "${data.opc_compute_storage_volume_snapshot.snapshot1.parent_volume_bootable}"
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
