variable "network_cidrs" {
  type = "map"
}
variable "availability_domain" {}
variable "compartment_ocid" {}
variable "display_name_prefix" {}
variable "hostname_label_prefix" {}

variable "shape" {
  default = "VM.Standard1.1"
}

variable "subnet_id" {}
variable "subnet_name" {}
variable "ssh_public_key_openssh" {}
variable "domain_name" {}

variable "label_prefix" {
  default = ""
}

variable "docker_ver" {
  default = "17.06.2.ol"
}

variable "oracle_linux_image_name" {
  default = "Oracle-Linux-7.5-2018.10.16-0"
}

variable "etcd_ver" {
  default = "v3.2.2"
}

variable "tenancy_ocid" {}
variable "etcd_discovery_url" {}

variable "count" {
  default = "1"
}

variable "control_plane_subnet_access" {
  description = "Whether instances in the control plane are launched in a public or private subnets"
  default     = "public"
}

variable "etcd_docker_max_log_size" {
  description = "Maximum size of the etcd docker container json logs"
  default = "50m"
}
variable "etcd_docker_max_log_files" {
  description = "Maximum number of etcd docker container json logs to rotate"
  default = "5"
}

# iSCSI
variable "etcd_iscsi_volume_create" {
  description = "Bool if an iscsi volume should be attached and mounted at the etcd volume mount point /etcd"
  default = false
}

variable "etcd_iscsi_volume_size" {
  description = "Size of iscsi volume to be created"
  default = 50
}

variable "assign_private_ip" {
  description = "Assign a static private ip based on CIDR block for that AD"
  default = false
}
