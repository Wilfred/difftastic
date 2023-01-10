variable "namespace" {}
variable "subnet_range" {}
variable "reserve_subnet_range" {}
variable "firewall_ports" {}
variable "healthcheck_ips" {}
variable "service_account" {}
variable "ip_allow_list" {}
variable "ssh_source_ranges" {
  default     = ["35.235.240.0/20"]
  description = "The source IP address ranges from which SSH traffic will be permitted; these ranges must be expressed in CIDR format. The default value permits traffic from GCP's Identity-Aware Proxy."
  type        = list(string)
}
