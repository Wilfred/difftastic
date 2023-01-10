resource "tls_private_key" "flexvolume_driver_user_key" {
  algorithm   = "RSA" rsa_bits = 2048
}

resource "oci_identity_group" "flexvolume_driver_group" {
  name = "${var.label_prefix}flexvolume_driver_group"
  description = "Terraform created group for OCI Cloud Controller Manager"
}

resource "oci_identity_user" "flexvolume_driver_user" {
  name = "${var.label_prefix}flexvolume_driver_user"
  description = "Terraform created user for OCI Cloud Controller Manager"
}

resource "oci_identity_api_key" "flexvolume_driver_key_assoc" {
  user_id = "${oci_identity_user.flexvolume_driver_user.id}"
  key_value = "${tls_private_key.flexvolume_driver_user_key.public_key_pem}"
}

resource "oci_identity_user_group_membership" "flexvolume_driver_user_group_assoc" {
  compartment_id = "${var.tenancy_ocid}"
  user_id = "${oci_identity_user.flexvolume_driver_user.id}"
  group_id = "${oci_identity_group.flexvolume_driver_group.id}"
}

resource "oci_identity_policy" "flexvolume_driver_policy" {
  depends_on = ["oci_identity_group.flexvolume_driver_group"]
  compartment_id = "${var.compartment_ocid}"
  name = "${var.label_prefix}flexvolume_driver_policy"
  description = "${var.label_prefix}flexvolume_driver_group policy"
  statements = [
    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to read vnic-attachments in compartment id ${var.compartment_ocid}",
    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to read vnics in compartment id ${var.compartment_ocid}",
    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to read instances in compartment id ${var.compartment_ocid}",
    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to read subnets in compartment id ${var.compartment_ocid}",
    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to use volumes in compartment id ${var.compartment_ocid}",
    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to use instances in compartment id ${var.compartment_ocid}",
    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to manage volume-attachments in compartment id ${var.compartment_ocid}",

    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to read file-systems in compartment id ${var.compartment_ocid}",
    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to read mount-targets in compartment id ${var.compartment_ocid}",
    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to read private-ips in compartment id ${var.compartment_ocid}",
    "Allow group id ${oci_identity_group.flexvolume_driver_group.id} to manage export-sets in compartment id ${var.compartment_ocid}",
  ]
}
