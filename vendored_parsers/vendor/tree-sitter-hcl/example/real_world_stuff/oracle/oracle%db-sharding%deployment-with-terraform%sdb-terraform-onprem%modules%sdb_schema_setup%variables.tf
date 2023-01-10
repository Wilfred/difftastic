# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

locals {
 module_prefix = "setup_sdb_schema"

 system_sharding = "system"

 user_defined_sharding = "user"

 composite_sharding = "composite"

 not_supported_phantom = "SELECT 'sharding method you passed is not yet supported via terraform setup' FROM DUAL"

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

variable "sdb_deploy_deps_check" {
  description = "internal dependency check variable for sdb_deploy module"
}