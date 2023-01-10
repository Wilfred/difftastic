output "root_ca_pem" {
  value = "${var.ca_cert == "" ? join(" ", tls_self_signed_cert.root-ca.*.cert_pem) : var.ca_cert}"
}

output "root_ca_key" {
  value = "${var.ca_key == "" ? join(" ", tls_private_key.root-ca.*.private_key_pem) : var.ca_key}"
}

output "api_server_private_key_pem" {
  value = "${var.api_server_private_key == "" ? join(" ", tls_private_key.api-server.*.private_key_pem) : var.api_server_private_key}"
}

output "api_server_cert_pem" {
  value = "${var.api_server_cert == "" ? join(" ", tls_locally_signed_cert.api-server.*.cert_pem) : var.api_server_cert}"
}

output "api_server_admin_token" {
  value = "${var.api_server_admin_token == "" ? join(" ", random_id.token-auth.*.hex) : var.api_server_admin_token}"
}

output "ssh_private_key" {
  value = "${var.ssh_private_key == "" ? join(" ", tls_private_key.ssh.*.private_key_pem) : var.ssh_private_key}"
}

output "ssh_public_key_openssh" {
  value = "${var.ssh_public_key_openssh == "" ? join(" ", tls_private_key.ssh.*.public_key_openssh) : var.ssh_public_key_openssh}"
}
