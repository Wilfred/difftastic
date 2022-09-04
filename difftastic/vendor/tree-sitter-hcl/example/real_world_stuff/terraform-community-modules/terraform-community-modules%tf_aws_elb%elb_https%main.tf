//
// Module: tf_aws_elb/elb_https
//

// Provider specific configs
provider "aws" {
    access_key = "${var.aws_access_key}"
    secret_key = "${var.aws_secret_key}"
    region = "${var.aws_region}"
}

// ELB Resource for Module
// A note about instances:
// - This module assumes your instances will be made
//   by an ASG and the ASG will associate them with
//   the ELB.
resource "aws_elb" "elb" {
  name = "${var.elb_name}"
  subnets = ["${var.subnet_az1}","${var.subnet_az2}"]
  internal = "${var.elb_is_internal}"
  security_groups = ["${var.elb_security_group}"]

  listener {
    instance_port = "${var.backend_port}"
    instance_protocol = "${var.backend_protocol}"
    lb_port = 443
    lb_protocol = "https"
    ssl_certificate_id = "${var.ssl_certificate_id}"
  }

  health_check {
    healthy_threshold = 2
    unhealthy_threshold = 2
    timeout = 3
    target = "${var.health_check_target}"
    interval = 30
  }

  cross_zone_load_balancing = true
}
