//
// Module: tf_aws_sg/sg_storm
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

// Allow TCP:6627 (Nimbus)
resource "aws_security_group_rule" "ingress_tcp_6627_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 6627
  to_port           = 6627
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:8080 (Storm UI)
resource "aws_security_group_rule" "ingress_tcp_8080_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8080
  to_port           = 8080
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:6700-6703 (Supervisor)
resource "aws_security_group_rule" "ingress_tcp_6703_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 6700
  to_port           = 6703
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}
