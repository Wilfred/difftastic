resource "oci_core_virtual_network" "cloudfoundry_vcn" {
    cidr_block     = "${var.vpc_cidr}"
    compartment_id = "${oci_identity_compartment.bosh_compartment.id}"
    display_name   = "cloudfoundry_vcn"
    dns_label      = "cfvcn"
}

resource "oci_core_internet_gateway" "cloudfoundry_ig" {
    compartment_id = "${oci_identity_compartment.bosh_compartment.id}"
    display_name   = "cloudfoundry_ig"
    vcn_id         = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
}

resource "oci_core_route_table" "cloudfoundry_route_table" {
    compartment_id = "${oci_identity_compartment.bosh_compartment.id}"
    vcn_id         = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
    display_name   = "cloudfoundry_route_table"
    route_rules {
        cidr_block        = "0.0.0.0/0"
        network_entity_id = "${oci_core_internet_gateway.cloudfoundry_ig.id}"
    }
}

resource "oci_core_security_list" "public_subnet" {
    compartment_id = "${oci_identity_compartment.bosh_compartment.id}"
    display_name   = "public_all"
    vcn_id         = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
    egress_security_rules = [{
        destination = "0.0.0.0/0"
        protocol = "all"
    }]
    ingress_security_rules = [{
        tcp_options = {
            "max" = 80
            "min" = 80
        }
        protocol = "6"
        source = "0.0.0.0/0"
    },
    {
        tcp_options = {
            "max" = 443
            "min" = 443
        }
        protocol = "6"
        source = "0.0.0.0/0"
    },
    {
        tcp_options = {
            "max" = 4443
            "min" = 4443
        }
        protocol = "6"
        source = "0.0.0.0/0"
    },
    {
        protocol = "6"
        source = "${var.vpc_cidr}"
    },
    {
        tcp_options = {
          "max" = 2222
          "min" = 2222
        }
        protocol = "6"
        source = "0.0.0.0/0"
    }]
}

resource "oci_core_security_list" "bastion_subnet" {
    compartment_id = "${oci_identity_compartment.bosh_compartment.id}"
    display_name = "bastion_all"
    vcn_id = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
    egress_security_rules = [{
        protocol = "all"
        destination = "0.0.0.0/0"
    }]
    ingress_security_rules = [{
        tcp_options = {
            "max" = 22
            "min" = 22
        }
        protocol = "6"
        source = "0.0.0.0/0"
    },
    {
        protocol = "6"
        source = "${var.vpc_cidr}"
    },
    {
        tcp_options = {
            "max" = 6901
            "min" = 6901
        }
        protocol = "6"
        source = "${var.director_subnet_ad1_cidr}"
    },
    {
        protocol  = "1"
        source    = "${var.vpc_cidr}"
    }]
}

resource "oci_core_security_list" "director_subnet" {
    compartment_id = "${oci_identity_compartment.bosh_compartment.id}"
    display_name = "director_all"
    vcn_id = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
    egress_security_rules = [{
        protocol = "all"
        destination = "0.0.0.0/0"
    }]
    ingress_security_rules = [{
        protocol = "6"
        source = "${var.director_subnet_ad1_cidr}"
    },
    {
        protocol = "1"
        source   = "${var.vpc_cidr}"
    },
    {
        tcp_options = {
            "max" = 22
            "min" = 22
        }
        protocol = "6"
        source = "${var.bastion_subnet_ad1_cidr}"
    },
    {
        tcp_options = {
            "max" = 4222
            "min" = 4222
        }
        protocol = "6"
        source   = "${var.vpc_cidr}"
    },
    {
        tcp_options = {
            "max" = 6868
            "min" = 6868
        }
        protocol = "6"
        source   = "${var.vpc_cidr}"
    },
    {
        tcp_options = {
            "max" = 8443
            "min" = 8443
        }
        protocol = "6"
        source   = "${var.vpc_cidr}"
    },
    {
        tcp_options = {
            "max" = 25250
            "min" = 25250
        }
        protocol = "6"
        source   = "${var.vpc_cidr}"
    },
    {
        tcp_options = {
            "max" = 25555
            "min" = 25555
        }
        protocol = "6"
        source   = "${var.vpc_cidr}"
    },
    {
        tcp_options = {
            "max" = 25777
            "min" = 25777
        }
        protocol = "6"
        source   = "${var.vpc_cidr}"
    }]
}

