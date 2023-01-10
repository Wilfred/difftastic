# valid for 1000 days
variable "validity_period_hours" {
  default = 24000
}

variable "ca_cert" {
  description = "CA certificate in PEM format(generated if left blank)"
  default     = ""
}

variable "ca_key" {
  description = "CA private key in PEM format (generated if left blank)"
  default     = ""
}

variable "api_server_private_key" {
  description = "API Server private key in PEM format (generated if left blank)"
  default     = ""
}

variable "api_server_cert" {
  description = "API Server cert in PEM format (generated if left blank)"
  default     = ""
}

variable "api_server_admin_token" {
  description = "admin user's bearer token for API server (generated if left blank)"
  type        = "string"
  default     = ""
}

variable "common_name" {
  default = "kube-ca"
}

variable "k8s-serviceip" {
  default = "10.21.0.1"
}

variable "master_lb_public_ip" {}

variable "ssh_private_key" {
  description = "SSH private key for instances (generated if left blank)"
  default     = ""
}

variable "ssh_public_key_openssh" {
  description = "SSH public key in OpenSSH authorized_keys format for instances (generated if left blank)"
  default     = ""
}
