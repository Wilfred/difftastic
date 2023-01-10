provider "oci" {
  version              = ">= 3.27.0"
  tenancy_ocid         = var.tenancy_ocid
  user_ocid            = var.user_ocid
  fingerprint          = var.fingerprint
  private_key_path     = var.private_key_path
  private_key_password = var.private_key_password
  region               = var.region
  disable_auto_retries = var.disable_auto_retries
}

# Get a list of Availability Domains
data "oci_identity_availability_domains" "ads" {
  compartment_id = var.tenancy_ocid
}


# Get a list of subdomains
data "oci_core_subnets" "mysubnets" {
  compartment_id = var.compartment_ocid
  vcn_id = var.VM_vcn_id
}
