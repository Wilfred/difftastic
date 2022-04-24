# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

data "oci_core_subnet" "shardgroup_subnet" {
  #Required
  subnet_id = var.create_new_network ? join("", oci_core_subnet.subnet.*.id) : var.subnet_id
}

data "oci_identity_availability_domains" "ADs" {
  compartment_id = var.tenancy_ocid
}

data "oci_identity_fault_domains" "FDs" {
  count = local.num_of_ads
  #Required
  availability_domain = data.oci_identity_availability_domains.ADs.availability_domains[count.index].name
  compartment_id      = var.tenancy_ocid
}