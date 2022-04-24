resource "aws_security_group" "etcd" {
  count  = "${var.enable_etcd_sg}"
  vpc_id = "${data.aws_vpc.cluster_vpc.id}"

  tags = "${merge(map(
      "Name", "${var.cluster_name}_etcd_sg",
      "kubernetes.io/cluster/${var.cluster_name}", "owned",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    self        = true
    cidr_blocks = ["0.0.0.0/0"]
  }

  ingress {
    protocol    = "icmp"
    cidr_blocks = ["0.0.0.0/0"]
    from_port   = 0
    to_port     = 0
  }

  ingress {
    protocol  = "tcp"
    from_port = 22
    to_port   = 22
    self      = true

    security_groups = ["${aws_security_group.master.id}"]
  }

  ingress {
    protocol  = "tcp"
    from_port = 2379
    to_port   = 2379
    self      = true

    security_groups = ["${aws_security_group.master.id}"]
  }

  ingress {
    protocol  = "tcp"
    from_port = 2380
    to_port   = 2380
    self      = true
  }
}
