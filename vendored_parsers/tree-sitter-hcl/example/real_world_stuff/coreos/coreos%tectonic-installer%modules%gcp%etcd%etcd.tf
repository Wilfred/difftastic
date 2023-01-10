/*
Copyright 2017 Google Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

resource "google_compute_instance" "etcd-node" {
  name           = "${var.cluster_name}-etcd-${count.index}"
  count          = "${length(var.external_endpoints) == 0 ? var.instance_count : 0}"
  machine_type   = "${var.machine_type}"
  can_ip_forward = false
  zone           = "${element(var.zone_list, count.index)}"

  boot_disk {
    initialize_params {
      image = "coreos-${var.cl_channel}"
      type  = "${var.disk_type}"
      size  = "${var.disk_size}"
    }
  }

  network_interface {
    subnetwork = "${var.master_subnetwork_name}"

    access_config = {
      // Ephemeral IP
    }
  }

  tags = ["tectonic-etcd"]

  metadata = {
    user-data = "${data.ignition_config.etcd.*.rendered[count.index]}"
    sshKeys   = "core:${file(var.public_ssh_key)}"
  }
}
