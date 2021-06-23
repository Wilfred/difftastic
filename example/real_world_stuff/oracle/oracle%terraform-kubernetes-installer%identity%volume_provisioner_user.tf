resource "tls_private_key" "volume_provisioner_user_key" {
  algorithm   = "RSA" rsa_bits = 2048
}

resource "oci_identity_group" "volume_provisioner_group" {
  name = "${var.label_prefix}volume_provisioner_group"
  description = "Terraform created group for OCI Cloud Controller Manager"
}

resource "oci_identity_user" "volume_provisioner_user" {
  name = "${var.label_prefix}volume_provisioner_user"
  description = "Terraform created user for OCI Cloud Controller Manager"
}

resource "oci_identity_api_key" "volume_provisioner_key_assoc" {
  user_id = "${oci_identity_user.volume_provisioner_user.id}"
  key_value = "${tls_private_key.volume_provisioner_user_key.public_key_pem}"
}

resource "oci_identity_user_group_membership" "volume_provisioner_user_group_assoc" {
  compartment_id = "${var.tenancy_ocid}"
  user_id = "${oci_identity_user.volume_provisioner_user.id}"
  group_id = "${oci_identity_group.volume_provisioner_group.id}"
}

resource "oci_identity_policy" "volume_provisioner_policy" {
  depends_on = ["oci_identity_group.volume_provisioner_group"]
  compartment_id = "${var.compartment_ocid}"
  name = "${var.label_prefix}volume_provisioner_policy"
  description = "${var.label_prefix}volume_provisioner_group policy"
  statements = [
    "Allow group id ${oci_identity_group.volume_provisioner_group.id} to manage volumes in compartment id ${var.compartment_ocid}",
    "Allow group id ${oci_identity_group.volume_provisioner_group.id} to manage file-systems in compartment id ${var.compartment_ocid}",
  ]
}
