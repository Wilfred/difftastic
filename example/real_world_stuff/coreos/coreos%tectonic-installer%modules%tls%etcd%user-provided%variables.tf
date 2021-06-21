variable "etcd_ca_crt_pem_path" {
  type        = "string"
  description = "The path to the public CA certificate used to sign the etcd certificates below."
}

variable "etcd_server_crt_pem_path" {
  type        = "string"
  description = "The path to the public etcd server certificate."
}

variable "etcd_server_key_pem_path" {
  type        = "string"
  description = "The path to the private etcd server key."
}

variable "etcd_peer_crt_pem_path" {
  type        = "string"
  description = "The path to the public etcd peer certificate."
}

variable "etcd_peer_key_pem_path" {
  type        = "string"
  description = "The path to the private etcd peer key."
}

variable "etcd_client_crt_pem_path" {
  type        = "string"
  description = "The path to the public etcd client certificate."
}

variable "etcd_client_key_pem_path" {
  type        = "string"
  description = "The path to the private etcd client key."
}
