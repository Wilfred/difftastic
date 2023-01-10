
// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.

/*
 * This example file shows how to configure the oci provider to target the a single region.
 */


provider "oci" {
  version          = ">= 3.45.0"
  region           = "${var.region}"
}
