output "etcd_ca_crt_pem" {
  value = "${file(var.etcd_ca_crt_pem_path)}"
}

output "etcd_client_crt_pem" {
  value = "${file(var.etcd_client_crt_pem_path)}"
}

output "etcd_client_key_pem" {
  value = "${file(var.etcd_client_key_pem_path)}"
}

output "etcd_peer_crt_pem" {
  value = "${file(var.etcd_peer_crt_pem_path)}"
}

output "etcd_peer_key_pem" {
  value = "${file(var.etcd_peer_key_pem_path)}"
}

output "etcd_server_crt_pem" {
  value = "${file(var.etcd_server_crt_pem_path)}"
}

output "etcd_server_key_pem" {
  value = "${file(var.etcd_server_key_pem_path)}"
}

output "id" {
  value = "${sha1("
  ${join(" ",
    local_file.etcd_ca_crt.*.id,
    local_file.etcd_server_crt.*.id,
    local_file.etcd_server_key.*.id,
    local_file.etcd_client_crt.*.id,
    local_file.etcd_client_key.*.id,
    local_file.etcd_peer_crt.*.id,
    local_file.etcd_peer_key.*.id,
    )}
  ")}"
}
