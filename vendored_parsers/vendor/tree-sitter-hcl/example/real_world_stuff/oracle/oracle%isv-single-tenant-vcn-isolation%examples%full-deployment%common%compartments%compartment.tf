// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Configure the management compartment
 */

module management_compartment {
  source = "../../../../modules/compartment"

  providers = {
    oci.home = "oci.home"
  }

  root_compartment_id = local.root_compartment_id
  compartment_name    = var.management_compartment_name
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}


/*
 * Configure the peering compartment, and enable instance principles to modify routing rules
 */

module peering_compartment {
  source = "../../../../modules/compartment"

  providers = {
    oci.home = "oci.home"
  }

  root_compartment_id = local.root_compartment_id
  compartment_name    = var.peering_compartment_name
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}


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
  compartment_name    = var.tenant1_compartment_name
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}


# Tenant 2
module tenant_2_compartment {
  source = "../../../../modules/compartment"

  providers = {
    oci.home = "oci.home"
  }

  root_compartment_id = local.root_compartment_id
  compartment_name    = var.tenant2_compartment_name
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}


# Tenant 3
module tenant_3_compartment {
  source = "../../../../modules/compartment"

  providers = {
    oci.home = "oci.home"
  }

  root_compartment_id = local.root_compartment_id
  compartment_name    = var.tenant3_compartment_name
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}

# Tenant 4
module tenant_4_compartment {
  source = "../../../../modules/compartment"

  providers = {
    oci.home = "oci.home"
  }

  root_compartment_id = local.root_compartment_id
  compartment_name    = var.tenant4_compartment_name
  freeform_tags       = var.freeform_tags
  defined_tags        = var.defined_tags
}
