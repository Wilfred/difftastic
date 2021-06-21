resource "random_pet" "name" {
  length = 2
}

resource "google_service_account" "main" {
  account_id   = "${var.namespace}-tfe-${random_pet.name.id}"
  display_name = "TFE"
  description  = "Service Account used by Terraform Enterprise."
}

resource "google_service_account_key" "key" {
  service_account_id = google_service_account.main.name
}

resource "google_storage_bucket_iam_member" "member-object" {
  bucket = var.bucket
  role   = "roles/storage.objectAdmin"
  member = "serviceAccount:${google_service_account.main.email}"
}

resource "google_storage_bucket_iam_member" "member-bucket" {
  bucket = var.bucket
  role   = "roles/storage.legacyBucketReader"
  member = "serviceAccount:${google_service_account.main.email}"
}

resource "google_project_iam_member" "log_writer" {
  member = "serviceAccount:${google_service_account.main.email}"
  role   = "roles/logging.logWriter"
}
