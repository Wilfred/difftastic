provider "google" {
  credentials = file(var.credentials_file)
  project     = var.project
  region      = var.region
}

provider "google-beta" {
  credentials = file(var.credentials_file)
  project     = var.project
  region      = var.region
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
  source = "../../"

  namespace            = var.namespace
  node_count           = var.node_count
  tfe_license_path     = var.tfe_license_path
  tfe_license_name     = var.tfe_license_name
  fqdn                 = var.fqdn
  ssl_certificate_name = google_compute_region_ssl_certificate.main.name
  dns_zone_name        = var.dns_zone_name
}
