resource "google_service_account" "master-node-sa" {
  account_id   = "${format("%.28s", var.cluster_name)}-m"
  display_name = "Master node"
}

resource "google_project_iam_member" "master-compute-admin" {
  role   = "roles/compute.instanceAdmin"
  member = "serviceAccount:${google_service_account.master-node-sa.email}"
}

resource "google_project_iam_member" "master-network-admin" {
  role   = "roles/compute.networkAdmin"
  member = "serviceAccount:${google_service_account.master-node-sa.email}"
}

resource "google_project_iam_member" "master-storage-admin" {
  role   = "roles/storage.admin"
  member = "serviceAccount:${google_service_account.master-node-sa.email}"
}

resource "google_project_iam_member" "master-object-storage-admin" {
  role   = "roles/storage.objectAdmin"
  member = "serviceAccount:${google_service_account.master-node-sa.email}"
}
