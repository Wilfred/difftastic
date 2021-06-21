variable "container_images" {
  description = "Container images to use"
  type        = "map"
}

variable "image_re" {
  description = <<EOF
(internal) Regular expression used to extract repo and tag components from image strings
EOF

  type = "string"
}

variable "kubelet_debug_config" {
  type        = "string"
  default     = ""
  description = "internal debug flags for the kubelet (used in CI only)"
}

variable "kube_dns_service_ip" {
  type        = "string"
  description = "Service IP used to reach kube-dns"
}

variable "kubelet_node_label" {
  type        = "string"
  description = "Label that Kubelet will apply on the node"
}

variable "kubelet_node_taints" {
  type        = "string"
  description = "(optional) Taints that Kubelet will apply on the node"
  default     = ""
}

variable "cloud_provider" {
  type        = "string"
  description = "(optional) The cloud provider to be used for the kubelet."
  default     = ""
}

variable "cloud_provider_config" {
  type        = "string"
  description = "(optional) The cloud provider config to be used for the kubelet."
  default     = ""
}

variable "torcx_store_url" {
  type        = "string"
  description = "(optional) URL template for torcx store. Leave empty to use the default CoreOS endpoint."
  default     = ""
}

variable "etcd_count" {
  type    = "string"
  default = 0
}

variable "metadata_provider" {
  type    = "string"
  default = ""
}

variable "root_ca_cert_pem" {
  type        = "string"
  description = "The public root CA certificate in PEM format."
}

variable "ingress_ca_cert_pem" {
  type        = "string"
  description = "The ingress kube CA certificate in PEM format."
}

variable "etcd_ca_cert_pem" {
  type        = "string"
  description = "The etcd kube CA certificate in PEM format."
}

variable "tnc_cert_pem" {
  type        = "string"
  description = "The TNC certificate in PEM format."
}

variable "tnc_key_pem" {
  type        = "string"
  description = "The TNC key in PEM format."
}
