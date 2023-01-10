resource "google_compute_address" "internal" {
  name         = "${var.namespace}-tfe-internal-lb"
  subnetwork   = var.subnet
  address_type = "INTERNAL"
  purpose      = "GCE_ENDPOINT"
}

resource "google_dns_record_set" "main" {
  count        = var.dns_create_record ? 1 : 0
  managed_zone = var.dns_zone_name
  # The name must end with a ".".
  name    = "${var.fqdn}."
  rrdatas = [google_compute_address.internal.address]
  ttl     = 300
  type    = "A"
}

resource "google_compute_region_health_check" "lb" {
  name = "${var.namespace}-tfe-interal-lb"

  check_interval_sec = 30
  description        = "The health check of the internal load balancer for TFE."
  timeout_sec        = 4

  https_health_check {
    port         = 443
    request_path = "/_health_check"
  }

}

resource "google_compute_region_backend_service" "lb" {
  health_checks = [google_compute_region_health_check.lb.self_link]
  name          = "${var.namespace}-tfe-internal-lb"

  description           = "The backend service of the internal load balancer for TFE."
  load_balancing_scheme = "INTERNAL_MANAGED"
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

resource "google_compute_region_url_map" "lb" {
  default_service = google_compute_region_backend_service.lb.self_link
  name            = "${var.namespace}-tfe-internal-lb"

  description = "The URL map of the internal load balancer for TFE."
}

resource "google_compute_region_target_https_proxy" "lb" {
  name             = "${var.namespace}-tfe-internal-lb"
  ssl_certificates = [var.ssl_certificate_name]
  url_map          = google_compute_region_url_map.lb.self_link

  description = "The target HTTPS proxy of the internal load balancer for TFE."
}

resource "google_compute_forwarding_rule" "lb" {
  name                  = "${var.namespace}-tfe-internal-lb"
  ip_address            = google_compute_address.internal.address
  ip_protocol           = "TCP"
  load_balancing_scheme = "INTERNAL_MANAGED"
  port_range            = 443
  subnetwork            = var.subnet
  target                = google_compute_region_target_https_proxy.lb.self_link
}
