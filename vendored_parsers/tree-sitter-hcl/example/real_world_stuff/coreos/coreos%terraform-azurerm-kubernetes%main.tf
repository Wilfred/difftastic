provider "azurerm" {
  version       = "0.3.1"
  environment   = "${var.tectonic_azure_cloud_environment}"
  client_secret = "${var.tectonic_azure_client_secret}"
}

data "azurerm_client_config" "current" {}

module "container_linux" {
  source = "github.com/coreos/tectonic-installer//modules/container_linux?ref=0a22c73d39f67ba4bb99106a9e72322a47179736"

  release_channel = "${var.tectonic_container_linux_channel}"
  release_version = "${var.tectonic_container_linux_version}"
}

module "resource_group" {
  source = "github.com/coreos/tectonic-installer//modules/azure/resource-group?ref=0a22c73d39f67ba4bb99106a9e72322a47179736"

  external_rsg_id = "${var.tectonic_azure_external_resource_group}"
  azure_location  = "${var.tectonic_azure_location}"
  cluster_name    = "${var.tectonic_cluster_name}"
  cluster_id      = "${module.tectonic.cluster_id}"
  extra_tags      = "${var.tectonic_azure_extra_tags}"
}

module "vnet" {
  source = "github.com/coreos/tectonic-installer//modules/azure/vnet?ref=0a22c73d39f67ba4bb99106a9e72322a47179736"

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
  source = "github.com/coreos/tectonic-installer//modules/azure/etcd?ref=0a22c73d39f67ba4bb99106a9e72322a47179736"

  base_domain             = "${var.tectonic_base_domain}"
  cluster_id              = "${module.tectonic.cluster_id}"
  cluster_name            = "${var.tectonic_cluster_name}"
  container_image         = "${var.tectonic_container_images["etcd"]}"
  container_linux_channel = "${var.tectonic_container_linux_channel}"
  container_linux_version = "${module.container_linux.version}"
  etcd_count              = "${local.etcd_count}"
  extra_tags              = "${var.tectonic_azure_extra_tags}"
  fault_domains           = "${var.tectonic_azure_location_fault_domains["${var.tectonic_azure_location}"]}"
  ign_etcd_crt_id_list    = "${module.ignition_masters.etcd_crt_id_list}"
  ign_etcd_dropin_id_list = "${module.ignition_masters.etcd_dropin_id_list}"
  location                = "${var.tectonic_azure_location}"
  network_interface_ids   = "${module.vnet.etcd_network_interface_ids}"
  public_ssh_key          = "${var.tectonic_azure_ssh_key}"
  resource_group_name     = "${module.resource_group.name}"
  storage_id              = "${module.resource_group.storage_id}"
  storage_type            = "${var.tectonic_azure_etcd_storage_type}"
  tls_enabled             = "${var.tectonic_etcd_tls_enabled}"
  versions                = "${var.tectonic_versions}"
  vm_size                 = "${var.tectonic_azure_etcd_vm_size}"
}

# Workaround for https://github.com/hashicorp/terraform/issues/4084
data "null_data_source" "cloud_provider" {
  inputs = {
    "cloud"                      = "${var.tectonic_azure_cloud_environment}"
    "tenantId"                   = "${data.azurerm_client_config.current.tenant_id}"
    "subscriptionId"             = "${data.azurerm_client_config.current.subscription_id}"
    "aadClientId"                = "${data.azurerm_client_config.current.client_id}"
    "aadClientSecret"            = "${var.tectonic_azure_client_secret}"
    "resourceGroup"              = "${module.resource_group.name}"
    "location"                   = "${var.tectonic_azure_location}"
    "subnetName"                 = "${module.vnet.worker_subnet_name}"
    "securityGroupName"          = "${module.vnet.worker_nsg_name}"
    "vnetName"                   = "${module.vnet.vnet_id}"
    "primaryAvailabilitySetName" = "${module.workers.availability_set_name}"
  }
}

data "template_file" "etcd_advertise_name_list" {
  count    = "${local.etcd_count}"
  template = "$$$$$$$${COREOS_AZURE_IPV4_DYNAMIC}"
}

