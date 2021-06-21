output "subnetwork" {
  value = google_compute_subnetwork.tfe_subnet.self_link
}
output "network" {
  value = google_service_networking_connection.private_vpc_connection.network
}
