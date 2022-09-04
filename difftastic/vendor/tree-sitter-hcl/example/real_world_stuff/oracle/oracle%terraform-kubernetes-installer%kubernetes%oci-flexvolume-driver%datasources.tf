
data "template_file" "oci-flexvolume-driver-yaml" {
  template = "${file("${path.module}/config.yaml")}"
  vars = {
    tenancy        = "${var.tenancy}"
    user           = "${var.flexvolume_driver_user_ocid }"
    key            = "${jsonencode(file(var.flexvolume_driver_user_private_key_path))}"
    fingerprint    = "${var.flexvolume_driver_user_fingerprint}"
    vcn            = "${var.vcn}"
    key_passphrase = "${var.flexvolume_driver_user_private_key_password}"
  }
}
