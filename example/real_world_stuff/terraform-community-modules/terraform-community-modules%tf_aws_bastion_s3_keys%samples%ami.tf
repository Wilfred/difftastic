# This is just a sample definition for bastion AMI
module "bastion_ami" {
  source        = "github.com/terraform-community-modules/tf_aws_ubuntu_ami/ebs"
  instance_type = "t2.micro"
  region        = "eu-west-1"
  distribution  = "trusty"
}
