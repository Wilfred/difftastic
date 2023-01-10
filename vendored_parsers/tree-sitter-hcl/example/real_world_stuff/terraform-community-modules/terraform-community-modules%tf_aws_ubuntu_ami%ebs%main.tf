variable "region" {}
variable "distribution" {}
variable "architecture" {
    default = "amd64"
}
variable "instance_type" {}
variable "storagetype" {
    default = "ebs"
    description = "storage type for EBS volumes. Choose 'ebs', 'ebs-ssd', or 'ebs-io1'"
}

module "virttype" {
    source = "github.com/terraform-community-modules/tf_aws_virttype"
    instance_type = "${var.instance_type}"
}

module "ami" {
    region = "${var.region}"
    distribution = "${var.distribution}"
    architecture = "${var.architecture}"
    virttype = "${module.virttype.prefer_hvm}"
    storagetype = "${var.storagetype}"
    source = "../"
}

output "ami_id" {
    value = "${module.ami.ami_id}"
}
