# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

locals {
  module_prefix = "sdb_deploy"

  gsmhome_postfix = "gsmhome_1"

  gsm_home_full_path = "${var.oracle_base}/product/${var.gsm_version}/${local.gsmhome_postfix}"
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

variable "oracle_base" {
  description =  "Oracle Base"
}

variable "shards" {
  description = "Map of nick name of a shard to the host name or ip of the shard"
  type = "map"
}

variable "sdb_shard_db_configure_deps_check" {
  description = "internal dependency check variable for sdb_shard_db_configure module"
}

variable "gsmuser_pass" {
  description = "password of the gsm user"
}

variable "primary_shard_groups" {
  description = "Map of user-friendly name of a primary_shard_group to the primary_shard_group config information"
  type = "map"
}

variable "standby_shard_groups" {
  description = "Map of user-friendly name of a standby_shard_group to the standby_shard_group config information"
  type = "map"
}

variable "shard_directors" {
  description = "Map of user-friendly name of a shard director to the shard director config information"
  type = "map"
}

variable "sdb_admin_username" {
  description = "username of the sharded database administrator"
}

variable "sdb_admin_pass" {
  description = "password of the sharded database administrator"
}

variable "gsm_version" {
  description = "Oracle GSM version"
}

variable  "global_services" {
  description = "Map of user-friendly name of a global service to the global service config information"
  type = "map"
}

variable  "standby_shards" {
  description = "Map of user-friendly name of a standby shard to the standby shard config information"
  type = "map"
}

variable "sys_pass" {
  description = "Password for SYS user"
}

variable "setup_mode" {
  description = "represents the setup mode either new install mode or from existing dbs mode"
}

variable "use_dbparamfile" {
  description = "Use True as the value to specify the path to the file name on the local machine running terraform, containing database Configuration Assistant (DBCA) parameters to use during database creation on the remote machine. Otherwise, to disable this option and use the defaults, please specify false as the value"
  default = "false"
}

variable "use_dbtemplatefile" {
  description = "Use True as the value to specify the path to the file name on the local machine running terraform, containing Database Configuration Assistant (DBCA) database template information to use during database creation on the remote machine. Otherwise, to disable this option and use the defaults, please specify false as the value"
  default = "false"
}

variable "use_netparamfile" {
  description = "Use True as the value to specify the path to the file name on the local machine running terraform, containing Net Configuration Assistant (NETCA) parameters to use during network listener setup on the remote machine. Otherwise, to disable this option and use the defaults, please specify false as the value"
  default = "false"
}

variable "db_home_path" { 
  description = "The location for oracle db home"
}
