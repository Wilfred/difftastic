# Availability Domain
data "oci_identity_availability_domains" "ADs" {
    compartment_id = "${var.oracle_tenancy_ocid}"
    filter {
      name = "name"
      values = ["${var.director_ad}"]
    }
}

data "oci_identity_compartments" "Compartments" {
  compartment_id = "${var.oracle_tenancy_ocid}"
  filter {
    name = "name"
    values = ["${var.director_compartment_name}"]
  }
}

data "oci_core_virtual_networks" "VCNs" {
  compartment_id = "${data.null_data_source.SetupConfig.inputs.compartment_id}"
  filter {
    name = "display_name"
    values = ["${var.director_vcn}"]
  }
}

data "null_data_source" "SetupConfig" {
  inputs = {
    ad_name = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
    compartment_id = "${lookup(data.oci_identity_compartments.Compartments.compartments[0],"id")}"
  }
}

data "null_data_source" "VCN" {
  inputs = {
    id = "${lookup(data.oci_core_virtual_networks.VCNs.virtual_networks[0], "id")}"
    dhcp_options_id = "${lookup(data.oci_core_virtual_networks.VCNs.virtual_networks[0], "default_dhcp_options_id")}"
    default_route_table_id = "${lookup(data.oci_core_virtual_networks.VCNs.virtual_networks[0], "default_route_table_id")}"
  }
}