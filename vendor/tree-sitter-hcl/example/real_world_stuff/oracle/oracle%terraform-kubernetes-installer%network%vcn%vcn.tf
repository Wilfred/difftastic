resource "oci_core_virtual_network" "CompleteVCN" {
  cidr_block     = "${lookup(var.network_cidrs, "VCN-CIDR")}"
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.label_prefix}${var.vcn_dns_name}"
  dns_label      = "${var.vcn_dns_name}"
}

resource "oci_core_internet_gateway" "PublicIG" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.label_prefix}PublicIG"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"
}

resource "oci_core_route_table" "PublicRouteTable" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"
  display_name   = "${var.label_prefix}RouteTableForComplete"

  route_rules {
    cidr_block = "0.0.0.0/0"

    # Internet Gateway route target for instances on public subnets
    network_entity_id = "${oci_core_internet_gateway.PublicIG.id}"
  }
}

resource "oci_core_route_table" "NATInstanceAD1RouteTable" {
  # Provisioned only when k8s instances in AD1 are in private subnets
  count          = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad1_enabled == "true") ? "1" : "0"}"
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"
  display_name   = "NATInstanceAD1RouteTable"

  route_rules {
    # All traffic leaving the subnet needs to go to route target.
    cidr_block = "0.0.0.0/0"

    # Private IP route target for instances on private AD1 subnets
    network_entity_id = "${data.oci_core_private_ips.NATInstanceAD1PrivateIPDatasource.private_ips.0.id}"
  }
}

resource "oci_core_route_table" "NATInstanceAD2RouteTable" {
  # Provisioned only when k8s instances in AD2 are in private subnets
  count          = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad2_enabled == "true") ? "1" : "0"}"
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"
  display_name   = "NATInstanceAD2RouteTable"

  route_rules {
    # All traffic leaving the subnet needs to go to route target.
    cidr_block = "0.0.0.0/0"

    # Private IP route target for instances on private AD2 subnets
    network_entity_id = "${data.oci_core_private_ips.NATInstanceAD2PrivateIPDatasource.private_ips.0.id}"
  }
}

resource "oci_core_route_table" "NATInstanceAD3RouteTable" {
  # Provisioned only when k8s instances in AD3 are in private subnets
  count          = "${(var.control_plane_subnet_access == "private") && (var.nat_instance_ad3_enabled == "true") ? "1" : "0"}"
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"
  display_name   = "NATInstanceAD3RouteTable"

  route_rules {
    # All traffic leaving the subnet needs to go to route target.
    cidr_block = "0.0.0.0/0"

    # Private IP route target for instances on private AD3 subnets
    network_entity_id = "${data.oci_core_private_ips.NATInstanceAD3PrivateIPDatasource.private_ips.0.id}"
  }
}
