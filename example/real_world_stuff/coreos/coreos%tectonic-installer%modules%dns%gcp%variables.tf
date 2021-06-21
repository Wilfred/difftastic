variable "cluster_name" {
  description = "The name of the cluster"
  type        = "string"
}

variable "etcd_dns_enabled" {
  description = "The name of the cluster"
  type        = "string"
}

variable "tls_enabled" {
  description = "The name of the cluster"
  type        = "string"
}

variable "etcd_instance_count" {
  description = "The number of etcd nods"
  type        = "string"
}

variable "managed_zone_name" {
  description = "The name of the managed zone"
  type        = "string"
}

variable "etcd_ip_addresses" {
  description = "The list of etcd nodes addresses"
  type        = "list"
}

variable "base_domain" {
  description = "The base domain used in records"
  type        = "string"
}

variable "external_endpoints" {
  type = "list"
}

variable "tectonic_masters_ip" {
  description = "The master load balancer ip"
  type        = "string"
}

variable "tectonic_ingress_ip" {
  description = "The ingress load balancer ip"
  type        = "string"
}
