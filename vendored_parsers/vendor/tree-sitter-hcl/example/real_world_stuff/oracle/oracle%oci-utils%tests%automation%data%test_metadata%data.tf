// Copyright (c) 2020 Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown
// at http:/oss.oracle.com/licenses/upl.

data "oci_identity_availability_domains" "ads" {
  compartment_id = var.tenancy_ocid
}

