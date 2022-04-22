/* Network */
data "oci_identity_availability_domains" "availability_domains" {
  compartment_id = "${var.compartment_ocid}"
}

############################################
# Local variables
############################################

locals {
  tcp_protocol = "6"
  all_protocol = "all"
  anywhere = "0.0.0.0/0"
}

############################################
# Create VCN
############################################

resource "oci_core_virtual_network" "lb-network-vcn" {
  display_name = "LB Network VCN"
  cidr_block = "${var.vcn_cidr}"
  compartment_id = "${var.compartment_ocid}"
  dns_label = "lbnetworkvcn"
}

############################################
# Create Internet Gateway
############################################

resource "oci_core_internet_gateway" "internetgateway" {
  compartment_id = "${var.compartment_ocid}"
  display_name = "orm-demo-internetgateway"
  vcn_id = "${oci_core_virtual_network.lb-network-vcn.id}"
}

############################################
# Create Route Table
############################################

resource "oci_core_route_table" "lb-routetable" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id = "${oci_core_virtual_network.lb-network-vcn.id}"
  display_name = "LB Route Table (Public)"

  route_rules {
    destination = "${local.anywhere}"
//    destination_type = "CIDR_BLOCK"
    network_entity_id = "${oci_core_internet_gateway.internetgateway.id}"
  }
}

resource "oci_core_route_table" "bs-routetable" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_virtual_network.lb-network-vcn.id}"
  display_name = "Backend Route Table (Private)"

  route_rules {
    destination       = "${local.anywhere}"
//    destination_type  = "CIDR_BLOCK"
    network_entity_id = "${oci_core_internet_gateway.internetgateway.id}"
  }
}

############################################
# Create Security List
############################################

resource "oci_core_security_list" "lb-securitylist" {
  display_name = "LB Security List (public subnets)"
  compartment_id = "${oci_core_virtual_network.lb-network-vcn.compartment_id}"
  vcn_id = "${oci_core_virtual_network.lb-network-vcn.id}"

  egress_security_rules = [
    {
      protocol = "${local.all_protocol}"
      destination = "${local.anywhere}"
    }
  ]

  ingress_security_rules = [
    {
      protocol = "${local.tcp_protocol}"
      source = "${local.anywhere}"

      tcp_options = {
        "min" = "${var.non_ssl_listener_port}"
        "max" = "${var.non_ssl_listener_port}"
      }
    },
    {
      protocol = "${local.tcp_protocol}"
      source = "${local.anywhere}"

      tcp_options = {
        "min" = 443
        "max" = 443
      }
    }
  ]
}

resource "oci_core_security_list" "bs-securitylist" {
  display_name = "Backend Set Security List (private subnets)"
  compartment_id = "${var.compartment_ocid}"
  vcn_id = "${oci_core_virtual_network.lb-network-vcn.id}"

  egress_security_rules = [
    {
      protocol = "${local.all_protocol}"
      destination = "${local.anywhere}"
    }]

  ingress_security_rules = [
    {
      protocol = "${local.tcp_protocol}"
      source = "${var.primary_lb_cidr}"

      tcp_options = {
        "min" = 80
        "max" = 80
      }
    },
    {
      protocol = "${local.tcp_protocol}"
      source = "${local.anywhere}"

      tcp_options = {
        "min" = 22
        "max" = 22
      }
    },
    {
      protocol = "${local.tcp_protocol}"
      source = "${var.failover_lb_cidr}"

      tcp_options = {
        "min" = 80
        "max" = 80
      },

    },
    {
      protocol = "${local.tcp_protocol}"
      source = "${var.primary_lb_cidr}"

      tcp_options = {
        "min" = 443
        "max" = 443
      }
    },
    {
      protocol = "${local.tcp_protocol}"
      source = "${var.failover_lb_cidr}"

      tcp_options = {
        "min" = 443
        "max" = 443
      }
    }
  ]
}

############################################
# Create Load Balancer Subnets
############################################
resource "oci_core_subnet" "lb-primary-subnet" {
  display_name = "LB Subnet 1 (Public Primary)"
  availability_domain = "${lookup(data.oci_identity_availability_domains.availability_domains.availability_domains[var.availability_domains -2],"name")}"
  cidr_block = "${var.primary_lb_cidr}"
  dns_label = "lbsubnet1"
  security_list_ids = ["${oci_core_security_list.lb-securitylist.id}"]
  compartment_id = "${var.compartment_ocid}"
  vcn_id = "${oci_core_virtual_network.lb-network-vcn.id}"
  route_table_id = "${oci_core_route_table.lb-routetable.id}"
  dhcp_options_id = "${oci_core_virtual_network.lb-network-vcn.default_dhcp_options_id}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "lb-failover-subnet" {
  display_name = "LB Subnet 2 (Public Failover)"
  availability_domain = "${lookup(data.oci_identity_availability_domains.availability_domains.availability_domains[var.availability_domains -1],"name")}"
  cidr_block = "${var.failover_lb_cidr}"
  dns_label = "lbsubnet2"
  security_list_ids = ["${oci_core_security_list.lb-securitylist.id}"]
  compartment_id = "${var.compartment_ocid}"
  vcn_id = "${oci_core_virtual_network.lb-network-vcn.id}"
  route_table_id = "${oci_core_route_table.lb-routetable.id}"
  dhcp_options_id = "${oci_core_virtual_network.lb-network-vcn.default_dhcp_options_id}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

############################################
# Create Backend Subnets
############################################
resource "oci_core_subnet" "lb-backendset1-subnet" {
  display_name = "Backend Set 1 (private subnet)"
  availability_domain = "${lookup(data.oci_identity_availability_domains.availability_domains.availability_domains[var.availability_domains -2],"name")}"
  cidr_block = "${var.bs1_subnet_cidr}"
  dns_label = "lbsubnet3"
  compartment_id = "${var.compartment_ocid}"
  vcn_id = "${oci_core_virtual_network.lb-network-vcn.id}"
  security_list_ids = ["${oci_core_security_list.bs-securitylist.id}"]
  route_table_id = "${oci_core_route_table.lb-routetable.id}"
  dhcp_options_id = "${oci_core_virtual_network.lb-network-vcn.default_dhcp_options_id}"
//  prohibit_public_ip_on_vnic = "true"
}

resource "oci_core_subnet" "lb-backendset2-subnet" {
  display_name = "Backend Set 2 (private subnet)"
  availability_domain = "${lookup(data.oci_identity_availability_domains.availability_domains.availability_domains[var.availability_domains -1],"name")}"
  cidr_block = "${var.bs2_subnet_cidr}"
  dns_label = "lbsubnet4"
  compartment_id = "${var.compartment_ocid}"
  vcn_id = "${oci_core_virtual_network.lb-network-vcn.id}"
  security_list_ids = ["${oci_core_security_list.bs-securitylist.id}"]
  route_table_id = "${oci_core_route_table.lb-routetable.id}"
  dhcp_options_id = "${oci_core_virtual_network.lb-network-vcn.default_dhcp_options_id}"
//  prohibit_public_ip_on_vnic = "true"
}
