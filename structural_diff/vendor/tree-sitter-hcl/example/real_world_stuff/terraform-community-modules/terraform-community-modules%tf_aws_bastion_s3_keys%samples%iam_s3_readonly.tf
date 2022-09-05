# This is just a sample definition of IAM instance profile which is allowed to read-only from S3.
resource "aws_iam_instance_profile" "s3_readonly" {
  name = "s3_readonly"
  role = "${aws_iam_role.s3_readonly.name}"
}

resource "aws_iam_role" "s3_readonly" {
  name = "s3_readonly"
  path = "/"

  assume_role_policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Sid": "",
      "Effect": "Allow",
      "Principal": {
        "Service": "ec2.amazonaws.com"
      },
      "Action": "sts:AssumeRole"
    }
  ]
}
EOF
}

resource "aws_iam_role_policy" "s3_readonly_policy" {
  name = "s3_readonly-policy"
  role = "${aws_iam_role.s3_readonly.id}"

  policy = <<EOF
{
    "Version": "2012-10-17",
    "Statement": [
        {
            "Sid": "Stmt1425916919000",
            "Effect": "Allow",
            "Action": [
                "s3:List*",
                "s3:Get*"
            ],
            "Resource": "*"
        }
    ]
}
EOF
}
