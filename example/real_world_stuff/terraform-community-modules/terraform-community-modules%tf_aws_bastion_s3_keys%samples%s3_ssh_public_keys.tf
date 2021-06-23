# This is an example of how to put public keys into S3 bucket and manage them in Terraform
variable "ssh_public_key_names" {
  default = ["user1", "user2", "admin"]
  type    = list(string)
}

resource "aws_s3_bucket" "ssh_public_keys" {
  region = "eu-west-1"
  bucket = "public-keys-demo-bucket"
  acl    = "private"

  policy = <<EOF
{
	"Version": "2008-10-17",
	"Id": "Policy142469412148",
	"Statement": [
		{
			"Sid": "Stmt1424694110324",
			"Effect": "Allow",
			"Principal": {
				"AWS": "arn:aws:iam::123456789012:root"
			},
			"Action": [
				"s3:List*",
				"s3:Get*"
			],
			"Resource": "arn:aws:s3:::public-keys-demo-bucket"
		}
	]
}
EOF
}

resource "aws_s3_bucket_object" "ssh_public_keys" {
  count = length(var.ssh_public_key_names)

  bucket = aws_s3_bucket.ssh_public_keys.bucket
  key    = "${element(var.ssh_public_key_names, count.index)}.pub"

  # Make sure that you put files into correct location and name them accordingly (`public_keys/{keyname}.pub`)
  source = "public_keys/${element(var.ssh_public_key_names, count.index)}.pub"

  depends_on = [aws_s3_bucket.ssh_public_keys]
}
