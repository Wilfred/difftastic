/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/



/* Load Balancer */
resource "oci_load_balancer" "lb" {
  shape          = "100Mbps"
  count          = "${length(var.load_balancer_subnet)}"
  compartment_id = "${var.compartment_ocid}"
  subnet_ids = ["${element(var.load_balancer_subnet, count.index)}"]
  display_name = "${var.load_balancer_name}${count.index+1}"
  is_private = "True"
}

resource "oci_load_balancer_backend_set" "lb1-bes" {
  count			   = "${length(var.load_balancer_listen_port)}"
  name             = "lb1-bes${count.index + 1}"
  load_balancer_id = "${element(oci_load_balancer.lb.*.id, 0)}"
  policy           = "ROUND_ROBIN"

  health_checker {
    port = "0"
    protocol = "TCP"
    response_body_regex = ".*"
  }
  session_persistence_configuration {
    cookie_name      = "*"
    #disable_fallback = true
  }
}

resource "oci_load_balancer_backend_set" "lb2-bes" {
  count                    = "${length(var.load_balancer_listen_port)}"
  name             = "lb2-bes${count.index + 1}"
  load_balancer_id = "${element(oci_load_balancer.lb.*.id, 1)}"
  policy           = "ROUND_ROBIN"

  health_checker {
    port = "0"
    protocol = "TCP"
    response_body_regex = ".*"
  }
  session_persistence_configuration {
    cookie_name      = "*"
    #disable_fallback = true
  }
}

# Backends for LB 1.
resource "oci_load_balancer_backend" "lb1-be" {
  count = "${var.app_instance_count * length(var.load_balancer_listen_port)}"
  load_balancer_id = "${element(oci_load_balancer.lb.*.id, 0)}"
  backendset_name  = "${element(oci_load_balancer_backend_set.lb1-bes.*.name, count.index % length(var.load_balancer_listen_port))}"
  ip_address       = "${element(var.be1_ip_address1, count.index / length(var.load_balancer_listen_port))}"
  port             = "${element(var.load_balancer_listen_port, count.index % length(var.load_balancer_listen_port))}"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

# Backends for LB 2
resource "oci_load_balancer_backend" "lb2-be" {
  count = "${var.app_instance_count * length(var.load_balancer_listen_port)}"
  load_balancer_id = "${element(oci_load_balancer.lb.*.id, 1)}"
  backendset_name  = "${element(oci_load_balancer_backend_set.lb2-bes.*.name, count.index % length(var.load_balancer_listen_port))}"
  ip_address       = "${element(var.be1_ip_address1, count.index / length(var.load_balancer_listen_port))}"
  port             = "${element(var.load_balancer_listen_port, count.index % length(var.load_balancer_listen_port))}"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_listener" "jdelb-listener1" {
  count          = "${length(var.load_balancer_listen_port)}"
  load_balancer_id = "${element(oci_load_balancer.lb.*.id, 0)}"
  name                     = "${var.load_balancer_name}-lsnr${count.index + 1}"
  default_backend_set_name =  "${element(oci_load_balancer_backend_set.lb1-bes.*.name, count.index)}"
  port                     = "${element(var.load_balancer_listen_port, count.index)}"
  protocol                 = "${var.load_balancer_protocol}"
  connection_configuration {
    idle_timeout_in_seconds = "300"
  }
}

resource "oci_load_balancer_listener" "jdelb-listener2" {
  count          = "${length(var.load_balancer_listen_port)}"
  load_balancer_id = "${element(oci_load_balancer.lb.*.id, 1)}"
  name                     = "${var.load_balancer_name}-lsnr${count.index + 1}"
  default_backend_set_name =  "${element(oci_load_balancer_backend_set.lb2-bes.*.name, count.index)}"
  port                     = "${element(var.load_balancer_listen_port, count.index)}"
  protocol                 = "${var.load_balancer_protocol}"
  connection_configuration {
    idle_timeout_in_seconds = "300"
  }
}
