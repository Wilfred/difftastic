#  Copyright 2017, 2018, 2019 Oracle Corporation and/or affiliates.  All rights reserved.

locals {
  icmp_protocol = "1"
  tcp_protocol = "6"
  all_protocols = "all"

  anywhere = "0.0.0.0/0"

  ssh_port = "22"

  node_port_min = "30000"
  node_port_max = "32767"
}

# worker security private
resource "oci_core_security_list" "workers_private_seclist" {
  count = "${(var.worker_mode == "private") ? 1 : 0}"

  compartment_id = "${var.compartment_ocid}"
  display_name   = "workers private security list"
  vcn_id         = "${oci_core_virtual_network.test_vcn.id}"

  egress_security_rules  {
      # intra-vcn
      protocol    = "${local.all_protocols}"
      destination = "${oci_core_virtual_network.test_vcn.cidr_block}"
      stateless   = "true"
  }

  egress_security_rules {
      # intra-vcn
      protocol    = "${local.all_protocols}"
      destination = "0.0.0.0/0"
      stateless   = "false"
    }

  egress_security_rules {

    destination      = "${lookup(data.oci_core_services.test_services.services[0], "cidr_block")}"
    destination_type = "SERVICE_CIDR_BLOCK"
    protocol         = "all"

    }


  ingress_security_rules {
      # intra-vcn
      protocol  = "all"
      source = "${oci_core_virtual_network.test_vcn.cidr_block}"
      stateless = "true"
    }

  ingress_security_rules {
      # icmp
      protocol  = "${local.icmp_protocol}"
      source    = "${local.anywhere}"
      stateless = "false"
    }

  ingress_security_rules {
      # rule 9
      protocol = "${local.tcp_protocol}"
      source = "${local.anywhere}"
      stateless = "false"

      tcp_options {
        max = "${local.ssh_port}"
        min = "${local.ssh_port}"
      }
    }

  ingress_security_rules {
      # rule 10
      protocol = "${local.tcp_protocol}"
      source = "${local.anywhere}"
      stateless = "false"

      tcp_options  {
        max = "${local.node_port_max}"
        min = "${local.node_port_min}"
      }
    }

}

# worker security public
resource "oci_core_security_list" "workers_public_seclist" {

  count = "${(var.worker_mode == "public") ? 1 : 0}"

  compartment_id = "${var.compartment_ocid}"
  display_name   = "workers public security list"
  vcn_id         = "${oci_core_virtual_network.test_vcn.id}"

  egress_security_rules  {
      # intra-vcn
      protocol    = "${local.all_protocols}"
      destination = "${oci_core_virtual_network.test_vcn.cidr_block}"
      stateless   = "true"
  }

  egress_security_rules {
      # intra-vcn
      protocol    = "${local.all_protocols}"
      destination = "0.0.0.0/0"
      stateless   = "false"
    }



  ingress_security_rules {
      # intra-vcn
      protocol  = "all"
      source = "${oci_core_virtual_network.test_vcn.cidr_block}"
      stateless = "true"
    }

  ingress_security_rules {
      # icmp
      protocol  = "${local.icmp_protocol}"
      source    = "${local.anywhere}"
      stateless = "false"
    }

  ingress_security_rules {
      # rule 9
      protocol = "${local.tcp_protocol}"
      source = "${local.anywhere}"
      stateless = "false"

      tcp_options {
        max = "${local.ssh_port}"
        min = "${local.ssh_port}"
      }
    }

  ingress_security_rules {
      # rule 10
      protocol = "${local.tcp_protocol}"
      source = "${local.anywhere}"
      stateless = "false"

      tcp_options  {
        max = "${local.node_port_max}"
        min = "${local.node_port_min}"
      }
    }

}

# load balancer security checklist
resource "oci_core_security_list" "lb_seclist" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "load balancer security list"
  vcn_id         = "${oci_core_virtual_network.test_vcn.id}"

  egress_security_rules {
    protocol    = "${local.all_protocols}"
    destination = "${local.anywhere}"
    stateless   = "true"
  }

  ingress_security_rules {
      protocol = "${local.tcp_protocol}"
      source    = "${local.anywhere}"
      stateless = "true"
    }
}
