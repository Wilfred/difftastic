resource "aws_security_group" "tfe_lb_allow" {
  name   = "${var.friendly_name_prefix}-tfe-lb-allow"
  vpc_id = var.network_id
}

resource "aws_security_group_rule" "tfe_lb_allow_inbound_http" {
  type              = "ingress"
  from_port         = 80
  to_port           = 80
  protocol          = "tcp"
  cidr_blocks       = ["0.0.0.0/0"]
  description       = "Allow HTTP (port 80) traffic inbound to TFE LB"
  security_group_id = aws_security_group.tfe_lb_allow.id
}

resource "aws_security_group_rule" "tfe_lb_allow_inbound_https" {
  type              = "ingress"
  from_port         = 443
  to_port           = 443
  protocol          = "tcp"
  cidr_blocks       = ["0.0.0.0/0"]
  description       = "Allow HTTPS (port 443) traffic inbound to TFE LB"
  security_group_id = aws_security_group.tfe_lb_allow.id
}

resource "aws_security_group_rule" "tfe_lb_allow_inbound_dashboard" {
  count             = var.active_active ? 0 : 1
  type              = "ingress"
  from_port         = 8800
  to_port           = 8800
  protocol          = "tcp"
  cidr_blocks       = var.admin_dashboard_ingress_ranges
  description       = "Allow dashboard traffic inbound to TFE LB"
  security_group_id = aws_security_group.tfe_lb_allow.id
}

resource "aws_security_group" "tfe_outbound_allow" {
  name   = "${var.friendly_name_prefix}-tfe-outbound-allow"
  vpc_id = var.network_id
}

resource "aws_security_group_rule" "tfe_outbound_allow_all" {
  type        = "egress"
  from_port   = 0
  to_port     = 0
  protocol    = "-1"
  cidr_blocks = ["0.0.0.0/0"]
  description = "Allow all traffic outbound from TFE"

  security_group_id = aws_security_group.tfe_outbound_allow.id
}

resource "aws_lb" "tfe_lb" {
  name               = "${var.friendly_name_prefix}-tfe-web-alb"
  internal           = (var.load_balancing_scheme == "PRIVATE")
  load_balancer_type = "application"
  subnets            = var.load_balancing_scheme == "PRIVATE" ? var.network_private_subnets : var.network_public_subnets

  security_groups = [
    aws_security_group.tfe_lb_allow.id,
    aws_security_group.tfe_outbound_allow.id
  ]
}

resource "aws_lb_listener" "tfe_listener_80" {
  load_balancer_arn = aws_lb.tfe_lb.arn
  port              = 80
  protocol          = "HTTP"

  default_action {
    type = "redirect"

    redirect {
      port        = 443
      protocol    = "HTTPS"
      status_code = "HTTP_301"
    }
  }
}

resource "aws_lb_listener" "tfe_listener_443" {
  load_balancer_arn = aws_lb.tfe_lb.arn
  port              = 443
  protocol          = "HTTPS"
  ssl_policy        = var.ssl_policy
  certificate_arn   = var.certificate_arn

  default_action {
    type             = "forward"
    target_group_arn = aws_lb_target_group.tfe_tg_443.arn
  }
}

resource "aws_lb_target_group" "tfe_tg_443" {
  name     = "${var.friendly_name_prefix}-tfe-alb-tg-443"
  port     = 443
  protocol = "HTTPS"
  vpc_id   = var.network_id

  health_check {
    path     = "/_health_check"
    protocol = "HTTPS"
    matcher  = "200-399"
  }
}

resource "aws_lb_listener" "tfe_listener_8800" {
  count             = var.active_active ? 0 : 1
  load_balancer_arn = aws_lb.tfe_lb.arn
  port              = 8800
  protocol          = "HTTPS"
  ssl_policy        = var.ssl_policy
  certificate_arn   = var.certificate_arn


  default_action {
    type             = "forward"
    target_group_arn = aws_lb_target_group.tfe_tg_8800[0].arn
  }
}

resource "aws_lb_target_group" "tfe_tg_8800" {
  count    = var.active_active ? 0 : 1
  name     = "${var.friendly_name_prefix}-tfe-alb-tg-8800"
  port     = 8800
  protocol = "HTTPS"
  vpc_id   = var.network_id

  health_check {
    path     = "/"
    protocol = "HTTPS"
    matcher  = "200-399"
  }
}

data "aws_route53_zone" "tfe" {
  name         = var.domain_name
  private_zone = false
}

resource "aws_route53_record" "tfe" {
  zone_id = data.aws_route53_zone.tfe.zone_id
  name    = var.fqdn
  type    = "A"

  alias {
    name                   = aws_lb.tfe_lb.dns_name
    zone_id                = aws_lb.tfe_lb.zone_id
    evaluate_target_health = true
  }
}
