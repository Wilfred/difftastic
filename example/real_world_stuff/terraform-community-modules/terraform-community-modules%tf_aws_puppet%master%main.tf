module "ami" {
  source = "github.com/terraform-community-modules/tf_aws_ubuntu_ami/ebs"
  region = "${var.region}"
  distribution = "trusty"
  instance_type = "${var.instance_type}"
}

resource "aws_instance" "puppetmaster" {
    ami = "${module.ami.ami_id}"
    instance_type = "${var.instance_type}"
    iam_instance_profile = "${var.iam_instance_profile}"
    tags {
        Name = "puppetmaster"
        puppet_role = "puppetmaster"
    }
    key_name = "${var.aws_key_name}"
    subnet_id = "${var.subnet_id}"
    security_groups = ["${var.security_group}"]
    user_data = "${replace(file("${path.module}/puppetmaster.conf"), "__REPOSITORY__", "${var.repository}")}"
}

