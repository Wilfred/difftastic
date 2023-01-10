
data "template_file" "oci-volume-provisioner-yaml" {
  template = "${file("${path.module}/config.yaml")}"
  vars = {
    tenancy        = "${var.tenancy}"
    user           = "${var.volume_provisioner_user_ocid }"
    key            = "${jsonencode(file(var.volume_provisioner_user_private_key_path))}"
    fingerprint    = "${var.volume_provisioner_user_fingerprint}"
    region         = "${var.region}"
    compartment    = "${var.compartment}"
    key_passphrase = "${var.volume_provisioner_user_private_key_password}"
  }
}
