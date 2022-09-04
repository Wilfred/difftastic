// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

resource "opc_compute_ssh_key" "sshkey" {
  name    = "${var.name}-ssh-key"
  key     = "${var.public_ssh_key}"
  enabled = true
}

resource "opc_compute_ip_address_reservation" "ipres" {
  count           = "${var.server_count}"
  name            = "${var.name}${count.index}-ip-address"
  ip_address_pool = "public-ippool"
}

resource "opc_compute_acl" "acl" {
  name = "${var.name}"
}

module "security_all_egress" {
  source = "../security_rules/all_egress"
  name   = "${var.name}"
  acl    = "${opc_compute_acl.acl.name}"
}

module "security_ssh_ingress" {
  source        = "../security_rules"
  name_prefix   = "${var.name}"
  port          = "22"
  protocol_name = "ssh"
  ip_protocol   = "tcp"
  direction     = "ingress"
  acl           = "${opc_compute_acl.acl.name}"
}

resource "opc_compute_vnic_set" "vnicset" {
  name         = "${var.name}"
  applied_acls = ["${opc_compute_acl.acl.name}"]
}

resource "opc_compute_instance" "server" {
  count      = "${var.server_count}"
  name       = "${var.name}${count.index}"
  hostname   = "${var.name}${count.index}"
  shape      = "${var.shape}"
  image_list = "${var.image_list}"

  networking_info {
    index              = 0
    ip_network         = "${var.ip_network}"
    is_default_gateway = true
    dns                = ["${var.name}${count.index}"]
    vnic               = "${var.name}${count.index}_eth0"
    vnic_sets          = ["${opc_compute_vnic_set.vnicset.name}"]
    nat                = ["${element(opc_compute_ip_address_reservation.ipres.*.name, count.index)}"]
  }

  ssh_keys = ["${opc_compute_ssh_key.sshkey.name}"]
}
