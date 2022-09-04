//
// Module: tf_aws_sg/sg_web
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

// Allow egress all
resource "aws_security_group_rule" "egress_all_all_all" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 0
  to_port           = 0
  protocol          = "-1"
  cidr_blocks       = ["0.0.0.0/0"]
  type              = "egress"
}

// Allow TCP:80 (HTTP)
resource "aws_security_group_rule" "ingress_tcp_80_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 80
  to_port           = 80
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:443 (HTTPS)
resource "aws_security_group_rule" "ingress_tcp_443_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 443
  to_port           = 443
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:1099 (JMX)
resource "aws_security_group_rule" "ingress_tcp_1099_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 1099
  to_port           = 1099
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:8080 (HTTP-ALT)
resource "aws_security_group_rule" "ingress_tcp_8080_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8080
  to_port           = 8080
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}
