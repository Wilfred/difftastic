// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

resource "opc_compute_security_list" "bastion" {
  name                 = "bastion"
  policy               = "DENY"
  outbound_cidr_policy = "PERMIT"
}

resource "opc_compute_sec_rule" "allow-bastion-ssh" {
  action           = "permit"
  name             = "allow-bastion-ssh"
  source_list      = "seciplist:/oracle/public/public-internet"
  destination_list = "seclist:${opc_compute_security_list.bastion.name}"
  application      = "/oracle/public/ssh"
}

resource "opc_compute_ip_reservation" "bastion" {
  name        = "bastion"
  parent_pool = "/oracle/public/ippool"
  permanent   = true
}

resource "opc_compute_instance" "bastion" {
  name       = "${var.hostname}"
  hostname   = "${var.hostname}"
  label      = "${var.hostname}"
  shape      = "oc3"
  image_list = "${var.image}"
  ssh_keys   = ["${var.ssh_public_key}"]
  tags       = ["bastion"]

  networking_info {
    index          = 0
    shared_network = "true"
    nat            = ["${opc_compute_ip_reservation.bastion.name}"]
    sec_lists      = ["${opc_compute_security_list.bastion.name}"]
  }

  networking_info {
    index          = 1
    shared_network = "false"
    ip_network     = "${var.private_ip_network}"
  }
}
