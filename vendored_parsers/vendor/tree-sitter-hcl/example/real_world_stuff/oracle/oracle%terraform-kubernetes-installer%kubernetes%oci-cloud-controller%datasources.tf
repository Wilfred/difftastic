
data "template_file" "oci-cloud-controller-secret" {
  template = "${file("${path.module}/cloud-provider-secret.yaml")}"
  vars = {
    tenancy        = "${var.tenancy}"
    region         = "${var.region}"
    compartment    = "${var.compartment_ocid}"
    fingerprint    = "${var.cloud_controller_user_fingerprint}"
    user           = "${var.cloud_controller_user_ocid }"
    key            = "${jsonencode(file(var.cloud_controller_user_private_key_path))}"
    key_passphrase = "${var.cloud_controller_user_private_key_password}"
    subnet1        = "${var.subnet1}"
    subnet2        = "${var.subnet2}"
  }
}

data "template_file" "cloud-provider-json" {
  template = "${file("${path.module}/cloud-provider.json")}"
  vars = {
    cloud_provider_secret_yaml = "${base64encode(data.template_file.oci-cloud-controller-secret.rendered)}"
  }
}
