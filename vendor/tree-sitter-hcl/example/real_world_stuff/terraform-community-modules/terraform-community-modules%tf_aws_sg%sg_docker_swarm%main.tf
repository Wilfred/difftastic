//
// Module: tf_aws_sg/sg_docker_swarm
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

// Allow TCP:2377 (Docker Swarm cluster management communication)
resource "aws_security_group_rule" "ingress_tcp_2377_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 2377
  to_port           = 2377
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow TCP:7946 (Docker Swarm Node communication)
resource "aws_security_group_rule" "ingress_tcp_7946_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 7946
  to_port           = 7946
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow UDP:7946 (Docker Swarm Node communication)
resource "aws_security_group_rule" "ingress_udp_7946_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 7946
  to_port           = 7946
  protocol          = "udp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}

// Allow UDP:4789 (Docker Swarm Overlay Network Traffic)
resource "aws_security_group_rule" "ingress_udp_4789_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 4789
  to_port           = 4789
  protocol          = "udp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}