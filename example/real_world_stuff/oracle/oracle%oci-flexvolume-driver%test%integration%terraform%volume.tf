resource "oci_core_volume" "test_volume" {
  availability_domain = "${var.availability_domain}"
  compartment_id = "${var.compartment_ocid}"
  display_name = "${var.test_id}"
  size_in_gbs = "50"
}

output "volume_ocid" {
  value = "${oci_core_volume.test_volume.id}"
}
