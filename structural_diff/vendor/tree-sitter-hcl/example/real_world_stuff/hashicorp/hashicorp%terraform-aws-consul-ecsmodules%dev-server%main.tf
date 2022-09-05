locals {
  load_balancer = var.lb_enabled ? [{
    target_group_arn = aws_lb_target_group.this[0].arn
    container_name   = "consul-server"
    container_port   = 8500
  }] : []
}

resource "aws_ecs_service" "this" {
  name            = var.name
  cluster         = var.ecs_cluster_arn
  task_definition = aws_ecs_task_definition.this.arn
  desired_count   = 1
  network_configuration {
    subnets          = var.subnet_ids
    assign_public_ip = var.assign_public_ip
  }
  launch_type = var.launch_type
  dynamic "load_balancer" {
    for_each = local.load_balancer
    content {
      target_group_arn = load_balancer.value["target_group_arn"]
      container_name   = load_balancer.value["container_name"]
      container_port   = load_balancer.value["container_port"]
    }
  }
  enable_execute_command = true

  depends_on = [
    aws_iam_role.this_task
  ]
}

resource "aws_ecs_task_definition" "this" {
  family                   = var.name
  requires_compatibilities = ["FARGATE", "EC2"]
  network_mode             = "awsvpc"
  cpu                      = 256
  memory                   = 512
  execution_role_arn       = aws_iam_role.this_execution.arn
  task_role_arn            = aws_iam_role.this_task.arn
  volume {
    name = "consul-data"
  }
  container_definitions = jsonencode([
    {
      name      = "consul-server"
      image     = var.consul_image
      essential = true
      portMappings = [
        {
          containerPort = 8301
        },
        {
          containerPort = 8300
        },
        {
          containerPort = 8500
        }
      ]
      logConfiguration = var.log_configuration
      entryPoint       = ["/bin/sh", "-ec"]
      command          = [replace(local.consul_server_command, "\r", "")]
      mountPoints = [
        {
          sourceVolume  = "consul-data"
          containerPath = "/consul"
        }
      ]
      linuxParameters = {
        initProcessEnabled = true
      }
    }
  ])
}

resource "aws_iam_policy" "this_execution" {
  name        = "${var.name}_execution"
  path        = "/ecs/"
  description = "Consul server execution"

  policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Effect": "Allow",
      "Action": [
        "logs:CreateLogStream",
        "logs:PutLogEvents"
      ],
      "Resource": "*"
    }
  ]
}
EOF
}

resource "aws_iam_role" "this_execution" {
  name = "${var.name}_execution"
  path = "/ecs/"

  assume_role_policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Sid": "",
      "Effect": "Allow",
      "Principal": {
        "Service": "ecs-tasks.amazonaws.com"
      },
      "Action": "sts:AssumeRole"
    }
  ]
}
EOF
}

resource "aws_iam_role_policy_attachment" "this_execution" {
  role       = aws_iam_role.this_execution.id
  policy_arn = aws_iam_policy.this_execution.arn
}

resource "aws_iam_role" "this_task" {
  name = "${var.name}_task"
  assume_role_policy = jsonencode({
    Version = "2012-10-17"
    Statement = [
      {
        Action = "sts:AssumeRole"
        Effect = "Allow"
        Sid    = ""
        Principal = {
          Service = "ecs-tasks.amazonaws.com"
        }
      },
    ]
  })

  inline_policy {
    name = "exec"
    policy = jsonencode({
      Version = "2012-10-17"
      Statement = [
        {
          Effect = "Allow"
          Action = [
            "ssmmessages:CreateControlChannel",
            "ssmmessages:CreateDataChannel",
            "ssmmessages:OpenControlChannel",
            "ssmmessages:OpenDataChannel"
          ]
          Resource = "*"
        }
      ]
    })
  }
}


locals {
  consul_server_command = <<EOF
ECS_IPV4=$(curl -s $ECS_CONTAINER_METADATA_URI | jq -r '.Networks[0].IPv4Addresses[0]')

exec consul agent -server \
  -bootstrap \
  -ui \
  -advertise "$ECS_IPV4" \
  -client 0.0.0.0 \
  -data-dir /tmp/consul-data \
  -encrypt "$CONSUL_GOSSIP_ENCRYPTION_KEY" \
  -hcl 'telemetry { disable_compat_1.9 = true }' \
  -hcl 'connect { enabled = true }' \
  -hcl 'enable_central_service_config = true' \
EOF
}

resource "aws_lb_target_group" "this" {
  count                = var.lb_enabled ? 1 : 0
  name                 = var.name
  port                 = 8500
  protocol             = "HTTP"
  vpc_id               = var.lb_vpc_id
  target_type          = "ip"
  deregistration_delay = 10
  health_check {
    path                = "/v1/status/leader"
    healthy_threshold   = 2
    unhealthy_threshold = 10
    timeout             = 30
    interval            = 60
  }
}

resource "aws_lb" "this" {
  count              = var.lb_enabled ? 1 : 0
  name               = var.name
  internal           = false
  load_balancer_type = "application"
  security_groups    = [aws_security_group.load_balancer[count.index].id]
  subnets            = var.lb_subnets
}

resource "aws_lb_listener" "this" {
  count             = var.lb_enabled ? 1 : 0
  load_balancer_arn = aws_lb.this[count.index].arn
  port              = "8500"
  protocol          = "HTTP"
  default_action {
    type             = "forward"
    target_group_arn = aws_lb_target_group.this[count.index].arn
  }
}

resource "aws_security_group" "load_balancer" {
  count  = var.lb_enabled ? 1 : 0
  name   = var.name
  vpc_id = var.lb_vpc_id

  ingress {
    description     = "Access to Consul dev server HTTP API and UI."
    from_port       = 8500
    to_port         = 8500
    protocol        = "tcp"
    cidr_blocks     = var.lb_ingress_rule_cidr_blocks
    security_groups = var.lb_ingress_rule_security_groups
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }
}
