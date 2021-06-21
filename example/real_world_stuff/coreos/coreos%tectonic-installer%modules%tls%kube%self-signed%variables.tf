variable "ca_cert_pem" {
  description = "PEM-encoded CA certificate (generated if blank)"
  type        = "string"
}

variable "ca_key_alg" {
  description = "Algorithm used to generate ca_key (required if ca_cert is specified)"
  type        = "string"
}

variable "ca_key_pem" {
  description = "PEM-encoded CA key (required if ca_cert is specified)"
  type        = "string"
}

variable "kube_apiserver_url" {
  type = "string"
}

variable "service_cidr" {
  type = "string"
}

variable "validity_period" {
  description = <<EOF
Validity period of the self-signed certificates (in hours).
Default is 3 years.
EOF

  type = "string"
}