resource "oci_core_security_list" "private_subnet" {
    compartment_id = "${oci_identity_compartment.bosh_compartment.id}"
    display_name = "private_all"
    vcn_id = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
    egress_security_rules = [{
        protocol = "all"
        destination = "0.0.0.0/0"
    }]

    ingress_security_rules = [{
        protocol  = "1"
        source    = "${var.vpc_cidr}"
    },
    {
        protocol = "all"
        source = "${var.private_subnet_ad1_cidr}"
    },
    {
        protocol = "all"
        source = "${var.private_subnet_ad2_cidr}"
    },
    {
        protocol = "all"
        source = "${var.private_subnet_ad3_cidr}"
    },
    {
        tcp_options = {
            "max" = 22
            "min" = 22
        }
        protocol = "6"
        source = "${var.bastion_subnet_ad1_cidr}"
    },
    {
        tcp_options = {
            "max" = 22
            "min" = 22
        }
        protocol = "6"
        source = "${var.director_subnet_ad1_cidr}"
    },
    {
        tcp_options = {
            "max" = 6868
            "min" = 6868
        }
        protocol = "6"
        source = "${var.director_subnet_ad1_cidr}"
    },
    {
        tcp_options = {
            "max" = 80
            "min" = 80
        }
        protocol = "6"
        source = "${var.public_subnet_ad1_cidr}"
    },
    {
        tcp_options = {
            "max" = 443
            "min" = 443
        }
        protocol = "6"
        source = "${var.public_subnet_ad1_cidr}"
    },
    {
        tcp_options = {
          "max" = 2222
          "min" = 2222
        }
        protocol = "6"
        source = "${var.public_subnet_ad1_cidr}"
    },
    {
        tcp_options = {
            "max" = 4443
            "min" = 4443
        }
        protocol = "6"
        source = "${var.public_subnet_ad1_cidr}"
    },
    {
        tcp_options = {
            "max" = 8080
            "min" = 8080
        }
        protocol = "6"
        source = "${var.public_subnet_ad1_cidr}"
    },
    {
        tcp_options = {
            "max" = 80
            "min" = 80
        }
        protocol = "6"
        source = "${var.public_subnet_ad2_cidr}"
    },
    {
        tcp_options = {
            "max" = 443
            "min" = 443
        }
        protocol = "6"
        source = "${var.public_subnet_ad2_cidr}"
    },
    {
        tcp_options = {
          "max" = 2222
          "min" = 2222
        }
        protocol = "6"
        source = "${var.public_subnet_ad2_cidr}"
    },
    {
        tcp_options = {
            "max" = 4443
            "min" = 4443
        }
        protocol = "6"
        source = "${var.public_subnet_ad2_cidr}"
    },
    {
        tcp_options = {
            "max" = 8080
            "min" = 8080
        }
        protocol = "6"
        source = "${var.public_subnet_ad2_cidr}"
    }]
}

resource "oci_core_subnet" "public_subnet_ad1" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0], "name")}"
  cidr_block          = "${var.public_subnet_ad1_cidr}"
  display_name        = "public_subnet_ad1"
  dhcp_options_id     = "${oci_core_virtual_network.cloudfoundry_vcn.default_dhcp_options_id}"
  dns_label           = "cfwebad1"
  compartment_id      = "${oci_identity_compartment.bosh_compartment.id}"
  vcn_id              = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
  route_table_id      = "${oci_core_route_table.cloudfoundry_route_table.id}"
  security_list_ids   = ["${oci_core_security_list.public_subnet.id}"]
  prohibit_public_ip_on_vnic = false
}

