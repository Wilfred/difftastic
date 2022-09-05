/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "oci_dns_zone" "jde_zone" {
  compartment_id = "${var.compartment_ocid}"
  name = "${var.dns_server_zone_name}"
  zone_type = "PRIMARY"
}

resource "oci_dns_record" "batch_alias" {
  count = "2"
  zone_name_or_id = "${oci_dns_zone.jde_zone.name}"
  domain = "${var.batch_alias}.${oci_dns_zone.jde_zone.name}"
  rtype = "A"
  rdata = "${element(flatten(var.batch_rdata), count.index)}"
  ttl = 300
}

resource "oci_dns_record" "logic_alias" {
  count = "2"
  zone_name_or_id = "${oci_dns_zone.jde_zone.name}"
  domain = "${var.logic_alias}.${oci_dns_zone.jde_zone.name}"
  rtype = "A"
  rdata = "${element(flatten(var.logic_rdata), count.index)}"
  ttl = 300
}

resource "oci_dns_record" "web_alias" {
  count = "2"
  zone_name_or_id = "${var.dns_server_zone_name}"
  domain = "${var.web_alias}.${oci_dns_zone.jde_zone.name}"
  rtype = "A"
  rdata = "${element(flatten(var.web_rdata), count.index)}"
  ttl = 300
}
