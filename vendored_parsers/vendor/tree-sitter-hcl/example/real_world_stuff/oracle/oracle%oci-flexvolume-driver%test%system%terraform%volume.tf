variable "tenancy_ocid" {
  default = "ocid1.tenancy.oc1..aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
}

variable "user_ocid" {
  default = "ocid1.user.oc1..aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
}

variable "fingerprint" {
  default = "aa:bb:cc:dd:ee:ff:gg:hh:ii:jj:kk:ll:mm:nn:oo:pp"
}

variable "private_key_path" {
  default = "/tmp/oci_api_key.pem"
}

variable "compartment_ocid" {
  default = "ocid1.compartment.oc1..aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
}

variable "availability_domain" {
  default = "NWuj:PHX-AD-2"
}

variable "region" {
  default = "us-phoenix-1"
}

variable "test_id" {}

provider "oci" {
  tenancy_ocid     = "${var.tenancy_ocid}"
  user_ocid        = "${var.user_ocid}"
  fingerprint      = "${var.fingerprint}"
  private_key_path = "${var.private_key_path}"
  region           = "${var.region}"
}

resource "oci_core_volume" "test_volume" {
  availability_domain = "${var.availability_domain}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "flexvolumesystemtest${var.test_id}"
  size_in_gbs         = "50"
}

output "volume_ocid" {
  value = "${oci_core_volume.test_volume.id}"
}
