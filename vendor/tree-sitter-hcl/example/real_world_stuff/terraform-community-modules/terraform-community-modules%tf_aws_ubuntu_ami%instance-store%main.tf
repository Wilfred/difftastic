variable "region" {}
variable "distribution" {}
variable "architecture" {
  default = "amd64"
}
variable "instance_type" {}

module "virttype" {
    source = "github.com/terraform-community-modules/tf_aws_virttype"
    instance_type = "${var.instance_type}"
}

module "ami" {
    region = "${var.region}"
    distribution = "${var.distribution}"
    architecture = "${var.architecture}"
    virttype = "${module.virttype.prefer_hvm}"
    storagetype = "instance-store"
    source = "../"
}

output "ami_id" {
    value = "${module.ami.ami_id}"
}
