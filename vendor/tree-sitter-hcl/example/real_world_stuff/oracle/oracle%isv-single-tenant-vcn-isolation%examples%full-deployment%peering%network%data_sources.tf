// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

# COMMON DATA SOURCES

data oci_identity_tenancy tenancy {
  tenancy_id = var.tenancy_ocid
}

data oci_identity_regions regions {
}

# Availability Domains
data oci_identity_availability_domains ADs {
  compartment_id = var.tenancy_ocid
}

# Oracle Linux VM Image
data oci_core_images oraclelinux {
  compartment_id = var.compartment_ocid

  operating_system         = "Oracle Linux"
  operating_system_version = "7.7"

  # exclude GPU specific images
  filter {
    name   = "display_name"
    values = ["^Oracle-Linux-7.7-([\\.0-9]+)-([\\.0-9-]+)$"]
    regex  = true
  }
}

/*
 * Remote State Dependencies
 */

data "terraform_remote_state" "configuration" {
  backend = "local"

  config = {
    path = "../../common/state/common/configuration/terraform.tfstate"
  }
}

data "terraform_remote_state" "compartments" {
  backend = "local"

  config = {
    path = "../../common/state/common/compartments/terraform.tfstate"
  }
}
