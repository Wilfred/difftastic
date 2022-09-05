/*
 * Copyright (c) 2018, 2020, Oracle Corporation and/or its affiliates.
 * Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.
 * This example file shows how to configure the oci provider to target the a single region.
*/

// These variables would commonly be defined as environment variables or sourced in a .env file
variable "tenancy_ocid" {}
variable "user_ocid" {}
variable "fingerprint" {}
variable "private_key_path" {}
variable "region" { default = "us-phoenix-1" }

provider "oci" {
  version          = ">= 3.0.0"
  region = "${var.region}"
  tenancy_ocid = "${var.tenancy_ocid}"
  user_ocid = "${var.user_ocid}"
  fingerprint = "${var.fingerprint}"
  private_key_path = "${var.private_key_path}"
}
