// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

resource "tls_private_key" "example" {
  algorithm = "RSA"
  rsa_bits  = 4096
}

resource "tls_self_signed_cert" "ca" {
  key_algorithm   = "${tls_private_key.example.algorithm}"
  private_key_pem = "${tls_private_key.example.private_key_pem}"

  validity_period_hours = "${var.validity_period_hours}"
  early_renewal_hours   = "${var.early_renewal_hours}"

  allowed_uses = [
    "cert_signing",
  ]

  dns_names = ["${var.dns_names}"]

  subject {
    common_name  = "${var.common_name}"
    organization = "${var.organization}"
  }

  is_ca_certificate = true
}

resource "tls_cert_request" "example" {
  key_algorithm   = "${tls_private_key.example.algorithm}"
  private_key_pem = "${tls_private_key.example.private_key_pem}"

  subject {
    common_name  = "${var.common_name}"
    organization = "${var.organization}"
    province     = "${var.province}"
    country      = "${var.country}"
  }

  dns_names = ["${var.dns_names}"]
}

resource "tls_locally_signed_cert" "example" {
  cert_request_pem   = "${tls_cert_request.example.cert_request_pem}"
  ca_key_algorithm   = "${tls_private_key.example.algorithm}"
  ca_private_key_pem = "${tls_private_key.example.private_key_pem}"
  ca_cert_pem        = "${tls_self_signed_cert.ca.cert_pem}"

  validity_period_hours = "${var.validity_period_hours}"

  allowed_uses = [
    "server_auth",
  ]
}
