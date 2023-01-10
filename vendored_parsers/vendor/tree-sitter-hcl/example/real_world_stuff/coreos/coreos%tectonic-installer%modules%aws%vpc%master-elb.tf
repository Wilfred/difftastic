resource "aws_elb" "tnc" {
  count           = "${var.private_master_endpoints ? 1 : 0}"
  name            = "${var.cluster_name}-tnc"
  subnets         = ["${local.master_subnet_ids}"]
  internal        = true
  security_groups = ["${aws_security_group.tnc.id}"]

  idle_timeout                = 3600
  connection_draining         = true
  connection_draining_timeout = 300

  listener {
    instance_port     = 49500
    instance_protocol = "tcp"
    lb_port           = 80
    lb_protocol       = "tcp"
  }

  health_check {
    healthy_threshold   = 2
    unhealthy_threshold = 2
    timeout             = 3
    target              = "TCP:49500"
    interval            = 5
  }

  tags = "${merge(map(
      "Name", "${var.cluster_name}-int",
      "kubernetes.io/cluster/${var.cluster_name}", "owned",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_elb" "api_internal" {
  count           = "${var.private_master_endpoints ? 1 : 0}"
  name            = "${var.cluster_name}-int"
  subnets         = ["${local.master_subnet_ids}"]
  internal        = true
  security_groups = ["${aws_security_group.api.id}"]

  idle_timeout                = 3600
  connection_draining         = true
  connection_draining_timeout = 300

  listener {
    instance_port     = 6443
    instance_protocol = "tcp"
    lb_port           = 6443
    lb_protocol       = "tcp"
  }

  health_check {
    healthy_threshold   = 2
    unhealthy_threshold = 2
    timeout             = 3
    target              = "SSL:6443"
    interval            = 5
  }

  tags = "${merge(map(
      "Name", "${var.cluster_name}-int",
      "kubernetes.io/cluster/${var.cluster_name}", "owned",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_elb" "api_external" {
  count           = "${var.public_master_endpoints ? 1 : 0}"
  name            = "${var.cluster_name}-ext"
  subnets         = ["${local.master_subnet_ids}"]
  internal        = false
  security_groups = ["${aws_security_group.api.id}"]

  idle_timeout                = 3600
  connection_draining         = true
  connection_draining_timeout = 300

  listener {
    instance_port     = 6443
    instance_protocol = "tcp"
    lb_port           = 6443
    lb_protocol       = "tcp"
  }

  health_check {
    healthy_threshold   = 2
    unhealthy_threshold = 2
    timeout             = 3
    target              = "SSL:6443"
    interval            = 5
  }

  tags = "${merge(map(
      "Name", "${var.cluster_name}-api-external",
      "kubernetes.io/cluster/${var.cluster_name}", "owned",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_elb" "console" {
  name            = "${var.cluster_name}-con"
  subnets         = ["${local.master_subnet_ids}"]
  internal        = "${var.public_master_endpoints ? false : true}"
  security_groups = ["${aws_security_group.console.id}"]

  idle_timeout = 3600

  listener {
    instance_port     = 32001
    instance_protocol = "tcp"
    lb_port           = 80
    lb_protocol       = "tcp"
  }

  listener {
    instance_port     = 32000
    instance_protocol = "tcp"
    lb_port           = 443
    lb_protocol       = "tcp"
  }

  health_check {
    healthy_threshold   = 2
    unhealthy_threshold = 2
    timeout             = 3
    target              = "HTTP:32002/healthz"
    interval            = 5
  }

  tags = "${merge(map(
      "Name", "${var.cluster_name}-console",
      "kubernetes.io/cluster/${var.cluster_name}", "owned",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}
