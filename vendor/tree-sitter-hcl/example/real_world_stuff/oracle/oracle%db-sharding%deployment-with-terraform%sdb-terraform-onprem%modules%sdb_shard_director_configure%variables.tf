# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

locals {
 module_prefix = "configure_shard_director"
 gsmhome_postfix = "gsmhome_1"

 gsm_home_full_path = "${var.oracle_base}/product/${var.gsm_version}/${local.gsmhome_postfix}"

 shard_catalog_host = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "host")}"

 shard_catalog_port = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "port")}"

 shard_catalog_sid = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "sid")}"

 shard_catalog_chunks = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "chunks")}"

 shard_catalog_sdb_name = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "sdb_name")}"

 shard_catalog_regions = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "regions")}"

 shard_catalog_sharding_method = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "sharding_method")}"
 
 shard_catalog_replication_protection_mode = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "replication_protection_mode")}"

 shard_catalog_scheduler_agent_port = "${lookup(var.shard_catalogs[element(keys(var.shard_catalogs), 0)], "scheduler_agent_port", "8080")}"

 gdsctl_create_shardcatalog_from_scratch_mode = "gdsctl create shardcatalog -database ${local.shard_catalog_host}:${local.shard_catalog_port}:${local.shard_catalog_sid} -sharding ${local.shard_catalog_sharding_method} -chunks ${local.shard_catalog_chunks} -user ${var.sdb_admin_username}/${var.sdb_admin_pass} -sdb ${local.shard_catalog_sdb_name} -protectmode ${local.shard_catalog_replication_protection_mode} -region ${local.shard_catalog_regions} -agent_port ${local.shard_catalog_scheduler_agent_port} -agent_password ${var.scheduler_agent_pass}"

 gdsctl_create_shardcatalog_from_existing_databases_mode = "gdsctl create shardcatalog -database ${local.shard_catalog_host}:${local.shard_catalog_port}:${local.shard_catalog_sid} -sharding ${local.shard_catalog_sharding_method} -chunks ${local.shard_catalog_chunks} -user ${var.sdb_admin_username}/${var.sdb_admin_pass} -sdb ${local.shard_catalog_sdb_name} -protectmode ${local.shard_catalog_replication_protection_mode} -region ${local.shard_catalog_regions}"

 gdsctl_add_osuser_credential = "gdsctl add credential -credential oracle_cred -osaccount ${var.os_user} -ospassword ${var.sudo_pass}"

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

variable "sys_pass" {
  description = "sys user password."
}

variable "shard_directors" {
  description = "Map of nick name of a shard director to the shard director config information"
  type = "map"
}

variable "oracle_base" {
  description =  "Oracle Base"
}

variable "gsm_version" {
  description = "Oracle GSM version"
}

variable "sdb_shard_catalog_configure_deps_check" {
  description = "internal dependency check variable for sdb_shard_catalog_configure module"
}

variable "sdb_admin_username" {
  description = "username of the sharded database administrator"
}

variable "sdb_admin_pass" {
  description = "password of the sharded database administrator"
}

variable "gsmcatuser_pass" {
  description = "GSM catalog user password"
}

variable "shard_catalogs" {
  description = "Map of user-friendly name of a shard catalog to the shard catalog config information"
  type = "map"
}

variable "setup_mode" {
  description = "represents the setup mode either new install mode or from existing dbs mode"
}

variable "sudo_pass" {
  description = "os user sudo password."
}

variable "scheduler_agent_pass" {
  description = "scheduler agent password"
}