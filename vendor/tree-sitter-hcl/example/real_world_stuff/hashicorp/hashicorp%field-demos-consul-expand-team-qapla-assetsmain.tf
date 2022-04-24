terraform {
  required_version = ">= 0.15" # With 0.14 data sources are not refreshed on destroy and you need to do an apply before a destroy to auth to K8s and Helm
  required_providers {
    google = {
      source = "hashicorp/google"
      version = "3.64.0"
    }
    helm = {
      source = "hashicorp/helm"
      version = "2.1.2"
    }
    kubernetes = {
      source = "hashicorp/kubernetes"
      version = "2.1.0"
    }
  }
  # backend "remote" {
  # }
}

# Collect client config for GCP
data "google_client_config" "current" {
}
data "google_service_account" "owner_project" {
  account_id = var.service_account
}
module "gke" {
  source  = "./modules/tf-gke"

  # version = "0.1.0"
  count = var.create_federation ? 2 : 1
  dns_zone = var.dns_zone
  gcp_project = var.gcp_project
  gcp_region = var.gcp_region[count.index]
  gcp_zone = var.gcp_zone[count.index]
  gcs_bucket = var.gcs_bucket
  gke_cluster = "${var.gke_cluster}${count.index + 1}"
  default_gke = var.default_gke
  default_network = var.default_network
  owner = var.owner
  service_account = var.service_account
}


module "k8s" {
  source = "./modules/kubernetes"
  depends_on = [
    module.gke,
    # data.google_container_cluster.primary_gke
  ]
  providers = {
    helm = helm.primary
    kubernetes = kubernetes.primary
  }
  # token = data.google_client_config.current.access_token
  # k8s_host = local.secondary_host
  # k8s_cert = local.secondary_cert
  cluster_endpoint = module.gke.0.k8s_endpoint
  cluster_namespace = "consul"
  ca_certificate = module.gke.0.gke_ca_certificate
  location = var.gcp_zone[0]
  gcp_region = var.gcp_region[0]
  gcp_project = var.gcp_project
  cluster_name = var.gke_cluster
  config_bucket = var.gcs_bucket
  nodes = var.consul_nodes
  gcp_service_account = data.google_service_account.owner_project
  dns_zone = var.dns_zone
  consul_license = var.consul_license
  values_file = "consul-values-dc.yaml"
  consul_dc = "dc1"
  enterprise = var.consul_enterprise
  consul_version = var.consul_version
  # envoy_version = var.envoy_version
  chart_version = var.chart_version
}

module "k8s-sec" {
  count = var.create_federation ? 1 : 0
  source = "./modules/kubernetes"
  depends_on = [
    # module.gke,
    module.k8s,
    # data.google_container_cluster.secondary_gke
  ]
  providers = {
    helm = helm.secondary
    kubernetes = kubernetes.secondary
  }
  # token = data.google_client_config.current.access_token
  # k8s_host = local.secondary_host
  # k8s_cert = local.secondary_cert
  cluster_endpoint = module.gke.1.k8s_endpoint
  cluster_namespace = "consul"
  ca_certificate = module.gke.1.gke_ca_certificate
  location = var.gcp_zone[1]
  gcp_region = var.gcp_region[1]
  gcp_project = var.gcp_project
  cluster_name = var.gke_cluster
  config_bucket = var.gcs_bucket
  nodes = var.consul_nodes
  gcp_service_account = data.google_service_account.owner_project
  dns_zone = var.dns_zone
  consul_license = var.consul_license
  values_file = "consul-values-dc-fed.yaml"
  federated = true
  federation_secret = module.k8s.federation_secret
  consul_dc = "dc2"
  enterprise = var.consul_enterprise
  consul_version = var.consul_version
  # envoy_version = var.envoy_version
  chart_version = var.chart_version
}
