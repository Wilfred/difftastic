/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


locals {
  fss_private_ips = "${flatten(concat(data.oci_core_private_ips.ip_mount_target.*.private_ips))}"
}

locals {
  fss_exports = [
    "${oci_file_storage_export.fss_export.*.path}",
  ]
  fss_fstabs = "${formatlist("%s:%s", data.template_file.fss_ips.*.rendered, oci_file_storage_export.fss_export.*.path)}"
}

 
# Get private IP of Filesystem Storage Service

data "oci_core_private_ips" "ip_mount_target" {
  #count               = "${length(var.availability_domain)}"
  count               = "${var.fss_count}"
  subnet_id           = "${element(oci_file_storage_mount_target.fss_mt.*.subnet_id, count.index)}"

  filter {
    name    = "id"
    values  = ["${element(flatten(oci_file_storage_mount_target.fss_mt.*.private_ip_ids), count.index)}"]
  }
}

data "template_file" "fss_ips" {
  template = "$${ip_address}"
  #count    = "${length(var.availability_domain)}"
  count               = "${var.fss_count}"

  vars = {
    ip_address = "${lookup(local.fss_private_ips[count.index], "ip_address")}"
  }
}

