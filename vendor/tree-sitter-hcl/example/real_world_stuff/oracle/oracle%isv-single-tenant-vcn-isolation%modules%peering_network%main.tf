// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Create a tenant peering network used for routing between the management VCN and
 * the locally peering tenant VCNs
 */

# Peering VCN
resource oci_core_vcn peering_vcn {
  compartment_id = var.compartment_id
  display_name   = var.vcn_name
  dns_label      = var.dns_label
  cidr_block     = var.vcn_cidr_block
  defined_tags   = var.defined_tags
  freeform_tags  = var.freeform_tags
}

# Local Peering Gateways (one per peering Tenant VCN)
resource oci_core_local_peering_gateway peering_gateways {
  count          = var.local_peering_gateways_per_vcn
  compartment_id = var.compartment_id
  vcn_id         = oci_core_vcn.peering_vcn.id
  display_name   = "${var.vcn_name} local peering gateway ${count.index + 1}"
  defined_tags   = var.defined_tags
  freeform_tags  = var.freeform_tags
}

# Peering Route Table
resource oci_core_route_table peering_route_table {
  compartment_id = var.compartment_id
  vcn_id         = oci_core_vcn.peering_vcn.id
  display_name   = var.peering_rte_name
  defined_tags   = var.defined_tags
  freeform_tags  = var.freeform_tags

  # TODO use dynamic nested block with for_each to create route_rules
  route_rules {
    destination_type  = "CIDR_BLOCK"
    destination       = var.tenant_vcn_cidr_blocks[0]
    network_entity_id = oci_core_local_peering_gateway.peering_gateways[0].id
  }

  route_rules {
    destination_type  = "CIDR_BLOCK"
    destination       = var.tenant_vcn_cidr_blocks[1]
    network_entity_id = oci_core_local_peering_gateway.peering_gateways[1].id
  }
}

# Peering Network Security List
resource oci_core_security_list peering_security_list {
  compartment_id = var.compartment_id
  vcn_id         = oci_core_vcn.peering_vcn.id
  display_name   = var.peering_sec_list
  defined_tags   = var.defined_tags
  freeform_tags  = var.freeform_tags

  // allow outbound tcp traffic on all ports
  egress_security_rules {
    destination = "0.0.0.0/0"
    protocol    = "6"
  }

  // allow inbound icmp traffic of a specific type
  ingress_security_rules {
    protocol = 1
    source   = "0.0.0.0/0"
  }

  // allow inbound nagios traffic
  # TODO move to a nagios network security group
  ingress_security_rules {
    tcp_options {
      min = "5666"
      max = "5666"
    }
    protocol = "6"
    source   = "0.0.0.0/0"
  }
}

/*
 * SUBNETS
 */

# Peering Subnet
resource oci_core_subnet peering_subnet {
  compartment_id = var.compartment_id
  vcn_id         = oci_core_vcn.peering_vcn.id
  display_name   = var.peering_subnet_name
  dns_label      = var.peering_subnet_dns_label
  cidr_block     = var.peering_subnet_cidr
  route_table_id = oci_core_route_table.peering_route_table.id
  security_list_ids = [
    oci_core_vcn.peering_vcn.default_security_list_id,
    oci_core_security_list.peering_security_list.id
  ]
  defined_tags  = var.defined_tags
  freeform_tags = var.freeform_tags
}
