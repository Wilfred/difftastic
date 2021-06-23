/* Load Balancer */
resource "oci_load_balancer" "lb" {
  display_name = "LB Load Balancer"
  shape = "${var.lb_shape}"
  compartment_id = "${var.compartment_ocid}"

  subnet_ids = [
    "${oci_core_subnet.lb-primary-subnet.id}",
    "${oci_core_subnet.lb-failover-subnet.id}",
  ]
  is_private = "false"
}

resource "oci_load_balancer_hostname" "lb-hostname" {
  #Required
  name = "LB Hostname"
  hostname = "app.example.com"
  load_balancer_id = "${oci_load_balancer.lb.id}"
}

resource "oci_load_balancer_backend" "lb-backend" {
  load_balancer_id = "${oci_load_balancer.lb.id}"
  backendset_name = "${oci_load_balancer_backend_set.lb-backendset-1.name}"
  ip_address = "${oci_core_instance.webserver1.private_ip}"
  port = 80
  backup = false
  drain = false
  offline = false
  weight = 1
}

resource "oci_load_balancer_backend_set" "lb-backendset-1" {
  name             = "${var.backendset_name}"
  load_balancer_id = "${oci_load_balancer.lb.id}"
  policy           = "${var.backendset_policy}"

  health_checker {
    protocol            = "${var.hc_protocol}"
    port                = "${var.hc_port}"
    interval_ms         = "${var.hc_interval_ms}"
    retries             = "${var.hc_retries}"
    return_code         = "${var.hc_return_code}"
    timeout_in_millis   = "${var.hc_timeout_in_millis}"
    response_body_regex = "${var.hc_response_body_regex}"
    url_path            = "${var.hc_url_path}"
  }
}

resource "oci_load_balancer_backend" "lb-backendset-2" {
  load_balancer_id = "${oci_load_balancer.lb.id}"
  backendset_name = "${oci_load_balancer_backend_set.lb-backendset-1.name}"
  ip_address = "${oci_core_instance.webserver2.private_ip}"
  port = 80
  backup = false
  drain = false
  offline = false
  weight = 1
}

resource "oci_load_balancer_listener" "lb-listener" {
  name = "LB_Listener"
  load_balancer_id = "${oci_load_balancer.lb.id}"
  default_backend_set_name = "${oci_load_balancer_backend_set.lb-backendset-1.name}"
  hostname_names = ["${oci_load_balancer_hostname.lb-hostname.name}"]
  port = 80
  protocol = "HTTP"

  connection_configuration {
    idle_timeout_in_seconds = "2"
  }
}
