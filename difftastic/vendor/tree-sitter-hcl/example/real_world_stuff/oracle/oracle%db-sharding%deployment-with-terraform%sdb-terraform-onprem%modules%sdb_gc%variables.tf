# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

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

variable "shard_catalogs" {
  description = "Map of user-friendly name of a shard catalog to the shard catalog config information"
  type = "map"
}

variable "shards" {
  description = "Map of user-friendly name of a shard to the shard config information"
  type = "map"
}

variable  "standby_shards" {
  description = "Map of user-friendly name of a standby shard to the standby shard config information"
  type = "map"
}

variable "shard_catalog_standbys" {
  description = "Map of user-friendly name of a shard catalog standby to the shard catalog standby config information"
  type = "map"
}

variable "shard_directors" {
  description = "Map of nick name of a shard director to the shard director config information"
  type = "map"
}