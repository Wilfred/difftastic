// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

terraform {
  required_version = "~> 0.11.0"
}

provider "opc" {
  version         = "~>1.2"
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.domain}"
  endpoint        = "${var.endpoint}"
  lbaas_endpoint  = "${var.lbaas_endpoint}"
}

locals {
  ssh_user             = "opc"
  private_ssh_key_file = "./id_rsa"
  public_ssh_key_file  = "./id_rsa.pub"
  server_count         = 2
}

module "server_network" {
  source = "./network"
  name   = "server-pool-network"
  cidr   = "192.168.100.0/24"
}

module "server_pool" {
  source         = "./server_pool"
  name           = "server"
  server_count   = "${local.server_count}"
  ip_network     = "${module.server_network.ipnetwork}"
  public_ssh_key = "${file(local.public_ssh_key_file)}"
}

module "certificates" {
  source       = "./certificates"
  organization = "example.com"
  province     = "ON"
  country      = "Canada"
  common_name  = "${var.dns_name}"
  dns_names    = ["${var.dns_name}"]
}

module "webapp" {
  source               = "./webapp"
  name                 = "webapp"
  servers              = "${module.server_pool.public_ip_addresses}"
  server_count         = "${local.server_count}"
  server_acl           = "${module.server_pool.server_acl}"
  ssh_user             = "${local.ssh_user}"
  private_ssh_key_file = "${local.private_ssh_key_file}"
  public_ssh_key_file  = "${local.public_ssh_key_file}"
}

module "load_balancer" {
  source     = "./load_balancer"
  region     = "${var.region}"
  name       = "webapp-lb1"
  servers    = ["${formatlist("%s:%s", module.server_pool.private_ip_addresses, module.webapp.port)}"]
  ip_network = "/Compute-${var.domain}/${var.user}/${module.server_network.ipnetwork}"
  vnic_set   = "/Compute-${var.domain}/${var.user}/${module.server_pool.vnicset}"

  dns_name        = "${var.dns_name}"
  ca_cert_pem     = "${module.certificates.ca_cert_pem}"
  cert_pem        = "${module.certificates.cert_pem}"
  private_key_pem = "${module.certificates.private_key_pem}"
}
