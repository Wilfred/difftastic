// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

provider "opc" {
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.domain}"
  endpoint        = "${var.endpoint}"
}

resource "opc_compute_ssh_key" "my-ssh-key" {
  name    = "my-ssh-key"
  key     = "${file(var.public_ssh_key)}"
  enabled = true
}

resource "opc_compute_ip_address_reservation" "my-ip-address" {
  name            = "my-ip-address"
  ip_address_pool = "public-ippool"
}

resource "opc_compute_ip_network" "my-ip-network" {
  name              = "my-ip-network"
  ip_address_prefix = "192.168.1.0/24"
}

resource "opc_compute_acl" "my-acl" {
  name = "my-acl"
}

resource "opc_compute_security_rule" "ssh" {
  name               = "Allow-ssh-ingress"
  flow_direction     = "ingress"
  acl                = "${opc_compute_acl.my-acl.name}"
  security_protocols = ["${opc_compute_security_protocol.ssh.name}"]
}

resource "opc_compute_security_rule" "egress" {
  name               = "Allow-all-egress"
  flow_direction     = "egress"
  acl                = "${opc_compute_acl.my-acl.name}"
  security_protocols = ["${opc_compute_security_protocol.all.name}"]
}

resource "opc_compute_security_protocol" "all" {
  name        = "all"
  ip_protocol = "all"
}

resource "opc_compute_security_protocol" "ssh" {
  name        = "ssh"
  dst_ports   = ["22"]
  ip_protocol = "tcp"
}

resource "opc_compute_vnic_set" "my-vnic-set" {
  name         = "my-vnic-set"
  applied_acls = ["${opc_compute_acl.my-acl.name}"]
}

resource "opc_compute_instance" "my-instance" {
  name       = "my-instance"
  hostname   = "my-instance"
  label      = "my-instance"
  shape      = "oc3"
  image_list = "/oracle/public/OL_7.2_UEKR4_x86_64"

  networking_info {
    index              = 0
    ip_network         = "${opc_compute_ip_network.my-ip-network.name}"
    ip_address         = "192.168.1.100"
    is_default_gateway = true
    vnic_sets          = ["${opc_compute_vnic_set.my-vnic-set.name}"]
    nat                = ["${opc_compute_ip_address_reservation.my-ip-address.name}"]
  }

  ssh_keys = ["${opc_compute_ssh_key.my-ssh-key.name}"]
}

output "public_ip_address" {
  value = "${opc_compute_ip_address_reservation.my-ip-address.ip_address}"
}
