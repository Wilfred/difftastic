terraform {
  required_version = ">= 0.12"
}

data "aws_ami" "ubuntu" {
  most_recent = true

  filter {
    name = "name"
    #values = ["ubuntu/images/hvm-ssd/ubuntu-disco-19.04-amd64-server-*"]
    values = ["ubuntu/images/hvm-ssd/ubuntu-bionic-18.04-amd64-server-*"]
  }

  filter {
    name   = "virtualization-type"
    values = ["hvm"]
  }

  owners = ["099720109477"] # Canonical
}

data "template_file" "config" {
  template = file("${path.module}/configs/${var.name}.tpl")
  vars = {
    upstream_ip = var.upstream_ip
  }
}

resource "aws_instance" "instance" {
  instance_type               = "t2.small"
  ami                         = data.aws_ami.ubuntu.id
  vpc_security_group_ids      = [ var.security_group_id ]
  subnet_id                   = var.vpc_subnet_ids
  associate_public_ip_address = true
  key_name                    = var.public_key
  iam_instance_profile        = aws_iam_instance_profile.instance.id
  private_ip                  = var.private_ip
  tags                        = var.tags

  user_data = data.template_file.config.rendered
}
