/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "zones" {
  value = "${data.oci_dns_zones.zs.zones}"
}

output "records" {
  value = "${data.oci_dns_records.rs.records}"
}
