

# Server private key
resource "tls_private_key" "server" {
  count       = var.servers
  algorithm   = "ECDSA"
  ecdsa_curve = "P521"
}

# Server signing request
resource "tls_cert_request" "server" {
  count           = var.servers
  key_algorithm   = element(tls_private_key.server.*.algorithm, count.index)
  private_key_pem = element(tls_private_key.server.*.private_key_pem, count.index)

  subject {
    common_name  = "${var.namespace}-server-${count.index}.node.consul"
    organization = "HashiCorp Demostack"
  }

  dns_names = [
    # Consul
    "${var.namespace}-server-${count.index}.node.consul",
    "${var.namespace}-server-${count.index}.node.${var.region}.consul",

    "*.service.consul",
    "*.service.${var.region}.consul",
    "*.query.consul",
    "consul.service.consul",

    # Nomad
    "nomad.service.consul",
    "nomad.service.${var.region}.consul",


    "client.global.nomad",
    "server.global.nomad",

    # Vault
    "vault.service.consul",
    "vault.query.consul",
    "active.vault.service.consul",
    "active.vault.service.${var.region}.consul",
    "standby.vault.service.consul",
    "standby.vault.service.${var.region}.consul",
    "performance-standby.vault.service.consul",
    "performance-standby.vault.service.${var.region}.consul",

    # Common
    "localhost",
    "*.${var.namespace}.${data.aws_route53_zone.fdqn.name}",
    "server-0.eu-guystack.original.aws.hashidemos.io",
    "server-1.eu-guystack.original.aws.hashidemos.io",
    "server-2.eu-guystack.original.aws.hashidemos.io",
  ]

  // ip_addresses = ["${aws_eip.server_ips.*.public_ip }"]
}

# Server certificate
resource "tls_locally_signed_cert" "server" {
  count              = var.servers
  cert_request_pem   = element(tls_cert_request.server.*.cert_request_pem, count.index)
  ca_key_algorithm   = var.ca_key_algorithm
  ca_private_key_pem = var.ca_private_key_pem
  ca_cert_pem        = var.ca_cert_pem

  validity_period_hours = 720 # 30 days

  allowed_uses = [
    "client_auth",
    "digital_signature",
    "key_agreement",
    "key_encipherment",
    "server_auth",
  ]
}

# Vault initial root token
resource "random_id" "vault-root-token" {
  byte_length = 8
  prefix      = "${var.namespace}-"
}

# Client private key

resource "tls_private_key" "workers" {
  count       = var.workers
  algorithm   = "ECDSA"
  ecdsa_curve = "P521"
}

# Client signing request
resource "tls_cert_request" "workers" {
  count           = var.workers
  key_algorithm   = element(tls_private_key.workers.*.algorithm, count.index)
  private_key_pem = element(tls_private_key.workers.*.private_key_pem, count.index)

  subject {
    common_name  = "${var.namespace}-worker-${count.index}.node.consul"
    organization = "HashiCorp Demostack"
  }

  dns_names = [
    # Consul
    "${var.namespace}-worker-${count.index}.node.consul",
    "${var.namespace}-worker-${count.index}.node.${var.region}.consul",

    "*.service.consul",
    "*.service.${var.region}.consul",
    "*.query.consul",
    "consul.service.consul",

    # Nomad
    "nomad.service.consul",
    "nomad.service.${var.region}.consul",

    "client.global.nomad",
    "server.global.nomad",

    # Vault
    "vault.service.consul",
    "vault.query.consul",
    "active.vault.service.consul",
    "active.vault.service.${var.region}.consul",
    "standby.vault.service.consul",
    "standby.vault.service.${var.region}.consul",
    "performance-standby.vault.service.consul",
    "performance-standby.vault.service.${var.region}.consul",

    # Common
    "localhost",
    "*.${var.namespace}.${data.aws_route53_zone.fdqn.name}",
  ]

  /*
  ip_addresses = [
    "127.0.0.1",
  ]
  */
  // ip_addresses = ["${aws_eip.server_ips.*.public_ip }"]
}

# Client certificate

resource "tls_locally_signed_cert" "workers" {
  count            = var.workers
  cert_request_pem = element(tls_cert_request.workers.*.cert_request_pem, count.index)

  ca_key_algorithm   = var.ca_key_algorithm
  ca_private_key_pem = var.ca_private_key_pem
  ca_cert_pem        = var.ca_cert_pem

  validity_period_hours = 720 # 30 days

  allowed_uses = [
    "client_auth",
    "digital_signature",
    "key_agreement",
    "key_encipherment",
    "server_auth",
  ]
}


// ALB certs
resource "aws_acm_certificate" "cert" {
  domain_name       = "*.${var.namespace}.${data.aws_route53_zone.fdqn.name}"
  validation_method = "DNS"

   tags = local.common_tags

  lifecycle {
    create_before_destroy = true
  }
}

resource "aws_route53_record" "validation_record" {
  name            = aws_acm_certificate.cert.domain_validation_options.0.resource_record_name
  type            = aws_acm_certificate.cert.domain_validation_options.0.resource_record_type
  zone_id         = var.zone_id
  records         = [aws_acm_certificate.cert.domain_validation_options.0.resource_record_value]
  ttl             = "60"
  allow_overwrite = true

  lifecycle {
    create_before_destroy = true
  }
}

resource "aws_acm_certificate_validation" "cert" {
  certificate_arn = aws_acm_certificate.cert.arn
  validation_record_fqdns = [
    aws_route53_record.validation_record.fqdn,
  ]
}