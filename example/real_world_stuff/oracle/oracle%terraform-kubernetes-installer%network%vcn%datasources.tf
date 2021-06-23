# Gets a list of availability domains
data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

# Prevent oci_core_images image list from changing underneath us.
data "oci_core_images" "ImageOCID" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.nat_instance_oracle_linux_image_name}"
}

# Gets a list of VNIC attachments on the NAT instance in AD 1
data "oci_core_vnic_attachments" "NATInstanceAD1Vnics" {
  count               = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad1_enabled == "true") ? "1" : "0"}"
  compartment_id      = "${var.compartment_ocid}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  instance_id         = "${oci_core_instance.NATInstanceAD1.id}"
}

# Gets the OCID of the first (default) VNIC on the NAT instance in AD 1
data "oci_core_vnic" "NATInstanceAD1Vnic" {
  count   = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad1_enabled == "true") ? "1" : "0"}"
  vnic_id = "${lookup(data.oci_core_vnic_attachments.NATInstanceAD1Vnics.vnic_attachments[0],"vnic_id")}"
}

# List Private IPs on the NAT instance in AD 1
data "oci_core_private_ips" "NATInstanceAD1PrivateIPDatasource" {
  count   = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad1_enabled == "true") ? "1" : "0"}"
  vnic_id = "${data.oci_core_vnic.NATInstanceAD1Vnic.id}"
}

# Gets a list of VNIC attachments on the NAT instance in AD 2
data "oci_core_vnic_attachments" "NATInstanceAD2Vnics" {
  count               = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad2_enabled == "true") ? "1" : "0"}"
  compartment_id      = "${var.compartment_ocid}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1],"name")}"
  instance_id         = "${oci_core_instance.NATInstanceAD2.id}"
}

# Gets the OCID of the first (default) VNIC on the NAT instance in AD 2
data "oci_core_vnic" "NATInstanceAD2Vnic" {
  count   = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad2_enabled == "true") ? "1" : "0"}"
  vnic_id = "${lookup(data.oci_core_vnic_attachments.NATInstanceAD2Vnics.vnic_attachments[0],"vnic_id")}"
}

# List Private IPs on the NAT instance in AD 2
data "oci_core_private_ips" "NATInstanceAD2PrivateIPDatasource" {
  count   = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad2_enabled == "true") ? "1" : "0"}"
  vnic_id = "${data.oci_core_vnic.NATInstanceAD2Vnic.id}"
}

# Gets a list of VNIC attachments on the NAT instance in AD 3
data "oci_core_vnic_attachments" "NATInstanceAD3Vnics" {
  count               = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad3_enabled == "true") ? "1" : "0"}"
  compartment_id      = "${var.compartment_ocid}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[2],"name")}"
  instance_id         = "${oci_core_instance.NATInstanceAD3.id}"
}

# Gets the OCID of the first (default) VNIC on the NAT instance in AD 3
data "oci_core_vnic" "NATInstanceAD3Vnic" {
  count   = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad3_enabled == "true") ? "1" : "0"}"
  vnic_id = "${lookup(data.oci_core_vnic_attachments.NATInstanceAD3Vnics.vnic_attachments[0],"vnic_id")}"
}

# List Private IPs on the NAT instance in AD 3
data "oci_core_private_ips" "NATInstanceAD3PrivateIPDatasource" {
  count   = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad3_enabled == "true") ? "1" : "0"}"
  vnic_id = "${data.oci_core_vnic.NATInstanceAD3Vnic.id}"
}
