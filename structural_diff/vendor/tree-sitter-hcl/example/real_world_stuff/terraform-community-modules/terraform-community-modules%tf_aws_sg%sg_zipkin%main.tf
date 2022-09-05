//
// Module: tf_aws_sg/sg_zipkin
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

// Allow TCP:9990 (Zipkin Admin port collector)
resource "aws_security_group_rule" "ingress_tcp_9990_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 9990
  to_port           = 9990
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:9901 (Zipkin Admin port query)
resource "aws_security_group_rule" "ingress_tcp_9901_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 9901
  to_port           = 9901
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:9991 (Zipkin Admin port web)
resource "aws_security_group_rule" "ingress_tcp_9991_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 9991
  to_port           = 9991
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:9411 (Zipkin query port)
resource "aws_security_group_rule" "ingress_tcp_9411_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 9411
  to_port           = 9411
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:8080 (Zipkin web port)
resource "aws_security_group_rule" "ingress_tcp_8080_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 8080
  to_port           = 8080
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}
