// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.
provider "oci" {
  version              = ">= 3.14"
  tenancy_ocid         = "${var.tenancy_ocid}"
  user_ocid            = "${var.user_ocid}"
  fingerprint          = "${var.fingerprint}"
  private_key_path     = "${var.private_key_path}"
  private_key_password = "${var.private_key_password}"
  region               = "${var.region}"
}
