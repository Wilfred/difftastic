resource "aws_elb" "api_internal" {
  count           = "${var.private_master_endpoints}"
  name            = "${var.cluster_name}-int"
  subnets         = ["${local.master_subnet_ids}"]
  internal        = true
  security_groups = ["${aws_security_group.api.id}"]

  idle_timeout                = 3600
  connection_draining         = true
  connection_draining_timeout = 300

  listener {
    instance_port     = 443
    instance_protocol = "tcp"
    lb_port           = 443
    lb_protocol       = "tcp"
  }

  health_check {
    healthy_threshold   = 2
    unhealthy_threshold = 2
    timeout             = 3
    target              = "SSL:443"
    interval            = 5
  }

  tags = "${merge(map(
      "Name", "${var.cluster_name}-int",
      "kubernetes.io/cluster/${var.cluster_name}", "owned",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_elb" "api_external" {
  count           = "${var.public_master_endpoints}"
  name            = "${var.custom_dns_name == "" ? var.cluster_name : var.custom_dns_name}-ext"
  subnets         = ["${local.master_subnet_ids}"]
  internal        = false
  security_groups = ["${aws_security_group.api.id}"]

  idle_timeout                = 3600
  connection_draining         = true
  connection_draining_timeout = 300

  listener {
    instance_port     = 443
    instance_protocol = "tcp"
    lb_port           = 443
    lb_protocol       = "tcp"
  }

  health_check {
    healthy_threshold   = 2
    unhealthy_threshold = 2
    timeout             = 3
    target              = "SSL:443"
    interval            = 5
  }

  tags = "${merge(map(
      "Name", "${var.cluster_name}-api-external",
      "kubernetes.io/cluster/${var.cluster_name}", "owned",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

resource "aws_elb" "console" {
  name            = "${var.custom_dns_name == "" ? var.cluster_name : var.custom_dns_name}-con"
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
