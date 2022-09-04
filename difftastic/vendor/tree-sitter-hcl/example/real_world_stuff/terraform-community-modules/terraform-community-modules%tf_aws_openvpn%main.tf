#----------------------------------------------------------------
# This module creates all resources necessary for OpenVPN in AWS
#----------------------------------------------------------------

resource "aws_security_group" "openvpn" {
  name        = "${var.name}"
  vpc_id      = "${var.vpc_id}"
  description = "OpenVPN security group"

  tags {
    Name = "${var.name}"
  }

  ingress {
    protocol    = -1
    from_port   = 0
    to_port     = 0
    cidr_blocks = ["${var.vpc_cidr}"]
  }

  # For OpenVPN Client Web Server & Admin Web UI

  ingress {
    protocol    = "tcp"
    from_port   = 22
    to_port     = 22
    cidr_blocks = ["0.0.0.0/0"]
  }
  ingress {
    protocol    = "tcp"
    from_port   = 443
    to_port     = 443
    cidr_blocks = ["0.0.0.0/0"]
  }
  ingress {
    protocol    = "udp"
    from_port   = 1194
    to_port     = 1194
    cidr_blocks = ["0.0.0.0/0"]
  }
  egress {
    protocol    = -1
    from_port   = 0
    to_port     = 0
    cidr_blocks = ["0.0.0.0/0"]
  }
}

resource "aws_instance" "openvpn" {
  ami           = "${var.ami}"
  instance_type = "${var.instance_type}"
  key_name      = "${var.key_name}"
  subnet_id     = "${element(var.public_subnet_ids, count.index)}"

  vpc_security_group_ids = ["${aws_security_group.openvpn.id}"]

  tags {
    Name = "${var.name}"
  }

  # `admin_user` and `admin_pw` need to be passed in to the appliance through `user_data`, see docs -->
  # https://docs.openvpn.net/how-to-tutorialsguides/virtual-platforms/amazon-ec2-appliance-ami-quick-start-guide/
  user_data = <<USERDATA
admin_user=${var.openvpn_admin_user}
admin_pw=${var.openvpn_admin_pw}
USERDATA

  provisioner "remote-exec" {
    connection {
      user        = "${var.openvpn_user}"
      host        = "${self.public_ip}"
      private_key = "${var.private_key}"
      timeout     = "10m"
    }

    inline = [
      # Sleep 60 seconds until AMI is ready
      "sleep 60",

      # Set VPN network info
      "sudo /usr/local/openvpn_as/scripts/sacli -k vpn.daemon.0.client.network -v ${element(split("/", var.vpn_cidr), 0)} ConfigPut",

      "sudo /usr/local/openvpn_as/scripts/sacli -k vpn.daemon.0.client.netmask_bits -v ${element(split("/", var.vpn_cidr), 1)} ConfigPut",

      # Do a warm restart so the config is picked up
      "sudo /usr/local/openvpn_as/scripts/sacli start",
    ]
  }
}

resource "aws_elb" "openvpn" {
  name                        = "openvpn-elb"
  subnets                     = ["${var.public_subnet_ids}"]
  internal                    = false
  idle_timeout                = 30
  connection_draining         = true
  connection_draining_timeout = 30
  instances                   = ["${aws_instance.openvpn.id}"]
  security_groups             = ["${aws_security_group.openvpn.id}"]

  listener {
    instance_port      = 443
    instance_protocol  = "https"
    lb_port            = 443
    lb_protocol        = "https"
    ssl_certificate_id = "${var.cert_arn}"
  }

  health_check {
    healthy_threshold   = 2
    unhealthy_threshold = 2
    timeout             = 5
    target              = "TCP:443"
    interval            = 20
  }

  tags {
    Name = "openvpn-elb"
  }
}

resource "aws_route53_record" "openvpn-web" {
  zone_id = "${var.route_zone_id}"
  name    = "vpn-web.${var.domain_name}"
  type    = "A"

  alias {
    name                   = "${aws_elb.openvpn.dns_name}"
    zone_id                = "${aws_elb.openvpn.zone_id}"
    evaluate_target_health = false
  }
}

resource "aws_route53_record" "openvpn" {
  zone_id = "${var.route_zone_id}"
  name    = "vpn.${var.domain_name}"
  type    = "A"
  ttl     = 300
  records = ["${aws_instance.openvpn.public_ip}"]
}
