# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "random_string" "sudo_pass" {
  length           = 18
  min_upper        = 2
  min_lower        = 1
  min_numeric      = 3
  min_special      = 3
  override_special = "_"
}

resource "random_string" "sys_pass" {
  length           = 17
  min_upper        = 2
  min_lower        = 1
  min_numeric      = 3
  min_special      = 2
  override_special = "_"
}

resource "random_string" "sdb_admin_pass" {
  length           = 22
  min_upper        = 2
  min_lower        = 1
  min_numeric      = 4
  min_special      = 2
  override_special = "_"
}

resource "random_string" "gsmcatuser_pass" {
  length           = 22
  min_upper        = 2
  min_lower        = 1
  min_numeric      = 4
  min_special      = 2
  override_special = "_"
}

resource "random_string" "gsmuser_pass" {
  length           = 11
  min_upper        = 2
  min_lower        = 1
  min_numeric      = 4
  min_special      = 2
  override_special = "_"
}

resource "random_string" "gsmrootuser_pass" {
  length           = 18
  min_upper        = 2
  min_lower        = 1
  min_numeric      = 4
  min_special      = 2
  override_special = "_"
}

resource "random_string" "tde_encryption_key_export_passwd" {
  length  = 6
  special = false
  number  = false
}

output "sys_user_password" {
  description = "The sys password for logging in to the shard databases and catalogs databases."
  value       = "sd${random_string.sys_pass.result}"
  sensitive   = true
}

# output "sdb_admin_pass" {
#   description = "The sharded database administration password."
#   value       = "sd${random_string.sdb_admin_pass.result}"
# }

output "gsm_catalog_user_password" {
  description = "The GSM catalog user password."
  value       = "sd${random_string.gsmcatuser_pass.result}"
  sensitive   = true
}

output "gsm_user_password" {
  description = "The GSM user password."
  value       = "sd${random_string.gsmuser_pass.result}"
  sensitive   = true
}

output "gsm_root_user_password" {
  description = "The GSM root user password."
  value       = "sd${random_string.gsmrootuser_pass.result}"
  sensitive   = true
}
