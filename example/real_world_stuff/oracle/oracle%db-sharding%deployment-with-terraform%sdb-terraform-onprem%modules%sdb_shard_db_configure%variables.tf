# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

locals {
 module_prefix = "configure_shard_db"

 oradata = "${var.oracle_base}/oradata"

 shard_catalog_host = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "host")}"

 scheduler_agent_port = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "scheduler_agent_port", "8080")}"
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

variable "db_home_path" { 
  description = "The location for oracle db home"
}

variable "shards" {
  description = "Map of nick name of a shard to the host name or ip of the shard"
  type = "map"
}

variable "sdb_shard_director_configure_deps_check" {
  description = "internal dependency check variable for sdb_shard_director_configure module"
}

variable "gsmuser_pass" {
  description = "password of the gsm user"
}

variable "sys_pass" {
  description = "Password for SYS user"
}

variable  "standby_shards" {
  description = "Map of user-friendly name of a standby shard to the standby shard config information"
  type = "map"
}

variable "setup_mode" {
  description = "represents the setup mode either new install mode or from existing dbs mode"
}

variable "scheduler_agent_pass" {
  description = "scheduler agent password"
}

variable "shard_catalogs" {
  description = "Map of user-friendly name of a shard catalog to the shard catalog config information"
  type = "map"
}
