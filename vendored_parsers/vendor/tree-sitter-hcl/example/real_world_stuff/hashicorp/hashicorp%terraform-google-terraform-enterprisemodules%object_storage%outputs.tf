output "bucket" {
  value = google_storage_bucket.tfe-bucket.name
}
output "project" {
  value = google_storage_bucket.tfe-bucket.project
}
