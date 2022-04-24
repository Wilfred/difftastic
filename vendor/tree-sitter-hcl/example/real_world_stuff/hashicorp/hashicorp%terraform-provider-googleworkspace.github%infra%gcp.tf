variable "impersonated_user" {
  description = "Google Workspace Admin User to impersonate"
}

// Google project to run from
data "google_project" "project" {
  project_id = "terraform-strategic-providers"
}

// Google service account to use
resource "google_service_account" "acctest-sa" {
  account_id   = "tf-acctest"
  display_name = "Acceptance Test SA"
  description  = "SA for Acceptance Testing"
  project      = data.google_project.project.project_id
}

// Impersonate the User with admin permissions
resource "google_service_account_iam_member" "tf-acctest-iam" {
  service_account_id = google_service_account.acctest-sa.id
  role               = "roles/iam.serviceAccountUser"
  member             = "user:${var.impersonated_user}"
}

// Add necessary roles for vault
resource "google_project_iam_member" "tf-acctest-sa-admin" {
  project = data.google_project.project.project_id
  role    = "roles/iam.serviceAccountAdmin"
  member  = "serviceAccount:${google_service_account.acctest-sa.email}"
}

resource "google_project_iam_member" "tf-acctest-sa-key-admin" {
  project = data.google_project.project.project_id
  role    = "roles/iam.serviceAccountKeyAdmin"
  member  = "serviceAccount:${google_service_account.acctest-sa.email}"
}

// generate the key to be used by vault
resource "google_service_account_key" "tf-acctest-key" {
  service_account_id = google_service_account.acctest-sa.name
}

// Enable the cloud resource manager service
resource "google_project_service" "resource-manager" {
  project = data.google_project.project.project_id
  service = "cloudresourcemanager.googleapis.com"
}

// Enable the admin sdk api service
resource "google_project_service" "admin" {
  project = data.google_project.project.project_id
  service = "admin.googleapis.com"
}

// Enable the group settings api service
resource "google_project_service" "group-settings" {
  project = data.google_project.project.project_id
  service = "groupssettings.googleapis.com"
}
