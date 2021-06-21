provider "azurerm" {
  version       = "0.3.1"
  environment   = "${var.tectonic_azure_cloud_environment}"
  client_secret = "${var.tectonic_azure_client_secret}"
}

data "azurerm_client_config" "current" {}

module "container_linux" {
  source = "../../modules/container_linux"

  release_channel = "${var.tectonic_container_linux_channel}"
  release_version = "${var.tectonic_container_linux_version}"
}

module "resource_group" {
  source = "../../modules/azure/resource-group"

  external_rsg_id = "${var.tectonic_azure_external_resource_group}"
  azure_location  = "${var.tectonic_azure_location}"
  cluster_name    = "${var.tectonic_cluster_name}"
  cluster_id      = "${module.tectonic.cluster_id}"
  extra_tags      = "${var.tectonic_azure_extra_tags}"
}

module "vnet" {
  source = "../../modules/azure/vnet"

  location            = "${var.tectonic_azure_location}"
  resource_group_name = "${module.resource_group.name}"
  cluster_name        = "${var.tectonic_cluster_name}"
  cluster_id          = "${module.tectonic.cluster_id}"
  base_domain         = "${var.tectonic_base_domain}"
  vnet_cidr_block     = "${var.tectonic_azure_vnet_cidr_block}"

  etcd_count           = "${local.etcd_count}"
  master_count         = "${var.tectonic_master_count}"
  worker_count         = "${var.tectonic_worker_count}"
  etcd_cidr            = "${module.vnet.etcd_cidr}"
  master_cidr          = "${module.vnet.master_cidr}"
  worker_cidr          = "${module.vnet.worker_cidr}"
  ssh_network_internal = "${var.tectonic_azure_ssh_network_internal}"
  ssh_network_external = "${var.tectonic_azure_ssh_network_external}"

  external_vnet_id          = "${var.tectonic_azure_external_vnet_id}"
  external_master_subnet_id = "${var.tectonic_azure_external_master_subnet_id}"
  external_worker_subnet_id = "${var.tectonic_azure_external_worker_subnet_id}"
  external_nsg_master_id    = "${var.tectonic_azure_external_nsg_master_id}"
  external_nsg_worker_id    = "${var.tectonic_azure_external_nsg_worker_id}"

  extra_tags = "${var.tectonic_azure_extra_tags}"

  private_cluster = "${var.tectonic_azure_private_cluster}"
}

module "etcd" {
  source = "../../modules/azure/etcd"

  base_domain                = "${var.tectonic_base_domain}"
  cluster_id                 = "${module.tectonic.cluster_id}"
  cluster_name               = "${var.tectonic_cluster_name}"
  container_image            = "${var.tectonic_container_images["etcd"]}"
  container_linux_channel    = "${var.tectonic_container_linux_channel}"
  container_linux_version    = "${module.container_linux.version}"
  etcd_count                 = "${local.etcd_count}"
  extra_tags                 = "${var.tectonic_azure_extra_tags}"
  fault_domains              = "${var.tectonic_azure_location_fault_domains["${var.tectonic_azure_location}"]}"
  ign_etcd_crt_id_list       = "${module.ignition_masters.etcd_crt_id_list}"
  ign_etcd_dropin_id_list    = "${module.ignition_masters.etcd_dropin_id_list}"
  ign_ntp_dropin_id          = "${length(var.tectonic_ntp_servers) > 0 ? module.ignition_masters.ntp_dropin_id : ""}"
  ign_profile_env_id         = "${module.ignition_masters.profile_env_id}"
  ign_systemd_default_env_id = "${module.ignition_masters.systemd_default_env_id}"
  location                   = "${var.tectonic_azure_location}"
  network_interface_ids      = "${module.vnet.etcd_network_interface_ids}"
  public_ssh_key             = "${var.tectonic_azure_ssh_key}"
  resource_group_name        = "${module.resource_group.name}"
  root_volume_size           = "${var.tectonic_azure_etcd_root_volume_size}"
  storage_id                 = "${module.resource_group.storage_id}"
  storage_type               = "${var.tectonic_azure_etcd_storage_type}"
  tls_enabled                = "${var.tectonic_etcd_tls_enabled}"
  versions                   = "${var.tectonic_versions}"
  vm_size                    = "${var.tectonic_azure_etcd_vm_size}"
}

