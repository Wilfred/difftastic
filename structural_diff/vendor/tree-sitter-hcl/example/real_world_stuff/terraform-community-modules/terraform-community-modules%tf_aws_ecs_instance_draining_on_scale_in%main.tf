resource "aws_iam_role" "sns" {
  name = "${var.autoscaling_group_name}-notifies-sns"

  assume_role_policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Action": "sts:AssumeRole",
      "Principal": {
        "Service": "autoscaling.amazonaws.com"
      },
      "Effect": "Allow",
      "Sid": ""
    }
  ]
}
EOF
}

# creating policy document and attaching as inline policies instead of using the AutoScalingNotificationAccessRole
# managed policy due to Terraform issue https://github.com/hashicorp/terraform/issues/5979.

data "aws_iam_policy_document" "auto_scaling_notification_access" {
  statement {
    sid = "1"

    actions = [
      "sqs:SendMessage",
      "sqs:GetQueueUrl",
      "sns:Publish",
    ]

    resources = [
      "*",
    ]
  }
}

resource "aws_iam_role_policy" "asg_notification_sns" {
  name   = "${aws_iam_role.sns.name}-asg-notification-policy"
  role   = "${aws_iam_role.sns.id}"
  policy = "${data.aws_iam_policy_document.auto_scaling_notification_access.json}"
}

resource "aws_iam_role" "lambda" {
  assume_role_policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Action": "sts:AssumeRole",
      "Principal": {
        "Service": "lambda.amazonaws.com"
      },
      "Effect": "Allow",
      "Sid": ""
    }
  ]
}
EOF
}

data "aws_iam_policy_document" "lambda" {
  statement {
    sid = "1"

    actions = [
      "autoscaling:CompleteLifecycleAction",
      "logs:CreateLogGroup",
      "logs:CreateLogStream",
      "logs:PutLogEvents",
      "ec2:DescribeInstances",
      "ec2:DescribeInstanceAttribute",
      "ec2:DescribeInstanceStatus",
      "ec2:DescribeHosts",
      "ecs:ListContainerInstances",
      "ecs:SubmitContainerStateChange",
      "ecs:SubmitTaskStateChange",
      "ecs:DescribeContainerInstances",
      "ecs:UpdateContainerInstancesState",
      "ecs:ListTasks",
      "ecs:DescribeTasks",
      "sns:Publish",
      "sns:ListSubscriptions",
    ]

    resources = [
      "*",
    ]
  }
}

resource "aws_iam_role_policy" "lambda" {
  name   = "${aws_iam_role.lambda.name}-policy"
  role   = "${aws_iam_role.lambda.id}"
  policy = "${data.aws_iam_policy_document.lambda.json}"
}

resource "aws_iam_role_policy" "asg_notification_lambda" {
  name   = "${aws_iam_role.lambda.name}-asg-notification-policy"
  role   = "${aws_iam_role.lambda.id}"
  policy = "${data.aws_iam_policy_document.auto_scaling_notification_access.json}"
}

data "archive_file" "index" {
  type        = "zip"
  source_dir  = "${path.module}/index"
  output_path = "${path.module}/files/index.zip"
}

resource "aws_lambda_function" "lambda" {
  runtime       = "python3.6"
  filename      = "${path.module}/files/index.zip"
  function_name = "${substr(var.autoscaling_group_name,0,min(64, length(var.autoscaling_group_name)))}"
  role          = "${aws_iam_role.lambda.arn}"
  handler       = "index.lambda_handler"
  timeout       = "${var.function_sleep_time * 2}"

  source_code_hash = "${data.archive_file.index.output_base64sha256}"

  environment {
    variables = {
      REGION       = "${var.region}"
      CLUSTER_NAME = "${var.cluster_name}"
      SLEEP_TIME   = "${var.function_sleep_time}"
    }
  }

  lifecycle {
    # A workaround when running this code on different machines is to ignore changes, as described here:
    # https://github.com/hashicorp/terraform/issues/7613#issuecomment-241603087
    ignore_changes = ["filename"]
  }
}

resource "aws_lambda_permission" "sns" {
  statement_id  = "AllowExecutionFromSNS"
  function_name = "${aws_lambda_function.lambda.arn}"
  action        = "lambda:InvokeFunction"
  principal     = "sns.amazonaws.com"
  source_arn    = "${aws_sns_topic.asg_sns.arn}"
}

resource "aws_sns_topic" "asg_sns" {
  name = "${var.autoscaling_group_name}-sns-topic"
}

resource "aws_sns_topic_subscription" "asg_sns" {
  topic_arn = "${aws_sns_topic.asg_sns.arn}"
  protocol  = "lambda"
  endpoint  = "${aws_lambda_function.lambda.arn}"
}

resource "aws_autoscaling_lifecycle_hook" "terminate" {
  count                   = "${var.lambda_enabled}"
  name                    = "${var.autoscaling_group_name}-terminate-hook"
  autoscaling_group_name  = "${var.autoscaling_group_name}"
  default_result          = "${var.hook_default_result}"
  heartbeat_timeout       = "${var.hook_heartbeat_timeout}"
  lifecycle_transition    = "autoscaling:EC2_INSTANCE_TERMINATING"
  notification_target_arn = "${aws_sns_topic.asg_sns.arn}"
  role_arn                = "${aws_iam_role.sns.arn}"
}
