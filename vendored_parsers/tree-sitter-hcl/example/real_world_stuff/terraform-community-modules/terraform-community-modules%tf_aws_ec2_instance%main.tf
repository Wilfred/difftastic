// Provider specific configs
provider "aws" {
    access_key = "${var.aws_access_key}"
    secret_key = "${var.aws_secret_key}"
    region = "${var.aws_region}"
}

// EC2 Instance Resource for Module
resource "aws_instance" "ec2_instance" {
    ami = "${var.ami_id}"
    count = "${var.number_of_instances}"
    subnet_id = "${var.subnet_id}"
    instance_type = "${var.instance_type}"
    user_data = "${file(var.user_data)}"
    tags {
        created_by = "${lookup(var.tags,"created_by")}"
        // Takes the instance_name input variable and adds
        //  the count.index to the name., e.g.
        //  "example-host-web-1"
        Name = "${var.instance_name}-${count.index}"
    }
}
