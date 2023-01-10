data "aws_vpc" "default" {
  default = true
}

data "aws_subnet" "default" {
  availability_zone = var.availability_zone
  vpc_id            = data.aws_vpc.default.id
}

data "http" "my_public_ipv4" {
  url = "https://api.ipify.org"
}

locals {
  ingress_cidr = var.restrict_ingress_cidrblock ? "${chomp(data.http.my_public_ipv4.body)}/32" : "0.0.0.0/0"
}

resource "aws_security_group" "primary" {
  name   = local.random_name
  vpc_id = data.aws_vpc.default.id

  ingress {
    from_port   = 22
    to_port     = 22
    protocol    = "tcp"
    cidr_blocks = [local.ingress_cidr]
  }

  # Nomad
  ingress {
    from_port   = 4646
    to_port     = 4646
    protocol    = "tcp"
    cidr_blocks = [local.ingress_cidr]
  }

  # Fabio
  ingress {
    from_port   = 9998
    to_port     = 9999
    protocol    = "tcp"
    cidr_blocks = [local.ingress_cidr]
  }

  # Consul
  ingress {
    from_port   = 8500
    to_port     = 8500
    protocol    = "tcp"
    cidr_blocks = [local.ingress_cidr]
  }

  # Vault
  ingress {
    from_port   = 8200
    to_port     = 8200
    protocol    = "tcp"
    cidr_blocks = [local.ingress_cidr]
  }

  ingress {
    from_port = 0
    to_port   = 0
    protocol  = "-1"
    self      = true
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }
}

resource "aws_security_group" "nfs" {
  count  = var.volumes ? 1 : 0
  name   = "${local.random_name}-nfs"
  vpc_id = data.aws_vpc.default.id

  ingress {
    from_port       = 2049
    to_port         = 2049
    protocol        = "tcp"
    security_groups = [aws_security_group.primary.id]
  }
}
