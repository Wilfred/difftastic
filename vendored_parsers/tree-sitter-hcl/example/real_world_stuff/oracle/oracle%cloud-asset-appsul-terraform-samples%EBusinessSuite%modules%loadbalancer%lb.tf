/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


# Load Balancer
resource "oci_load_balancer" "lb" {
  shape           = "${var.load_balancer_shape}"
  count           = "${length(var.availability_domain)}"
  compartment_id  = "${var.compartment_ocid}"
  subnet_ids      = ["${element(var.load_balancer_subnet, count.index)}"]
  display_name    = "${var.load_balancer_name}${element(var.AD,count.index)}${count.index+1}"
  is_private      = "${var.load_balancer_private}"
}

# Load Balancer Backendset
resource "oci_load_balancer_backend_set" "lb-bset" {
  depends_on        = ["oci_load_balancer.lb"]
  count             = "${length(var.availability_domain)}"
  name              = "${var.load_balancer_name}${element(var.AD,count.index)}-bes${count.index + 1}"
  load_balancer_id  = "${element(oci_load_balancer.lb.*.id, count.index)}"
  policy            = "ROUND_ROBIN"

  health_checker {
    port                = "${var.compute_instance_listen_port}"
    protocol            = "HTTP"
    response_body_regex = ".*"
    url_path            = "/"
  }
  session_persistence_configuration {
    cookie_name       = "lb-sessprs"
    disable_fallback  = true
  }
  lifecycle {
    ignore_changes = ["availability_domain"]
  }
}

# Load Balancer Backend
resource "oci_load_balancer_backend" "lb-bset-be" {
  depends_on        = ["oci_load_balancer.lb", "oci_load_balancer_backend_set.lb-bset"]
  count            = "${var.compute_instance_count}"
  load_balancer_id = "${element(oci_load_balancer.lb.*.id, count.index)}"
  backendset_name  = "${element(oci_load_balancer_backend_set.lb-bset.*.name, count.index)}"
  ip_address       = "${element(var.be_ip_addresses, count.index)}"
  port             = "${var.compute_instance_listen_port}"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1

  lifecycle {
    ignore_changes = ["availability_domain"]
  }
}

# Load Balancer Hostname
resource "oci_load_balancer_hostname" "hostname" {
    depends_on        = ["oci_load_balancer.lb"]
    count             = "${length(var.availability_domain)}"
    hostname          = "${var.load_balancer_hostname}"
    load_balancer_id  = "${element(oci_load_balancer.lb.*.id, count.index)}"
    name              = "hostname${count.index + 1}"
}

# Load Balancer Listener
resource "oci_load_balancer_listener" "lb-listener" {
  depends_on                = ["oci_load_balancer.lb", "oci_load_balancer_backend_set.lb-bset","oci_load_balancer_hostname.hostname"]
  count                     = "${length(var.availability_domain)}"
  load_balancer_id          = "${element(oci_load_balancer.lb.*.id, count.index)}"
  name                      = "${var.load_balancer_name}${element(var.AD,count.index)}-lsnr${count.index + 1}"
  default_backend_set_name  =  "${element(oci_load_balancer_backend_set.lb-bset.*.name, count.index)}"
  hostname_names            = ["${element(oci_load_balancer_hostname.hostname.*.name, count.index)}"]
  port                      = "${var.load_balancer_listen_port}"
  protocol                  = "HTTP"
  connection_configuration {
    idle_timeout_in_seconds = "2"
  }
 }

