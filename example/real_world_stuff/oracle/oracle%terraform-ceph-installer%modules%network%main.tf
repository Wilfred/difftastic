
#-------------------------------------------------------------------------------
# If both var.create_new_subnet AND var.create_new_vcn is set to true
#	1. Create a new VCN
#	2. Create a Gateway for that VCN
#-------------------------------------------------------------------------------
# Create a New VCN
resource "oci_core_virtual_network" "vcn" {
  count = "${min(var.create_new_vcn, var.create_new_subnets)}"
  cidr_block = "${var.vcn_cidr}"
  compartment_id = "${var.compartment_id}"
  display_name = "${var.vcn_name}"
  dns_label = "${var.vcn_name}"
}

# Create a New Gateway
#resource "oci_core_internet_gateway" "gateway" {
#  count = "${min(var.create_new_vcn, var.create_new_subnets)}"
#  compartment_id = "${var.compartment_id}"
#  display_name = "${var.gateway_name}"
#  vcn_id = "${oci_core_virtual_network.vcn.id}"
#}

locals {
  vcn_id = "${element(concat(oci_core_virtual_network.vcn.*.id, var.existing_vcn_id), 0)}"
}

#-------------------------------------------------------------------------------
# Get the ID of the Internet Gateway to be used for the rest of the deployment
#====================================================================================
# When a new VCN was created
#data "oci_core_internet_gateways" "igw_new" {
#  count = "${min(var.create_new_vcn, var.create_new_subnets)}"
#  depends_on = [ "oci_core_internet_gateway.gateway" ]
#  compartment_id = "${var.compartment_id}"
#  vcn_id = "${oci_core_virtual_network.vcn.id}"
#}
#
## When an existing VCN is used
#data "oci_core_internet_gateways" "igw_existing" {
#  count = "${1 - min(var.create_new_vcn, var.create_new_subnets)}"
#  compartment_id = "${var.compartment_id}"
#  vcn_id = "${var.existing_vcn_id[0]}"
#}
#
#locals {
#  gateway_list_of_list = "${concat(data.oci_core_internet_gateways.igw_new.*.gateways, data.oci_core_internet_gateways.igw_existing.*.gateways)}"
#  gateway_list = [ "${local.gateway_list_of_list[0]}" ]
#  gateway_id = "${lookup(local.gateway_list[0], "id")}"
#}
#
#-------------------------------------------------------------------------------
# Get the DHCP Options to be used for the rest of the deployment
#-------------------------------------------------------------------------------
data "oci_core_dhcp_options" "dhcp_opt" {
  compartment_id = "${var.compartment_id}"
  vcn_id = "${local.vcn_id}"
}

locals {
#  dhcp_options_id = "${lookup(data.oci_core_dhcp_options.dhcp_opt.options[0], "id")}"
  dhcp_options_id = ""
}

#-------------------------------------------------------------------------------
# If var.create_new_subnet is set to true
#	1. Create a Route Table
#	2. Create a Security List
#-------------------------------------------------------------------------------
#resource "oci_core_route_table" "route_table" {
#  count = "${var.create_new_subnets}"
#  depends_on = [ "oci_core_internet_gateway.gateway" ]
#  compartment_id = "${var.compartment_id}"
#  vcn_id = "${local.vcn_id}"
#  display_name = "${var.route_table_name}"
#  route_rules {
#    cidr_block = "0.0.0.0/0"
#    network_entity_id = "${local.gateway_id}"
#  }
#}

data "oci_core_route_tables" "route_table" {
  compartment_id = "${var.compartment_id}"
  vcn_id = "${local.vcn_id}"
}

locals {
  #route_table_id = "${lookup(data.oci_core_route_tables.route_table.route_tables[0], "id")}"
  route_table_id = ""
}


resource "oci_core_security_list" "security_list" {
  count = "${var.create_new_subnets}"
  compartment_id = "${var.compartment_id}"
  display_name = "Security List"
  vcn_id = "${local.vcn_id}"
  egress_security_rules = [{
    destination = "0.0.0.0/0"
    protocol = "all"
  }]
  ingress_security_rules {
    protocol = "6" 		// tcp
    source = "0.0.0.0/0"
    stateless = false
    tcp_options = {
      "min" = 22		//ssh
      "max" = 22
    }
  }
  ingress_security_rules {
    protocol = "6" 		// tcp
    source = "0.0.0.0/0"
    stateless = false
    tcp_options = {
      "min" = 80		//http
      "max" = 80
    }
  }
  ingress_security_rules {
    protocol = "6" 		// tcp
    source = "0.0.0.0/0"
    stateless = false
    tcp_options = {
      "min" = 443		//https
      "max" = 443
    }
  }
  ingress_security_rules {
    protocol = "6" 		// tcp
    source = "10.0.0.0/16"
    stateless = false
    tcp_options = {
      "min" = 6789 	//ceph-monitors
      "max" = 6789
    }
  }
  ingress_security_rules {
    protocol = "6" 		// tcp
    source = "10.0.0.0/16"
    stateless = false
    tcp_options = {
      "min" = 6800 	//ceph-servers
      "max" = 7300
    }
  }
  ingress_security_rules {
    protocol = "6" 		// tcp
    source = "10.0.0.0/16"
    stateless = false
    tcp_options = {
      "min" = 7480 	//ceph-servers
      "max" = 7480
    }
  }
  ingress_security_rules {
    protocol = "6" 		// tcp
    source = "10.0.0.0/16"
    stateless = false
    tcp_options = {
      "min" = 9000 	//ceph-servers
      "max" = 9000
    }
  }
}

#-------------------------------------------------------------------------------
# Get a list of Availability Domains
#-------------------------------------------------------------------------------
data "oci_identity_availability_domains" "ADs" {
	compartment_id = "${var.tenancy_ocid}"
}

#-------------------------------------------------------------------------------
# If var.create_new_subnet is set to true
#	1. Create the Subnets
#-------------------------------------------------------------------------------
resource "oci_core_subnet" "subnets" {
  count = "${var.new_subnet_count}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[element(var.availability_domain_index_list, count.index) - 1],"name")}"
  cidr_block = "${element(var.subnet_cidr_blocks, count.index)}"
  display_name = "${var.subnet_name_prefix}${count.index}"
  compartment_id = "${var.compartment_id}"
  vcn_id = "${local.vcn_id}"
  route_table_id = "${local.route_table_id}"
  security_list_ids = [ "${oci_core_security_list.security_list.*.id}" ]
  dhcp_options_id = "${local.dhcp_options_id}"
  dns_label = "${var.subnet_name_prefix}${count.index}"
}
