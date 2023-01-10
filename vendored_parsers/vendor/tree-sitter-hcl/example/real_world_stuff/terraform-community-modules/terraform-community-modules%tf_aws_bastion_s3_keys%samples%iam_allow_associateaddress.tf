# This is just a sample definition of IAM instance profile which is allowed to read-only from S3, and associate ElasticIP addresses.
resource "aws_iam_instance_profile" "s3_readonly-allow_associateaddress" {
  name = "s3_readonly-allow_associateaddress"
  role = "${aws_iam_role.s3_readonly-allow_associateaddress.name}"
}

resource "aws_iam_role" "s3_readonly-allow_associateaddress" {
  name = "s3_readonly-allow_associateaddress-role"
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

resource "aws_iam_role_policy" "s3_readonly-allow_associateaddress_policy" {
  name = "s3_readonly-allow_associateaddress-policy"
  role = "${aws_iam_role.s3_readonly-allow_associateaddress.id}"

  policy = <<EOF
{
    "Version": "2012-10-17",
    "Statement": [
        {
            "Sid": "Stmt1425916919000",
            "Effect": "Allow",
            "Action": [
                "ec2:AssociateAddress",
                "s3:List*",
                "s3:Get*"
            ],
            "Resource": "*"
        }
    ]
}
EOF
}
