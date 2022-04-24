/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {}

variable "db_subnet" {
	type="list"
}
variable "availability_domain" {
	type = "list"
}

# DBSystem specific 
#variable "db_cpucorecount" {}

variable "db_edition" {}

variable "db_admin_password" {}

variable "db_name" {}

variable "db_version" {}

variable "db_disk_redundancy" {
	description = "Database disk redundancy for Bare Metal DB System"
	default="NORMAL"
}

variable "db_hostname_prefix" {}
variable "db_instance_shape" {}

variable "db_ssh_public_key" {}

variable "db_ssh_private_key" {}

variable "db_count" {}

variable "db_nls_characterset" {
	default = "AL16UTF16"
}

variable "db_characterset" {
	default = "AL32UTF8"
}

variable "db_workload" {
	default = "OLTP"
}

variable "db_pdb_name" {
	default = "pdbName"
}

variable "db_size_in_gb" {
	default = "256"
}

variable "db_license_model" {
	default = "LICENSE_INCLUDED"
}

variable "db_node_count" {
	default = "1"
}
variable "init_dir_name" {}

variable "bastion_public_ip" {
  type = "string"
}

variable "bastion_ssh_private_key" {}
