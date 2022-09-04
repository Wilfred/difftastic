/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


locals {
  // VCN is /16, each tier will get /22
  db_subnet_prefix      = "${cidrsubnet("${var.vcn_cidr}", 6, 0)}"
  mid_subnet_prefix     = "${cidrsubnet("${var.vcn_cidr}", 6, 1)}"
  pres_subnet_prefix    = "${cidrsubnet("${var.vcn_cidr}", 6, 2)}"
  lb_subnet_prefix      = "${cidrsubnet("${var.vcn_cidr}", 6, 3)}"
  admin_subnet_prefix   = "${cidrsubnet("${var.vcn_cidr}", 6, 4)}"
  bast_subnet_prefix    = "${cidrsubnet("${var.vcn_cidr}", 6, 5)}"
}


module "create_vcn" {
  source  = "./network/vcn"

  compartment_ocid        = "${var.compartment_ocid}"
  vcn_cidr                = "${var.vcn_cidr}"
  vcn_dns_label           = "${var.vcn_dns_label}"
  lbaas_es_port           = "${var.lbaas_es_port}"
  lbaas_standalone_html   = "${var.lbaas_standalone_html}"
  lbaas_html              = "${var.lbaas_html}"
  lbaas_ais               = "${var.lbaas_ais}"
  standalone_jas_pd       = "${var.standalone_jas_pd}"
  jas_pd                  = "${var.jas_pd}"
  ais_pd                  = "${var.ais_pd}"
  web_nonpd               = "${var.web_nonpd }"
}

module "db_subnet" {
  source  = "./network/subnets"

  compartment_ocid    = "${var.compartment_ocid}"
  AD                  = "${var.AD}"
  availability_domain = ["${data.template_file.deployment_ad.*.rendered}"]
  vcn_id              = "${module.create_vcn.vcn_id}"
  dns_label           = "dbsubad"
  security_list_ids   = "${module.create_vcn.dbslid}"
  dhcp_options_id     = "${module.create_vcn.default_dhcp_id}"
  route_table_id = "${oci_core_route_table.PrivateRT.id}"
  vcn_subnet_cidr = [
    "${cidrsubnet(local.db_subnet_prefix, 2, 0)}",
    "${cidrsubnet(local.db_subnet_prefix, 2, 1)}",
    "${cidrsubnet(local.db_subnet_prefix, 2, 2)}",
  ]
  private_subnet = "True"
}

module "bas_subnet" {
  source  = "./network/subnets"

  compartment_ocid    = "${var.compartment_ocid}"
  AD                  = "${var.AD}"
  availability_domain = ["${data.template_file.deployment_ad.*.rendered}"]
  vcn_id              = "${module.create_vcn.vcn_id}"
  dns_label           = "bassubad"
  security_list_ids   = "${module.create_vcn.pubslid}"
  dhcp_options_id     = "${module.create_vcn.default_dhcp_id}"
  route_table_id      = "${oci_core_route_table.PublicRT.id}"
  vcn_subnet_cidr = [
    "${cidrsubnet(local.bast_subnet_prefix, 2, 0)}",
    "${cidrsubnet(local.bast_subnet_prefix, 2, 1)}",
    "${cidrsubnet(local.bast_subnet_prefix, 2, 2)}",
  ]
  private_subnet      = "False"
}

module "mid_subnet" {
  source              = "./network/subnets"

  compartment_ocid    = "${var.compartment_ocid}"
  AD                  = "${var.AD}"
  availability_domain = ["${data.template_file.deployment_ad.*.rendered}"]
  vcn_id              = "${module.create_vcn.vcn_id}"
  dns_label           = "midsubad"
  security_list_ids   = "${module.create_vcn.midslid}"
  dhcp_options_id     = "${module.create_vcn.default_dhcp_id}"
  route_table_id      = "${oci_core_route_table.PrivateRT.id}"
  vcn_subnet_cidr = [
    "${cidrsubnet(local.mid_subnet_prefix, 2, 0)}",
    "${cidrsubnet(local.mid_subnet_prefix, 2, 1)}",
    "${cidrsubnet(local.mid_subnet_prefix, 2, 2)}",
  ]
  private_subnet      = "True"
}
module "psnt_subnet" {
  source              = "./network/subnets"

  compartment_ocid    = "${var.compartment_ocid}"
  AD                  = "${var.AD}"
  availability_domain = ["${data.template_file.deployment_ad.*.rendered}"]
  vcn_id              = "${module.create_vcn.vcn_id}"
  dns_label           = "psntsubad"
  security_list_ids   = "${module.create_vcn.psntslid}"
  dhcp_options_id     = "${module.create_vcn.default_dhcp_id}"
  route_table_id    = "${oci_core_route_table.PrivateRT.id}"
  vcn_subnet_cidr = [
    "${cidrsubnet(local.pres_subnet_prefix, 2, 0)}",
    "${cidrsubnet(local.pres_subnet_prefix, 2, 1)}",
    "${cidrsubnet(local.pres_subnet_prefix, 2, 2)}",
  ]
  private_subnet    = "True"
}

module "lb_subnet" {
  source  = "./network/subnets"

  compartment_ocid    = "${var.compartment_ocid}"
  AD                  = "${var.AD}"
  availability_domain = ["${data.template_file.deployment_ad.*.rendered}"]
  vcn_id              = "${module.create_vcn.vcn_id}"
  dns_label           = "lbsubad"
  security_list_ids   = "${module.create_vcn.lbslid}"
  dhcp_options_id     = "${module.create_vcn.default_dhcp_id}"
  route_table_id = "${oci_core_route_table.PrivateRT.id}"
  vcn_subnet_cidr = [
    "${cidrsubnet(local.lb_subnet_prefix, 2, 0)}",
    "${cidrsubnet(local.lb_subnet_prefix, 2, 1)}",
    "${cidrsubnet(local.lb_subnet_prefix, 2, 2)}",
  ]
  private_subnet      = "True"
}

module "admin_subnet" {
  source  = "./network/subnets"

  compartment_ocid    = "${var.compartment_ocid}"
  AD                  = ["${var.AD[0]}"]
  availability_domain = ["${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD[0] - 1], "name")}"]
  vcn_id              = "${module.create_vcn.vcn_id}"
  dns_label           = "adminsubad"
  security_list_ids   = "${module.create_vcn.admslid}"
  dhcp_options_id     = "${module.create_vcn.default_dhcp_id}"
  route_table_id      = "${oci_core_route_table.PrivateRT.id}"
  vcn_subnet_cidr = [
    "${cidrsubnet(local.admin_subnet_prefix, 2, 0)}",
    "${cidrsubnet(local.admin_subnet_prefix, 2, 1)}",
    "${cidrsubnet(local.admin_subnet_prefix, 2, 2)}",
  ]
  private_subnet = "True"
}

module "create_bastion" {
  source  = "./bastion"

  compartment_ocid        = "${var.compartment_ocid}"
  AD                      = "${var.AD}"
  availability_domain     = ["${data.template_file.deployment_ad.*.rendered}"]
  bastion_hostname_prefix = "${var.env_prefix}bas${substr(var.region, 3, 3)}"
  bastion_image           = "${data.oci_core_images.InstanceImageOCID.images.0.id}"
  bastion_instance_shape  = "${var.bastion_instance_shape}"
  bastion_subnet          = ["${module.bas_subnet.subnet_ids}"]
  bastion_ssh_public_key  = "${var.bastion_ssh_public_key}"
}
