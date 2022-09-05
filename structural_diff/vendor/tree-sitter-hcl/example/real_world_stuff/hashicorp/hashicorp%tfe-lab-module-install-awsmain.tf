terraform {
  required_providers {
    aws      = "~> 2.53.0"
    random   = "~> 2.2.0"
    template = "~> 2.1.2"
  }
}

provider "aws" {
  region = "us-west-2"
}

resource "aws_key_pair" "sshkey" {
  key_name   = "lab-ssh-key"
  public_key = file("/root/.ssh/id_rsa.pub")
}

module "vpc" {
  source = "terraform-aws-modules/vpc/aws"
  version = "2.39.0"
  name = "my-vpc"
  cidr = "10.0.0.0/16"
  
  # If you change your region be sure to update your provider above ^^^
  azs             = ["us-west-2a", "us-west-2b", "us-west-2c"]
  private_subnets = ["10.0.1.0/24", "10.0.2.0/24", "10.0.3.0/24"]
  public_subnets  = ["10.0.101.0/24", "10.0.102.0/24", "10.0.103.0/24"]

  enable_nat_gateway = true
  enable_vpn_gateway = true

  tags = {
    Terraform = "true"
    Environment = "dev"
  }
}

module "tfe" {
  source = "../is-terraform-aws-tfe-standalone"

  # These are created by the terraform code above ^^^
  ssh_key_pair               = aws_key_pair.sshkey.key_name
  vpc_id                     = module.vpc.vpc_id
  alb_subnet_ids             = module.vpc.public_subnets
  ec2_subnet_ids             = module.vpc.public_subnets
  rds_subnet_ids             = module.vpc.public_subnets

  # These can all be left at their defaults, see variables.tf
  common_tags                = var.common_tags
  tfe_release_sequence       = var.tfe_release_sequence
  tfe_initial_admin_username = var.tfe_initial_admin_username
  tfe_initial_admin_email    = var.tfe_initial_admin_email
  tfe_initial_org_name       = var.tfe_initial_org_name
  os_distro                  = var.os_distro
  ingress_cidr_alb_allow     = var.ingress_cidr_alb_allow
  ingress_cidr_console_allow = var.ingress_cidr_console_allow
  ingress_cidr_ec2_allow     = var.ingress_cidr_ec2_allow
  kms_key_arn                = var.kms_key_arn

  # These should be customized in your terraform.tfvars file
  friendly_name_prefix       = var.friendly_name_prefix
  tfe_hostname               = var.tfe_hostname
  tfe_license_filepath      = var.tfe_license_file_path
  route53_hosted_zone_public = var.route53_hosted_zone_name
}
