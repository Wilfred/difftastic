resource "local_file" "etcd_ca_crt" {
  content  = "${file(var.etcd_ca_crt_pem_path)}"
  filename = "./generated/tls/etcd-client-ca.crt"
}

resource "local_file" "etcd_client_crt" {
  content  = "${file(var.etcd_client_crt_pem_path)}"
  filename = "./generated/tls/etcd-client.crt"
}

resource "local_file" "etcd_client_key" {
  content  = "${file(var.etcd_client_key_pem_path)}"
  filename = "./generated/tls/etcd-client.key"
}

resource "local_file" "etcd_server_crt" {
  content  = "${file(var.etcd_server_crt_pem_path)}"
  filename = "./generated/tls/etcd/server.crt"
}

resource "local_file" "etcd_server_key" {
  content  = "${file(var.etcd_server_key_pem_path)}"
  filename = "./generated/tls/etcd/server.key"
}

resource "local_file" "etcd_peer_crt" {
  content  = "${file(var.etcd_peer_crt_pem_path)}"
  filename = "./generated/tls/etcd/peer.crt"
}

resource "local_file" "etcd_peer_key" {
  content  = "${file(var.etcd_peer_key_pem_path)}"
  filename = "./generated/tls/etcd/peer.key"
}
