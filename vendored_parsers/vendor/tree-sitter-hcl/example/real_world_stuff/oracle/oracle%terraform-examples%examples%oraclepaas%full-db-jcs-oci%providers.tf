// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

// OCI provider (for service deployment)
provider "oci" {
  tenancy_ocid     = "${var.tenancy_ocid}"
  user_ocid        = "${var.user_ocid}"
  fingerprint      = "${var.fingerprint}"
  private_key_path = "${var.private_key_path}"
  region           = "${var.region}"
}

// OCI provider for home region (for policy creation)
provider "oci" {
  alias            = "home"
  tenancy_ocid     = "${var.tenancy_ocid}"
  user_ocid        = "${var.user_ocid}"
  fingerprint      = "${var.fingerprint}"
  private_key_path = "${var.private_key_path}"
  region           = "${var.home_region}"
}

// Oracle PaaS provider
provider "oraclepaas" {
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.identity_service_id}"
  java_endpoint   = "https://jaas.oraclecloud.com"
}
