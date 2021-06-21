output "ca_cert_pem" {
  value = "${file(var.ca_cert_pem_path)}"
}

output "cert_pem" {
  value = "${file(var.cert_pem_path)}"
}

output "key_pem" {
  value = "${file(var.key_pem_path)}"
}
