# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl


variable "ssh_private_key_path" {
  description = "path to ssh private key on the current machine"
  default = "~/.ssh/id_rsa"
}

variable "ssh_public_key_path" {
  description = "path to ssh public key on the current machine"
  default = "~/.ssh/id_rsa.pub"
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

variable "shard_directors" {
  description = "Map of user-friendly name of a shard director to the shard director config information"
  type = "map"
}

variable "oracle_base" {
  description =  "Oracle Base"
}


variable "gsm_version" {
  description = "Oracle GSM version"
}

variable "db_version" {
  description = "Oracle database version"
}


variable "gsm_zip_location" {
    description = "The path of the gsm binary zip location"
}

variable "gsm_zip_name" {
    description = "The name of the gsm binary zip file (excluding zip extension)"
}

variable "ora_inventory_location" {
  description = "The full path to the ora inventory location"
}

variable "unix_group_name" {
  description = "Unix group to be set for the inventory directory" 
}

variable "shards" {
  description = "Map of user-friendly name of a shard to the shard config information"
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

variable "sys_pass" {
  description = "Password for SYS user"
}

variable "system_pass" {
  description = "Password for SYSTEM user"
}

variable "shard_catalogs" {
  description = "Map of user-friendly name of a shard catalog to the shard catalog config information"
  type = "map"
}

variable "shard_catalog_standbys" {
  description = "Map of user-friendly name of a shard catalog standby to the shard catalog standby config information"
  type = "map"
}


variable "gsmcatuser_pass" {
  description = "GSM catalog user password"
}

variable "sdb_admin_username" {
  description = "username of the sharded database administrator"
}

variable "sdb_admin_pass" {
  description = "password of the sharded database administrator"
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

variable  "global_services" {
  description = "Map of user-friendly name of a global service to the global service config information"
  type = "map"
}

variable  "standby_shards" {
  description = "Map of user-friendly name of a standby shard to the standby shard config information"
  type = "map"
}

variable "setup_mode" {
  description = "represents the setup mode either new install mode or existing dbs mode"
}

variable "scheduler_agent_pass" {
  description = "scheduler agent password"
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