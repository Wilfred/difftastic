# Kubernete's Service Account (resources/generated/tls/{service-account.key,service-account.pub})
resource "tls_private_key" "service_account" {
  algorithm = "RSA"
  rsa_bits  = "2048"
}

resource "local_file" "service_account_key" {
  content  = "${tls_private_key.service_account.private_key_pem}"
  filename = "./generated/tls/service-account.key"
}

data "ignition_file" "service_account_key" {
  filesystem = "root"
  path       = "/opt/tectonic/tls/service-account.key"
  mode       = "0644"

  content {
    content = "${tls_private_key.service_account.private_key_pem}"
  }
}

resource "local_file" "service_account_crt" {
  content  = "${tls_private_key.service_account.public_key_pem}"
  filename = "./generated/tls/service-account.pub"
}

data "ignition_file" "service_account_crt" {
  filesystem = "root"
  path       = "/opt/tectonic/tls/service-account.pub"
  mode       = "0644"

  content {
    content = "${tls_private_key.service_account.public_key_pem}"
  }
}
