resource "aws_iam_role" "example_app_task_role" {
  name = "${var.name}-example-app"
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
}

resource "aws_iam_policy" "example_app_execution" {
  name        = "${var.name}-example-app-execution"
  path        = "/ecs/"
  description = "example-app execution"

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

resource "aws_iam_role" "example_app_execution" {
  name = "${var.name}-example-app-execution"
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

resource "aws_iam_role_policy_attachment" "example_app_execution" {
  role       = aws_iam_role.example_app_execution.id
  policy_arn = aws_iam_policy.example_app_execution.arn
}
