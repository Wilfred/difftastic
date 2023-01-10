data "aws_availability_zones" "available" {
}

module "vpc" {
  source             = "terraform-aws-modules/vpc/aws"
  name               = "${var.name}-vpc"
  cidr               = var.cidr_block
  azs                = [data.aws_availability_zones.available.names[0], data.aws_availability_zones.available.names[1], data.aws_availability_zones.available.names[2]]
  private_subnets    = var.private_subnets
  public_subnets     = var.public_subnets
  enable_dns_hostnames = true
  enable_vpn_gateway   = false
}
