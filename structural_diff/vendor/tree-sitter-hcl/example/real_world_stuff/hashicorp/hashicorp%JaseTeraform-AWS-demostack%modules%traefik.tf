resource "aws_alb" "traefik" {
  name = "${var.namespace}-traefik"

  security_groups = [aws_security_group.demostack.id]
  subnets         = aws_subnet.demostack.*.id

   tags = local.common_tags
}

resource "aws_alb_target_group" "traefik" {
  name     = "${var.namespace}-traefik"
  port     = "8080"
  vpc_id   = aws_vpc.demostack.id
  protocol = "HTTP"
  
  health_check {
    interval          = "5"
    timeout           = "2"
    path              = "/ping"
    port              = "8080"
    protocol          = "HTTP"
    healthy_threshold = 2
    matcher           = 200
  }
}

resource "aws_alb_target_group" "traefik-ui" {
  name     = "${var.namespace}-traefik-ui"
  port     = "8081"
  vpc_id   = aws_vpc.demostack.id
  protocol = "HTTP"

  health_check {
    interval          = "5"
    timeout           = "2"
    path              = "/ping"
    port              = "8080"
    protocol          = "HTTP"
    healthy_threshold = 2
    matcher           = 200
  }
}

resource "aws_alb_listener" "traefik" {
  load_balancer_arn = aws_alb.traefik.arn

  port     = "8080"
  protocol = "HTTP"

  default_action {
    target_group_arn = aws_alb_target_group.traefik.arn
    type             = "forward"
  }
}

resource "aws_alb_listener" "traefik-ui" {
  load_balancer_arn = aws_alb.traefik.arn

  port     = "8081"
  protocol = "HTTP"

  default_action {
    target_group_arn = aws_alb_target_group.traefik-ui.arn
    type             = "forward"
  }
}

resource "aws_alb_target_group_attachment" "traefik" {
  count            = var.workers
  target_group_arn = aws_alb_target_group.traefik.arn
  target_id        = element(aws_instance.workers.*.id, count.index)
  port             = "8080"
}

resource "aws_alb_target_group_attachment" "traefik-ui" {
  count            = var.workers
  target_group_arn = aws_alb_target_group.traefik-ui.arn
  target_id        = element(aws_instance.workers.*.id, count.index)
  port             = "8081"
}
