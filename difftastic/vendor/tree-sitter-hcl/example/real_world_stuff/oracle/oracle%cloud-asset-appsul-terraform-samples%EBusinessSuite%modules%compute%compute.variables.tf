/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {
  description = "Compartment name"
}
variable "compute_instance_count" {
  description = "Application instance count"
}
variable "compute_instance_shape" {
  description = "Application instance shape"
}
variable "compute_hostname_prefix" {
  description = "Application hostname prefix"
}
variable "compute_image" {
  description = "OS Image"
}
variable "compute_ssh_private_key" {
  description = "SSH private key"
}
variable "compute_ssh_public_key" {
  description = "SSH public key"
}
variable "compute_instance_listen_port" {
  description = "Application instance listen port"
}
variable "bastion_ssh_private_key" {
  description = "SSH key"
}
variable "compute_subnet" {
  description = "subnet"
  type        = "list"
}
variable "availability_domain" {
  description = "Availability Domainr"
  type        = "list"
}
variable "fault_domain" {
  description = "Fault Domainr"
  type        = "list"
}
variable "AD" {
  description = "Availability Domain number"
  type        = "list"
}
variable "bastion_public_ip" {
  description = "Public IP of bastion instance"
}
variable "fss_primary_mount_path" {
  description = "Mountpoint for primary application servers"
}
variable "fss_instance_prefix" {
  description = "FSS instance name prefix"
}
variable "fss_subnet" {
  description = "FSS subnet"
  type        = "list"
}
variable "fss_limit_size_in_gb" {}
variable "timeout" {
  description = "Timeout setting for resource creation "
  default     = "20m"
}
variable "compute_instance_user" {
  description = "Login user for compute instance"
}
variable "compute_boot_volume_size_in_gb" {
  description = "Boot volume size of compute instance"
}
variable "timezone" {
    description = "Set timezone for compute instance"
}
variable "bastion_user" {
  description = "Login user for bastion host"
}
