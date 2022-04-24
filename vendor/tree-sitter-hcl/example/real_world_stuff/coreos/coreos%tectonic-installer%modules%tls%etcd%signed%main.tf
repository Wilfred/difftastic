// root CA

resource "tls_private_key" "etcd_ca" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  algorithm = "RSA"
  rsa_bits  = "2048"
}

resource "tls_self_signed_cert" "etcd_ca" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  key_algorithm   = "${tls_private_key.etcd_ca.algorithm}"
  private_key_pem = "${tls_private_key.etcd_ca.private_key_pem}"

  subject {
    common_name  = "etcd-ca"
    organization = "etcd"
  }

  is_ca_certificate     = true
  validity_period_hours = "${var.validity_period}"

  allowed_uses = [
    "key_encipherment",
    "digital_signature",
    "cert_signing",
  ]
}

// (etcd) server keys
// These are used for etcd-to-etcd member communcation

resource "tls_private_key" "etcd_server" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  algorithm = "RSA"
  rsa_bits  = "2048"
}

resource "tls_cert_request" "etcd_server" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  key_algorithm   = "${tls_private_key.etcd_server.algorithm}"
  private_key_pem = "${tls_private_key.etcd_server.private_key_pem}"

  subject {
    common_name  = "etcd"
    organization = "etcd"
  }

  dns_names = ["${concat(
    var.etcd_cert_dns_names,
    list(
      "localhost",
      "*.kube-etcd.kube-system.svc.cluster.local",
      "kube-etcd-client.kube-system.svc.cluster.local",
    ))}"]

  ip_addresses = [
    "127.0.0.1",
    "${cidrhost(var.service_cidr, 15)}",
    "${cidrhost(var.service_cidr, 20)}",
  ]
}

resource "tls_locally_signed_cert" "etcd_server" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  cert_request_pem = "${tls_cert_request.etcd_server.cert_request_pem}"

  ca_key_algorithm      = "${join(" ", tls_self_signed_cert.etcd_ca.*.key_algorithm)}"
  ca_private_key_pem    = "${join(" ", tls_private_key.etcd_ca.*.private_key_pem)}"
  ca_cert_pem           = "${join(" ", tls_self_signed_cert.etcd_ca.*.cert_pem)}"
  validity_period_hours = "${var.validity_period}"

  allowed_uses = [
    "key_encipherment",
    "server_auth",
  ]
}

// client keys
// These are used for "api server"-to-etcd and "etcd operator"-to-etcd client communication

resource "tls_private_key" "etcd_client" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  algorithm = "RSA"
  rsa_bits  = "2048"
}

resource "tls_cert_request" "etcd_client" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  key_algorithm   = "${tls_private_key.etcd_client.algorithm}"
  private_key_pem = "${tls_private_key.etcd_client.private_key_pem}"

  subject {
    common_name  = "etcd"
    organization = "etcd"
  }
}

resource "tls_locally_signed_cert" "etcd_client" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  cert_request_pem = "${tls_cert_request.etcd_client.cert_request_pem}"

  ca_key_algorithm      = "${join(" ", tls_self_signed_cert.etcd_ca.*.key_algorithm)}"
  ca_private_key_pem    = "${join(" ", tls_private_key.etcd_ca.*.private_key_pem)}"
  ca_cert_pem           = "${join(" ", tls_self_signed_cert.etcd_ca.*.cert_pem)}"
  validity_period_hours = "${var.validity_period}"

  allowed_uses = [
    "key_encipherment",
    "client_auth",
  ]
}

// peer keys
// These are used for etcd-to-etcd member communcation

resource "tls_private_key" "etcd_peer" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  algorithm = "RSA"
  rsa_bits  = "2048"
}

resource "tls_cert_request" "etcd_peer" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  key_algorithm   = "${tls_private_key.etcd_peer.algorithm}"
  private_key_pem = "${tls_private_key.etcd_peer.private_key_pem}"

  subject {
    common_name  = "etcd"
    organization = "etcd"
  }

  dns_names = ["${concat(
    var.etcd_cert_dns_names,
    list(
      "*.kube-etcd.kube-system.svc.cluster.local",
      "kube-etcd-client.kube-system.svc.cluster.local",
    ))}"]

  ip_addresses = [
    "${cidrhost(var.service_cidr, 15)}",
    "${cidrhost(var.service_cidr, 20)}",
  ]
}

resource "tls_locally_signed_cert" "etcd_peer" {
  count = "${var.self_signed == "true" ? 1 : 0}"

  cert_request_pem = "${tls_cert_request.etcd_peer.cert_request_pem}"

  ca_key_algorithm      = "${join(" ", tls_self_signed_cert.etcd_ca.*.key_algorithm)}"
  ca_private_key_pem    = "${join(" ", tls_private_key.etcd_ca.*.private_key_pem)}"
  ca_cert_pem           = "${join(" ", tls_self_signed_cert.etcd_ca.*.cert_pem)}"
  validity_period_hours = "${var.validity_period}"

  allowed_uses = [
    "key_encipherment",
    "server_auth",
    "client_auth",
  ]
}
