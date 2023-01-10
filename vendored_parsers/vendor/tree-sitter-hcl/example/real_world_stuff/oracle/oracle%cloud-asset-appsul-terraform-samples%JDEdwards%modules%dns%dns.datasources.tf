/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


data "oci_dns_zones" "zs" {
  compartment_id = "${var.compartment_ocid}"
  name = "${var.dns_server_zone_name}"
  #name_contains = "${var.dns_server_zone_name}"
  state = "ACTIVE"
  sort_by = "name" # name|zoneType|timeCreated
  sort_order = "DESC" # ASC|DESC
}

data "oci_dns_records" "rs" {
  zone_name_or_id = "${oci_dns_zone.jde_zone.name}"

  # optional
  compartment_id = "${var.compartment_ocid}"
  domain = "${var.dns_server_zone_name}"
}
