//
// Module: tf_aws_sg/sg_carbon-relay-ng
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

// Allow: TCP:2003 for carbon line-in.
resource "aws_security_group_rule" "ingress_tcp_2003_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 2003
  to_port           = 2003
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow: UDP:2013 for carbon line-in.
resource "aws_security_group_rule" "ingress_udp_2003_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 2003
  to_port           = 2003
  protocol          = "udp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow: TCP:2013 for Pickle.
resource "aws_security_group_rule" "ingress_tcp_2013_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 2013
  to_port           = 2013
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow: UDP:2013 for Pickle.
resource "aws_security_group_rule" "ingress_udp_2013_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 2013
  to_port           = 2013
  protocol          = "udp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow: TCP:2004 for Admin port.
resource "aws_security_group_rule" "ingress_tcp_2004_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 2004
  to_port           = 2004
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow: TCP:8081 for graphical user interface.
resource "aws_security_group_rule" "ingress_tcp_8081_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8081
  to_port           = 8081
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}
