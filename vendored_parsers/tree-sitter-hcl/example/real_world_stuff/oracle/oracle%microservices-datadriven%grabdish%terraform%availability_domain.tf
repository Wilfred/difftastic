data "oci_identity_availability_domain" "ad1" {
  compartment_id = var.ociTenancyOcid
  ad_number      = 1
}
/*
data "oci_identity_availability_domain" "ad2" {
  compartment_id = var.ociTenancyOcid
  ad_number      = 2
}
data "oci_identity_availability_domain" "ad3" {
  compartment_id = var.ociTenancyOcid
  ad_number      = 3
}
*/