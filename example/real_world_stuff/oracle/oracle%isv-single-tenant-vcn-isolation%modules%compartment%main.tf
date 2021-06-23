// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Createa a compartment.
 * The oci provider for the home region must be configured using the `home` provider alias.
 */

provider oci {
  alias = "home"
}

/*
 * Create a compartment.
 */
resource oci_identity_compartment compartment {
  provider = oci.home

  compartment_id = var.root_compartment_id
  name           = var.compartment_name
  description    = "${var.compartment_name} compartment"
  enable_delete  = var.enable_delete
  defined_tags   = var.defined_tags
  freeform_tags  = var.freeform_tags
}