module "ignition_masters" {
  source = "github.com/coreos/tectonic-installer//modules/ignition?ref=0a22c73d39f67ba4bb99106a9e72322a47179736"

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
  image_re                  = "${var.tectonic_image_re}"
  ingress_ca_cert_pem       = "${module.ingress_certs.ca_cert_pem}"
  kube_ca_cert_pem          = "${module.kube_certs.ca_cert_pem}"
  kube_dns_service_ip       = "${module.bootkube.kube_dns_service_ip}"
  kubelet_cni_bin_dir       = "${var.tectonic_networking == "calico" || var.tectonic_networking == "canal" ? "/var/lib/cni/bin" : "" }"
  kubelet_debug_config      = "${var.tectonic_kubelet_debug_config}"
  kubelet_node_label        = "node-role.kubernetes.io/master"
  kubelet_node_taints       = "node-role.kubernetes.io/master=:NoSchedule"
  tectonic_vanilla_k8s      = "${var.tectonic_vanilla_k8s}"
}

module "masters" {
  source = "github.com/coreos/tectonic-installer//modules/azure/master-as?ref=0a22c73d39f67ba4bb99106a9e72322a47179736"

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
  ign_k8s_node_bootstrap_service_id    = "${module.ignition_masters.k8s_node_bootstrap_service_id}"
  ign_kubelet_service_id               = "${module.ignition_masters.kubelet_service_id}"
  ign_locksmithd_service_id            = "${module.ignition_masters.locksmithd_service_id}"
  ign_max_user_watches_id              = "${module.ignition_masters.max_user_watches_id}"
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
  storage_id                           = "${module.resource_group.storage_id}"
  storage_type                         = "${var.tectonic_azure_master_storage_type}"
  vm_size                              = "${var.tectonic_azure_master_vm_size}"
}

module "ignition_workers" {
  source = "github.com/coreos/tectonic-installer//modules/ignition?ref=0a22c73d39f67ba4bb99106a9e72322a47179736"

  bootstrap_upgrade_cl    = "${var.tectonic_bootstrap_upgrade_cl}"
  cloud_provider          = "azure"
  cloud_provider_config   = "${jsonencode(data.null_data_source.cloud_provider.inputs)}"
  container_images        = "${var.tectonic_container_images}"
  custom_ca_cert_pem_list = "${var.tectonic_custom_ca_pem_list}"
  etcd_ca_cert_pem        = "${module.etcd_certs.etcd_ca_crt_pem}"
  ingress_ca_cert_pem     = "${module.ingress_certs.ca_cert_pem}"
  image_re                = "${var.tectonic_image_re}"
  kube_dns_service_ip     = "${module.bootkube.kube_dns_service_ip}"
  kube_ca_cert_pem        = "${module.kube_certs.ca_cert_pem}"
  kubelet_cni_bin_dir     = "${var.tectonic_networking == "calico" || var.tectonic_networking == "canal" ? "/var/lib/cni/bin" : "" }"
  kubelet_debug_config    = "${var.tectonic_kubelet_debug_config}"
  kubelet_node_label      = "node-role.kubernetes.io/node"
  kubelet_node_taints     = ""
  tectonic_vanilla_k8s    = "${var.tectonic_vanilla_k8s}"
}

module "workers" {
  source = "github.com/coreos/tectonic-installer//modules/azure/worker-as?ref=0a22c73d39f67ba4bb99106a9e72322a47179736"

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
  ign_k8s_node_bootstrap_service_id    = "${module.ignition_workers.k8s_node_bootstrap_service_id}"
  ign_kubelet_service_id               = "${module.ignition_workers.kubelet_service_id}"
  ign_locksmithd_service_id            = "${module.ignition_workers.locksmithd_service_id}"
  ign_max_user_watches_id              = "${module.ignition_workers.max_user_watches_id}"
  ign_tx_off_service_id                = "${module.ignition_workers.tx_off_service_id}"
  ign_update_ca_certificates_dropin_id = "${module.ignition_workers.update_ca_certificates_dropin_id}"
  kubeconfig_content                   = "${module.bootkube.kubeconfig}"
  location                             = "${var.tectonic_azure_location}"
  network_interface_ids                = "${module.vnet.worker_network_interface_ids}"
  public_ssh_key                       = "${var.tectonic_azure_ssh_key}"
  resource_group_name                  = "${module.resource_group.name}"
  storage_id                           = "${module.resource_group.storage_id}"
  storage_type                         = "${var.tectonic_azure_worker_storage_type}"
  tectonic_kube_dns_service_ip         = "${module.bootkube.kube_dns_service_ip}"
  vm_size                              = "${var.tectonic_azure_worker_vm_size}"
  worker_count                         = "${var.tectonic_worker_count}"
}

module "dns" {
  source = "github.com/coreos/tectonic-installer//modules/dns/azure?ref=0a22c73d39f67ba4bb99106a9e72322a47179736"

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
