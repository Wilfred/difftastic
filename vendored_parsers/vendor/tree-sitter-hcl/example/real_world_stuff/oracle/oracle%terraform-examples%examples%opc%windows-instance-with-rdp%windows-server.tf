// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

provider "opc" {
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.domain}"
  endpoint        = "${var.endpoint}"
}

data "template_file" "userdata" {
  vars = {
    admin_password = "${var.administrator_password}"
  }

  template = <<JSON
{
	"userdata": {
			"enable_rdp": true,
			"administrator_password": "$${admin_password}"
	}
}
JSON
}

resource "opc_compute_instance" "instance1" {
  name                = "windows-server-1"
  label               = "My Windows Server 2012 R2"
  shape               = "oc3"
  image_list          = "/Compute-${var.domain}/${var.user}/Microsoft_Windows_Server_2012_R2"
  instance_attributes = "${data.template_file.userdata.rendered}"

  networking_info {
    index          = 0
    shared_network = true
    nat            = ["${opc_compute_ip_reservation.ipreservation1.name}"]
    sec_lists      = ["${opc_compute_security_list.seclist1.name}"]
  }
}

resource "opc_compute_security_list" "seclist1" {
  name                 = "windows-seclist1"
  policy               = "DENY"
  outbound_cidr_policy = "PERMIT"
}

resource "opc_compute_sec_rule" "allow-rdp" {
  name             = "Allow-rdp-access"
  source_list      = "seciplist:/oracle/public/public-internet"
  destination_list = "seclist:${opc_compute_security_list.seclist1.name}"
  action           = "permit"
  application      = "/oracle/public/rdp"
  disabled         = false
}

resource "opc_compute_ip_reservation" "ipreservation1" {
  parent_pool = "/oracle/public/ippool"
  permanent   = true
}

output "public_ip" {
  value = "${opc_compute_ip_reservation.ipreservation1.ip}"
}
