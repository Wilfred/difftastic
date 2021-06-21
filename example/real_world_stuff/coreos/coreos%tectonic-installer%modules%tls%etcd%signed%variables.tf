// usually the caller sets this to:
// var.tectonic_self_hosted_etcd != "" || var.tectonic_etcd_tls_enabled
variable "self_signed" {
  description = <<EOF
If set to true, self-signed certificates are generated.
If set to false, only the passed CA and client certs are being used.
EOF
}

variable "validity_period" {
  description = <<EOF
Validity period of the self-signed certificates (in hours).
Default is 3 years.
EOF

  type = "string"

  // Default is provided only in this case
  // bacause *some* of etcd internal certs are still self-generated and need
  // this variable set
  default = 26280
}

variable "etcd_ca_cert_path" {
  type        = "string"
  description = "external CA certificate"
}

variable "etcd_client_cert_path" {
  type = "string"
}

variable "etcd_client_key_path" {
  type = "string"
}

variable "service_cidr" {
  type = "string"
}

variable "etcd_cert_dns_names" {
  type = "list"
}
