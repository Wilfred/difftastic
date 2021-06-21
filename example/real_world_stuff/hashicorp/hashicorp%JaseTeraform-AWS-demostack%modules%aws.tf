terraform {
  required_version = ">= 0.11.0"
}


//Getting the Domaing name
data "aws_route53_zone" "fdqn" {
  zone_id = var.zone_id
}


data "aws_ami" "ubuntu" {
  most_recent = true

# ubuntu/images/hvm-ssd/ubuntu-focal-20.04-amd64-server-*
#ubuntu/images/hvm-ssd/ubuntu-xenial-16.04-amd64-server-*
  filter {
    name   = "name"
    # values = ["ubuntu/images/hvm-ssd/ubuntu-xenial-16.04-amd64-server-*"]
    values = ["ubuntu/images/hvm-ssd/ubuntu-focal-20.04-amd64-server-*"]
  }

  filter {
    name   = "virtualization-type"
    values = ["hvm"]
  }

  owners = ["099720109477"] # Canonical
}

resource "aws_vpc" "demostack" {
  cidr_block           = var.vpc_cidr_block
  enable_dns_hostnames = true

  tags = local.common_tags

}

resource "aws_internet_gateway" "demostack" {
  vpc_id = aws_vpc.demostack.id

  tags = local.common_tags
}

resource "aws_route" "internet_access" {
  route_table_id         = aws_vpc.demostack.main_route_table_id
  destination_cidr_block = "0.0.0.0/0"
  gateway_id             = aws_internet_gateway.demostack.id

}

data "aws_availability_zones" "available" {}

resource "aws_subnet" "demostack" {
  count                   = length(var.cidr_blocks)
  vpc_id                  = aws_vpc.demostack.id
  availability_zone       = data.aws_availability_zones.available.names[count.index]
  cidr_block              = var.cidr_blocks[count.index]
  map_public_ip_on_launch = true

  tags = local.common_tags
}



resource "aws_security_group" "demostack" {
  name_prefix = var.namespace
  vpc_id      = aws_vpc.demostack.id

tags = local.common_tags
  #Allow internal communication between nodes
  ingress {
    from_port   = -1
    to_port     = -1
    protocol    = -1
  }


  # SSH access if host_access_ip has CIDR blocks
  dynamic "ingress" {
    for_each = var.host_access_ip
    content {
      from_port   = 22
      to_port     = 22
      protocol    = "tcp"
      cidr_blocks = [ingress.value]
    }
  }

  #HTTP
  ingress {
    from_port   = 80
    to_port     = 80
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }

  #Demostack LDAP
  ingress {
    from_port   = 389
    to_port     = 389
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }


  #Demostack HTTPS
  ingress {
    from_port   = 443
    to_port     = 443
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }

#Grafana
  ingress {
    from_port   = 1521
    to_port     = 1521
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }

  #Grafana
  ingress {
    from_port   = 3000
    to_port     = 3000
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }


  #Demostack Postgres + pgadmin
  ingress {
    from_port   = 5000
    to_port     = 5500
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }


  #Consul and Vault and Boundary ports
  ingress {
    from_port   = 8000
    to_port     = 9300
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }
  #Fabio Ports
  ingress {
    from_port   = 9998
    to_port     = 9999
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }
  #Nomad
  ingress {
    from_port   = 3000
    to_port     = 4999
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }
  #More nomad ports
  ingress {
    from_port   = 20000
    to_port     = 29999
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }

  ingress {
    from_port   = 30000
    to_port     = 39999
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }
  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }
}

resource "aws_key_pair" "demostack" {
  key_name   = var.namespace
  public_key = var.public_key

  tags = local.common_tags
}

resource "aws_iam_instance_profile" "consul-join" {
  name = "${var.namespace}-consul-join"
  role = aws_iam_role.consul-join.name

}

resource "aws_kms_key" "demostackVaultKeys" {
  description             = "KMS for the Consul Demo Vault"
  deletion_window_in_days = 10

   tags = local.common_tags
}

resource "aws_iam_policy" "consul-join" {
  name        = "${var.namespace}-consul-join"
  description = "Allows Consul nodes to describe instances for joining."

  policy = data.aws_iam_policy_document.vault-server.json

}


resource "aws_iam_role" "consul-join" {
  name               = "${var.namespace}-consul-join"
  assume_role_policy = file("${path.module}/templates/policies/assume-role.json")

  tags = local.common_tags
}

resource "aws_iam_policy_attachment" "consul-join" {
  name       = "${var.namespace}-consul-join"
  roles      = [aws_iam_role.consul-join.name]
  policy_arn = aws_iam_policy.consul-join.arn

}


data "aws_iam_policy_document" "vault-server" {
  statement {
    sid    = "VaultKMSUnseal"
    effect = "Allow"

    actions = [
      "kms:Encrypt",
      "kms:Decrypt",
      "kms:DescribeKey",
    ]

    resources = [aws_kms_key.demostackVaultKeys.arn]
  }

  statement {
    effect = "Allow"

    actions = [
      "ec2:DescribeInstances",
      "iam:PassRole",
      "iam:ListRoles",
      "cloudwatch:PutMetricData",
      "ds:DescribeDirectories",
      "ec2:DescribeInstanceStatus",
      "logs:*",
      "ec2messages:*",
      "ec2:DescribeInstances",
      "ec2:DescribeTags",
      "ec2:DescribeVolumes",
      "ec2:AttachVolume",
      "ec2:DetachVolume",
    ]

    resources = ["*"]
  }

}
