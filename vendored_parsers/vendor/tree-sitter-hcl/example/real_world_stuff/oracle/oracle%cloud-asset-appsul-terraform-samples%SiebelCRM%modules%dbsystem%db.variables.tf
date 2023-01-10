/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {}

variable "db_subnet" {
	type="list"
}
variable "availability_domain" {
	type = "list"
}

variable "AD" {
    type= "list"
}

# DBSystem specific 
variable "db_edition" {}

variable "db_admin_password" {}

variable "db_name" {}

variable "db_version" {}

variable "db_disk_redundancy" {
	default="NORMAL"
}

variable "db_hostname_prefix" {}
variable "db_instance_shape" {}

variable "db_ssh_public_key" {}

variable "db_nls_characterset" {
}
variable "db_characterset" {
}
variable "db_workload" {
	default = "OLTP"
}
variable "db_pdb_name" {
}
variable "db_size_in_gb" {
}

variable "db_license_model" {
}
variable "db_node_count" {
}