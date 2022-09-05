#===============================================================
# Module Inputs
#===============================================================

variable "tenancy_ocid" {
  description = "The OCI tenancy id"
}

variable "compartment_ocid" {
  description = "The OCI compartment id"
}

variable "instance_os" {
  description = "The Name of the Operating System for all Monitors"
}

variable "instance_count" {
  description = "The Number of Monitors to create"
}

variable "availability_domain_index_list" { type = "list"
  description = "The availability domains where the Monitors will be created (as a list of indexes)" 
}

variable "hostname_prefix" {
  description = "The prefix to the name of the instances. The name will be appended by an hyphen, followed by an integer starting at 0"
}

variable "shape" {
  description = "The compute shape of the instances"
}

variable "subnet_id_list" { type = "list" 
  description = "The subnets where the instances will be created (as a list of indexes)" 
}

variable "ssh_public_key_file" {
  description = "The public key that will be installed on to the new instance(s) for ssh login"
}

variable "ssh_private_key_file" {
  description = "The private key that for ssh login to the new instance(s)"
}

variable "ssh_username" {
  description = "The username for ssh login to the instance(s)"
}

variable "ceph_deployer_ip" {
  description = "The IP of the Ceph deployer node"
}

variable "instance_create_timeout" {
  description = "The timeout value for instance creation"
}

variable "scripts_src_directory" {
  description = "Path to the directory where the scripts and config files are"
}

variable "scripts_dst_directory" {
  description = "Path to the directory where the scripts and config files will be copied to"
}

variable "deployer_deploy" {
  description = "A Synchronization primitive for letting TF know that the deployer has completed Ceph deploy"
}
