# NOTE: Across this module, the following syntax is used at various places:
#   `"${var.ca_cert_pem == "" ? join(" ", tls_private_key.kube-ca.*.private_key_pem) : var.ca_key_pem}"`
#
# Due to https://github.com/hashicorp/hil/issues/50, both sides of conditions
# are evaluated, until one of them is discarded. Unfortunately, the
# `{tls_private_key/tls_self_signed_cert}.kube-ca` resources are created
# conditionally and might not be present - in which case an error is
# generated. Because a `count` is used on these ressources, the resources can be
# referenced as lists with the `.*` notation, and arrays are allowed to be
# empty. The `join()` interpolation function is then used to cast them back to
# a string. Since `count` can only be 0 or 1, the returned value is either empty
# (and discarded anyways) or the desired value.

# Kubernetes CA (resources/generated/tls/{ca.crt,ca.key})
resource "tls_private_key" "kube_ca" {
  count = "${var.ca_cert_pem == "" ? 1 : 0}"

  algorithm = "RSA"
  rsa_bits  = "2048"
}

resource "tls_self_signed_cert" "kube_ca" {
  count = "${var.ca_cert_pem == "" ? 1 : 0}"

  key_algorithm   = "${tls_private_key.kube_ca.algorithm}"
  private_key_pem = "${tls_private_key.kube_ca.private_key_pem}"

  subject {
    common_name  = "kube-ca"
    organization = "bootkube"
  }

  is_ca_certificate     = true
  validity_period_hours = "${var.validity_period}"

  allowed_uses = [
    "key_encipherment",
    "digital_signature",
    "cert_signing",
  ]
}
