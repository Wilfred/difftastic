/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


locals {
	lb_ids = "${module.create_logic_lb.lb_id}" #Use OCID of Logic LB.
  web_be1_ip_address1 = "${module.create_wls.PrvIPs}" #Use IP addresses of WLS instances.
  web_backendset_counts = "3"
}

resource "oci_load_balancer_backend_set" "lb1-webbes" {
  depends_on = ["module.create_logic_lb"]
  count			   = "${local.web_backendset_counts}"
  name             = "lb1-webbes${count.index + 1}"
  load_balancer_id = "${element(local.lb_ids, 0)}"
  policy           = "ROUND_ROBIN"

  health_checker {
    port = "0"
    protocol = "HTTP"
    response_body_regex = ".*"
    url_path = "${count.index != "2" ? "/jde/E1Menu.maf" : "/jderest/defaultconfig"}"
  }
  session_persistence_configuration {
    #cookie_name      = "*"
    cookie_name      = "JSESSIONID"
    #disable_fallback = true
  }
  ssl_configuration {
   certificate_name        = "${oci_load_balancer_certificate.jdelb-cert1.0.certificate_name}"
   verify_peer_certificate = false
  }
}

resource "oci_load_balancer_backend_set" "lb2-webbes" {
  depends_on = ["module.create_logic_lb"]
  count			   = "${local.web_backendset_counts}"
  name             = "lb2-webbes${count.index + 1}"
  load_balancer_id = "${element(local.lb_ids, 1)}"
  policy           = "ROUND_ROBIN"

  health_checker {
    port = "0"
    protocol = "HTTP"
    response_body_regex = ".*"
    url_path = "${count.index != "2" ? "/jde/E1Menu.maf" : "/jderest/defaultconfig"}"
  }
  session_persistence_configuration {
    #cookie_name      = "*"
    cookie_name      = "JSESSIONID"
    #disable_fallback = true
  }
  ssl_configuration {
   certificate_name        = "${oci_load_balancer_certificate.jdelb-cert1.1.certificate_name}"
   verify_peer_certificate = false
  }
}

# Backends for LB 1.
resource "oci_load_balancer_backend" "lb1-webbes1" {
  count = "${var.wls_instance_count * length(var.listen_port_range_standalone_html)}"
  load_balancer_id = "${element(local.lb_ids, 0)}"
  backendset_name  = "${element(oci_load_balancer_backend_set.lb1-webbes.*.name, 0)}"
  ip_address       = "${element(local.web_be1_ip_address1, count.index / length(var.listen_port_range_standalone_html))}"
  port             = "${element(var.listen_port_range_standalone_html, count.index % length(var.listen_port_range_standalone_html))}"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_backend" "lb1-webbes2" {
  count = "${var.wls_instance_count * length(var.listen_port_range_html)}"
  load_balancer_id = "${element(local.lb_ids, 0)}"
  backendset_name  = "${element(oci_load_balancer_backend_set.lb1-webbes.*.name, 1)}"
  ip_address       = "${element(local.web_be1_ip_address1, count.index / length(var.listen_port_range_html))}"
  port             = "${element(var.listen_port_range_html, count.index % length(var.listen_port_range_html))}"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_backend" "lb1-webbes3" {
  count = "${var.wls_instance_count * length(var.listen_port_range_ais)}"
  load_balancer_id = "${element(local.lb_ids, 0)}"
  backendset_name  = "${element(oci_load_balancer_backend_set.lb1-webbes.*.name, 2)}"
  ip_address       = "${element(local.web_be1_ip_address1, count.index / length(var.listen_port_range_ais))}"
  port             = "${element(var.listen_port_range_ais, count.index % length(var.listen_port_range_ais))}"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}


# Backends for LB 2

resource "oci_load_balancer_backend" "lb2-webbes1" {
  count = "${var.wls_instance_count * length(var.listen_port_range_standalone_html)}"
  load_balancer_id = "${element(local.lb_ids, 1)}"
  backendset_name  = "${element(oci_load_balancer_backend_set.lb2-webbes.*.name, 0)}"
  ip_address       = "${element(local.web_be1_ip_address1, count.index / length(var.listen_port_range_standalone_html))}"
  port             = "${element(var.listen_port_range_standalone_html, count.index % length(var.listen_port_range_standalone_html))}"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_backend" "lb2-webbes2" {
  count                    = "${var.wls_instance_count * length(var.listen_port_range_html)}"
  load_balancer_id = "${element(local.lb_ids, 1)}"
  backendset_name  = "${element(oci_load_balancer_backend_set.lb2-webbes.*.name, 1)}"
  ip_address       = "${element(local.web_be1_ip_address1, count.index / length(var.listen_port_range_html))}"
  port             = "${element(var.listen_port_range_html, count.index % length(var.listen_port_range_html))}"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_backend" "lb2-webbes3" {
  count = "${var.wls_instance_count * length(var.listen_port_range_ais)}"
  load_balancer_id = "${element(local.lb_ids, 1)}"
  backendset_name  = "${element(oci_load_balancer_backend_set.lb2-webbes.*.name, 2)}"
  ip_address       = "${element(local.web_be1_ip_address1, count.index / length(var.listen_port_range_ais))}"
  port             = "${element(var.listen_port_range_ais, count.index % length(var.listen_port_range_ais))}"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_listener" "jdelb1-weblistener1" {
  load_balancer_id = "${element(local.lb_ids, 0)}"
  name                     = "${var.load_balancer_name}-weblsnr1"
  default_backend_set_name =  "${element(oci_load_balancer_backend_set.lb1-webbes.*.name, 0)}"
  port                     = "${var.lbaas_listen_port_standalone_html}"
  protocol                 = "HTTP"
  ssl_configuration {
    certificate_name        = "${oci_load_balancer_certificate.jdelb-cert1.0.certificate_name}"
    verify_peer_certificate = false
  }  
  connection_configuration {
    idle_timeout_in_seconds = "180"
  }
}

