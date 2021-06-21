variable "base_address" {
  type = "string"
}

variable "ca_cert_pem" {
  type = "string"
}

variable "ca_key_pem" {
  type = "string"
}

variable "ca_key_alg" {
  type = "string"
}

variable "validity_period" {
  description = <<EOF
Validity period of the self-signed certificates (in hours).
Default is 3 years.
EOF

  type = "string"
}
