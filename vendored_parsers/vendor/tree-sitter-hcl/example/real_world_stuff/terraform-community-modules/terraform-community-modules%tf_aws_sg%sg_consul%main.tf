//
// Module: tf_aws_sg/sg_consul
//
//

resource "aws_security_group" "main_security_group" {
  name        = "${var.security_group_name}"
  description = "tf-sg-${var.security_group_name}"
  vpc_id      = "${var.vpc_id}"
}

// Allow any internal network flow.
resource "aws_security_group_rule" "ingress_any_any_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 0
  to_port           = 65535
  protocol          = "-1"
  self              = true
  type              = "ingress"
}

// Allow TCP:8300 (Server RPC).
resource "aws_security_group_rule" "ingress_tcp_8300_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8300
  to_port           = 8300
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:8500 (Consul Web UI).
resource "aws_security_group_rule" "ingress_tcp_8500_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8500
  to_port           = 8500
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:8301 (Serf LAN).
resource "aws_security_group_rule" "ingress_tcp_8301_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8301
  to_port           = 8301
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow UDP:8301 (Serf LAN).
resource "aws_security_group_rule" "ingress_udp_8301_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8301
  to_port           = 8301
  protocol          = "udp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:8302 (Serf WAN).
resource "aws_security_group_rule" "ingress_tcp_8302_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8302
  to_port           = 8302
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow UDP:8302 (Serf WAN).
resource "aws_security_group_rule" "ingress_udp_8302_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8302
  to_port           = 8302
  protocol          = "udp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:8600 (Consul DNS).
resource "aws_security_group_rule" "ingress_tcp_8600_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8600
  to_port           = 8600
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow UDP:8600 (Consul DNS).
resource "aws_security_group_rule" "ingress_udp_8600_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8600
  to_port           = 8600
  protocol          = "udp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}
