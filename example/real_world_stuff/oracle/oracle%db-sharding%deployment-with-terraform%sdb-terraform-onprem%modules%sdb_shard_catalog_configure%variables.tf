# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

locals {
 module_prefix = "configure_shard_catalog_db"

 oradata = "${var.oracle_base}/oradata"

 total_shards = "${length(var.shards)} + ${length(var.standby_shards)}"

 gsmhome_postfix = "gsmhome_1"

 gsm_home_full_path = "${var.oracle_base}/product/${var.gsm_version}/${local.gsmhome_postfix}"
 
}

variable "gsm_version" {
  description = "Oracle GSM version"
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

variable "shard_catalogs" {
  description = "Map of user-friendly name of a shard catalog to the shard catalog config information"
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

variable "sdb_shard_catalog_create_deps_check" {
  description = "internal dependency check variable for sdb_shard_catalog_db_install module"
}

variable "shards" {
  description = "Map of user-friendly name of a shard to the shard config information"
  type = "map"
}

variable  "standby_shards" {
  description = "Map of user-friendly name of a standby shard to the standby shard config information"
  type = "map"
}

variable "gsmuser_pass" {
  description = "password of the gsm user"
}

variable "shard_catalog_standbys" {
  description = "Map of user-friendly name of a shard catalog standby to the shard catalog standby config information"
  type = "map"
}

variable "shard_directors" {
  description = "Map of nick name of a shard director to the shard director config information"
  type = "map"
}

variable "sys_pass" {
  description = "Password for SYS user"
}

