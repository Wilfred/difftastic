/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {
    description = "Compartment name"
}
variable "availability_domain" {
    description = "Availability domain"
    type        = "list"
}
variable "AD" {
    description = "Availability domain"
    type= "list"
}
variable "db_subnet" {
	description = "Subnet for Bastion host"
    type        = "list"
}
# Database System variables
variable "db_edition" {
	description = "Database Edition"
}
variable "db_version" {
	description = "Database version"
}
variable "db_admin_password" {
	description = "Database admin password"
}
variable "db_name" {
	description = "Database Name"
}
variable "db_disk_redundancy" {
	description = "Database disk redundancy for Bare Metal DB System"
	default="NORMAL"
}
variable "db_hostname_prefix" {
	description = "Database hostname prefix"
}
variable "db_instance_shape" {
	description = "Database system shape"

}
variable "db_ssh_public_key" {
	description = "Database public ssh key"
}

variable "db_characterset" {
	description = "Database characterset"
}
variable "db_nls_characterset" {
	description = "Database National characterset"
}
variable "db_workload" {
	description = "Database Workload"
	default = "OLTP"
}
variable "db_pdb_name" {
}
variable "db_size_in_gb" {
	description = "Database size in gb"
}

variable "db_license_model" {
	description = "Database License Model"
}
variable "db_node_count" {
	description = "Database Node count"
}