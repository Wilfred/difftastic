data "template_file" "gateway_service" {
  template = "${file("${path.module}/resources/gateway.service")}"

  vars {
    private_cidr = "${cidrsubnet(var.vpc_cidr, 6, 25)}"
  }
}

data "ignition_systemd_unit" "gateway_service" {
  name    = "gateway.service"
  enabled = true
  content = "${data.template_file.gateway_service.rendered}"
}

data "template_file" "nginx_service" {
  template = "${file("${path.module}/resources/nginx.service")}"

  vars {
    username    = "${var.nginx_username}"
    password    = "${var.nginx_password}"
    nginx_image = "${var.container_images["nginx"]}"
  }
}

data "ignition_systemd_unit" "nginx_service" {
  name    = "nginx.service"
  enabled = true
  content = "${data.template_file.nginx_service.rendered}"
}

data "template_file" "nginx_conf" {
  template = "${file("${path.module}/resources/nginx.conf")}"
}

data "ignition_file" "nginx_conf" {
  filesystem = "root"
  path       = "/home/core/nginx-config/default.conf"
  mode       = 0644

  content {
    content = "${data.template_file.nginx_conf.rendered}"
  }
}

data "template_file" "openvpn_service" {
  template = "${file("${path.module}/resources/openvpn.service")}"

  vars {
    ip            = "${aws_eip.ovpn_eip.public_ip}"
    openvpn_image = "${var.container_images["openvpn"]}"
  }
}

data "ignition_systemd_unit" "openvpn_service" {
  name    = "openvpn.service"
  enabled = true
  content = "${data.template_file.openvpn_service.rendered}"
}

data "template_file" "powerdns_service" {
  template = "${file("${path.module}/resources/powerdns.service")}"

  vars {
    dns_zone       = "${var.base_domain}"
    pdns_api_key   = "${var.pdns_api_key}"
    mysql_password = "${var.mysql_password}"
    powerdns_image = "${var.container_images["powerdns"]}"
    mysql_image    = "${var.container_images["mysql"]}"
  }
}

data "ignition_systemd_unit" "powerdns_service" {
  name    = "powerdns.service"
  enabled = true
  content = "${data.template_file.powerdns_service.rendered}"
}
