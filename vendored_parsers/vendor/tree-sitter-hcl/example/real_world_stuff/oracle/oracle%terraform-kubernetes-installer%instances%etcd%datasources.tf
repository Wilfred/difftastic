# Prevent oci_core_images image list from changing underneath us.
data "oci_core_images" "ImageOCID" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.oracle_linux_image_name}"
}

# Cloud call to get a list of Availability Domains
data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

# "cloud init" file to bootstrap instance
data "template_file" "etcd-bootstrap" {
  template = "${file("${path.module}/cloud_init/bootstrap.template.sh")}"

  vars {
    domain_name               = "${var.domain_name}"
    docker_ver                = "${var.docker_ver}"
    etcd_ver                  = "${var.etcd_ver}"
    docker_max_log_size       = "${var.etcd_docker_max_log_size}"
    docker_max_log_files      = "${var.etcd_docker_max_log_files}"
    etcd_discovery_url        = "${file("${path.root}/generated/discovery${var.etcd_discovery_url}")}"
  }
}
