locals {
  etcd_count = "${var.tectonic_self_hosted_etcd != "" ? 0 : max(var.tectonic_etcd_count, 1)}"
}

data "template_file" "etcd_hostname_list" {
  count    = "${local.etcd_count}"
  template = "${var.tectonic_cluster_name}-etcd-${count.index}${var.tectonic_base_domain == "" ? "" : ".${var.tectonic_base_domain}"}"
}

module "bootkube" {
  source = "../../modules/bootkube"

  cloud_provider        = "azure"
  cloud_provider_config = "${jsonencode(data.null_data_source.cloud_provider.inputs)}"

  cluster_name = "${var.tectonic_cluster_name}"

  kube_apiserver_url = "https://${module.vnet.api_fqdn}:443"
  oidc_issuer_url    = "https://${module.vnet.ingress_fqdn}/identity"

  # Platform-independent variables wiring, do not modify.
  container_images = "${var.tectonic_container_images}"
  versions         = "${var.tectonic_versions}"

  service_cidr = "${var.tectonic_service_cidr}"
  cluster_cidr = "${var.tectonic_cluster_cidr}"

  advertise_address = "0.0.0.0"
  anonymous_auth    = "false"

  oidc_username_claim = "email"
  oidc_groups_claim   = "groups"
  oidc_client_id      = "tectonic-kubectl"
  oidc_ca_cert        = "${module.ingress_certs.ca_cert_pem}"

  apiserver_cert_pem   = "${module.kube_certs.apiserver_cert_pem}"
  apiserver_key_pem    = "${module.kube_certs.apiserver_key_pem}"
  etcd_ca_cert_pem     = "${module.etcd_certs.etcd_ca_crt_pem}"
  etcd_client_cert_pem = "${module.etcd_certs.etcd_client_crt_pem}"
  etcd_client_key_pem  = "${module.etcd_certs.etcd_client_key_pem}"
  etcd_peer_cert_pem   = "${module.etcd_certs.etcd_peer_crt_pem}"
  etcd_peer_key_pem    = "${module.etcd_certs.etcd_peer_key_pem}"
  etcd_server_cert_pem = "${module.etcd_certs.etcd_server_crt_pem}"
  etcd_server_key_pem  = "${module.etcd_certs.etcd_server_key_pem}"
  kube_ca_cert_pem     = "${module.kube_certs.ca_cert_pem}"
  kubelet_cert_pem     = "${module.kube_certs.kubelet_cert_pem}"
  kubelet_key_pem      = "${module.kube_certs.kubelet_key_pem}"

  etcd_backup_size          = "${var.tectonic_etcd_backup_size}"
  etcd_backup_storage_class = "${var.tectonic_etcd_backup_storage_class}"
  etcd_endpoints            = "${data.template_file.etcd_hostname_list.*.rendered}"
  self_hosted_etcd          = "${var.tectonic_self_hosted_etcd}"

  master_count = "${var.tectonic_master_count}"

  cloud_config_path = "/etc/kubernetes/cloud"
}

module "tectonic" {
  source   = "../../modules/tectonic"
  platform = "azure"

  cluster_name = "${var.tectonic_cluster_name}"

  base_address       = "${module.vnet.ingress_fqdn}"
  kube_apiserver_url = "https://${module.vnet.api_fqdn}:443"
  service_cidr       = "${var.tectonic_service_cidr}"

  # Platform-independent variables wiring, do not modify.
  container_images      = "${var.tectonic_container_images}"
  container_base_images = "${var.tectonic_container_base_images}"
  versions              = "${var.tectonic_versions}"

  license_path     = "${var.tectonic_vanilla_k8s ? "/dev/null" : pathexpand(var.tectonic_license_path)}"
  pull_secret_path = "${var.tectonic_vanilla_k8s ? "/dev/null" : pathexpand(var.tectonic_pull_secret_path)}"

  admin_email    = "${var.tectonic_admin_email}"
  admin_password = "${var.tectonic_admin_password}"

  update_channel = "${var.tectonic_update_channel}"
  update_app_id  = "${var.tectonic_update_app_id}"
  update_server  = "${var.tectonic_update_server}"

  ca_generated = "${var.tectonic_ca_cert == "" ? false : true}"
  ca_cert      = "${module.kube_certs.ca_cert_pem}"

  ingress_ca_cert_pem = "${module.ingress_certs.ca_cert_pem}"
  ingress_cert_pem    = "${module.ingress_certs.cert_pem}"
  ingress_key_pem     = "${module.ingress_certs.key_pem}"

  identity_client_cert_pem = "${module.identity_certs.client_cert_pem}"
  identity_client_key_pem  = "${module.identity_certs.client_key_pem}"
  identity_server_cert_pem = "${module.identity_certs.server_cert_pem}"
  identity_server_key_pem  = "${module.identity_certs.server_key_pem}"

  console_client_id = "tectonic-console"
  kubectl_client_id = "tectonic-kubectl"
  ingress_kind      = "NodePort"
  self_hosted_etcd  = "${var.tectonic_self_hosted_etcd}"
  master_count      = "${var.tectonic_master_count}"
  stats_url         = "${var.tectonic_stats_url}"

  image_re = "${var.tectonic_image_re}"
}

module "flannel_vxlan" {
  source = "../../modules/net/flannel_vxlan"

  cluster_cidr     = "${var.tectonic_cluster_cidr}"
  enabled          = "${var.tectonic_networking == "flannel"}"
  container_images = "${var.tectonic_container_images}"
}

module "calico" {
  source = "../../modules/net/calico"

  container_images = "${var.tectonic_container_images}"
  cluster_cidr     = "${var.tectonic_cluster_cidr}"
  enabled          = "${var.tectonic_networking == "calico"}"
}

module "canal" {
  source = "../../modules/net/canal"

  container_images = "${var.tectonic_container_images}"
  cluster_cidr     = "${var.tectonic_cluster_cidr}"
  enabled          = "${var.tectonic_networking == "canal"}"
}
