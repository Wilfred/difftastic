// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable "name_prefix" {}
variable "acl" {}
variable "protocol_name" {}
variable "ip_protocol" {}
variable "direction" {}
variable "port" {}

resource "opc_compute_security_rule" "rule" {
  name               = "${var.name_prefix}-${var.protocol_name}-${var.direction}"
  flow_direction     = "${var.direction}"
  acl                = "${var.acl}"
  security_protocols = ["${opc_compute_security_protocol.protocol.name}"]
}

resource "opc_compute_security_protocol" "protocol" {
  name        = "${var.name_prefix}-${var.protocol_name}"
  dst_ports   = ["${var.port}"]
  ip_protocol = "${var.ip_protocol}"
}

output "name" {
  value = "${opc_compute_security_rule.rule.name}"
}