resource "oci_load_balancer_listener" "jdelb1-weblistener2" {
  load_balancer_id = "${element(local.lb_ids, 0)}"
  name                     = "${var.load_balancer_name}-weblsnr2"
  default_backend_set_name =  "${element(oci_load_balancer_backend_set.lb1-webbes.*.name, 1)}"
  port                     = "${var.lbaas_listen_port_html}"
  protocol                 = "HTTP"
  ssl_configuration {
   certificate_name        = "${oci_load_balancer_certificate.jdelb-cert1.0.certificate_name}"
   verify_peer_certificate = false
  }
  connection_configuration {
    idle_timeout_in_seconds = "180"
  }
}

resource "oci_load_balancer_listener" "jdelb1-weblistener3" {
  load_balancer_id = "${element(local.lb_ids, 0)}"
  name                     = "${var.load_balancer_name}-weblsnr3"
  default_backend_set_name =  "${element(oci_load_balancer_backend_set.lb1-webbes.*.name, 2)}"
  port                     = "${var.lbaas_listen_port_ais}"
  protocol                 = "HTTP"
  ssl_configuration {
   certificate_name        = "${oci_load_balancer_certificate.jdelb-cert1.0.certificate_name}"
   verify_peer_certificate = false
  }
  connection_configuration {
    idle_timeout_in_seconds = "180"
  }
}

resource "oci_load_balancer_listener" "jdelb2-weblistener1" {
  load_balancer_id = "${element(local.lb_ids, 1)}"
  name                     = "${var.load_balancer_name}-weblsnr1"
  default_backend_set_name =  "${element(oci_load_balancer_backend_set.lb2-webbes.*.name, 0)}"
  port                     = "${var.lbaas_listen_port_standalone_html}"
  protocol                 = "HTTP"
  ssl_configuration {
   certificate_name        = "${oci_load_balancer_certificate.jdelb-cert1.1.certificate_name}"
   verify_peer_certificate = false
  }
  connection_configuration {
    idle_timeout_in_seconds = "180"
  }
}

resource "oci_load_balancer_listener" "jdelb2-weblistener2" {
  load_balancer_id = "${element(local.lb_ids, 1)}"
  name                     = "${var.load_balancer_name}-weblsnr2"
  default_backend_set_name =  "${element(oci_load_balancer_backend_set.lb2-webbes.*.name, 1)}"
  port                     = "${var.lbaas_listen_port_html}"
  protocol                 = "HTTP"
  ssl_configuration {
   certificate_name        = "${oci_load_balancer_certificate.jdelb-cert1.1.certificate_name}"
   verify_peer_certificate = false
  }
  connection_configuration {
    idle_timeout_in_seconds = "180"
  }
}

resource "oci_load_balancer_listener" "jdelb2-weblistener3" {
  load_balancer_id = "${element(local.lb_ids, 1)}"
  name                     = "${var.load_balancer_name}-weblsnr3"
  default_backend_set_name =  "${element(oci_load_balancer_backend_set.lb2-webbes.*.name, 2)}"
  port                     = "${var.lbaas_listen_port_ais}"
  protocol                 = "HTTP"
  ssl_configuration {
   certificate_name        = "${oci_load_balancer_certificate.jdelb-cert1.1.certificate_name}"
   verify_peer_certificate = false
  }
  connection_configuration {
    idle_timeout_in_seconds = "180"
  }
}

resource "oci_load_balancer_certificate" "jdelb-cert1" {
  count = 2
  load_balancer_id   = "${element(local.lb_ids,count.index)}"
  certificate_name   = "${var.load_balancer_certificate_name}"
  ca_certificate     = "${var.load_balancer_ca_certificate}"
  passphrase = "${var.load_balancer_certificate_passphrase}"
  private_key        = "${var.load_balancer_certificate_private_key}"
  public_certificate = "${var.load_balancer_certificate_public_certificate}"
  
  lifecycle {
    create_before_destroy = true
  }
}
