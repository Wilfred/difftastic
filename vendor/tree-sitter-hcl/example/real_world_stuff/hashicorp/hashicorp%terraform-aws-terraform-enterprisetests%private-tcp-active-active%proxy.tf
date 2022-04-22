resource "aws_security_group" "proxy" {
  name   = "${local.friendly_name_prefix}-sg-proxy-allow"
  vpc_id = module.private_tcp_active_active.network_id

  # Prefix removed until https://github.com/hashicorp/terraform-provider-aws/issues/19583 is resolved
  tags = {
    # Name = "${local.friendly_name_prefix}-sg-proxy-allow"
    Name = "sg-proxy-allow"
  }
}

resource "aws_security_group_rule" "proxy_ingress_mitmproxy" {
  type        = "ingress"
  from_port   = local.http_proxy_port
  to_port     = local.http_proxy_port
  protocol    = "tcp"
  cidr_blocks = ["0.0.0.0/0"]
  description = "Allow TFE traffic to proxy instance"

  security_group_id = aws_security_group.proxy.id
}

resource "aws_security_group_rule" "proxy_egress" {
  type        = "egress"
  from_port   = 0
  to_port     = 0
  protocol    = "-1"
  cidr_blocks = ["0.0.0.0/0"]
  description = "Allow all egress traffic from proxy instance"

  security_group_id = aws_security_group.proxy.id
}

resource "aws_iam_instance_profile" "proxy" {
  name_prefix = "${local.friendly_name_prefix}-proxy"
  role        = aws_iam_role.instance_role.name
}

resource "aws_iam_role" "instance_role" {
  name_prefix        = "${local.friendly_name_prefix}-proxy"
  assume_role_policy = data.aws_iam_policy_document.instance_role.json
}

data "aws_iam_policy_document" "instance_role" {
  statement {
    effect = "Allow"
    actions = [
      "sts:AssumeRole",
    ]

    principals {
      type        = "Service"
      identifiers = ["ec2.amazonaws.com"]
    }
  }
}

resource "aws_iam_role_policy_attachment" "ssm" {
  role       = aws_iam_role.instance_role.name
  policy_arn = local.ssm_policy_arn
}

resource "aws_instance" "proxy" {
  ami           = data.aws_ami.ubuntu.id
  instance_type = "m4.xlarge"

  iam_instance_profile = aws_iam_instance_profile.proxy.name
  key_name             = var.key_name
  subnet_id            = module.private_tcp_active_active.private_subnet_ids[0]

  vpc_security_group_ids = [
    aws_security_group.proxy.id
  ]

  user_data = base64encode(
    templatefile(
      "${path.module}/templates/mitmproxy.sh.tpl",
      {
        certificate     = data.aws_s3_bucket_object.proxy_certificate.body
        http_proxy_port = local.http_proxy_port
        private_key     = data.aws_s3_bucket_object.proxy_private_key.body
      }
    )
  )

  root_block_device {
    volume_type = "gp2"
    volume_size = "100"
  }
}
