# Security Group
resource "aws_security_group" "powerdns" {
  vpc_id = "${aws_vpc.vpc.id}"
}

resource "aws_security_group_rule" "powerdns_egress" {
  type              = "egress"
  security_group_id = "${aws_security_group.powerdns.id}"

  from_port   = 0
  to_port     = 0
  protocol    = "-1"
  cidr_blocks = ["0.0.0.0/0"]
}

resource "aws_security_group_rule" "powerdns_ingress_ssh" {
  type              = "ingress"
  security_group_id = "${aws_security_group.powerdns.id}"

  protocol    = "tcp"
  cidr_blocks = ["0.0.0.0/0"]
  from_port   = 22
  to_port     = 22
}

resource "aws_security_group_rule" "powerdns_ingress_http" {
  type              = "ingress"
  security_group_id = "${aws_security_group.powerdns.id}"

  protocol    = "tcp"
  cidr_blocks = ["0.0.0.0/0"]
  from_port   = 80
  to_port     = 80
}

resource "aws_security_group_rule" "powerdns_ingress_https" {
  type              = "ingress"
  security_group_id = "${aws_security_group.powerdns.id}"

  protocol    = "tcp"
  cidr_blocks = ["0.0.0.0/0"]
  from_port   = 443
  to_port     = 443
}

resource "aws_security_group_rule" "powerdns_ingress_api" {
  type              = "ingress"
  security_group_id = "${aws_security_group.powerdns.id}"

  protocol    = "tcp"
  cidr_blocks = ["0.0.0.0/0"]
  from_port   = 8081
  to_port     = 8081
}

resource "aws_security_group_rule" "powerdns_ingress_dns" {
  type              = "ingress"
  security_group_id = "${aws_security_group.powerdns.id}"

  protocol    = "tcp"
  cidr_blocks = ["0.0.0.0/0"]
  from_port   = 53
  to_port     = 53
}

resource "aws_security_group_rule" "powerdns_ingress_dns_udp" {
  type              = "ingress"
  security_group_id = "${aws_security_group.powerdns.id}"

  protocol    = "udp"
  cidr_blocks = ["0.0.0.0/0"]
  from_port   = 53
  to_port     = 53
}
