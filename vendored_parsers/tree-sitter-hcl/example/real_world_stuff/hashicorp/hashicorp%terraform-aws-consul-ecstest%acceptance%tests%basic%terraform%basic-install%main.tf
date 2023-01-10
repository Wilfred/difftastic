variable "ecs_cluster_arn" {
  type        = string
  description = "Cluster ARN of ECS cluster."
}

variable "subnets" {
  type        = list(string)
  description = "Subnets to deploy into."
}

variable "suffix" {
  type        = string
  default     = "nosuffix"
  description = "Suffix to add to all resource names."
}

variable "region" {
  type        = string
  description = "Region."
}

variable "log_group_name" {
  type        = string
  description = "Name for cloudwatch log group."
}

variable "tags" {
  description = "A map of tags to add to all resources."
  type        = map(string)
  default     = {}
}

provider "aws" {
  region = var.region
}

module "consul_server" {
  source          = "../../../../../../modules/dev-server"
  lb_enabled      = false
  ecs_cluster_arn = var.ecs_cluster_arn
  subnet_ids      = var.subnets
  name            = "consul_server_${var.suffix}"
  log_configuration = {
    logDriver = "awslogs"
    options = {
      awslogs-group         = var.log_group_name
      awslogs-region        = var.region
      awslogs-stream-prefix = "consul_server_${var.suffix}"
    }
  }
  launch_type = "FARGATE"

  tags = var.tags
}

resource "aws_ecs_service" "test_client" {
  name            = "test_client_${var.suffix}"
  cluster         = var.ecs_cluster_arn
  task_definition = module.test_client.task_definition_arn
  desired_count   = 1
  network_configuration {
    subnets = var.subnets
  }
  launch_type            = "FARGATE"
  propagate_tags         = "TASK_DEFINITION"
  enable_execute_command = true

  tags = var.tags

  depends_on = [
    aws_iam_role.this_task
  ]
}

module "test_client" {
  source             = "../../../../../../modules/mesh-task"
  family             = "test_client_${var.suffix}"
  execution_role_arn = aws_iam_role.this_execution.arn
  task_role_arn      = aws_iam_role.this_task.arn
  container_definitions = [{
    name      = "basic"
    image     = "ghcr.io/lkysow/fake-service:v0.21.0"
    essential = true
    environment = [
      {
        name  = "UPSTREAM_URIS"
        value = "http://localhost:1234"
      }
    ]
    linuxParameters = {
      initProcessEnabled = true
    }
  }]
  consul_server_service_name = module.consul_server.ecs_service_name
  upstreams = [
    {
      destination_name = "test_server_${var.suffix}"
      local_bind_port  = 1234
    }
  ]
  log_configuration = {
    logDriver = "awslogs"
    options = {
      awslogs-group         = var.log_group_name
      awslogs-region        = var.region
      awslogs-stream-prefix = "test_client_${var.suffix}"
    }
  }
  outbound_only = true
}

resource "aws_ecs_service" "test_server" {
  name            = "test_server_${var.suffix}"
  cluster         = var.ecs_cluster_arn
  task_definition = module.test_server.task_definition_arn
  desired_count   = 1
  network_configuration {
    subnets = var.subnets
  }
  launch_type            = "FARGATE"
  propagate_tags         = "TASK_DEFINITION"
  enable_execute_command = true

  tags = var.tags

  depends_on = [
    aws_iam_role.this_task
  ]
}

module "test_server" {
  source             = "../../../../../../modules/mesh-task"
  family             = "test_server_${var.suffix}"
  execution_role_arn = aws_iam_role.this_execution.arn
  task_role_arn      = aws_iam_role.this_task.arn
  container_definitions = [{
    name      = "basic"
    image     = "ghcr.io/lkysow/fake-service:v0.21.0"
    essential = true
  }]
  consul_server_service_name = module.consul_server.ecs_service_name
  log_configuration = {
    logDriver = "awslogs"
    options = {
      awslogs-group         = var.log_group_name
      awslogs-region        = var.region
      awslogs-stream-prefix = "test_server_${var.suffix}"
    }
  }
  port = 9090
}

resource "aws_iam_policy" "this_execution" {
  name = "basic_execution_${var.suffix}"
  path = "/ecs/"

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
  name = "basic_execution_${var.suffix}"
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

data "aws_caller_identity" "this" {}

resource "aws_iam_role" "this_task" {
  name = "basic_task_${var.suffix}"
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
    name = "basic_task_${var.suffix}"
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
        },
        {
          Effect = "Allow"
          Action = [
            "ecs:ListTasks",
          ]
          Resource = "*"
        },
        {
          Effect = "Allow"
          Action = [
            "ecs:DescribeTasks"
          ]
          Resource = [
            "arn:aws:ecs:${var.region}:${data.aws_caller_identity.this.account_id}:task/*",
          ]
        }
      ]
    })
  }

  tags = var.tags
}
