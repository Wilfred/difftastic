terraform {
  required_providers {
    aws = {
      source  = "hashicorp/aws"
      version = "3.42.0"
    }
  }
}

provider "aws" {
  region = var.region
}

data "aws_availability_zones" "available" {
  filter {
    name   = "opt-in-status"
    values = ["opt-in-not-required"]
  }
}

data "aws_caller_identity" "this" {}

data "aws_security_group" "vpc_default" {
  name   = "default"
  vpc_id = module.vpc.vpc_id
}

# The client app is part of the service mesh. It calls
# the server app through the service mesh.
# It's exposed via a load balancer.
resource "aws_ecs_service" "example_client_app" {
  name            = "${var.name}-example-client-app"
  cluster         = aws_ecs_cluster.this.arn
  task_definition = module.example_client_app.task_definition_arn
  desired_count   = 1
  network_configuration {
    subnets = module.vpc.private_subnets
  }
  launch_type    = "FARGATE"
  propagate_tags = "TASK_DEFINITION"
  load_balancer {
    target_group_arn = aws_lb_target_group.example_client_app.arn
    container_name   = "example-client-app"
    container_port   = 9090
  }
  enable_execute_command = true
  depends_on = [
    aws_iam_role.example_app_task_role
  ]
}

module "example_client_app" {
  source             = "../../modules/mesh-task"
  family             = "${var.name}-example-client-app"
  execution_role_arn = aws_iam_role.example_app_execution.arn
  task_role_arn      = aws_iam_role.example_app_task_role.arn
  port               = "9090"
  upstreams = [
    {
      destination_name = "${var.name}-example-server-app"
      local_bind_port  = 1234
    }
  ]
  log_configuration = local.example_client_app_log_config
  container_definitions = [{
    name             = "example-client-app"
    image            = "ghcr.io/lkysow/fake-service:v0.21.0"
    essential        = true
    logConfiguration = local.example_client_app_log_config
    environment = [
      {
        name  = "NAME"
        value = "${var.name}-example-client-app"
      },
      {
        name  = "UPSTREAM_URIS"
        value = "http://localhost:1234"
      }
    ]
    portMappings = [
      {
        containerPort = 9090
        hostPort      = 9090
        protocol      = "tcp"
      }
    ]
    cpu         = 0
    mountPoints = []
    volumesFrom = []
  }]
  consul_server_service_name = module.dev_consul_server.ecs_service_name
}

# The server app is part of the service mesh. It's called
# by the client app.
resource "aws_ecs_service" "example_server_app" {
  name            = "${var.name}-example-server-app"
  cluster         = aws_ecs_cluster.this.arn
  task_definition = module.example_server_app.task_definition_arn
  desired_count   = 1
  network_configuration {
    subnets = module.vpc.private_subnets
  }
  launch_type            = "FARGATE"
  propagate_tags         = "TASK_DEFINITION"
  enable_execute_command = true
  depends_on = [
    aws_iam_role.example_app_task_role
  ]
}

module "example_server_app" {
  source             = "../../modules/mesh-task"
  family             = "${var.name}-example-server-app"
  execution_role_arn = aws_iam_role.example_app_execution.arn
  task_role_arn      = aws_iam_role.example_app_task_role.arn
  port               = "9090"
  log_configuration  = local.example_server_app_log_config
  container_definitions = [{
    name             = "example-server-app"
    image            = "ghcr.io/lkysow/fake-service:v0.21.0"
    essential        = true
    logConfiguration = local.example_server_app_log_config
    environment = [
      {
        name  = "NAME"
        value = "${var.name}-example-server-app"
      }
    ]
  }]
  consul_server_service_name = module.dev_consul_server.ecs_service_name
}

resource "aws_lb" "example_client_app" {
  name               = "${var.name}-example-client-app"
  internal           = false
  load_balancer_type = "application"
  security_groups    = [aws_security_group.example_client_app_alb.id]
  subnets            = module.vpc.public_subnets
}

resource "aws_security_group" "example_client_app_alb" {
  name   = "${var.name}-example-client-app-alb"
  vpc_id = module.vpc.vpc_id

  ingress {
    description = "Access to example client application."
    from_port   = 9090
    to_port     = 9090
    protocol    = "tcp"
    cidr_blocks = ["${var.lb_ingress_ip}/32"]
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }
}

resource "aws_security_group_rule" "ingress_from_client_alb_to_ecs" {
  type                     = "ingress"
  from_port                = 0
  to_port                  = 65535
  protocol                 = "tcp"
  source_security_group_id = aws_security_group.example_client_app_alb.id
  security_group_id        = data.aws_security_group.vpc_default.id
}

resource "aws_security_group_rule" "ingress_from_server_alb_to_ecs" {
  type                     = "ingress"
  from_port                = 8500
  to_port                  = 8500
  protocol                 = "tcp"
  source_security_group_id = module.dev_consul_server.lb_security_group_id
  security_group_id        = data.aws_security_group.vpc_default.id
}

resource "aws_lb_target_group" "example_client_app" {
  name                 = "${var.name}-example-client-app"
  port                 = 9090
  protocol             = "HTTP"
  vpc_id               = module.vpc.vpc_id
  target_type          = "ip"
  deregistration_delay = 10
  health_check {
    path                = "/"
    healthy_threshold   = 2
    unhealthy_threshold = 10
    timeout             = 30
    interval            = 60
  }
}

resource "aws_lb_listener" "example_client_app" {
  load_balancer_arn = aws_lb.example_client_app.arn
  port              = "9090"
  protocol          = "HTTP"
  default_action {
    type             = "forward"
    target_group_arn = aws_lb_target_group.example_client_app.arn
  }
}

resource "aws_cloudwatch_log_group" "log_group" {
  name = var.name
}


locals {
  example_server_app_log_config = {
    logDriver = "awslogs"
    options = {
      awslogs-group         = aws_cloudwatch_log_group.log_group.name
      awslogs-region        = var.region
      awslogs-stream-prefix = "app"
    }
  }

  example_client_app_log_config = {
    logDriver = "awslogs"
    options = {
      awslogs-group         = aws_cloudwatch_log_group.log_group.name
      awslogs-region        = var.region
      awslogs-stream-prefix = "client"
    }
  }
}
