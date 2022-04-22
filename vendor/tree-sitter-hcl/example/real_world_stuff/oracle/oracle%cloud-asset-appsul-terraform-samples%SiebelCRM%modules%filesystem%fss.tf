/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "oci_file_storage_file_system" "fss" {
	compartment_id      = "${var.compartment_ocid}"
	count               = "${length(var.availability_domain)}"
	availability_domain = "${element(var.availability_domain, count.index)}"
	display_name        = "${var.fss_instance_prefix}${var.AD[count.index]}"
}

resource "oci_file_storage_mount_target" "fss_mt" {
	depends_on          = ["oci_file_storage_file_system.fss"]
	compartment_id      = "${var.compartment_ocid}"
	count               = "${length(var.availability_domain)}"
	availability_domain = "${element(var.availability_domain, count.index)}"
	hostname_label      = "${var.fss_instance_prefix}${var.AD[count.index]}"
	subnet_id           = "${element(var.fss_subnet, count.index)}"
	display_name        = "${var.fss_instance_prefix}${var.AD[count.index]}_mt"
}

resource "oci_file_storage_export_set" "fss_export_set" {
  count               = "${length(var.availability_domain)}"
  mount_target_id     = "${element(oci_file_storage_mount_target.fss_mt.*.id, count.index)}"
  max_fs_stat_bytes   = "${(var.fss_limit_size_in_gb * 1024 * 1024 * 1024)}"  
}
resource "oci_file_storage_export" "fss_export" {
  count               = "${length(var.availability_domain)}"
  export_set_id       = "${element(oci_file_storage_mount_target.fss_mt.*.export_set_id,count.index)}"
  file_system_id      = "${element(oci_file_storage_file_system.fss.*.id, count.index)}"
  path                = "/${var.fss_instance_prefix}${var.AD[count.index]}"

  export_options      = [
    {
      source                         = "0.0.0.0/0"
      access                         = "READ_WRITE"
      identity_squash                = "NONE"
      require_privileged_source_port = true
    },
  ]
}



