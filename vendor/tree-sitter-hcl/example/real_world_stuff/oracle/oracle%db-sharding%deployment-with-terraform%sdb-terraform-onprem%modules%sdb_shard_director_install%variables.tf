# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

locals {
 module_prefix = "install_shard_director"
 gsmhome_postfix = "gsmhome_1"

 gsm_home_full_path = "${var.oracle_base}/product/${var.gsm_version}/${local.gsmhome_postfix}"

 gsm_relative_path_from_base = "product/${var.gsm_version}/${local.gsmhome_postfix}"

 gsm_installer_location = "${var.oracle_base}"

 gsm_install_folder_name = "gsm"

 gsm_major_version = "${element(split(".", var.gsm_version),0)}"

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