
output "gke_ca_certificate" {
  value = base64decode(module.gke.ca_certificate)
}
# output "jx-requirements" {
#   value = "https://storage.cloud.google.com/${google_storage_bucket_object.jx-requirements.bucket}/${google_storage_bucket_object.jx-requirements.output_name}"
#   # value = google_storage_bucket_object.jx-requirements.self_link
# }
output "k8s_endpoint" {
  value = module.gke.cluster_endpoint
}
output "cluster_name" {
  value = module.gke.cluster_name
}
