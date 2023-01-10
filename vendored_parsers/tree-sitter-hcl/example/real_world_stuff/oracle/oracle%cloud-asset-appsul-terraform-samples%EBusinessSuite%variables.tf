/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "tenancy_ocid" {}
variable "region" {}

variable "compartment_ocid" {}

variable "AD" {
    description = "Availbility domain number"
    type        = "list"
}
variable "user_ocid" {}
variable "fingerprint" {}
variable "private_key_path" {}
variable "ssh_public_key" {
    description = "SSH public key for instances"
}
variable "ssh_private_key" {
    description = "SSH private key for instances"
}  

variable "bastion_ssh_public_key" {
    description = "SSH public key for bastion instance"
}
variable "bastion_ssh_private_key" {
    description = "SSH private key for bastion_instance"
}  
variable "InstanceOS" {
    description = "Operating system for compute instances"
    default = "Oracle Linux" 
}
variable "linux_os_version" {
    description = "Operating system version for compute instances except NAT"
    default = "7.5"
}

# VCN variables
variable "vcn_cidr" {
    description = "CIDR for Virtual Cloud Network (VCN)"
}
variable "vcn_dns_label" {
    description = "DNS label for Virtual Cloud Network (VCN)"
}

# Bastion host variables
variable "bastion_instance_shape" {
    description = "Instance shape of bastion host"
    default = "VM.Standard2.1"
}

# Application Server variables
variable "ebs_env_prefix" {
}

variable "ebs_app_instance_count" {
    description = "Application Server count"
}

variable "ebs_app_instance_shape" {
    description = "Application Instance shape"
}
variable "ebs_app_instance_listen_port" {
    description = "Application instance listen port"
}

variable "ebs_fss_primary_mount_path" {
    description = "Mountpoint for primary application servers"
}

variable "ebs_fss_limit_size_in_gb" {
    description = "Mountpoint for primary application servers"
}

variable "compute_boot_volume_size_in_gb" {
    description = "Boot volume size of application servers"
}

variable "timezone" {
    description = "Set timezone for servers"
}

# Database variables
variable "db_edition" {
    description = "DB Edition"
    default = "ENTERPRISE_EDITION_EXTREME_PERFORMANCE"
}

variable "db_instance_shape" {
    description = "DB Instance shape"
}

variable "db_node_count" {
    description = "Number of DB Nodes"
}
variable "db_size_in_gb" {
    description = "Size of database in GB"
}
variable "db_license_model" {
    description = "Database License model"
}

variable "db_admin_password" {
    description = "Database Admin password"
}
variable "db_name" {
    description = "Database Name"
}
variable "db_characterset" {
    description = "Database Characterset"
}
variable "db_nls_characterset" {
    description = "Database National Characterset"
}

variable "db_version" {
    description = "Database version"    
}
variable "db_pdb_name" {
    description = "Pluggable database Name"    
}

variable load_balancer_shape {
    description = "Load Balancer shape"
}
variable load_balancer_private {
    description = "Whether private Load balancer"
    default = true
}
variable load_balancer_hostname {
    description = "Load Balancer hostname"
}

variable load_balancer_listen_port {
    description = "Load balancer listen port"
}

variable "timeout" {
  description = "Timeout setting for resource creation"
  default     = "10m"
}

variable "compute_instance_user" {
  description = "Login user for application instance"
}

variable "bastion_user" {
  description = "Login user for bastion host"
}