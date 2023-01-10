# Create a Cluster Root CA

resource "tls_private_key" "root-ca" {
  count     = "${var.ca_cert == "" ? 1 : 0}"
  algorithm = "RSA"
  rsa_bits  = 2048
}

resource "tls_self_signed_cert" "root-ca" {
  count             = "${var.ca_cert == "" ? 1 : 0}"
  key_algorithm     = "RSA"
  private_key_pem   = "${tls_private_key.root-ca.private_key_pem}"
  is_ca_certificate = true

  subject {
    common_name = "${var.common_name}"
  }

  allowed_uses = [
    "key_encipherment",
    "cert_signing",
    "server_auth",
    "client_auth",
  ]

  validity_period_hours = "${var.validity_period_hours}"
}

# Kubernetes API Server Keypair

resource "tls_private_key" "api-server" {
  count     = "${var.api_server_private_key == "" ? 1 : 0}"
  algorithm = "RSA"
  rsa_bits  = 2048
}

resource "tls_cert_request" "api-server" {
  count           = "${var.api_server_cert == "" ? 1 : 0}"
  key_algorithm   = "RSA"
  private_key_pem = "${tls_private_key.api-server.private_key_pem}"

  # TODO DNS name of LB
  dns_names = "${concat(list(var.k8s-serviceip),
    list(
      "localhost",
      "kubernetes",
      "kubernetes.default",
      "kubernetes.default.svc",
      "kubernetes.default.svc.cluster.local"
    ))}"
  ip_addresses = ["${distinct(list(
      "${var.master_lb_public_ip}",
      "${var.k8s-serviceip}",
      "127.0.0.1"
  ))}"]

  # system:masters group
  subject {
    common_name  = "*"
    organization = "system:masters"
  }
}

resource "tls_locally_signed_cert" "api-server" {
  count                 = "${var.api_server_cert == "" ? 1 : 0}"
  cert_request_pem      = "${tls_cert_request.api-server.cert_request_pem}"
  ca_key_algorithm      = "RSA"
  ca_private_key_pem    = "${tls_private_key.root-ca.private_key_pem}"
  ca_cert_pem           = "${tls_self_signed_cert.root-ca.cert_pem}"
  validity_period_hours = "${var.validity_period_hours}"

  allowed_uses = [
    "key_encipherment",
    "server_auth",
    "client_auth",
    "digital_signature",
  ]
}

# Instance SSH Key Pairs

resource "tls_private_key" "ssh" {
  lifecycle {
    create_before_destroy = true
  }

  algorithm = "RSA"
  count     = "${var.ssh_private_key == "" ? 1 : 0}"
  rsa_bits  = 2048
}

resource "random_id" "token-auth" {
  count       = "${var.api_server_admin_token == "" ? 1 : 0}"
  byte_length = 16
}
