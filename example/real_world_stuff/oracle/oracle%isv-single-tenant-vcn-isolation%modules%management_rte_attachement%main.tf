// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Create new route tables for access fo the tenant VCNs and attach the new route
 * tables to the management and access subnets for connectivity through to the tenant
 * networks.
 *
 * NOTE: route table attachment replaces the use of the default route table configured
 * for the access and management subets on initial creation.
 *
 * TODO: addition of new tenants currently requires manual update to the route table config below.
 * could be more dynamic.
 */

#private route table attachment
resource oci_core_route_table management_private_rt_table {
  compartment_id = var.compartment_id
  vcn_id         = var.management_vcn_id
  display_name   = var.display_name
  defined_tags   = var.defined_tags
  freeform_tags  = var.freeform_tags

  route_rules {
    destination       = "0.0.0.0/0"
    network_entity_id = var.management_nat_id
  }

  # TODO using dynamic for_each
  route_rules {
    destination_type  = "CIDR_BLOCK"
    destination       = var.tenant_vcn_cidr_blocks[0]
    network_entity_id = var.routing_ip_ids[0]
  }

  route_rules {
    destination_type  = "CIDR_BLOCK"
    destination       = var.tenant_vcn_cidr_blocks[1]
    network_entity_id = var.routing_ip_ids[0]
  }

  route_rules {
    destination_type  = "CIDR_BLOCK"
    destination       = var.tenant_vcn_cidr_blocks[2]
    network_entity_id = var.routing_ip_ids[1]
  }

  route_rules {
    destination_type  = "CIDR_BLOCK"
    destination       = var.tenant_vcn_cidr_blocks[3]
    network_entity_id = var.routing_ip_ids[1]
  }
}

resource "oci_core_route_table_attachment" "management_route_table_attachment" {
  subnet_id      = var.management_subnet_id
  route_table_id = oci_core_route_table.management_private_rt_table.id
}

#public route table attachment
resource oci_core_route_table access_public_rt_table {
  compartment_id = var.compartment_id
  vcn_id         = var.management_vcn_id
  display_name   = var.display_name_public
  defined_tags   = var.defined_tags
  freeform_tags  = var.freeform_tags

  route_rules {
    destination       = "0.0.0.0/0"
    network_entity_id = var.management_igw_id
  }

  # TODO using dynamic for_each
  route_rules {
    destination_type  = "CIDR_BLOCK"
    destination       = var.tenant_vcn_cidr_blocks[0]
    network_entity_id = var.routing_ip_ids[0]
  }

  route_rules {
    destination_type  = "CIDR_BLOCK"
    destination       = var.tenant_vcn_cidr_blocks[1]
    network_entity_id = var.routing_ip_ids[0]
  }

  route_rules {
    destination_type  = "CIDR_BLOCK"
    destination       = var.tenant_vcn_cidr_blocks[2]
    network_entity_id = var.routing_ip_ids[1]
  }

  route_rules {
    destination_type  = "CIDR_BLOCK"
    destination       = var.tenant_vcn_cidr_blocks[3]
    network_entity_id = var.routing_ip_ids[1]
  }
}

resource "oci_core_route_table_attachment" "access_route_table_attachment" {
  subnet_id      = var.access_subnet_id
  route_table_id = oci_core_route_table.access_public_rt_table.id
}
