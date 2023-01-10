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

output "master_ip" {
  value = "${google_compute_global_address.masters-ip.address}"
}

output "ingress_ip" {
  value = "${google_compute_address.ingress-ip.address}"
}

output "master_targetpool_self_link" {
  value = "${google_compute_target_pool.master-targetpool.self_link}"
}

output "worker_targetpool_self_link" {
  value = "${google_compute_target_pool.worker-targetpool.self_link}"
}

output "master_subnetwork_name" {
  value = "${google_compute_subnetwork.master-subnet.name}"
}

output "worker_subnetwork_name" {
  value = "${google_compute_subnetwork.worker-subnet.name}"
}

output "tectonic_network_name" {
  value = "${google_compute_network.network.name}"
}
