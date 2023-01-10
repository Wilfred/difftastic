/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "tenancy_ocid" {}

variable "region" {}

variable "compartment_ocid" {}

variable "AD" {
  type = "list"
}

variable "user_ocid" {}

variable "fingerprint" {}

variable "private_key_path" {}

variable "ssh_public_key" {}

variable "ssh_private_key" {}

variable "bastion_ssh_private_key" {}

variable "InstanceOS" {
  description = "Operating system for compute instances"
  default     = "Oracle Linux"
}

variable "linux_os_version" {
  description = "Operating system version for all compute instances except NAT"
  default     = "7.5"
}



variable "WinInstanceOS" {
  description = "Operating system for compute instances"
  default     = "Windows"
}

variable "WinInstanceOSVersion" {
  description = "Operating system version for all compute instances except NAT"
  default     = "Server 2016 Standard"
}

# JDE DBS Specfic
variable "db_count" {}

#variable "db_cpucorecount" {}

variable "db_edition" {}

variable "db_instance_shape" {}

variable "db_node_count" {}

variable "db_size_in_gb" {
  default = "256"
}

variable "db_license_model" {}

variable "db_admin_password" {}

variable "db_name" {}

variable "db_characterset" {}

variable "db_nls_characterset" {}

variable "db_workload" {
  default = "OLTP"
}

variable "db_version" {}

variable "db_pdb_name" {}

#variable "db_disk_redundancy" {}

#JDE LBaaS Specific
variable "logic_load_balancer_count" {
  default = "2"
}

variable "batch_load_balancer_count" {
  default = "2"
}

variable "load_balancer_name" {
  default = "jdelb"
}

variable "load_balancer_shape" {
  default = "100Mbps"
}

variable "load_balancer_listen_port" {
  type = "list"
  default= ["6017", "6018", "6019", "6020", "6021", "6022"]
}

variable "app_instance_listen_port" {
  type = "list"
  default= ["6017", "6018", "6019", "6020", "6021", "6022"]
}

variable "lbaas_listen_port_standalone_html"{
  default = "9001"
}

variable "lbaas_listen_port_html"{
  default = "9002"
}

variable "lbaas_listen_port_ais"{
  default = "9003"
}

variable "listen_port_range_standalone_html"{
  type = "list"
  default = ["8001", "8004"]
}

variable "listen_port_range_html"{
  type = "list"
  default = ["8005", "8088"]
}

variable "listen_port_range_ais"{
  type = "list"
  default = ["8010", "8014"]
}

variable "load_balancer_certificate_name" {}

variable "load_balancer_ca_certificate" {}

variable "load_balancer_certificate_passphrase" {}

variable "load_balancer_certificate_private_key" {}

variable "load_balancer_certificate_public_certificate" {}


variable "env_prefix" {
  default = "myenv"
}

variable "unix_mount_directory" {
  default = "//u01"
}

variable "logic_instance_count" {}

variable "logic_instance_shape" {}

variable "batch_instance_count" {}

variable "batch_instance_shape" {}

variable "wls_instance_count" {}

variable "wls_instance_shape" {}

variable "sm_instance_shape" {}

variable "sm_instance_count" {}

variable "dep_instance_shape" {}

variable "dep_instance_count" {}

variable "psntsubid" {
  type= "list"
}
variable "midsubid" {
  type= "list"
}

variable "adminsubid" {
  type= "list"
}

variable "dbsubid" {
  type= "list"
}

variable "lbsubid" {
  type= "list"
}

variable "bastion_public_ip" {}

variable "wls_bv_size" {}

variable "logic_bv_size" {}

variable "batch_bv_size" {}

variable "sm_bv_size" {}

#DNS specific variables
variable "dns_server_zone_name" {}

variable "load_balancer_logic_alias_name" {}

variable "load_balancer_batch_alias_name" {}

variable "load_balancer_web_alias_name" {}
