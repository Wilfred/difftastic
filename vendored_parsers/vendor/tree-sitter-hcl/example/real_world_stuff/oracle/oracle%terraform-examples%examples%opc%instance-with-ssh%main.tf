// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

provider "opc" {
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.domain}"
  endpoint        = "${var.endpoint}"
}

resource "opc_compute_instance" "instance1" {
  name       = "example-instance1"
  label      = "My Oracle Linux 7.2 UEK3 Server"
  shape      = "oc3"
  image_list = "/oracle/public/OL_7.2_UEKR3_x86_64"
  ssh_keys   = ["${opc_compute_ssh_key.sshkey1.name}"]

  networking_info {
    index          = 0
    shared_network = true
    nat            = ["${opc_compute_ip_reservation.ipreservation1.name}"]
    sec_lists      = ["${opc_compute_security_list.seclist1.name}"]
  }
}

resource "opc_compute_ssh_key" "sshkey1" {
  name    = "example-sshkey1"
  key     = "${file(var.ssh_public_key_file)}"
  enabled = true
}

resource "opc_compute_ip_reservation" "ipreservation1" {
  parent_pool = "/oracle/public/ippool"
  permanent   = true
}

resource "opc_compute_security_list" "seclist1" {
  name                 = "example-seclist1"
  policy               = "DENY"
  outbound_cidr_policy = "PERMIT"
}

resource "opc_compute_sec_rule" "allow-ssh" {
  name             = "Allow-ssh-access"
  source_list      = "seciplist:/oracle/public/public-internet"
  destination_list = "seclist:${opc_compute_security_list.seclist1.name}"
  action           = "permit"
  application      = "/oracle/public/ssh"
  disabled         = false
}
