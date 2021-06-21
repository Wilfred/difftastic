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

provider "google" {
  region  = "${var.tectonic_gcp_region}"
  version = "1.2.0"
}

module "container_linux" {
  source = "../../modules/container_linux"

  release_channel = "${var.tectonic_container_linux_channel}"
  release_version = "${var.tectonic_container_linux_version}"
}

module "network" {
  source = "../../modules/gcp/network"

  base_domain           = "${var.tectonic_base_domain}"
  cluster_name          = "${var.tectonic_cluster_name}"
  gcp_region            = "${var.tectonic_gcp_region}"
  managed_zone_name     = "${var.tectonic_gcp_ext_google_managedzone_name}"
  master_instance_group = "${module.masters.instance_group}"
  master_ip_cidr_range  = "10.10.0.0/16"
  worker_ip_cidr_range  = "10.11.0.0/16"
}

data "google_compute_zones" "available" {}

module "etcd" {
  source = "../../modules/gcp/etcd"

  base_domain                = "${var.tectonic_base_domain}"
  cl_channel                 = "${var.tectonic_container_linux_channel}"
  cluster_name               = "${var.tectonic_cluster_name}"
  container_image            = "${var.tectonic_container_images["etcd"]}"
  disk_size                  = "${var.tectonic_gcp_etcd_disk_size}"
  disk_type                  = "${var.tectonic_gcp_etcd_disktype}"
  external_endpoints         = ["${compact(var.tectonic_etcd_servers)}"]
  ign_etcd_crt_id_list       = "${module.ignition_masters.etcd_crt_id_list}"
  ign_etcd_dropin_id_list    = "${module.ignition_masters.etcd_dropin_id_list}"
  ign_ntp_dropin_id          = "${length(var.tectonic_ntp_servers) > 0 ? module.ignition_masters.ntp_dropin_id : ""}"
  ign_profile_env_id         = "${module.ignition_masters.profile_env_id}"
  ign_systemd_default_env_id = "${module.ignition_masters.systemd_default_env_id}"
  instance_count             = "${var.tectonic_self_hosted_etcd != "" ? 0 : var.tectonic_etcd_count > 0 ? var.tectonic_etcd_count : length(data.google_compute_zones.available.names) == 5 ? 5 : 3}"
  machine_type               = "${var.tectonic_gcp_etcd_gce_type}"
  managed_zone_name          = "${var.tectonic_gcp_ext_google_managedzone_name}"
  master_subnetwork_name     = "${module.network.master_subnetwork_name}"
  public_ssh_key             = "${var.tectonic_gcp_ssh_key}"
  tls_enabled                = "${var.tectonic_etcd_tls_enabled}"
  zone_list                  = "${data.google_compute_zones.available.names}"
}

module "masters" {
  source = "../../modules/gcp/master-igm"

  cl_channel       = "${var.tectonic_container_linux_channel}"
  cluster_name     = "${var.tectonic_cluster_name}"
  container_images = "${var.tectonic_container_images}"
  disk_size        = "${var.tectonic_gcp_master_disk_size}"
  disk_type        = "${var.tectonic_gcp_master_disktype}"

  region             = "${var.tectonic_gcp_region}"
  instance_count     = "${var.tectonic_master_count}"
  machine_type       = "${var.tectonic_gcp_master_gce_type}"
  cluster_name       = "${var.tectonic_cluster_name}"
  public_ssh_key     = "${var.tectonic_gcp_ssh_key}"
  kubeconfig_content = "${module.bootkube.kubeconfig}"

  master_subnetwork_name      = "${module.network.master_subnetwork_name}"
  master_targetpool_self_link = "${module.network.master_targetpool_self_link}"

  assets_gcs_location               = "${google_storage_bucket.assets_storage_bucket.name}/${google_storage_bucket_object.tectonic-assets.name}"
  ign_init_assets_service_id        = "${module.ignition_masters.init_assets_service_id}"
  ign_gcs_puller_id                 = "${module.ignition_masters.gcs_puller_id}"
  ign_k8s_node_bootstrap_service_id = "${module.ignition_masters.k8s_node_bootstrap_service_id}"