# Workaround for https://github.com/hashicorp/terraform/issues/4084
data "null_data_source" "cloud_provider" {
  inputs = {
    "aadClientId"                = "${data.azurerm_client_config.current.client_id}"
    "aadClientSecret"            = "${var.tectonic_azure_client_secret}"
    "cloud"                      = "${var.tectonic_azure_cloud_environment}"
    "location"                   = "${var.tectonic_azure_location}"
    "primaryAvailabilitySetName" = "${module.workers.availability_set_name}"
    "resourceGroup"              = "${module.resource_group.name}"
    "securityGroupName"          = "${module.vnet.worker_nsg_name}"
    "subnetName"                 = "${module.vnet.worker_subnet_name}"
    "subscriptionId"             = "${data.azurerm_client_config.current.subscription_id}"
    "tenantId"                   = "${data.azurerm_client_config.current.tenant_id}"
    "vnetName"                   = "${module.vnet.vnet_id}"
    "vnetResourceGroup"          = "${module.vnet.vnet_resource_group}"
  }
}

data "template_file" "etcd_advertise_name_list" {
  count    = "${local.etcd_count}"
  template = "$$$$$$$${COREOS_AZURE_IPV4_DYNAMIC}"
}

module "ignition_masters" {
  source = "../../modules/ignition"

  base_domain               = "${var.tectonic_base_domain}"
  bootstrap_upgrade_cl      = "${var.tectonic_bootstrap_upgrade_cl}"
  cloud_provider            = "azure"
  cloud_provider_config     = "${jsonencode(data.null_data_source.cloud_provider.inputs)}"
  cluster_name              = "${var.tectonic_cluster_name}"
  container_images          = "${var.tectonic_container_images}"
  custom_ca_cert_pem_list   = "${var.tectonic_custom_ca_pem_list}"
  etcd_advertise_name_list  = "${data.template_file.etcd_advertise_name_list.*.rendered}"
  etcd_ca_cert_pem          = "${module.etcd_certs.etcd_ca_crt_pem}"
  etcd_client_crt_pem       = "${module.etcd_certs.etcd_client_crt_pem}"
  etcd_client_key_pem       = "${module.etcd_certs.etcd_client_key_pem}"
  etcd_count                = "${local.etcd_count}"
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

module "masters" {
  source = "../../modules/azure/master-as"

  cloud_provider_config                = "${jsonencode(data.null_data_source.cloud_provider.inputs)}"
  cluster_id                           = "${module.tectonic.cluster_id}"
  cluster_name                         = "${var.tectonic_cluster_name}"
  container_linux_channel              = "${var.tectonic_container_linux_channel}"
  container_linux_version              = "${module.container_linux.version}"
  extra_tags                           = "${var.tectonic_azure_extra_tags}"
  fault_domains                        = "${var.tectonic_azure_location_fault_domains["${var.tectonic_azure_location}"]}"
  ign_azure_udev_rules_id              = "${module.ignition_masters.azure_udev_rules_id}"
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
  ign_tx_off_service_id                = "${module.ignition_masters.tx_off_service_id}"
  ign_update_ca_certificates_dropin_id = "${module.ignition_masters.update_ca_certificates_dropin_id}"
  kubeconfig_content                   = "${module.bootkube.kubeconfig}"
  location                             = "${var.tectonic_azure_location}"
  master_count                         = "${var.tectonic_master_count}"
  network_interface_ids                = "${module.vnet.master_network_interface_ids}"
  public_ssh_key                       = "${var.tectonic_azure_ssh_key}"
  resource_group_name                  = "${module.resource_group.name}"
  root_volume_size                     = "${var.tectonic_azure_master_root_volume_size}"
  storage_id                           = "${module.resource_group.storage_id}"
  storage_type                         = "${var.tectonic_azure_master_storage_type}"
  vm_size                              = "${var.tectonic_azure_master_vm_size}"
}

module "ignition_workers" {
  source = "../../modules/ignition"

  bootstrap_upgrade_cl    = "${var.tectonic_bootstrap_upgrade_cl}"
  cloud_provider          = "azure"
  cloud_provider_config   = "${jsonencode(data.null_data_source.cloud_provider.inputs)}"
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
  no_proxy                = "${var.tectonic_no_proxy}"
  ntp_servers             = "${var.tectonic_ntp_servers}"
  proxy_exclusive_units   = "${var.tectonic_proxy_exclusive_units}"
  tectonic_vanilla_k8s    = "${var.tectonic_vanilla_k8s}"
}

module "workers" {
  source = "../../modules/azure/worker-as"

