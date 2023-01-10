resource "oci_core_instance" "webserver1" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.availability_domains.availability_domains[var.availability_domains -2],"name")}"
  compartment_id = "${var.compartment_ocid}"
  display_name = "Webserver 1"
  shape = "${var.instance_shape}"
  subnet_id = "${oci_core_subnet.lb-backendset1-subnet.id}"
  hostname_label = "orm-demo-ws1"

  metadata {
    ssh_authorized_keys = "${var.ssh_public_key}"
    user_data = "${base64encode(file(var.bootstrap_file))}"
    assign_public_ip = "false"
  }

  source_details {
    source_type = "image"
    source_id = "${var.instance_image_ocid[var.region]}"
  }
}

resource "oci_core_instance" "webserver2" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.availability_domains.availability_domains[var.availability_domains -1],"name")}"
  compartment_id = "${var.compartment_ocid}"
  display_name = "Webserver 2"
  shape = "${var.instance_shape}"
  subnet_id = "${oci_core_subnet.lb-backendset2-subnet.id}"
  hostname_label = "orm-demo-ws2"

  metadata {
    ssh_authorized_keys = "${var.ssh_public_key}"
    user_data = "${base64encode(file(var.bootstrap_file))}"
    assign_public_ip = "false"
  }

  source_details {
    source_type = "image"
    source_id = "${var.instance_image_ocid[var.region]}"
  }
}