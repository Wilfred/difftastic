//
// Module: tf_aws_sg/sg_ldaps_only
//
//

resource "aws_security_group" "main_security_group" {
  name        = "${var.security_group_name}"
  description = "tf-sg-${var.security_group_name}"
  vpc_id      = "${var.vpc_id}"
}

// Allow TCP:636 (LDAPS)
resource "aws_security_group_rule" "ingress_tcp_636_cidr" {
  security_group_id = "${aws_security_group.main_security_group.id}"
  from_port         = 636
  to_port           = 636
  protocol          = "tcp"
  cidr_blocks       = "${var.source_cidr_block}"
  type              = "ingress"
}
