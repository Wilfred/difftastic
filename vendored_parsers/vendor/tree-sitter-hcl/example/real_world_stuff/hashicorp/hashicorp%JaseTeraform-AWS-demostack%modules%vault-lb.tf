resource "aws_alb" "vault" {
  name = "${var.namespace}-vault"

  security_groups = [aws_security_group.demostack.id]
  subnets         = aws_subnet.demostack.*.id

    tags = local.common_tags
}

resource "aws_alb_target_group" "vault" {
  name = "${var.namespace}-vault"
  tags = local.common_tags

  port     = "8200"
  vpc_id   = aws_vpc.demostack.id
  protocol = "HTTPS"

  health_check {
    interval          = "5"
    timeout           = "2"
    path              = "/v1/sys/health"
    port              = "8200"
    protocol          = "HTTPS"
    matcher           = "200,472,473"
    healthy_threshold = 2
  }
}


resource "aws_alb_listener" "vault" {
  depends_on = [
    aws_acm_certificate_validation.cert
  ]

  load_balancer_arn = aws_alb.vault.arn

  port            = "8200"
  protocol        = "HTTPS"
  certificate_arn = aws_acm_certificate_validation.cert.certificate_arn
  ssl_policy      = "ELBSecurityPolicy-TLS-1-2-Ext-2018-06"
  default_action {
    target_group_arn = aws_alb_target_group.vault.arn
    type             = "forward"
  }

}


resource "aws_alb_target_group_attachment" "vault" {
  count            = var.servers
  target_group_arn = aws_alb_target_group.vault.arn
  target_id        = element(aws_instance.servers.*.id, count.index)
  port             = "8200"
  
}

##########################################################


resource "aws_alb" "vault_cluster" {
  name = "${var.namespace}-vault-cluster"

  security_groups = [aws_security_group.demostack.id]
  subnets         = aws_subnet.demostack.*.id

   tags = local.common_tags
}



resource "aws_alb_target_group" "vault_cluster" {
  name = "${var.namespace}-vault-cluster"
  tags = local.common_tags

  port     = "8201"
  vpc_id   = aws_vpc.demostack.id
  protocol = "HTTPS"

  health_check {
    interval          = "5"
    timeout           = "2"
    path              = "/v1/sys/health"
    port              = "8200"
    protocol          = "HTTPS"
    matcher           = "200"
    healthy_threshold = 2
  }
}


resource "aws_alb_listener" "vault_cluster" {
  depends_on = [
    aws_acm_certificate_validation.cert
  ]

  load_balancer_arn = aws_alb.vault.arn
  
  port            = "8201"
  protocol        = "HTTPS"
  certificate_arn = aws_acm_certificate_validation.cert.certificate_arn
  ssl_policy      = "ELBSecurityPolicy-TLS-1-2-Ext-2018-06"
  default_action {
    target_group_arn = aws_alb_target_group.vault_cluster.arn
    type             = "forward"
  }

}


resource "aws_alb_target_group_attachment" "vault_cluster" {
  count            = var.servers
  target_group_arn = aws_alb_target_group.vault_cluster.arn
  target_id        = element(aws_instance.servers.*.id, count.index)
  port             = "8201"
  
}
