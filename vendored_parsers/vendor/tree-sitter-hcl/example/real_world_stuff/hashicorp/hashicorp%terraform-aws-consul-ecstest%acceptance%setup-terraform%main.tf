provider "aws" {
  region = var.region
}

locals {
  name = "consul-ecs-${random_string.suffix.result}"
}

data "aws_availability_zones" "available" {
  filter {
    name   = "opt-in-status"
    values = ["opt-in-not-required"]
  }
}

resource "random_string" "suffix" {
  length  = 8
  special = false
}

module "vpc" {
  source  = "terraform-aws-modules/vpc/aws"
  version = "2.78.0"

  name                 = local.name
  cidr                 = "10.0.0.0/16"
  azs                  = data.aws_availability_zones.available.names
  private_subnets      = ["10.0.1.0/24", "10.0.2.0/24", "10.0.3.0/24"]
  public_subnets       = ["10.0.4.0/24", "10.0.5.0/24", "10.0.6.0/24"]
  enable_nat_gateway   = true
  single_nat_gateway   = true
  enable_dns_hostnames = true
  tags                 = var.tags
}

resource "aws_ecs_cluster" "this" {
  name               = local.name
  capacity_providers = ["FARGATE"]
  tags               = var.tags
}

resource "aws_cloudwatch_log_group" "log_group" {
  name = local.name
  tags = var.tags
}

