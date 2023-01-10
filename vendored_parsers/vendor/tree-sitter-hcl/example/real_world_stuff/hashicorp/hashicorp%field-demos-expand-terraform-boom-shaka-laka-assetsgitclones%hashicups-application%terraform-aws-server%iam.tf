resource "random_id" "name" {
  byte_length = 4
}

data "aws_iam_policy_document" "assume_role" {
  statement {
    effect  = "Allow"
    actions = ["sts:AssumeRole"]

    principals {
      type        = "Service"
      identifiers = ["ec2.amazonaws.com"]
    }
  }
}

data "aws_iam_policy_document" "instance" {
  statement {
    sid       = "AllowSelfAssembly"
    effect    = "Allow"
    resources = ["*"]

    actions = [
      "ec2:DescribeInstances",
    ]
  }
}

resource "aws_iam_role" "instance" {
  name               = "hashicups-instance-role-${random_id.name.hex}"
  assume_role_policy = data.aws_iam_policy_document.assume_role.json
}

resource "aws_iam_role_policy" "instance" {
  name   = "hashicups-instance-SelfAssembly-${random_id.name.hex}"
  role   = aws_iam_role.instance.id
  policy = data.aws_iam_policy_document.instance.json
}

resource "aws_iam_instance_profile" "instance" {
  name = "hashicups-instance-profile-${random_id.name.hex}"
  role = aws_iam_role.instance.name
}
