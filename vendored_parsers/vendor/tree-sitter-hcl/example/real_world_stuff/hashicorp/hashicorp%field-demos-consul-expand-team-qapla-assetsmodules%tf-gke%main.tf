terraform {
  required_version = ">= 0.12.26"
  backend "remote" {}
}

# Collect client config for GCP
data "google_client_config" "current" {
}
data "google_service_account" "owner_project" {
  account_id = var.service_account
}

resource "google_compute_network" "container_network" {
  count = var.default_network ? 0 : 1
  name = "${var.gke_cluster}-network"
  auto_create_subnetworks = false
}

resource "google_compute_subnetwork" "container_subnetwork" {
  count = var.default_network ? 0 : 1
  name          = "${var.gke_cluster}-subnetwork"
  description   = "auto-created subnetwork for cluster \"${var.gke_cluster}\""
  region        = var.gcp_region
  ip_cidr_range = "10.2.0.0/16"
  network       = google_compute_network.container_network.0.self_link
}

module "gke" {
  source = "./modules/gke"
  region = var.gcp_region
  zone = var.gcp_zone
  project = var.gcp_project
  cluster_name = var.gke_cluster
  network = var.default_network ? null : google_compute_network.container_network.0.self_link
  subnetwork = var.default_network ? null : google_compute_subnetwork.container_subnetwork.0.self_link
  nodes = var.numnodes
  node_type = var.node_type
  owner = var.owner
  default_gke = var.default_gke
}

resource "google_storage_bucket_object" "jx-requirements" {
  name   = "jx-requirements.yml"
  content = templatefile("${path.module}/templates/jx-requirements.yml.tpl",{
    gke_cluster = var.gke_cluster,
    owner = var.owner,
    github_org = var.owner,
    zone = var.gcp_zone,
    project = var.gcp_project
  })
  bucket = var.gcs_bucket
}


# resource "local_file" "jx-requirements" {
#   content = templatefile("${path.module}/templates/jx-requirements.yml.tpl",{
#     gke_cluster = var.gke_cluster,
#     owner = var.owner,
#     github_org = "dcanadillas",
#     zone = var.gcp_zone,
#     project = var.gcp_project
#   })
#   filename = "${path.module}/jx-requirements-${var.gke_cluster}.yml"
# }
