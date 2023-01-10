resource "aws_alb" "consul" {
  name = "${var.namespace}-consul"

  security_groups = [aws_security_group.demostack.id]
  subnets         = aws_subnet.demostack.*.id

   tags = local.common_tags
}

resource "aws_alb_target_group" "consul" {
  name = "${var.namespace}-consul"

  port     = "8500"
  vpc_id   = aws_vpc.demostack.id
  protocol = "HTTP"

  health_check {
    interval          = "5"
    timeout           = "2"
    path              = "/v1/status/leader"
    port              = "8500"
    protocol          = "HTTP"
    matcher           = "200,429"
    healthy_threshold = 2
  }
}

resource "aws_alb_listener" "consul" {
  depends_on = [
    aws_acm_certificate_validation.cert
  ]

  load_balancer_arn = aws_alb.consul.arn

  port            = "8500"
  protocol        = "HTTPS"
  certificate_arn = aws_acm_certificate_validation.cert.certificate_arn
  ssl_policy      = "ELBSecurityPolicy-TLS-1-2-Ext-2018-06"

  default_action {
    target_group_arn = aws_alb_target_group.consul.arn
    type             = "forward"
  }
}

resource "aws_alb_target_group_attachment" "consul" {
  count            = var.servers
  target_group_arn = aws_alb_target_group.consul.arn
  target_id        = element(aws_instance.servers.*.id, count.index)
  port             = "8500"
}
