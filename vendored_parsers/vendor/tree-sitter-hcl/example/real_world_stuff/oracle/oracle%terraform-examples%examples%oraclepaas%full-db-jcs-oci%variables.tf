// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable user {}
variable password {}
variable identity_service_id {}

variable tenancy {}
variable tenancy_ocid {}
variable user_ocid {}
variable fingerprint {}
variable private_key_path {}
variable region {}
variable home_region {}

variable compartment_ocid {}
variable subnet_ocid {}

variable psm_backup_group_name {
  default = "psm_backup_group"
}

variable ssh_public_key_file {
  default = "~/.ssh/id_rsa.pub"
}
