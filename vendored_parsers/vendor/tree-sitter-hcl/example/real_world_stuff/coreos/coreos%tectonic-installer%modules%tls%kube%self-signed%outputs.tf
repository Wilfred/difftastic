output "ca_cert_pem" {
  value = "${var.ca_cert_pem == "" ? element(concat(tls_self_signed_cert.kube_ca.*.cert_pem, list("")), 0) : var.ca_cert_pem}"
}

output "ca_key_alg" {
  value = "${var.ca_cert_pem == "" ? element(concat(tls_self_signed_cert.kube_ca.*.key_algorithm, list("")), 0) : var.ca_key_alg}"
}

output "ca_key_pem" {
  value = "${var.ca_cert_pem == "" ? element(concat(tls_private_key.kube_ca.*.private_key_pem, list("")), 0) : var.ca_key_pem}"
}

output "kubelet_cert_pem" {
  value = "${tls_locally_signed_cert.kubelet.cert_pem}"
}

output "kubelet_key_pem" {
  value = "${tls_private_key.kubelet.private_key_pem}"
}

output "apiserver_cert_pem" {
  value = "${tls_locally_signed_cert.apiserver.cert_pem}"
}

output "apiserver_key_pem" {
  value = "${tls_private_key.apiserver.private_key_pem}"
}

output "id" {
  value = "${sha1("
  ${join(" ",
    list(local_file.apiserver_key.id,
    local_file.apiserver_crt.id,
    local_file.kube_ca_key.id,
    local_file.kube_ca_crt.id,
    local_file.kubelet_key.id,
    local_file.kubelet_crt.id,)
    )}
  ")}"
}
