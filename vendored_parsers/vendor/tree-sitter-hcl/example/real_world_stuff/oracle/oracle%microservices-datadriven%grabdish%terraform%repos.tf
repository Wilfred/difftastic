//------- Create repos End  ------------------------------------------
/*
resource "oci_artifacts_container_repository" "frontend_helidon_container_repository" {
  #Required
  compartment_id = "${var.ociCompartmentOcid}"
  display_name = "${var.runName}/frontend-helidon"
  is_public = true
}
resource "oci_artifacts_container_repository" "helidonatp_container_repository" {
  #Required
  compartment_id = "${var.ociCompartmentOcid}"
  display_name = "${var.runName}/admin-helidon"
  is_public = true
}
resource "oci_artifacts_container_repository" "order-helidon_container_repository" {
  #Required
  compartment_id = "${var.ociCompartmentOcid}"
  display_name = "${var.runName}/order-helidon"
  is_public = true
}
resource "oci_artifacts_container_repository" "supplier-helidon-se_container_repository" {
  #Required
  compartment_id = "${var.ociCompartmentOcid}"
  display_name = "${var.runName}/supplier-helidon-se"
  is_public = true
}
resource "oci_artifacts_container_repository" "inventory-helidon_container_repository" {
  #Required
  compartment_id = "${var.ociCompartmentOcid}"
  display_name = "${var.runName}/inventory-helidon"
  is_public = true
}
resource "oci_artifacts_container_repository" "inventory-python_container_repository" {
  #Required
  compartment_id = "${var.ociCompartmentOcid}"
  display_name = "${var.runName}/inventory-python"
  is_public = true
}
resource "oci_artifacts_container_repository" "nodejs_container_repository" {
  #Required
  compartment_id = "${var.ociCompartmentOcid}"
  display_name = "${var.runName}/inventory-nodejs"
  is_public = true
}
resource "oci_artifacts_container_repository" "inventory-helidon-se_container_repository" {
  #Required
  compartment_id = "${var.ociCompartmentOcid}"
  display_name = "${var.runName}/inventory-helidon-se"
  is_public = true
}
*/