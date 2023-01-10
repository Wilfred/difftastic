resource "google_compute_global_address" "external" {
  name = "${var.namespace}-tfe-external-lb"

  description = "The global address of the public load balancer for TFE."
}

resource "google_dns_record_set" "main" {
  count        = var.dns_create_record ? 1 : 0
  managed_zone = var.dns_zone_name
  # The name must end with a ".".
  name    = "${var.fqdn}."
  rrdatas = [google_compute_global_address.external.address]
  ttl     = 300
  type    = "A"
}

resource "google_compute_health_check" "lb" {
  name = "${var.namespace}-tfe-public-lb"

  check_interval_sec = 30
  description        = "The health check of the public load balancer for TFE."
  timeout_sec        = 4

  https_health_check {
    port         = 443
    request_path = "/_health_check"
  }

}

resource "google_compute_backend_service" "lb" {
  health_checks = [google_compute_health_check.lb.self_link]
  name          = "${var.namespace}-tfe-public-lb"

  description           = "The backend service of the public load balancer for TFE."
  load_balancing_scheme = "EXTERNAL"
  port_name             = "https"
  protocol              = "HTTPS"
  timeout_sec           = 10

  backend {
    group = var.instance_group

    balancing_mode  = "UTILIZATION"
    description     = "The instance group of the compute deployment for TFE."
    capacity_scaler = 1.0
  }
}

resource "google_compute_url_map" "lb" {
  default_service = google_compute_backend_service.lb.self_link
  name            = "${var.namespace}-tfe-public-lb"

  description = "The URL map of the public load balancer for TFE."
}

data "google_compute_ssl_certificate" "provisioned_cert" {
  name = var.ssl_certificate_name
}

resource "google_compute_ssl_policy" "lb" {
  name = "${var.namespace}-tfe-public-lb"

  description     = "The SSL policy of the public load balancer for TFE."
  min_tls_version = "TLS_1_2"
  profile         = "RESTRICTED"
}

resource "google_compute_target_https_proxy" "lb" {
  name             = "${var.namespace}-tfe-public-lb"
  ssl_certificates = [data.google_compute_ssl_certificate.provisioned_cert.self_link]
  url_map          = google_compute_url_map.lb.self_link

  description = "The target HTTPS proxy of the public load balancer for TFE."
  ssl_policy  = google_compute_ssl_policy.lb.self_link
}

resource "google_compute_global_forwarding_rule" "lb" {
  name   = "${var.namespace}-tfe-public-lb"
  target = google_compute_target_https_proxy.lb.self_link

  description           = "The global forwarding rule of the public load balancer for TFE."
  ip_address            = google_compute_global_address.external.address
  ip_protocol           = "TCP"
  load_balancing_scheme = "EXTERNAL"
  port_range            = 443
}
