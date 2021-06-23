provider "aws" {
  region = "${var.aws_region}"
}

module "vpc" {
  source             = "github.com/terraform-community-modules/tf_aws_vpc"
  name               = "my-vpc"
  cidr               = "10.0.0.0/16"
  private_subnets    = ["10.0.1.0/24", "10.0.2.0/24", "10.0.3.0/24"]
  public_subnets     = ["10.0.101.0/24", "10.0.102.0/24", "10.0.103.0/24"]
  enable_nat_gateway = "true"
  azs                = ["us-west-2a", "us-west-2b", "us-west-2c"]
}

module "sg_https_web" {
  source              = "github.com/terraform-community-modules/tf_aws_sg//sg_https_only"
  security_group_name = "my-sg-https"
  vpc_id              = "${module.vpc.vpc_id}"
}

module "alb" {
  source              = "../../alb/"
  alb_security_groups = ["${module.sg_https_web.security_group_id_web}"]
  aws_account_id      = "${var.aws_account_id}"
  aws_region          = "${var.aws_region}"
  certificate_arn     = "${var.certificate_arn}"
  log_bucket          = "${var.log_bucket}"
  log_prefix          = "${var.log_prefix}"
  subnets             = "${module.vpc.public_subnets}"
  vpc_id              = "${module.vpc.vpc_id}"
}
