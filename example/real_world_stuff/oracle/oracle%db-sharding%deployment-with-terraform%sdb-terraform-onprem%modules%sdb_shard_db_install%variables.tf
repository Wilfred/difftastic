# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

locals {
 module_prefix = "install_shard_db"

 db_install_folder_name = "db"

 db_major_version = "${element(split(".", var.db_version),0)}"

}

variable "ssh_private_key_path" {
  description = "path to ssh private key on the current machine"
  default = "~/.ssh/id_rsa"
}

variable "ssh_timeout" {
  description = "ssh timeout"
  default = "3m"
}

variable "os_user" {
  description = "os user name"
}

variable "sudo_pass" {
  description = "os user sudo password."
}

variable "oracle_base" {
  description =  "Oracle Base"
}

variable "db_version" {
  description = "Oracle database version"
}

variable "shards" {
  description = "Map of nick name of a shard to the host name or ip of the shard"
  type = "map"
}

variable "db_zip_location" {
    description = "The path of the db binary zip location"
}

variable "db_zip_name" {
    description = "The name of the db binary zip file (excluding zip extension)"
}

variable "db_home_path" { 
  description = "The location for oracle db home"
}

variable "unix_group_name" {
  description = "Unix group to be set for the inventory directory"
}

variable "ora_inventory_location" {
  description = "The full path to the ora inventory location"
}

variable "sys_pass" {
  description = "Password for SYS user"
}

variable "system_pass" {
  description = "Password for SYSTEM user"
}

variable  "standby_shards" {
  description = "Map of user-friendly name of a standby shard to the standby shard config information"
  type = "map"
}

variable "sdb_shard_director_install_deps_check" {
  description = "internal dependency check variable for sdb_shard_director_install module"
}

variable "setup_mode" {
  description = "represents the setup mode either new install mode or from existing dbs mode"
}