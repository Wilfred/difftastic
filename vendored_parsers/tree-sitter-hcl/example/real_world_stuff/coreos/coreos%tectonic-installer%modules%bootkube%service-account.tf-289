# Kubernete's Service Account (resources/generated/tls/{service-account.key,service-account.pub})
resource "tls_private_key" "service_account" {
  algorithm = "RSA"
  rsa_bits  = "2048"
}

resource "local_file" "service_account_key" {
  content  = "${tls_private_key.service_account.private_key_pem}"
  filename = "./generated/tls/service-account.key"
}

resource "local_file" "service_account_crt" {
  content  = "${tls_private_key.service_account.public_key_pem}"
  filename = "./generated/tls/service-account.pub"
}
