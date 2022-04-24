//
// Module: tf_aws_sg/sg_elasticsearch
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

// Allow TCP:9200 (REST Interface).
resource "aws_security_group_rule" "ingress_tcp_9200_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 9200
  to_port           = 9200
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:9300 (Java interface).
resource "aws_security_group_rule" "ingress_tcp_9300_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 9300
  to_port           = 9300
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}
