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

data "aws_ami" "ubuntu" {
  most_recent = true

  filter {
    name   = "name"
    values = ["ubuntu/images/hvm-ssd/ubuntu-focal-20.04-amd64-server-*"]
  }

  filter {
    name   = "virtualization-type"
    values = ["hvm"]
  }

  owners = ["099720109477"] # Canonical
}

module "private_tcp_active_active" {
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
  instance_type               = "m5.8xlarge"
  kms_key_alias               = local.test_name
  load_balancing_scheme       = "PRIVATE_TCP"
  node_count                  = 2
  proxy_ip                    = "${aws_instance.proxy.private_ip}:${local.http_proxy_port}"
  proxy_cert_bundle_name      = data.aws_s3_bucket_object.proxy_certificate.key
  redis_encryption_at_rest    = true
  redis_encryption_in_transit = true
  redis_require_password      = true
  tfe_license_filepath        = ""
  tfe_subdomain               = local.test_name

  asg_tags = local.common_tags
}
