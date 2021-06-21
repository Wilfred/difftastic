data "google_container_cluster" "gke_cluster" {
  depends_on = [
    google_container_node_pool.primary_nodes,
  ]
  name = google_container_cluster.primary.name
  location = google_container_cluster.primary.location
}

output "ca_certificate" {
  value = data.google_container_cluster.gke_cluster.master_auth.0.cluster_ca_certificate
  # value = google_container_cluster.primary.master_auth.0.cluster_ca_certificate
}
# output "client_key" {
#   depends_on = [
#     google_container_node_pool.primary_nodes,
#   ]
#   value = google_container_cluster.primary.master_auth.0.client_key
# }
# output "client_certificate" {
#   depends_on = [
#     google_container_node_pool.primary_nodes,
#   ]
#   value = google_container_cluster.primary.master_auth.0.client_certificate
# }
output "cluster_endpoint" {
  value = data.google_container_cluster.gke_cluster.endpoint
  # value = data.google_container_cluster.gke_cluster.endpoint
}
output "cluster_name" {
  depends_on = [
    google_container_node_pool.primary_nodes,
  ]
  # value = google_container_cluster.primary.name
  value = data.google_container_cluster.gke_cluster.name
}
