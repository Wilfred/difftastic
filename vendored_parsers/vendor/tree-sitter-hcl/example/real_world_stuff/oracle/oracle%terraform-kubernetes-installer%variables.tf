# OCI Service
variable "tenancy_ocid" {}

variable "compartment_ocid" {}

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


variable "domain_name" {
  default = "kubernetes.oraclevcn.com"
}

variable "user_ocid" {}
variable "fingerprint" {}
variable "private_key_path" {}

variable "region" {
  default = "us-phoenix-1"
}

variable "vcn_dns_name" {
  default = "kubernetes"
}

variable "disable_auto_retries" {
  default = "false"
}

variable "private_key_password" {
  default = ""
}

variable "label_prefix" {
  description = "To create unique identifier for multiple clusters in a compartment."
  type        = "string"
  default     = ""
}

variable "additional_etcd_security_lists_ids" {
  type    = "list"
  default = []
}

variable "additional_k8s_master_security_lists_ids" {
  type    = "list"
  default = []
}

variable "additional_k8s_worker_security_lists_ids" {
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

# Instance shape, e.g. VM.Standard1.1, VM.Standard1.2, VM.Standard1.4, ..., BM.Standard1.36, ...

variable "etcdShape" {
  default = "VM.Standard1.1"
}

variable "k8sMasterShape" {
  default = "VM.Standard1.1"
}

variable "k8sWorkerShape" {
  default = "VM.Standard1.2"
}

variable "k8sWorkerAd1Count" {
  default = 1
}

variable "k8sWorkerAd2Count" {
  default = 0
}

variable "k8sWorkerAd3Count" {
  default = 0
}

variable "k8sMasterAd1Count" {
  default = 1
}

variable "k8sMasterAd2Count" {
  default = 0
}

variable "k8sMasterAd3Count" {
  default = 0
}

variable "etcdAd1Count" {
  default = 1
}

variable "etcdAd2Count" {
  default = 0
}

variable "etcdAd3Count" {
  default = 0
}

variable "etcd_endpoints" {
  type    = "string"
  default = " "
}

variable "ssh_public_key_openssh" {
  description = "SSH public key in OpenSSH authorized_keys format for instances (generated if left blank)"
  type        = "string"
  default     = ""
}

variable "kubernetes_network_plugin" {
  description = "The Kubernetes network plugin to use: flannel | canal"
  type        = "string"
  default     = "flannel"
}

variable "flannel_network_cidr" {
  description = "A CIDR notation IP range to use for the entire flannel network"
  type        = "string"
  default     = "10.99.0.0/16"
}

variable "etcd_cluster_ingress" {
  description = "A CIDR notation IP range that is allowed cluster access to the instances on the etcd subnet"
  default     = "10.0.0.0/16"
}

variable "etcd_ssh_ingress" {
  description = "A CIDR notation IP range that is allowed SSH access to the instances on the etcd subnet"
  default     = "10.0.0.0/16"
}

variable "master_ssh_ingress" {
  description = "A CIDR notation IP range that is allowed SSH access to the instances on the master subnet"
  default     = "10.0.0.0/16"
}

variable "master_https_ingress" {
  description = "A CIDR notation IP range that is allowed HTTPs access to the instances on the master subnet"
  default     = "10.0.0.0/16"
}

variable "worker_ssh_ingress" {
  description = "A CIDR notation IP range that is allowed SSH access to the instances on the worker subnet"
  default     = "10.0.0.0/16"
}

variable "worker_nodeport_ingress" {
  description = "A CIDR notation IP range that is allowed to access service ports to the instances on the worker subnet"
  default     = "10.0.0.0/16"
}

variable "master_nodeport_ingress" {
  description = "A CIDR notation IP range that is allowed to access service ports to the instances on the master subnet"
  default     = "10.0.0.0/16"
}

variable "public_subnet_ssh_ingress" {
  description = "A CIDR notation IP range that is allowed to SSH to instances on the public subnet"
  default     = "0.0.0.0/0"
}

variable "public_subnet_http_ingress" {
  description = "A CIDR notation IP range that is allowed to HTTP to instances on the public subnet"
  default     = "0.0.0.0/0"
}

variable "public_subnet_https_ingress" {
  description = "A CIDR notation IP range that is allowed to HTTPs to instances on the public subnet"
  default     = "0.0.0.0/0"
}

variable "external_icmp_ingress" {
  description = "A CIDR notation IP range that is allowed to ICMP to instances on all the subnets"
  default     = "0.0.0.0/0"
}

variable "internal_icmp_ingress" {
  description = "A CIDR notation IP range that is allowed to ICMP to instances on all the subnets"
  default     = "10.0.0.0/16"
}

variable "ssh_private_key" {
  description = "SSH private key used for instances (generated if left blank)"
  type        = "string"
  default     = ""
}

# Load Balancers
variable "etcd_lb_enabled" {
  description = "enable/disable the etcd load balancer. true: use the etcd load balancer ip. false:use a list of etcd instance ips."
  default = "true"
}

variable "etcdLBShape" {
  default = "100Mbps"
}

variable "master_oci_lb_enabled" {
  description = "enable/disable the k8s master load balancer. true: use the k8s master load balancer ip. false: use a reverse proxy for k8s masters."
  default = "true"
}

variable "k8sMasterLBShape" {
  default = "100Mbps"
}

# Docker log file config
variable "etcd_docker_max_log_size" {
  description = "Maximum size of the etcd docker container logs"
  default     = "50m"
}

variable "etcd_docker_max_log_files" {
  description = "Maximum number of etcd docker container logs to rotate"
  default     = "5"
}

variable "master_docker_max_log_size" {
  description = "Maximum size of the etcd docker container logs"
  default     = "50m"
}

variable "master_docker_max_log_files" {
  description = "Maximum number of etcd docker container logs to rotate"
  default     = "5"
}

variable "worker_docker_max_log_size" {
  description = "Maximum size of the etcd docker container logs"
  default     = "50m"
}

variable "worker_docker_max_log_files" {
  description = "Maximum number of etcd docker json logs to rotate"
  default     = "5"
}

# Kubernetes
variable "ca_cert" {
  description = "CA certificate (generated if left blank)"
  type        = "string"
  default     = ""
}

variable "ca_key" {
  description = "CA private key (generated if left blank)"
  type        = "string"
  default     = ""
}

variable "api_server_private_key" {
  description = "API Server private key (generated if left blank)"
  type        = "string"
  default     = ""
}

variable "api_server_cert" {
  description = "API Server certificate (generated if left blank)"
  type        = "string"
  default     = ""
}

variable "api_server_admin_token" {
  description = "admin user's bearer token for API server (generated if left blank)"
  type        = "string"
  default     = ""
}

variable "docker_ver" {
  default = "17.06.2.ol"
}

variable "etcd_ver" {
  default = "v3.2.2"
}

variable "flannel_ver" {
  default = "v0.9.1"
}

variable "k8s_ver" {
  default = "1.9.6"
}

variable "k8s_dashboard_ver" {
  default = "1.6.3"
}

variable "k8s_dns_ver" {
  default = "1.14.2"
}

variable "master_ol_image_name" {
  default = "Oracle-Linux-7.5-2018.10.16-0"
}

variable "worker_ol_image_name" {
  default = "Oracle-Linux-7.5-2018.10.16-0"
}

variable "etcd_ol_image_name" {
  default = "Oracle-Linux-7.5-2018.10.16-0"
}

variable "nat_ol_image_name" {
  default = "Oracle-Linux-7.5-2018.10.16-0"
}

variable "control_plane_subnet_access" {
  description = "Whether instances in the control plane are launched in a public or private subnets"
  default     = "public"
}

variable "k8s_master_lb_access" {
  description = "Whether k8s master load balancer is launched in a public or private subnet"
  default     = "public"
}

variable "master_maintain_private_ip" {
  default = "false"
}

variable "etcd_lb_access" {
  description = "Whether etcd load balancer is launched in a public or private subnet"
  default     = "private"
}

variable "etcd_maintain_private_ip" {
  description = "Assign an etcd instance a private ip based on the CIDR for that AD"
  default     = "false"
}

variable "natInstanceShape" {
  description = "Make sure to size this instance according to the amount of expected outbound traffic"
  default     = "VM.Standard1.1"
}

variable nat_instance_ad1_enabled {
  description = "Whether to provision a NAT instance in AD 1 (only applicable when control_plane_subnet_access=private)"
  default     = "true"
}

variable nat_instance_ad2_enabled {
  description = "Whether to provision a NAT instance in AD 2 (only applicable when control_plane_subnet_access=private)"
  default     = "false"
}

variable nat_instance_ad3_enabled {
  description = "Whether to provision a NAT instance in AD 3 (only applicable when control_plane_subnet_access=private)"
  default     = "false"
}

variable dedicated_nat_subnets {
  description = "Whether to provision dedicated subnets in each AD that are only used by NAT instance(s) (only applicable when control_plane_subnet_access=private)"
  default     = "true"
}

# iSCSI
variable "worker_iscsi_volume_create" {
  description = "Bool if an iscsi volume should be attached and mounted at /var/lib/docker"
  default     = false
}

variable "worker_iscsi_volume_size" {
  description = "Size of iscsi volume to be created"
  default     = 50
}

variable "worker_iscsi_volume_mount" {
  description = "Mount point of iscsi volume"
  default     = "/var/lib/docker"
}

variable "etcd_iscsi_volume_create" {
  description = "Bool if an iscsi volume should be attached and mounted at the etcd volume mount point /etcd"
  default     = false
}

variable "etcd_iscsi_volume_size" {
  description = "Size of iscsi volume to be created"
  default     = 50
}

variable "flannel_backend" {
  description = "Flannel backend - possible choices are vxlan, udp, and host-gw"
  default     = "VXLAN"
}

# Cloud controller
variable "cloud_controller_version" {
  default = "0.5.0"
}

variable "cloud_controller_user_ocid" {
  default = ""
}

variable "cloud_controller_user_fingerprint" {
  default = ""
}

variable "cloud_controller_user_private_key_path" {
  default = ""
}

variable "cloud_controller_user_private_key_password" {
  default = ""
}

# Flexvolume driver
variable "flexvolume_driver_version" {
  default = "0.7.1"
}

variable "flexvolume_driver_user_ocid" {
  default = ""
}

variable "flexvolume_driver_user_fingerprint" {
  default = ""
}

variable "flexvolume_driver_user_private_key_path" {
  default = ""
}

variable "flexvolume_driver_user_private_key_password" {
  default = ""
}

# Volume provisioner
variable "volume_provisioner_version" {
  default = "0.7.0"
}

variable "volume_provisioner_user_ocid" {
  default = ""
}

variable "volume_provisioner_user_fingerprint" {
  default = ""
}

variable "volume_provisioner_user_private_key_path" {
  default = ""
}

variable "volume_provisioner_user_private_key_password" {
  default = ""
}