resource "oci_core_subnet" "bastion_subnet_ad1" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0], "name")}"
  cidr_block          = "${var.bastion_subnet_ad1_cidr}"
  display_name        = "bastion_subnet_ad1"
  dhcp_options_id     = "${oci_core_virtual_network.cloudfoundry_vcn.default_dhcp_options_id}"
  dns_label           = "cfbstad1"
  compartment_id      = "${oci_identity_compartment.bosh_compartment.id}"
  vcn_id              = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
  route_table_id      = "${oci_core_route_table.cloudfoundry_route_table.id}"
  security_list_ids   = ["${oci_core_security_list.bastion_subnet.id}"]
  prohibit_public_ip_on_vnic = false
}

resource "oci_core_subnet" "director_subnet_ad1" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0], "name")}"
  cidr_block          = "${var.director_subnet_ad1_cidr}"
  display_name        = "director_subnet_ad1"
  dhcp_options_id     = "${oci_core_virtual_network.cloudfoundry_vcn.default_dhcp_options_id}"
  dns_label           = "cfdirad1"
  compartment_id      = "${oci_identity_compartment.bosh_compartment.id}"
  vcn_id              = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
  route_table_id      = "${oci_core_route_table.cloudfoundry_route_table.id}"
  security_list_ids   = ["${oci_core_security_list.director_subnet.id}"]
  prohibit_public_ip_on_vnic = false
}

resource "oci_core_subnet" "private_subnet_ad1" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0], "name")}"
  cidr_block          = "${var.private_subnet_ad1_cidr}"
  display_name        = "private_subnet_ad1"
  dhcp_options_id     = "${oci_core_virtual_network.cloudfoundry_vcn.default_dhcp_options_id}"
  dns_label           = "cfprvad1"
  compartment_id      = "${oci_identity_compartment.bosh_compartment.id}"
  vcn_id              = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
  route_table_id      = "${oci_core_route_table.cloudfoundry_route_table.id}"
  security_list_ids   = ["${oci_core_security_list.private_subnet.id}"]
  prohibit_public_ip_on_vnic = false
}

resource "oci_core_subnet" "public_subnet_ad2" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1], "name")}"
  cidr_block          = "${var.public_subnet_ad2_cidr}"
  display_name        = "public_subnet_ad2"
  dhcp_options_id     = "${oci_core_virtual_network.cloudfoundry_vcn.default_dhcp_options_id}"
  dns_label           = "cfwebad2"
  compartment_id      = "${oci_identity_compartment.bosh_compartment.id}"
  vcn_id              = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
  route_table_id      = "${oci_core_route_table.cloudfoundry_route_table.id}"
  security_list_ids   = ["${oci_core_security_list.public_subnet.id}"]
  prohibit_public_ip_on_vnic = false
}

resource "oci_core_subnet" "private_subnet_ad2" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1], "name")}"
  cidr_block          = "${var.private_subnet_ad2_cidr}"
  display_name        = "private_subnet_ad2"
  dhcp_options_id     = "${oci_core_virtual_network.cloudfoundry_vcn.default_dhcp_options_id}"
  dns_label           = "cfprvad2"
  compartment_id      = "${oci_identity_compartment.bosh_compartment.id}"
  vcn_id              = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
  route_table_id      = "${oci_core_route_table.cloudfoundry_route_table.id}"
  security_list_ids   = ["${oci_core_security_list.private_subnet.id}"]
  prohibit_public_ip_on_vnic = false
}

resource "oci_core_subnet" "private_subnet_ad3" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[2], "name")}"
  cidr_block          = "${var.private_subnet_ad3_cidr}"
  display_name        = "private_subnet_ad3"
  dhcp_options_id     = "${oci_core_virtual_network.cloudfoundry_vcn.default_dhcp_options_id}"
  dns_label           = "cfprvad3"
  compartment_id      = "${oci_identity_compartment.bosh_compartment.id}"
  vcn_id              = "${oci_core_virtual_network.cloudfoundry_vcn.id}"
  route_table_id      = "${oci_core_route_table.cloudfoundry_route_table.id}"
  security_list_ids   = ["${oci_core_security_list.private_subnet.id}"]
  prohibit_public_ip_on_vnic = false
}
