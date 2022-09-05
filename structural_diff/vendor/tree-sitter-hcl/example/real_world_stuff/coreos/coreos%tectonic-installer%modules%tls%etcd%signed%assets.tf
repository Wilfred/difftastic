# etcd assets
data "template_file" "etcd_ca_cert_pem" {
  template = "${var.self_signed == "true"
    ? join("", tls_self_signed_cert.etcd_ca.*.cert_pem)
    : file(var.etcd_ca_cert_path)
  }"
}

data "template_file" "etcd_client_crt" {
  template = "${var.self_signed == "true"
    ? join("", tls_locally_signed_cert.etcd_client.*.cert_pem)
    : file(var.etcd_client_cert_path)
  }"
}

data "template_file" "etcd_client_key" {
  template = "${var.self_signed == "true"
    ? join("", tls_private_key.etcd_client.*.private_key_pem)
    : file(var.etcd_client_key_path)
  }"
}

resource "local_file" "etcd_ca_crt" {
  count    = "${var.self_signed == "true" || var.etcd_ca_cert_path != "/dev/null" ? 1 : 0}"
  content  = "${data.template_file.etcd_ca_cert_pem.rendered}"
  filename = "./generated/tls/etcd-client-ca.crt"
}

resource "local_file" "etcd_client_crt" {
  count    = "${var.self_signed == "true" || var.etcd_client_cert_path != "/dev/null" ? 1 : 0}"
  content  = "${data.template_file.etcd_client_crt.rendered}"
  filename = "./generated/tls/etcd-client.crt"
}

resource "local_file" "etcd_client_key" {
  count    = "${var.self_signed == "true" || var.etcd_client_key_path != "/dev/null" ? 1 : 0}"
  content  = "${data.template_file.etcd_client_key.rendered}"
  filename = "./generated/tls/etcd-client.key"
}

resource "local_file" "etcd_server_crt" {
  count    = "${var.self_signed == "true" ? 1 : 0}"
  content  = "${join("", tls_locally_signed_cert.etcd_server.*.cert_pem)}"
  filename = "./generated/tls/etcd/server.crt"
}

resource "local_file" "etcd_server_key" {
  count    = "${var.self_signed == "true" ? 1 : 0}"
  content  = "${join("", tls_private_key.etcd_server.*.private_key_pem)}"
  filename = "./generated/tls/etcd/server.key"
}

resource "local_file" "etcd_peer_crt" {
  count    = "${var.self_signed == "true" ? 1 : 0}"
  content  = "${join("", tls_locally_signed_cert.etcd_peer.*.cert_pem)}"
  filename = "./generated/tls/etcd/peer.crt"
}

resource "local_file" "etcd_peer_key" {
  count    = "${var.self_signed == "true" ? 1 : 0}"
  content  = "${join("", tls_private_key.etcd_peer.*.private_key_pem)}"
  filename = "./generated/tls/etcd/peer.key"
}
