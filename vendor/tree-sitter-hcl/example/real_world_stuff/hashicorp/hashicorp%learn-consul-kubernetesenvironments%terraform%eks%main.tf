provider "aws" {
  region  = var.region
}

data "aws_availability_zones" "available" {
  state = "available"
  filter {
    name   = "opt-in-status"
    values = ["opt-in-not-required"]
  }
}

module "vpc" {
  source  = "terraform-aws-modules/vpc/aws"
  version = "2.65.0"

  name                 = "${var.datacenter_name}-vpc"
  cidr                 = "10.0.0.0/16"
  azs                  = data.aws_availability_zones.available.names
  private_subnets      = ["10.0.1.0/24", "10.0.2.0/24", "10.0.3.0/24"]
  public_subnets       = ["10.0.4.0/24", "10.0.5.0/24", "10.0.6.0/24"]
  enable_nat_gateway   = true
  single_nat_gateway   = true
  enable_dns_hostnames = true

  public_subnet_tags = {
    "kubernetes.io/cluster/${var.datacenter_name}-public-subnet" = "shared"
    "kubernetes.io/role/elb"                                     = "1"
  }

  private_subnet_tags = {
    "kubernetes.io/cluster/${var.datacenter_name}-private-subnet" = "shared"
    "kubernetes.io/role/internal-elb"                             = "1"
  }
}

module "eks" {
  source  = "terraform-aws-modules/eks/aws"
  version = "13.2.1"

  cluster_name    = var.datacenter_name
  cluster_version = "1.17"
  subnets         = module.vpc.public_subnets

  vpc_id = module.vpc.vpc_id

  node_groups = {
    first = {
      desired_capacity = 3
      max_capacity     = 3
      min_capacity     = 3

      instance_type = "t2.medium"
    }
  }

  manage_aws_auth    = false
  write_kubeconfig   = true
  config_output_path = pathexpand("${var.output_dir}/${var.datacenter_name}")

}

data "aws_eks_cluster" "cluster" {
  name = module.eks.cluster_id
}

data "aws_eks_cluster_auth" "cluster" {
  name = module.eks.cluster_id
}

provider "kubernetes" {
  load_config_file       = false
  host                   = data.aws_eks_cluster.cluster.endpoint
  cluster_ca_certificate = base64decode(data.aws_eks_cluster.cluster.certificate_authority.0.data)
  token                  = data.aws_eks_cluster_auth.cluster.token
}
