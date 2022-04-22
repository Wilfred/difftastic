// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

/*
 * Helper module to calculate the network CIDRs for the tenant and peering VCNs.
 */

locals {

  # calculate the total number of peering vcns needed for the number of tenants
  number_of_peering_vcns = var.number_of_tenants / var.local_peering_gateways_per_tenany_peering_vcn

  # calculate the difference between the meta cidr netmask and the desired vnc netmask
  # e.g. if /24 tenant vcns are allocated from /16 range then the newbits will be 8
  #      this value is then used in the `cidrsubnet()` function 
  tenant_peering_vcn_newbits = var.tenant_peering_vcn_mask - tonumber(split("/", var.tenant_peering_vcn_meta_cidr)[1])
  tenant_vcn_newbits         = var.tenant_vcn_mask - tonumber(split("/", var.tenant_vcn_meta_cidr)[1])

  # calculate the list of all peering vcn cidr ranges
  peering_vcns = [for n in null_resource.peering_vcns : n.triggers.network_cidr]

  # calculate the list of all tenant vcn cidr ranges
  tenant_vcns = [for n in null_resource.tenant_vcns : n.triggers.network_cidr]

  # calculate list of list groups tenanct vcns by peering vcn index
  tenant_vcns_per_peering_vcn = chunklist(local.tenant_vcns, var.local_peering_gateways_per_tenany_peering_vcn)
}

resource null_resource "peering_vcns" {
  count = local.number_of_peering_vcns

  triggers = {
    network_cidr = cidrsubnet(var.tenant_peering_vcn_meta_cidr, local.tenant_peering_vcn_newbits, count.index)
  }
}

resource null_resource "tenant_vcns" {
  count = var.number_of_tenants

  triggers = {
    network_cidr = cidrsubnet(var.tenant_vcn_meta_cidr, local.tenant_vcn_newbits, var.tenant_vcn_starting_block + count.index)
  }
}

