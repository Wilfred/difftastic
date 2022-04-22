//
// Module: tf_aws_sg/sg_openvpn
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

// Allow UDP:1194 (OpenVPN)
resource "aws_security_group_rule" "ingress_udp_1194_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 1194
  to_port           = 1194
  protocol          = "udp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:943 (OpenVPN)
resource "aws_security_group_rule" "ingress_tcp_943_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 943
  to_port           = 943
  protocol          = "tcp"
  self              = true
  type              = "ingress"
}

// Allow TCP:443 (OpenVPN)
resource "aws_security_group_rule" "ingress_tcp_443_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 443
  to_port           = 443
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}
