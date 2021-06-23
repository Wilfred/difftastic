/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


locals {
  tcp_protocol  = "6"
  udp_protocol  = "17"
  all_protocols = "all"
  anywhere      = "0.0.0.0/0"
  db_port       = "1521"
  ssh_port      = "22"
  rdp_port      = "3389"
  winrm_port    = "5986"
  fss_ports     = ["2048", "2050", "111"]
}

# Bastion Security List
resource "oci_core_security_list" "BastionSecList" {
  compartment_id = var.compartment_ocid
  display_name   = "BastionSecList"
  vcn_id         = module.create_vcn.vcnid

  egress_security_rules = [
    {
      protocol    = "${local.tcp_protocol}"
      destination = "${local.anywhere}"
    },
  ]

  ingress_security_rules = [
    {
      tcp_options = {
        "min" = "${local.ssh_port}"
        "max" = "${local.ssh_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${local.anywhere}"
    },
  ]
}


# Database System Security List
resource "oci_core_security_list" "DBSecList" {
  compartment_id = var.compartment_ocid
  display_name   = "DBSecList"
  vcn_id         = module.create_vcn.vcnid

  egress_security_rules = [
    {
      protocol    = "${local.tcp_protocol}"
      destination = "${local.anywhere}"
    },
  ]

  ingress_security_rules = [
    {
      tcp_options = {
        "min" = "${local.ssh_port}"
        "max" = "${local.ssh_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
    {
      tcp_options = {
        "min" = "${local.db_port}"
        "max" = "${local.db_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
  ]
}

# Application Server Security List
resource "oci_core_security_list" "AppSecList" {
  compartment_id = var.compartment_ocid
  display_name   = "AppSecList"
  vcn_id         = module.create_vcn.vcnid

  egress_security_rules = [
    {
      protocol    = "${local.tcp_protocol}"
      destination = "${local.anywhere}"
    },
  ]

  ingress_security_rules = [
    {
      tcp_options = {
        "min" = "${local.ssh_port}"
        "max" = "${local.ssh_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
    {
      tcp_options = {
        "min" = "${var.psft_app_instance_listen_port_range[0]}"
        "max" = "${var.psft_app_instance_listen_port_range[1]}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
  ]
}

# Web Server Security List
resource "oci_core_security_list" "WebSecList" {
  compartment_id = var.compartment_ocid
  display_name   = "WebSecList"
  vcn_id         = module.create_vcn.vcnid

  egress_security_rules = [
    {
      protocol    = "${local.tcp_protocol}"
      destination = "${local.anywhere}"
    },
  ]

  ingress_security_rules = [
    {
      tcp_options = {
        "min" = "${local.ssh_port}"
        "max" = "${local.ssh_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
    {
      tcp_options = {
        "min" = "${var.psft_web_instance_listen_port}"
        "max" = "${var.psft_web_instance_listen_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
  ]
}

# Load Balancer Security List
resource "oci_core_security_list" "LBSecList" {
  compartment_id = var.compartment_ocid
  display_name   = "LBSecList"
  vcn_id         = module.create_vcn.vcnid

  egress_security_rules = [
    {
      protocol    = "${local.tcp_protocol}"
      destination = "${local.anywhere}"
    },
  ]

  ingress_security_rules = [
    {
      tcp_options = {
        "min" = "${var.load_balancer_listen_port}"
        "max" = "${var.load_balancer_listen_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
  ]
}

# Elastic Search Server Security List
resource "oci_core_security_list" "ESSecList" {
  compartment_id = var.compartment_ocid
  display_name   = "ESSecList"
  vcn_id         = module.create_vcn.vcnid

  egress_security_rules = [
    {
      protocol    = "${local.tcp_protocol}"
      destination = "${local.anywhere}"
    },
  ]

  ingress_security_rules = [
    {
      tcp_options = {
        "min" = "${local.ssh_port}"
        "max" = "${local.ssh_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
    {
      tcp_options = {
        "min" = "${var.psft_es_instance_listen_port}"
        "max" = "${var.psft_es_instance_listen_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
  ]
}

# Peoplesoft Tools Security List
resource "oci_core_security_list" "PToolsSecList" {
  compartment_id = var.compartment_ocid
  display_name   = "PToolsSecList"
  vcn_id         = module.create_vcn.vcnid

  egress_security_rules = [
    {
      protocol    = "${local.tcp_protocol}"
      destination = "${local.anywhere}"
    },
  ]

  ingress_security_rules = [
    {
      tcp_options = {
        "min" = "${local.rdp_port}"
        "max" = "${local.rdp_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
    {
      tcp_options = {
        "min" = "${local.winrm_port}"
        "max" = "${local.winrm_port}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
  ]
}

# File Storage Service Security List
resource "oci_core_security_list" "FSSSecList" {
  compartment_id = var.compartment_ocid
  display_name   = "FSSSecList"
  vcn_id         = module.create_vcn.vcnid

  egress_security_rules = [
    {
      protocol    = "${local.tcp_protocol}"
      destination = "${local.anywhere}"
    },
  ]

  ingress_security_rules = [
    {
      tcp_options = {
        "min" = "${local.fss_ports[0]}"
        "max" = "${local.fss_ports[1]}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
    {
      tcp_options = {
        "min" = "${local.fss_ports[2]}"
        "max" = "${local.fss_ports[2]}"
      }

      protocol = "${local.tcp_protocol}"
      source   = "${var.vcn_cidr}"
    },
    {
      udp_options = {
        "min" = "${local.fss_ports[0]}"
        "max" = "${local.fss_ports[0]}"
      }

      protocol = "${local.udp_protocol}"
      source   = "${var.vcn_cidr}"
    },
    {
      udp_options = {
        "min" = "${local.fss_ports[2]}"
        "max" = "${local.fss_ports[2]}"
      }

      protocol = "${local.udp_protocol}"
      source   = "${var.vcn_cidr}"
    },
  ]
}
