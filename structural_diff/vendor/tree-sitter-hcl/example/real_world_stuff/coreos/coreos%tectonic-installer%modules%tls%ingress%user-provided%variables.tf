variable "ca_cert_pem_path" {
  type        = "string"
  description = "The path to the public CA certificate used to sign the ingress certificates below."
}

variable "cert_pem_path" {
  type        = "string"
  description = "The path to the signed public ingress certificate."
}

variable "key_pem_path" {
  type        = "string"
  description = "The path to the private ingress key."
}
