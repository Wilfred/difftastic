# BMCS
variable "availability_domain" {}

variable "compartment_ocid" {}
variable "display_name_prefix" {}
variable "hostname_label_prefix" {}

variable "flannel_network_cidr" {}
variable "flannel_backend" {}

variable "kubernetes_network_plugin" {}

variable "count" {
  default = "1"
}

variable "control_plane_subnet_access" {
  description = "Whether instances in the control plane are launched in a public or private subnets"
  default     = "public"
}

variable "network_cidrs" {
  type = "map"
}
variable "subnet_id" {}
variable "subnet_name" {}
variable "domain_name" {}
variable "shape" {}
variable "tenancy_ocid" {}

variable "label_prefix" {
  default = ""
}

# Instance
variable "ssh_public_key_openssh" {}

variable "docker_ver" {
  default = "17.06.2.ol"
}

variable "oracle_linux_image_name" {
  default = "Oracle-Linux-7.5-2018.10.16-0"
}

variable "etcd_ver" {
  default = "v3.2.2"
}

variable "flannel_ver" {
  default = "v0.9.1"
}

variable "ssh_private_key" {}

# Kubernetes
variable "k8s_ver" {
  default = "1.8.5"
}

variable "k8s_dashboard_ver" {
  default = "1.6.3"
}

variable "k8s_dns_ver" {
  default = "1.14.2"
}

variable "api_server_count" {}

variable "root_ca_pem" {}
variable "root_ca_key" {}
variable "api_server_private_key_pem" {}
variable "api_server_cert_pem" {}
variable "k8s_apiserver_token_admin" {}

# etcd
variable "etcd_discovery_url" {}
variable "etcd_endpoints" {}

variable "master_docker_max_log_size" {
  description = "Maximum size of the k8s master docker container json logs"
  default = "50m"
}
variable "master_docker_max_log_files" {
  description = "Maximum number of k8s master docker container json logs to rotate"
  default = "5"
}

variable "cloud_controller_version" {}
variable "cloud_controller_secret" {}

variable "flexvolume_driver_version" {}
variable "flexvolume_driver_secret" {}

variable "volume_provisioner_version" {}
variable "volume_provisioner_secret" {}

variable "assign_private_ip" {
  description = "Assign a static private ip based on CIDR block for that AD"
  default = false
}
