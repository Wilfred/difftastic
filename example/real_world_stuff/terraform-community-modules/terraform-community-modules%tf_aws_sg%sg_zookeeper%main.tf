//
// Module: tf_aws_sg/sg_zookeeper
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

// Allow TCP:2181 (Zookeeper)
resource "aws_security_group_rule" "ingress_tcp_2181_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 2181
  to_port           = 2181
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:2888 (Zookeeper)
resource "aws_security_group_rule" "ingress_tcp_2888_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 2888
  to_port           = 2888
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:7199 (JMX)
resource "aws_security_group_rule" "ingress_tcp_7199_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 7199
  to_port           = 7199
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:3888 (Zookeper)
resource "aws_security_group_rule" "ingress_tcp_3888_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 3888
  to_port           = 3888
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}
