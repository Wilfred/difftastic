resource "google_storage_bucket" "assets_storage_bucket" {
  name          = "${var.tectonic_cluster_name}-${var.tectonic_gcp_region}-${var.tectonic_gcp_ext_google_managedzone_name}"
  location      = "${upper(var.tectonic_gcp_region)}"
  storage_class = "REGIONAL"
  force_destroy = true
}

resource "google_storage_bucket_acl" "private_acl" {
  bucket         = "${google_storage_bucket.assets_storage_bucket.name}"
  predefined_acl = "projectprivate"
}

# Bootkube / Tectonic assets
resource "google_storage_bucket_object" "tectonic-assets" {
  name   = "assets.zip"
  bucket = "${google_storage_bucket.assets_storage_bucket.name}"
  source = "${data.archive_file.assets.output_path}"
}
