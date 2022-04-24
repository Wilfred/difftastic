provider "aws" {
  assume_role {
    role_arn = var.aws_role_arn
  }

  default_tags {
    tags = local.common_tags
  }
}

resource "random_string" "friendly_name" {
  length  = 4
  upper   = false # Some AWS resources do not accept uppercase characters.
  number  = false
  special = false
}

data "aws_ami" "rhel" {
  owners = ["309956199498"] # RedHat

  most_recent = true

  filter {
    name   = "name"
    values = ["RHEL-7.9_HVM-*-x86_64-*-Hourly2-GP2"]
  }

  filter {
    name   = "virtualization-type"
    values = ["hvm"]
  }
}

locals {
  http_proxy_port = 3128
}

module "private_active_active" {
  source = "../../"

  acm_certificate_arn  = var.acm_certificate_arn
  domain_name          = var.domain_name
  friendly_name_prefix = local.friendly_name_prefix
  tfe_license_name     = "terraform-aws-terraform-enterprise.rli"

  ami_id                      = data.aws_ami.rhel.id
  deploy_secretsmanager       = false
  external_bootstrap_bucket   = var.external_bootstrap_bucket
  iact_subnet_list            = ["0.0.0.0/0"]
  iam_role_policy_arns        = [local.ssm_policy_arn, "arn:aws:iam::aws:policy/AmazonS3ReadOnlyAccess"]
  instance_type               = "m5.4xlarge"
  key_name                    = var.key_name
  kms_key_alias               = local.test_name
  load_balancing_scheme       = "PRIVATE"
  node_count                  = 2
  proxy_ip                    = "${aws_instance.proxy.private_ip}:${local.http_proxy_port}"
  redis_encryption_at_rest    = false
  redis_encryption_in_transit = true
  redis_require_password      = true
  tfe_license_filepath        = ""
  tfe_subdomain               = local.test_name

  asg_tags = local.common_tags
}
