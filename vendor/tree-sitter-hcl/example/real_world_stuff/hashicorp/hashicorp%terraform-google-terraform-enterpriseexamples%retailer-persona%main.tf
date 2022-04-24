locals {
  http_proxy_port = "3128"
  name            = "${var.namespace}-tfe-http-proxy"
  subnet_range    = "10.0.0.0/16"
}

resource "google_service_account" "http_proxy" {
  account_id = local.name

  description  = "The service account of the HTTP proxy for TFE."
  display_name = "TFE HTTP Proxy"
}

resource "google_project_iam_member" "log_writer" {
  member = "serviceAccount:${google_service_account.http_proxy.email}"
  role   = "roles/logging.logWriter"
}

resource "google_compute_firewall" "http_proxy" {
  name    = local.name
  network = module.tfe.network

  description             = "The firewall which allows internal access to the HTTP proxy."
  direction               = "INGRESS"
  source_ranges           = [local.subnet_range]
  target_service_accounts = [google_service_account.http_proxy.email]

  allow {
    protocol = "tcp"

    ports = [local.http_proxy_port]
  }

  log_config {
    metadata = "INCLUDE_ALL_METADATA"
  }
}

resource "google_compute_firewall" "ssh" {
  name    = "${local.name}-ssh"
  network = module.tfe.network

  description             = "The firewall which allows the ingress of Identity-Aware Proxy SSH traffic to the HTTP proxy."
  direction               = "INGRESS"
  source_ranges           = ["35.235.240.0/20"]
  target_service_accounts = [google_service_account.http_proxy.email]

  allow {
    protocol = "tcp"

    ports = ["22"]
  }
}

data "google_compute_image" "rhel" {
  name = "rhel-7-v20200403"

  project = "gce-uefi-images"
}

resource "google_compute_instance" "http_proxy" {
  boot_disk {
    initialize_params {
      image = data.google_compute_image.rhel.id
    }
  }

  machine_type = "n1-standard-2"
  name         = local.name

  description = "An HTTP proxy for TFE."
  metadata_startup_script = templatefile(
    "${path.module}/templates/startup.sh.tpl",
    {
      http_proxy_port = local.http_proxy_port
    }
  )

  network_interface {
    subnetwork = module.tfe.subnetwork
  }

  service_account {
    scopes = ["cloud-platform"]

    email = google_service_account.http_proxy.email
  }
}

resource "tls_locally_signed_cert" "main" {
  cert_request_pem      = tls_cert_request.main.cert_request_pem
  ca_key_algorithm      = tls_private_key.ca.algorithm
  ca_private_key_pem    = tls_private_key.ca.private_key_pem
  ca_cert_pem           = tls_self_signed_cert.ca.cert_pem
  validity_period_hours = 24 * 30 * 6

  allowed_uses = [
    "key_encipherment",
    "digital_signature",
  ]
}

resource "tls_cert_request" "main" {
  key_algorithm   = tls_private_key.main.algorithm
  private_key_pem = tls_private_key.main.private_key_pem

  subject {
    common_name  = var.fqdn
    organization = "Terraform Enterprise Private Certificate"
  }

  dns_names = [var.fqdn]
}

resource "tls_private_key" "ca" {
  algorithm = "RSA"
}

resource "tls_self_signed_cert" "ca" {
  key_algorithm         = tls_private_key.ca.algorithm
  private_key_pem       = tls_private_key.ca.private_key_pem
  validity_period_hours = 24 * 30 * 6

  subject {
    organization = "HashiCorp (NonTrusted)"
    common_name  = "HashiCorp (NonTrusted) Private Certificate Authority"
    country      = "US"
  }

  is_ca_certificate = true

  allowed_uses = [
    "cert_signing",
    "key_encipherment",
    "digital_signature"
  ]
}

resource "tls_private_key" "main" {
  algorithm = "RSA"
}

resource "google_compute_region_ssl_certificate" "main" {
  certificate = "${tls_locally_signed_cert.main.cert_pem}\n${tls_self_signed_cert.ca.cert_pem}"
  private_key = tls_private_key.main.private_key_pem

  description = "The regional SSL certificate of the private load balancer for TFE."
  name_prefix = "ptfe-"

  lifecycle {
    create_before_destroy = true
  }
}

module "tfe" {
  source = "../.."

  dns_zone_name        = var.dns_zone_name
  fqdn                 = var.fqdn
  namespace            = var.namespace
  node_count           = 2
  tfe_license_name     = "retailer.rli"
  tfe_license_path     = var.tfe_license_path
  ssl_certificate_name = google_compute_region_ssl_certificate.main.name

  load_balancer           = "PRIVATE"
  networking_subnet_range = local.subnet_range
  proxy_ip                = "${google_compute_instance.http_proxy.network_interface[0].network_ip}:${local.http_proxy_port}"
  redis_auth_enabled      = true
  vm_disk_source_image    = data.google_compute_image.rhel.self_link
  vm_machine_type         = "n1-standard-16"
}
