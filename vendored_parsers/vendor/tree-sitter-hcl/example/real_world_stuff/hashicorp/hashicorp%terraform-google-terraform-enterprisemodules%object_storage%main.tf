resource "random_pet" "gcs" {
  length = 2
}

resource "google_storage_bucket" "tfe-bucket" {
  name     = "${var.namespace}-storage-${random_pet.gcs.id}"
  location = "us"

  labels = var.labels
}

resource "google_storage_bucket_object" "license" {
  name   = var.license_name
  source = var.license_path
  bucket = google_storage_bucket.tfe-bucket.name
}
