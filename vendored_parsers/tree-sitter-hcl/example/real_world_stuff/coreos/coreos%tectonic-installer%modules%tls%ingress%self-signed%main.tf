resource "tls_private_key" "ingress" {
  algorithm = "RSA"
  rsa_bits  = "2048"
}

resource "tls_cert_request" "ingress" {
  key_algorithm   = "${tls_private_key.ingress.algorithm}"
  private_key_pem = "${tls_private_key.ingress.private_key_pem}"

  subject {
    common_name = "${element(split(":", var.base_address), 0)}"
  }

  # subject commonName is deprecated per RFC2818 in favor of
  # subjectAltName
  dns_names = [
    "${element(split(":", var.base_address), 0)}",
  ]
}

resource "tls_locally_signed_cert" "ingress" {
  cert_request_pem = "${tls_cert_request.ingress.cert_request_pem}"

  ca_key_algorithm      = "${var.ca_key_alg}"
  ca_private_key_pem    = "${var.ca_key_pem}"
  ca_cert_pem           = "${var.ca_cert_pem}"
  validity_period_hours = "${var.validity_period}"

  allowed_uses = [
    "key_encipherment",
    "digital_signature",
    "server_auth",
    "client_auth",
  ]
}
