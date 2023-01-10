variable "network_cidrs" {
  type = "map"

  default = {
    VCN-CIDR          = "10.0.0.0/16"
    PublicSubnetAD1   = "10.0.10.0/24"
    PublicSubnetAD2   = "10.0.11.0/24"
    PublicSubnetAD3   = "10.0.12.0/24"
    natSubnetAD1      = "10.0.13.0/24"
    natSubnetAD2      = "10.0.14.0/24"
    natSubnetAD3      = "10.0.15.0/24"
    etcdSubnetAD1     = "10.0.20.0/24"
    etcdSubnetAD2     = "10.0.21.0/24"
    etcdSubnetAD3     = "10.0.22.0/24"
    masterSubnetAD1   = "10.0.30.0/24"
    masterSubnetAD2   = "10.0.31.0/24"
    masterSubnetAD3   = "10.0.32.0/24"
    workerSubnetAD1   = "10.0.40.0/24"
    workerSubnetAD2   = "10.0.41.0/24"
    workerSubnetAD3   = "10.0.42.0/24"
    k8sCCMLBSubnetAD1 = "10.0.50.0/24"
    k8sCCMLBSubnetAD2 = "10.0.51.0/24"
    k8sCCMLBSubnetAD3 = "10.0.52.0/24"
  }
}

variable "network_subnet_dns" {
  type = "map"

  default = {
    etcdSubnetAD1     = "etcdsubnet1"
    etcdSubnetAD2     = "etcdsubnet2"
    etcdSubnetAD3     = "etcdsubnet3"
    masterSubnetAD1   = "k8smasterad1"
    masterSubnetAD2   = "k8smasterad2"
    masterSubnetAD3   = "k8smasterad3"
    workerSubnetAD1   = "k8sworkerad1"
    workerSubnetAD2   = "k8sworkerad2"
    workerSubnetAD3   = "k8sworkerad3"
    k8sCCMLBSubnetAD1 = "k8sccmlbad1"
    k8sCCMLBSubnetAD2 = "k8sccmlbad2"
    k8sCCMLBSubnetAD3 = "k8sccmlbad3"
  }
}


variable "tenancy_ocid" {}

variable "control_plane_subnet_access" {
  default = "public"
}

variable "additional_etcd_security_lists_ids" {
  type    = "list"
  default = []
}

variable "additional_k8smaster_security_lists_ids" {
  type    = "list"
  default = []
}

variable "additional_k8sworker_security_lists_ids" {
  type    = "list"
  default = []
}

variable "additional_public_security_lists_ids" {
  type    = "list"
  default = []
}

variable "additional_nat_security_lists_ids" {
  type    = "list"
  default = []
}

# VCN

variable "label_prefix" {
  type    = "string"
  default = ""
}

variable "compartment_ocid" {}
variable "vcn_dns_name" {}

# Security lists

variable "bmc_ingress_cidrs" {
  type = "map"

  default = {
    LBAAS-PHOENIX-1-CIDR = "129.144.0.0/12"
    LBAAS-ASHBURN-1-CIDR = "129.213.0.0/16"
    VCN-CIDR             = "10.0.0.0/16"
  }
}

variable "etcd_ssh_ingress" {
  default = "10.0.0.0/16"
}

variable "etcd_cluster_ingress" {
  default = "10.0.0.0/16"
}

variable "master_ssh_ingress" {
  default = "10.0.0.0/16"
}

variable "master_https_ingress" {
  default = "10.0.0.0/16"
}

variable "worker_ssh_ingress" {
  default = "10.0.0.0/16"
}

variable "worker_nodeport_ingress" {
  default = "10.0.0.0/16"
}

variable "master_nodeport_ingress" {
  default = "10.0.0.0/16"
}

# For optional NAT instance (when control_plane_subnet_access = "private")

variable "public_subnet_ssh_ingress" {
  default = "0.0.0.0/0"
}

variable "public_subnet_http_ingress" {
  default = "0.0.0.0/0"
}

variable "public_subnet_https_ingress" {
  default = "0.0.0.0/0"
}

variable "external_icmp_ingress" {
  default = "0.0.0.0/0"
}

variable "internal_icmp_ingress" {
  default = "10.0.0.0/16"
}

variable "nat_instance_ssh_public_key_openssh" {}

variable "nat_instance_oracle_linux_image_name" {
  default = "Oracle-Linux-7.5-2018.10.16-0"
}

variable "nat_instance_shape" {
  default = "VM.Standard1.2"
}

variable nat_instance_ad1_enabled {
  default = "false"
}

variable nat_instance_ad2_enabled {
  default = "true"
}

variable nat_instance_ad3_enabled {
  default = "false"
}

variable dedicated_nat_subnets {
  default = "false"
}
