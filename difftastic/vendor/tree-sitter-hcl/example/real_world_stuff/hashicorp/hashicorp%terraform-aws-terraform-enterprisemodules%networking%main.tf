#################################################
# AZs
#################################################
data "aws_availability_zones" "available" {
  state = "available"
}

#################################################
# VPC
#################################################
module "vpc" {
  source  = "terraform-aws-modules/vpc/aws"
  version = "~> 3.0"

  azs                            = data.aws_availability_zones.available.names
  cidr                           = var.network_cidr
  create_igw                     = true
  default_security_group_egress  = []
  default_security_group_ingress = []
  enable_dns_hostnames           = true
  enable_dns_support             = true
  enable_nat_gateway             = true
  manage_default_security_group  = true
  map_public_ip_on_launch        = true
  name                           = "${var.friendly_name_prefix}-tfe-vpc"
  one_nat_gateway_per_az         = false
  private_subnets                = var.network_private_subnet_cidrs
  public_subnets                 = var.network_public_subnet_cidrs
  single_nat_gateway             = false

  # Prefixes removed until https://github.com/hashicorp/terraform-provider-aws/issues/19583 is resolved
  igw_tags = {
    # Name = "${var.friendly_name_prefix}-tfe-igw"
    Name = "tfe-igw"
  }
  nat_eip_tags = {
    # Name = "${var.friendly_name_prefix}-tfe-nat-eip"
    Name = "tfe-nat-eip"
  }
  nat_gateway_tags = {
    # Name = "${var.friendly_name_prefix}-tfe-tgw"
    Name = "tfe-tgw"
  }
  private_route_table_tags = {
    # Name = "${var.friendly_name_prefix}-tfe-rtb-private"
    Name = "tfe-rtb-private"
  }
  private_subnet_tags = {
    # Name = "${var.friendly_name_prefix}-private"
    Name = "private"
  }
  public_route_table_tags = {
    # Name = "${var.friendly_name_prefix}-tfe-rtb-public"
    Name = "tfe-rtb-public"
  }
  public_subnet_tags = {
    # Name = "${var.friendly_name_prefix}-public"
    Name = "public"
  }
  vpc_tags = {
    # Name = "${var.friendly_name_prefix}-tfe-vpc"
    Name = "tfe-vpc"
  }
}

resource "aws_security_group" "ssm" {
  description = "The security group of Systems Manager for TFE."
  name        = "${var.friendly_name_prefix}-tfe"
  vpc_id      = module.vpc.vpc_id

  ingress {
    from_port = 443
    protocol  = "tcp"
    to_port   = 443

    cidr_blocks = module.vpc.private_subnets_cidr_blocks
    description = "Allow the ingress of HTTPS traffic from all private subnets."
  }
}

module "vpc_endpoints" {
  source  = "terraform-aws-modules/vpc/aws//modules/vpc-endpoints"
  version = "~> 3.0"

  security_group_ids = [aws_security_group.ssm.id]
  vpc_id             = module.vpc.vpc_id

  endpoints = {
    ec2 = {
      service             = "ec2"
      service_type        = "Interface"
      private_dns_enabled = true
      subnet_ids          = module.vpc.private_subnets
    }
    ec2messages = {
      private_dns_enabled = true
      service             = "ec2messages"
      service_type        = "Interface"
      subnet_ids          = module.vpc.private_subnets
      # Prefix removed until https://github.com/hashicorp/terraform-provider-aws/issues/19583 is resolved
      tags = {
        # Name = "${var.friendly_name_prefix}-tfe-ec2messages-vpc-endpoint"
        Name = "tfe-ec2messages-vpc-endpoint"
      }
    }
    kms = {
      service             = "kms"
      service_type        = "Interface"
      private_dns_enabled = true
      subnet_ids          = module.vpc.private_subnets
    }
    s3 = {
      route_table_ids = module.vpc.private_route_table_ids
      service         = "s3"
      service_type    = "Gateway"
      # Prefix removed until https://github.com/hashicorp/terraform-provider-aws/issues/19583 is resolved
      tags = {
        # Name = "${var.friendly_name_prefix}-tfe-s3-vpc-endpoint"
        Name = "tfe-s3-vpc-endpoint"
      }
    }
    ssm = {
      private_dns_enabled = true
      service             = "ssm"
      service_type        = "Interface"
      subnet_ids          = module.vpc.private_subnets
      # Prefix removed until https://github.com/hashicorp/terraform-provider-aws/issues/19583 is resolved
      tags = {
        # Name = "${var.friendly_name_prefix}-tfe-ssm-vpc-endpoint"
        Name = "tfe-ssm-vpc-endpoint"
      }
    }
    ssmmessages = {
      private_dns_enabled = true
      service             = "ssmmessages"
      service_type        = "Interface"
      subnet_ids          = module.vpc.private_subnets
      # Prefix removed until https://github.com/hashicorp/terraform-provider-aws/issues/19583 is resolved
      tags = {
        # Name = "${var.friendly_name_prefix}-tfe-ssmmessages-vpc-endpoint"
        Name = "tfe-ssmmessages-vpc-endpoint"
      }
    }
  }
}
