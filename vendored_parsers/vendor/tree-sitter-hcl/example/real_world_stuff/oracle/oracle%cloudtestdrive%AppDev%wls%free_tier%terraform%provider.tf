provider "oci" {
  version              = ">= 3.0.0"
  tenancy_ocid         = var.oci_base_identity.tenancy_id
  user_ocid            = var.oci_base_identity.user_id
  fingerprint          = var.oci_base_identity.api_fingerprint
  private_key_path     = var.oci_base_identity.api_private_key_path
  private_key_password = var.oci_base_identity.api_private_key_password
  region               = var.oci_base_general.region
  disable_auto_retries = false
}

