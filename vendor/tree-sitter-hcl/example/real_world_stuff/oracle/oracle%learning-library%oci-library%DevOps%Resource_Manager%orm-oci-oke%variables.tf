// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.

variable "tenancy_ocid" {
   description = "INSERT YOUR TENANCY OCID HERE"
 }

variable "compartment_ocid"  {
   description = "INSERT YOUR COMPARTMENT OCID HERE"

}

variable "region" {
  default = "us-ashburn-1"
}

variable "cluster_name" {
  default = "tfTestCluster"
}


variable "vcn_cidr" {
  type        = "string"
  description = "cidr block of VCN"
  default     = "10.0.0.0/16"
}

variable "cluster_options_add_ons_is_kubernetes_dashboard_enabled" {
  default = true
}

variable "cluster_options_add_ons_is_tiller_enabled" {
  default = true
}

variable "cluster_options_kubernetes_network_config_pods_cidr" {
  description = "This is the CIDR range used for IP addresses by your pods. A /16 CIDR is generally sufficient. This CIDR should not overlap with any subnet range in the VCN (it can also be outside the VCN CIDR range)."
  default     = "10.244.0.0/16"
}

variable "cluster_options_kubernetes_network_config_services_cidr" {
  description = "This is the CIDR range used by exposed Kubernetes services (ClusterIPs). This CIDR should not overlap with the VCN CIDR range."
  default = "10.96.0.0/16"
}

variable "node_pool_initial_node_labels_key" {
  default = "key"
}

variable "node_pool_initial_node_labels_value" {
  default = "value"
}

variable "node_pool_name" {
  default = "tfPool"
}

variable "node_pool_node_image_name" {
  default = "Oracle-Linux-7.6"
}

variable "node_pool_node_shape" {
  default = "VM.Standard2.1"
}

variable "number_of_nodes" {
  description = "Number of Worker Nodes in the Node pool"
  default = 1
}

variable "node_pool_ssh_public_key" {
  description = "INSERT YOUR SSH PUBLIC KEY USED TO SSH INTO WORKER NODES"
}

variable "lb_cidr" {
  type        = "string"
  description = "cidr block of lb"
  default     = "10.0.20.0/24"
}

variable "nodepools_cidr" {
  type        = "string"
  description = "cidr block of nodepools"
  default     = "10.0.10.0/24"
}


variable "worker_mode" {
  description = "whether to provision public or private workers"
  default     = "private"
}

variable "vcn_dns_label" {
  type    = "string"
  default = "oke"
}


variable "cluster_kube_config_expiration" {
  default = 2592000
}

variable "cluster_kube_config_token_version" {
  default = "2.0.0"
}
