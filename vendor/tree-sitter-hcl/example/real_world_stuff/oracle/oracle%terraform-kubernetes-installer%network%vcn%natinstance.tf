/**
 * The NAT instances will be used by instances in private subnets for all outbound traffic.
 */

resource "oci_core_instance" "NATInstanceAD1" {
  count               = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad1_enabled == "true") ? "1" : "0"}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.label_prefix}nat-ad1"
  image               = "${lookup(data.oci_core_images.ImageOCID.images[0], "id")}"
  shape               = "${var.nat_instance_shape}"

  create_vnic_details {
    subnet_id = "${(var.control_plane_subnet_access == "private") && (var.dedicated_nat_subnets == "true") ? "${element(concat(oci_core_subnet.NATSubnetAD1.*.id,list("")),0)}" : "${oci_core_subnet.PublicSubnetAD1.id}"}"

    # Skip the source/destination check so that the VNIC will forward traffic.
    skip_source_dest_check = true
  }

  metadata {
    ssh_authorized_keys = "${var.nat_instance_ssh_public_key_openssh}"

    # Automate NAT instance configuration with cloud init run at launch
    user_data = "${base64encode(file("${path.module}/cloud_init/bootstrap.template.yaml"))}"
  }

  timeouts {
    create = "10m"
  }
}

resource "oci_core_instance" "NATInstanceAD2" {
  count               = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad2_enabled == "true") ? "1" : "0"}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1],"name")}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.label_prefix}nat-ad2"
  image               = "${lookup(data.oci_core_images.ImageOCID.images[0], "id")}"
  shape               = "${var.nat_instance_shape}"

  create_vnic_details {
    subnet_id = "${(var.control_plane_subnet_access == "private") && (var.dedicated_nat_subnets == "true") ? "${element(concat(oci_core_subnet.NATSubnetAD2.*.id,list("")),0)}" : "${oci_core_subnet.PublicSubnetAD2.id}"}"

    # Skip the source/destination check so that the VNIC will forward traffic.
    skip_source_dest_check = true
  }

  metadata {
    ssh_authorized_keys = "${var.nat_instance_ssh_public_key_openssh}"
    user_data           = "${base64encode(file("${path.module}/cloud_init/bootstrap.template.yaml"))}"
  }

  timeouts {
    create = "10m"
  }
}

resource "oci_core_instance" "NATInstanceAD3" {
  count               = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad3_enabled == "true") ? "1" : "0"}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[2],"name")}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.label_prefix}nat-ad3"
  image               = "${lookup(data.oci_core_images.ImageOCID.images[0], "id")}"
  shape               = "${var.nat_instance_shape}"

  create_vnic_details {
    subnet_id = "${(var.control_plane_subnet_access == "private") && (var.dedicated_nat_subnets == "true") ? "${element(concat(oci_core_subnet.NATSubnetAD3.*.id,list("")),0)}" : "${oci_core_subnet.PublicSubnetAD3.id}"}"

    # Skip the source/destination check so that the VNIC will forward traffic.
    skip_source_dest_check = true
  }

  metadata {
    ssh_authorized_keys = "${var.nat_instance_ssh_public_key_openssh}"
    user_data           = "${base64encode(file("${path.module}/cloud_init/bootstrap.template.yaml"))}"
  }

  timeouts {
    create = "10m"
  }
}
