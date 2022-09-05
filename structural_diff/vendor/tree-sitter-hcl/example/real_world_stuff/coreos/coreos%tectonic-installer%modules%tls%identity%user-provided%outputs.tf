output "client_key_pem" {
  value = "${file(var.client_key_pem_path)}"
}

output "client_cert_pem" {
  value = "${file(var.client_cert_pem_path)}"
}

output "server_key_pem" {
  value = "${file(var.server_key_pem_path)}"
}

output "server_cert_pem" {
  value = "${file(var.server_cert_pem_path)}"
}
