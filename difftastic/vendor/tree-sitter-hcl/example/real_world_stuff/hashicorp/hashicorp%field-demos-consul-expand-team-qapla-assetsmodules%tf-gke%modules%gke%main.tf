
# provider "google" {
#   project = var.gcp_project
#   region = var.gcp_region
# }

# resource "google_compute_network" "vpc_network" {
#   name = "${var.cluster_name}-network"
# }
data "google_container_engine_versions" "k8sversion" {
  provider = google-beta
  project = var.project
  location       = var.regional_k8s ? var.region : var.zone
  version_prefix = "1.16."
}

resource "google_container_cluster" "primary" {
  # provider = google-beta
  # project = var.project
  name     = var.cluster_name
  location = var.regional_k8s ? var.region : var.zone
  # node_version = data.google_container_engine_versions.k8sversion.latest_node_version
  # We can't create a cluster with no node pool defined, but we want to only use
  # separately managed node pools. So we create the smallest possible default
  # node pool and immediately delete it.
  remove_default_node_pool = var.default_gke ? false : true
  initial_node_count       = var.default_gke ? var.nodes : 1
  # network = google_compute_network.vpc_network.self_link
  network = var.network
  subnetwork = var.subnetwork
  min_master_version = data.google_container_engine_versions.k8sversion.latest_master_version
  master_auth {
    username = ""
    password = ""

    client_certificate_config {
      issue_client_certificate = false
    }
  }
  node_config {
    machine_type = var.node_type
    disk_type = "pd-ssd"
    metadata = {
      disable-legacy-endpoints = "true"
    }

    oauth_scopes = [
      "https://www.googleapis.com/auth/logging.write",
      "https://www.googleapis.com/auth/monitoring",
      "https://www.googleapis.com/auth/compute",
      "https://www.googleapis.com/auth/devstorage.read_write",
      "https://www.googleapis.com/auth/cloud-platform"
    ]

    tags = [
      "${var.owner}-gke"
    ]
  }
}

resource "google_container_node_pool" "primary_nodes" {
  count = var.default_gke ? 0 : 1
  name       = "${var.cluster_name}-node-pool"
  location = google_container_cluster.primary.location
  #version = data.google_container_engine_versions.k8sversion.latest_node_version
  # location   = var.regional_k8s == true ? var.region : var.zone
  cluster    = google_container_cluster.primary.name
  node_count = var.nodes

  node_config {
    machine_type = var.node_type
    disk_type = "pd-ssd"
    metadata = {
      disable-legacy-endpoints = "true"
    }

    oauth_scopes = [
      "https://www.googleapis.com/auth/logging.write",
      "https://www.googleapis.com/auth/monitoring",
      "https://www.googleapis.com/auth/compute",
      "https://www.googleapis.com/auth/devstorage.read_write",
      "https://www.googleapis.com/auth/cloud-platform"
    ]

    tags = [
      "${var.owner}-gke"
    ]
  }
  # autoscaling {
  #   min_node_count = 0
  #   max_node_count = var.nodes*2
  # }
}