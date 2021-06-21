resource "google_compute_target_pool" "master-targetpool" {
  name             = "${var.cluster_name}-master-targetpool"
  session_affinity = "CLIENT_IP_PROTO"
}

resource "google_compute_target_pool" "worker-targetpool" {
  name = "${var.cluster_name}-worker-targetpool"

  health_checks = [
    "${google_compute_http_health_check.worker-hc.name}",
  ]
}

resource "google_compute_http_health_check" "worker-hc" {
  name         = "${var.cluster_name}-worker-hc"
  request_path = "/"

  timeout_sec        = 1
  check_interval_sec = 1
}

// api-server/masters lb
// We need to use a global lb for bootstraping
// because of https://issuetracker.google.com/issues/67366622
resource "google_compute_global_address" "masters-ip" {
  name = "${var.cluster_name}-masters-ip"
}

resource "google_compute_global_forwarding_rule" "api-external-fwd-rule" {
  name       = "${var.cluster_name}-api-external-fwd-rule"
  target     = "${google_compute_target_tcp_proxy.api-external-tcp-proxy.self_link}"
  ip_address = "${google_compute_global_address.masters-ip.address}"
  port_range = "443"
}

resource "google_compute_target_tcp_proxy" "api-external-tcp-proxy" {
  name            = "${var.cluster_name}-api-external-tcp-proxy"
  backend_service = "${google_compute_backend_service.api-backend-service.self_link}"
}

resource "google_compute_backend_service" "api-backend-service" {
  name             = "${var.cluster_name}-api-backend-service"
  protocol         = "TCP"
  port_name        = "https"
  timeout_sec      = 10
  session_affinity = "NONE"

  backend {
    group = "${var.master_instance_group[0]}"
  }

  health_checks = ["${google_compute_health_check.api-health-check.self_link}"]
}

resource "google_compute_health_check" "api-health-check" {
  name               = "${var.cluster_name}-api-health-check"
  timeout_sec        = 1
  check_interval_sec = 1

  ssl_health_check {
    port = "443"
  }
}

resource "google_compute_address" "ingress-ip" {
  name = "${var.cluster_name}-ingress-ip"
}

resource "google_compute_forwarding_rule" "ingress-external-http-fwd-rule" {
  load_balancing_scheme = "EXTERNAL"
  name                  = "${var.cluster_name}-ingress-external-http-fwd-rule"
  ip_address            = "${google_compute_address.ingress-ip.address}"
  region                = "${var.gcp_region}"
  target                = "${google_compute_target_pool.worker-targetpool.self_link}"
  port_range            = "80"
}

resource "google_compute_forwarding_rule" "ingress-external-https-fwd-rule" {
  load_balancing_scheme = "EXTERNAL"
  name                  = "${var.cluster_name}-ingress-external-https-fwd-rule"
  ip_address            = "${google_compute_address.ingress-ip.address}"
  region                = "${var.gcp_region}"
  target                = "${google_compute_target_pool.worker-targetpool.self_link}"
  port_range            = "443"
}