  ign_bootkube_path_unit_id            = "${module.bootkube.systemd_path_unit_id}"
  ign_bootkube_service_id              = "${module.bootkube.systemd_service_id}"
  ign_ca_cert_id_list                  = "${module.ignition_masters.ca_cert_id_list}"
  ign_docker_dropin_id                 = "${module.ignition_masters.docker_dropin_id}"
  ign_installer_kubelet_env_id         = "${module.ignition_masters.installer_kubelet_env_id}"
  ign_installer_runtime_mappings_id    = "${module.ignition_masters.installer_runtime_mappings_id}"
  ign_iscsi_service_id                 = "${module.ignition_masters.iscsi_service_id}"
  ign_k8s_node_bootstrap_service_id    = "${module.ignition_masters.k8s_node_bootstrap_service_id}"
  ign_kubelet_service_id               = "${module.ignition_masters.kubelet_service_id}"
  ign_locksmithd_service_id            = "${module.ignition_masters.locksmithd_service_id}"
  ign_max_user_watches_id              = "${module.ignition_masters.max_user_watches_id}"
  ign_nfs_config_id                    = "${var.tectonic_nfs_config_file != "" ? module.ignition_masters.nfs_config_id : ""}"
  ign_ntp_dropin_id                    = "${length(var.tectonic_ntp_servers) > 0 ? module.ignition_masters.ntp_dropin_id : ""}"
  ign_profile_env_id                   = "${module.ignition_masters.profile_env_id}"
  ign_systemd_default_env_id           = "${module.ignition_masters.systemd_default_env_id}"
  ign_tectonic_path_unit_id            = "${var.tectonic_vanilla_k8s ? "" : module.tectonic.systemd_path_unit_id}"
  ign_tectonic_service_id              = "${module.tectonic.systemd_service_id}"
  ign_update_ca_certificates_dropin_id = "${module.ignition_masters.update_ca_certificates_dropin_id}"
  image_re                             = "${var.tectonic_image_re}"
  instance_count                       = "${var.tectonic_master_count}"
  kubeconfig_content                   = "${module.bootkube.kubeconfig}"
  machine_type                         = "${var.tectonic_gcp_master_gce_type}"
  master_subnetwork_name               = "${module.network.master_subnetwork_name}"
  master_targetpool_self_link          = "${module.network.master_targetpool_self_link}"
  public_ssh_key                       = "${var.tectonic_gcp_ssh_key}"
  region                               = "${var.tectonic_gcp_region}"
}

module "workers" {
  source = "../../modules/gcp/worker-igm"

  cl_channel   = "${var.tectonic_container_linux_channel}"
  cluster_name = "${var.tectonic_cluster_name}"
  disk_size    = "${var.tectonic_gcp_worker_disk_size}"
  disk_type    = "${var.tectonic_gcp_worker_disktype}"

  ign_ca_cert_id_list                  = "${module.ignition_masters.ca_cert_id_list}"
  ign_docker_dropin_id                 = "${module.ignition_workers.docker_dropin_id}"
  ign_installer_kubelet_env_id         = "${module.ignition_workers.installer_kubelet_env_id}"
  ign_installer_runtime_mappings_id    = "${module.ignition_masters.installer_runtime_mappings_id}"
  ign_iscsi_service_id                 = "${module.ignition_workers.iscsi_service_id}"
  ign_k8s_node_bootstrap_service_id    = "${module.ignition_workers.k8s_node_bootstrap_service_id}"
  ign_kubelet_service_id               = "${module.ignition_workers.kubelet_service_id}"
  ign_locksmithd_service_id            = "${module.ignition_workers.locksmithd_service_id}"
  ign_max_user_watches_id              = "${module.ignition_workers.max_user_watches_id}"
  ign_nfs_config_id                    = "${var.tectonic_nfs_config_file != "" ? module.ignition_workers.nfs_config_id : ""}"
  ign_ntp_dropin_id                    = "${length(var.tectonic_ntp_servers) > 0 ? module.ignition_workers.ntp_dropin_id : ""}"
  ign_profile_env_id                   = "${module.ignition_workers.profile_env_id}"
  ign_systemd_default_env_id           = "${module.ignition_workers.systemd_default_env_id}"
  ign_update_ca_certificates_dropin_id = "${module.ignition_workers.update_ca_certificates_dropin_id}"
  instance_count                       = "${var.tectonic_worker_count}"
  kubeconfig_content                   = "${module.bootkube.kubeconfig}"
  machine_type                         = "${var.tectonic_gcp_worker_gce_type}"
  public_ssh_key                       = "${var.tectonic_gcp_ssh_key}"
  region                               = "${var.tectonic_gcp_region}"
  worker_subnetwork_name               = "${module.network.worker_subnetwork_name}"
  worker_targetpool_self_link          = "${module.network.worker_targetpool_self_link}"
}

module "ignition_masters" {
  source = "../../modules/ignition"

