/*
resource "oci_core_virtual_network" "VCN" {
    cidr_block = "${var.vcn_cidr}"
    compartment_id = "${data.null_data_source.SetupConfig.outputs["compartment_id"]}"
    display_name = "${var.director_vcn}"
}
*/

resource "oci_core_security_list" "ci_public_all" {
    compartment_id        = "${data.null_data_source.SetupConfig.inputs.compartment_id}"
    display_name          = "ci_public_all"
    vcn_id                = "${data.null_data_source.VCN.inputs.id}"
    egress_security_rules = [{
        protocol = "all"
        destination = "0.0.0.0/0"
    }]
    ingress_security_rules = [{
        protocol = "all"
        source = "0.0.0.0/0"
    }]
}

resource "oci_core_subnet" "director_subnet" {
  availability_domain = "${data.null_data_source.SetupConfig.inputs.ad_name}"
  cidr_block          = "${var.director_subnet_cidr}"
  display_name        = "ci_director_subnet_${replace(data.null_data_source.SetupConfig.inputs.ad_name, "-", "_")}"
  dhcp_options_id     = "${data.null_data_source.VCN.inputs.dhcp_options_id}"
  compartment_id      = "${data.null_data_source.SetupConfig.inputs.compartment_id}"
  vcn_id              = "${data.null_data_source.VCN.inputs.id}"
  route_table_id      = "${data.null_data_source.VCN.inputs.default_route_table_id}"
  security_list_ids   = ["${oci_core_security_list.ci_public_all.id}"]
  prohibit_public_ip_on_vnic = false
}

resource "oci_core_subnet" "bats_subnet1" {
  availability_domain = "${data.null_data_source.SetupConfig.inputs.ad_name}"
  cidr_block          = "${var.bats_subnet1_cidr}"
  display_name        = "ci_bats_subnet1_${replace(data.null_data_source.SetupConfig.inputs.ad_name, "-", "_")}"
  dhcp_options_id     = "${data.null_data_source.VCN.inputs.dhcp_options_id}"
  compartment_id      = "${data.null_data_source.SetupConfig.inputs.compartment_id}"
  vcn_id              = "${data.null_data_source.VCN.inputs.id}"
  route_table_id      = "${data.null_data_source.VCN.inputs.default_route_table_id}"
  security_list_ids   = ["${oci_core_security_list.ci_public_all.id}"]
  prohibit_public_ip_on_vnic = false
}

resource "oci_core_subnet" "bats_subnet2" {
  availability_domain = "${data.null_data_source.SetupConfig.inputs.ad_name}"
  cidr_block          = "${var.bats_subnet2_cidr}"
  display_name        = "ci_bats_subnet2_${replace(data.null_data_source.SetupConfig.inputs.ad_name, "-", "_")}"
  dhcp_options_id     = "${data.null_data_source.VCN.inputs.dhcp_options_id}"
  compartment_id      = "${data.null_data_source.SetupConfig.inputs.compartment_id}"
  vcn_id              = "${data.null_data_source.VCN.inputs.id}"
  route_table_id      = "${data.null_data_source.VCN.inputs.default_route_table_id}"
  security_list_ids   = ["${oci_core_security_list.ci_public_all.id}"]
  prohibit_public_ip_on_vnic = false
}