  cloud_provider_config                = "${jsonencode(data.null_data_source.cloud_provider.inputs)}"
  cluster_id                           = "${module.tectonic.cluster_id}"
  cluster_name                         = "${var.tectonic_cluster_name}"
  container_linux_channel              = "${var.tectonic_container_linux_channel}"
  container_linux_version              = "${module.container_linux.version}"
  extra_tags                           = "${var.tectonic_azure_extra_tags}"
  fault_domains                        = "${var.tectonic_azure_location_fault_domains["${var.tectonic_azure_location}"]}"
  ign_azure_udev_rules_id              = "${module.ignition_workers.azure_udev_rules_id}"
  ign_ca_cert_id_list                  = "${module.ignition_masters.ca_cert_id_list}"
  ign_docker_dropin_id                 = "${module.ignition_workers.docker_dropin_id}"
  ign_installer_kubelet_env_id         = "${module.ignition_workers.installer_kubelet_env_id}"
  ign_installer_runtime_mappings_id    = "${module.ignition_workers.installer_runtime_mappings_id}"
  ign_iscsi_service_id                 = "${module.ignition_workers.iscsi_service_id}"
  ign_k8s_node_bootstrap_service_id    = "${module.ignition_workers.k8s_node_bootstrap_service_id}"
  ign_kubelet_service_id               = "${module.ignition_workers.kubelet_service_id}"
  ign_locksmithd_service_id            = "${module.ignition_workers.locksmithd_service_id}"
  ign_max_user_watches_id              = "${module.ignition_workers.max_user_watches_id}"
  ign_nfs_config_id                    = "${var.tectonic_nfs_config_file != "" ? module.ignition_workers.nfs_config_id : ""}"
  ign_ntp_dropin_id                    = "${length(var.tectonic_ntp_servers) > 0 ? module.ignition_workers.ntp_dropin_id : ""}"
  ign_profile_env_id                   = "${module.ignition_workers.profile_env_id}"
  ign_systemd_default_env_id           = "${module.ignition_workers.systemd_default_env_id}"
  ign_tx_off_service_id                = "${module.ignition_workers.tx_off_service_id}"
  ign_update_ca_certificates_dropin_id = "${module.ignition_workers.update_ca_certificates_dropin_id}"
  kubeconfig_content                   = "${module.bootkube.kubeconfig}"
  location                             = "${var.tectonic_azure_location}"
  network_interface_ids                = "${module.vnet.worker_network_interface_ids}"
  public_ssh_key                       = "${var.tectonic_azure_ssh_key}"
  resource_group_name                  = "${module.resource_group.name}"
  root_volume_size                     = "${var.tectonic_azure_worker_root_volume_size}"
  storage_id                           = "${module.resource_group.storage_id}"
  storage_type                         = "${var.tectonic_azure_worker_storage_type}"
  tectonic_kube_dns_service_ip         = "${module.bootkube.kube_dns_service_ip}"
  vm_size                              = "${var.tectonic_azure_worker_vm_size}"
  worker_count                         = "${var.tectonic_worker_count}"
}

module "dns" {
  source = "../../modules/dns/azure"

  etcd_count   = "${local.etcd_count}"
  master_count = "${var.tectonic_master_count}"
  worker_count = "${var.tectonic_worker_count}"

  etcd_ip_addresses    = "${module.vnet.etcd_endpoints}"
  master_ip_addresses  = "${module.vnet.master_private_ip_addresses}"
  worker_ip_addresses  = "${module.vnet.worker_private_ip_addresses}"
  api_ip_addresses     = "${module.vnet.api_ip_addresses}"
  console_ip_addresses = "${module.vnet.console_ip_addresses}"

  base_domain  = "${var.tectonic_base_domain}"
  cluster_name = "${var.tectonic_cluster_name}"
  cluster_id   = "${module.tectonic.cluster_id}"

  location             = "${var.tectonic_azure_location}"
  external_dns_zone_id = "${var.tectonic_azure_external_dns_zone_id}"

  extra_tags = "${var.tectonic_azure_extra_tags}"
}
