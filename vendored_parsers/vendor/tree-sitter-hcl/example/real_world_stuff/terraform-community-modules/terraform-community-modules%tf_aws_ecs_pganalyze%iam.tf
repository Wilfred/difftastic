data "aws_iam_policy_document" "pganalyze_task_policy" {
  statement {
    actions = [
      "ec2:Describe*",
      "autoscaling:Describe*",
      "ec2:DescribeAddresses",
      "ec2:DescribeInstances",
      "ec2:DescribeTags",
    ]

    resources = ["*"]
  }

  statement {
    actions = [
      "cloudwatch:GetMetricStatistics",
      "logs:DescribeLogStreams",
      "logs:GetLogEvents",
      "logs:PutLogEvents",
    ]

    resources = [
      "*",
    ]
  }

  statement {
    actions = [
      "rds:DownloadDBLogFilePortion",
    ]

    resources = [
      "*",
    ]
  }
}

data "aws_iam_policy_document" "assume_role_pganalyze_task" {
  statement {
    actions = ["sts:AssumeRole"]

    principals {
      type        = "Service"
      identifiers = ["ecs-tasks.amazonaws.com"]
    }
  }
}

resource "aws_iam_role" "pganalyze_task" {
  count              = "${local.service_count}"
  name               = "tf-pganalyze-${var.task_identifier}-ecsTaskRole"
  path               = "/"
  assume_role_policy = "${data.aws_iam_policy_document.assume_role_pganalyze_task.json}"
}

resource "aws_iam_role_policy" "pganalyze_ecs_task" {
  count  = "${local.service_count}"
  name   = "tf-pganalyze-${var.task_identifier}-ecsTaskPolicy"
  role   = "${aws_iam_role.pganalyze_task.id}"
  policy = "${data.aws_iam_policy_document.pganalyze_task_policy.json}"
}

# ecsServiceRole for pganalyze

resource "aws_iam_role" "ecsServiceRole" {
  count = "${local.service_count}"
  name  = "tf-pganalyze-${var.task_identifier}-ecsSvcRole"

  assume_role_policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Action": "sts:AssumeRole",
      "Principal": {
      "Service": ["ecs.amazonaws.com"]

    },
    "Effect": "Allow",
    "Sid": ""
    }
  ]
}
EOF
}

resource "aws_iam_role_policy_attachment" "attach-ecsServiceRole" {
  count      = "${local.service_count}"
  role       = "${aws_iam_role.ecsServiceRole.name}"
  policy_arn = "arn:aws:iam::aws:policy/service-role/AmazonEC2ContainerServiceRole"
}
