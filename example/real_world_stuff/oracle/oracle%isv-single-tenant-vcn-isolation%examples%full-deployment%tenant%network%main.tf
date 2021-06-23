// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

terraform {
  required_version = ">= 0.12.0"


  backend "local" {
    path = "../state/tenant/network/terraform.tfstate"
  }
}

locals {
  region_map = {
    for r in data.oci_identity_regions.regions.regions :
    r.key => r.name
  }

  home_region         = lookup(local.region_map, data.oci_identity_tenancy.tenancy.home_region_key)
  availability_domain = lookup(data.oci_identity_availability_domains.ADs.availability_domains[0], "name")

  root_compartment_id = var.compartment_ocid
}