  assets_location           = "${google_storage_bucket.assets_storage_bucket.name}/${google_storage_bucket_object.tectonic-assets.name}"
  bootstrap_upgrade_cl      = "${var.tectonic_bootstrap_upgrade_cl}"
  cluster_name              = "${var.tectonic_cluster_name}"
  container_images          = "${var.tectonic_container_images}"
  custom_ca_cert_pem_list   = "${var.tectonic_custom_ca_pem_list}"
  etcd_advertise_name_list  = "${data.template_file.etcd_hostname_list.*.rendered}"
  etcd_ca_cert_pem          = "${module.etcd_certs.etcd_ca_crt_pem}"
  etcd_client_crt_pem       = "${module.etcd_certs.etcd_client_crt_pem}"
  etcd_client_key_pem       = "${module.etcd_certs.etcd_client_key_pem}"
  etcd_count                = "${length(data.template_file.etcd_hostname_list.*.id)}"
  etcd_initial_cluster_list = "${data.template_file.etcd_hostname_list.*.rendered}"
  etcd_peer_crt_pem         = "${module.etcd_certs.etcd_peer_crt_pem}"
  etcd_peer_key_pem         = "${module.etcd_certs.etcd_peer_key_pem}"
  etcd_server_crt_pem       = "${module.etcd_certs.etcd_server_crt_pem}"
  etcd_server_key_pem       = "${module.etcd_certs.etcd_server_key_pem}"
  etcd_tls_enabled          = "${var.tectonic_etcd_tls_enabled}"
  http_proxy                = "${var.tectonic_http_proxy_address}"
  http_proxy_enabled        = "${local.tectonic_http_proxy_enabled}"
  https_proxy               = "${var.tectonic_https_proxy_address}"
  image_re                  = "${var.tectonic_image_re}"
  ingress_ca_cert_pem       = "${module.ingress_certs.ca_cert_pem}"
  iscsi_enabled             = "${var.tectonic_iscsi_enabled}"
  kube_ca_cert_pem          = "${module.kube_certs.ca_cert_pem}"
  kube_dns_service_ip       = "${module.bootkube.kube_dns_service_ip}"
  kubelet_cni_bin_dir       = "${var.tectonic_networking == "calico" || var.tectonic_networking == "canal" ? "/var/lib/cni/bin" : "" }"
  kubelet_debug_config      = "${var.tectonic_kubelet_debug_config}"
  kubelet_node_label        = "node-role.kubernetes.io/master"
  kubelet_node_taints       = "node-role.kubernetes.io/master=:NoSchedule"
  nfs_config_file           = "${local._tectonic_nfs_config_file}"
  no_proxy                  = "${var.tectonic_no_proxy}"
  ntp_servers               = "${var.tectonic_ntp_servers}"
  proxy_exclusive_units     = "${var.tectonic_proxy_exclusive_units}"
  tectonic_vanilla_k8s      = "${var.tectonic_vanilla_k8s}"
}

module "ignition_workers" {
  source = "../../modules/ignition"

  bootstrap_upgrade_cl    = "${var.tectonic_bootstrap_upgrade_cl}"
  cluster_name            = "${var.tectonic_cluster_name}"
  container_images        = "${var.tectonic_container_images}"
  custom_ca_cert_pem_list = "${var.tectonic_custom_ca_pem_list}"
  etcd_ca_cert_pem        = "${module.etcd_certs.etcd_ca_crt_pem}"
  http_proxy              = "${var.tectonic_http_proxy_address}"
  http_proxy_enabled      = "${local.tectonic_http_proxy_enabled}"
  https_proxy             = "${var.tectonic_https_proxy_address}"
  image_re                = "${var.tectonic_image_re}"
  ingress_ca_cert_pem     = "${module.ingress_certs.ca_cert_pem}"
  iscsi_enabled           = "${var.tectonic_iscsi_enabled}"
  kube_ca_cert_pem        = "${module.kube_certs.ca_cert_pem}"
  kube_dns_service_ip     = "${module.bootkube.kube_dns_service_ip}"
  kubelet_cni_bin_dir     = "${var.tectonic_networking == "calico" || var.tectonic_networking == "canal" ? "/var/lib/cni/bin" : "" }"
  kubelet_debug_config    = "${var.tectonic_kubelet_debug_config}"
  kubelet_node_label      = "node-role.kubernetes.io/node"
  kubelet_node_taints     = ""
  nfs_config_file         = "${local._tectonic_nfs_config_file}"
  no_proxy                = "${var.tectonic_no_proxy}"
  ntp_servers             = "${var.tectonic_ntp_servers}"
  proxy_exclusive_units   = "${var.tectonic_proxy_exclusive_units}"
  tectonic_vanilla_k8s    = "${var.tectonic_vanilla_k8s}"
}

module "dns" {
  source = "../../modules/dns/gcp"

  base_domain         = "${var.tectonic_base_domain}"
  cluster_name        = "${var.tectonic_cluster_name}"
  etcd_dns_enabled    = "${var.tectonic_self_hosted_etcd == "" && length(compact(var.tectonic_etcd_servers)) == 0}"
  etcd_instance_count = "${var.tectonic_self_hosted_etcd != "" ? 0 : var.tectonic_etcd_count > 0 ? var.tectonic_etcd_count : length(data.google_compute_zones.available.names) == 5 ? 5 : 3}"
  etcd_ip_addresses   = "${module.etcd.etcd_ip_addresses}"
  external_endpoints  = ["${compact(var.tectonic_etcd_servers)}"]
  managed_zone_name   = "${var.tectonic_gcp_ext_google_managedzone_name}"
  tectonic_ingress_ip = "${module.network.ingress_ip}"
  tectonic_masters_ip = "${module.network.master_ip}"
  tls_enabled         = "${var.tectonic_etcd_tls_enabled}"
}
