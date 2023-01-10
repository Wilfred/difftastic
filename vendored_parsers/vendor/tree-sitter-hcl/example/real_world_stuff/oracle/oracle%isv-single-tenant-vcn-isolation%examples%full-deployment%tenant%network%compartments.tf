// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Configure the tenant compartments
 */

# Tenant 1
module tenant_1_compartment {
  source = "../../../../modules/compartment"

  providers = {
    oci.home = "oci.home"
  }

  root_compartment_id = local.root_compartment_id
  compartment_name    = "tenant1"
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "tenant_1_compartment_id" {
  value = module.tenant_1_compartment.compartment_id
}

# Tenant 2
module tenant_2_compartment {
  source = "../../../../modules/compartment"

  providers = {
    oci.home = "oci.home"
  }

  root_compartment_id = local.root_compartment_id
  compartment_name    = "tenant2"
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "tenant_2_compartment_id" {
  value = module.tenant_2_compartment.compartment_id
}

# Tenant 3
module tenant_3_compartment {
  source = "../../../../modules/compartment"

  providers = {
    oci.home = "oci.home"
  }

  root_compartment_id = local.root_compartment_id
  compartment_name    = "tenant3"
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "tenant_3_compartment_id" {
  value = module.tenant_3_compartment.compartment_id
}

# Tenant 4
module tenant_4_compartment {
  source = "../../../../modules/compartment"

  providers = {
    oci.home = "oci.home"
  }

  root_compartment_id = local.root_compartment_id
  compartment_name    = "tenant4"
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

output "tenant_4_compartment_id" {
  value = module.tenant_4_compartment.compartment_id
}
