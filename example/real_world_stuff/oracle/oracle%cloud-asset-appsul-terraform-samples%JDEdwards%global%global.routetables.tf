/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/

locals {
  anywhere = "0.0.0.0/0"
}

# Public Route Table
resource "oci_core_route_table" "PublicRT" {
  compartment_id = var.compartment_ocid
  vcn_id         = module.create_vcn.vcn_id
  display_name   = "${var.vcn_dns_label}pubrt"

  route_rules {
    destination       = local.anywhere
    network_entity_id = module.create_vcn.igw_id
  }
}

# Private Route Table
resource "oci_core_route_table" "PrivateRT" {
  compartment_id = var.compartment_ocid
  vcn_id         = module.create_vcn.vcn_id
  display_name   = "${var.vcn_dns_label}pvtrt"

  route_rules {
    destination       = lookup(data.oci_core_services.svcgtw_services.services[0], "cidr_block")
    destination_type  = "SERVICE_CIDR_BLOCK"
    network_entity_id = module.create_vcn.svcgtw_id
  }
  route_rules {
    destination       = local.anywhere
    destination_type  = "CIDR_BLOCK"
    network_entity_id = module.create_vcn.natgtw_id
  }
}
