//
// Module: tf_aws_sg/sg_cassandra
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

// Allow TCP:9042 (Cassandra clients).
resource "aws_security_group_rule" "ingress_tcp_9042_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 9042
  to_port           = 9042
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:9160 (Cassandra Thrift clients)
resource "aws_security_group_rule" "ingress_tcp_9160_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 9160
  to_port           = 9160
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:7199 (JMX)
resource "aws_security_group_rule" "ingress_tcp_7199_self" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 7199
  to_port           = 7199
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}
