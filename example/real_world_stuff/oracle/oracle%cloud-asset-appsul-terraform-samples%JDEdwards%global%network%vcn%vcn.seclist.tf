/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


locals {
  tcp_protocol  = "6"
  all_protocols = "all"
  anywhere      = "0.0.0.0/0"
  db_port       = "1521"
  ssh_port      = "22"
}
resource "oci_core_security_list" "publicsl" {
  compartment_id = var.compartment_ocid
  display_name   = "PublicSeclist"
  vcn_id         = oci_core_virtual_network.vcn.id

  egress_security_rules = [{
    destination = "0.0.0.0/0"
    protocol    = "all"
  }]

  ingress_security_rules = [{
    protocol = "6"
    source   = "0.0.0.0/0"

    tcp_options = {
      "max" = 22
      "min" = 22
    }
    },
    {
      protocol = "6"
      source   = "0.0.0.0/0"

      tcp_options = {
        "max" = 3389
        "min" = 3389
      }
    },
    {
      protocol = "all"
      source   = "${var.vcn_cidr}"
    },
  ]
}

resource "oci_core_security_list" "lbsl" {
  compartment_id = var.compartment_ocid
  display_name   = "LBSeclist"
  vcn_id         = oci_core_virtual_network.vcn.id

  egress_security_rules = [{
    destination = "0.0.0.0/0"
    protocol    = "all"
  }]

  ingress_security_rules = [{
    protocol = "6"
    source   = "0.0.0.0/0"

    tcp_options = {
      "max" = 6022
      "min" = 6017
    }
    },
    {
      protocol = "all"
      source   = "${var.vcn_cidr}"
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.lbaas_standalone_html}"
        "min" = "${var.lbaas_standalone_html}"
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.lbaas_html}"
        "min" = "${var.lbaas_html}"
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.lbaas_es_port[1]}"
        "min" = "${var.lbaas_es_port[0]}"
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.lbaas_ais}"
        "min" = "${var.lbaas_ais}"
      }
    },
    {
      protocol = "1"
      source   = "${var.vcn_cidr}"

      icmp_options = {
        "type" = 3
      }
    },
    {
      protocol = "1"
      source   = "${var.vcn_cidr}"

      icmp_options = {
        "type" = 5
      }
    },
  ]
}

resource "oci_core_security_list" "dbsl" {
  compartment_id = var.compartment_ocid
  display_name   = "DBSeclist"
  vcn_id         = oci_core_virtual_network.vcn.id

  egress_security_rules = [{
    destination = "0.0.0.0/0"
    protocol    = "all"
  }]

  ingress_security_rules = [
    {
      protocol = "6"
      source   = "0.0.0.0/0"

      tcp_options = {
        "max" = 22
        "min" = 22
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 8998
        "min" = 8998
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 14510
        "min" = 14501
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 1521
        "min" = 1521
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 5150
        "min" = 5150
      }
    },
    {
      protocol = "1"
      source   = "${var.vcn_cidr}"

      icmp_options = {
        "type" = 3
      }
    },
    {
      protocol = "1"
      source   = "${var.vcn_cidr}"

      icmp_options = {
        "type" = 5
      }
    },
  ]
}

resource "oci_core_security_list" "psntsl" {
  compartment_id = var.compartment_ocid
  display_name   = "Presseclist"
  vcn_id         = oci_core_virtual_network.vcn.id

  egress_security_rules = [{
    destination = "0.0.0.0/0"
    protocol    = "all"
  }]

  ingress_security_rules = [
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 22
        "min" = 22
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 8998
        "min" = 8998
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 14520
        "min" = 14501
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 5150
        "min" = 5150
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.lbaas_standalone_html}"
        "min" = "${var.lbaas_standalone_html}"
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.lbaas_html}"
        "min" = "${var.lbaas_html}"
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.lbaas_ais}"
        "min" = "${var.lbaas_ais}"
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.standalone_jas_pd[1]}"
        "min" = "${var.standalone_jas_pd[0]}"
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.jas_pd[1]}"
        "min" = "${var.jas_pd[0]}"
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.ais_pd[1]}"
        "min" = "${var.ais_pd[0]}"
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = "${var.web_nonpd[1]}"
        "min" = "${var.web_nonpd[0]}"
      }
    },
    {
      protocol = "6"

      source = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 6022
        "min" = 6017
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 7001
        "min" = 7001
      }
    },
    {
      protocol = "1"
      source   = "${var.vcn_cidr}"

      icmp_options = {
        "type" = 3
      }
    },
    {
      protocol = "1"
      source   = "${var.vcn_cidr}"

      icmp_options = {
        "type" = 5
      }
    },
  ]
}

resource "oci_core_security_list" "middlesl" {
  compartment_id = var.compartment_ocid
  display_name   = "MidSeclist"
  vcn_id         = oci_core_virtual_network.vcn.id

  egress_security_rules = [{
    destination = "0.0.0.0/0"
    protocol    = "all"
  }]

  ingress_security_rules = [
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 22
        "min" = 22
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 8998
        "min" = 8998
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 14510
        "min" = 14501
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 6022
        "min" = 6017
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 5150
        "min" = 5150
      }
    },
    {
      protocol = "1"
      source   = "${var.vcn_cidr}"

      icmp_options = {
        "type" = 3
      }
    },
    {
      protocol = "1"
      source   = "${var.vcn_cidr}"

      icmp_options = {
        "type" = 5
      }
    },
  ]
}

resource "oci_core_security_list" "adminsl" {
  compartment_id = var.compartment_ocid
  display_name   = "Adminseclist"
  vcn_id         = oci_core_virtual_network.vcn.id

  egress_security_rules = [{
    destination = "0.0.0.0/0"
    protocol    = "all"
  }]

  ingress_security_rules = [
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 22
        "min" = 22
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 8999
        "min" = 8998
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 14510
        "min" = 14501
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 6022
        "min" = 6017
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 3000
        "min" = 3000
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 5150
        "min" = 5150
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 7001
        "min" = 7001
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 3389
        "min" = 3389
      }
    },
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 5985
        "min" = 5985
      }
    },
    /*
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 339
        "min" = 339
      }
    },
*/
    {
      protocol = "6"
      source   = "${var.vcn_cidr}"

      tcp_options = {
        "max" = 445
        "min" = 445
      }
    },
    {
      protocol = "1"
      source   = "${var.vcn_cidr}"

      icmp_options = {
        "type" = 3
      }
    },
    {
      protocol = "1"
      source   = "${var.vcn_cidr}"

      icmp_options = {
        "type" = 5
      }
    },
  ]
}

resource "oci_core_security_list" "NatSecList" {
  compartment_id = var.compartment_ocid
  display_name   = "NatSecList"
  vcn_id         = oci_core_virtual_network.vcn.id
  egress_security_rules = [{
    protocol    = "${local.all_protocols}"
    destination = "${local.anywhere}"
  }]
  ingress_security_rules = [{
    tcp_options = {
      "max" = "${local.ssh_port}"
      "min" = "${local.ssh_port}"
    }
    protocol = "${local.tcp_protocol}"
    source   = "${var.vcn_cidr}"
    },
    {
      protocol = "all"
      source   = "${var.vcn_cidr}"
    }
  ]
}
