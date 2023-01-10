/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


locals {
  ebsfss_private_ips = "${flatten(concat(data.oci_core_private_ips.ip_mount_target.*.private_ips))}"
}

locals {
  ebsfss_exports = [
    "${oci_file_storage_export.fss_exp.*.path}",
  ]
  ebsfss_fstabs = "${formatlist("%s:%s", data.template_file.ebsfss_ips.*.rendered, oci_file_storage_export.fss_exp.*.path)}"
}

 
# Get private IP of File Storage Service
data "oci_core_private_ips" "ip_mount_target" {
  count               = "${length(var.availability_domain)}"
  subnet_id           = "${element(oci_file_storage_mount_target.fss_mt.*.subnet_id, count.index)}"

  filter {
    name    = "id"
    values  = ["${element(flatten(oci_file_storage_mount_target.fss_mt.*.private_ip_ids), count.index)}"]
  }
}

data "template_file" "ebsfss_ips" {
  template = "$${ip_address}"
  count    = "${length(var.availability_domain)}"

  vars = {
    ip_address = "${lookup(local.ebsfss_private_ips[count.index], "ip_address")}"
  }
}

# Get Filesystem details
data "template_file" "bootstrap" {
  template = "${file("${path.module}/userdata/bootstrap.tpl")}"
  vars {
    src_mount_path                = "${var.fss_primary_mount_path}/"
    src_mount_target_private_ip   = "${element(data.template_file.ebsfss_ips.*.rendered, 0)}"
    src_export_path               = "${element(oci_file_storage_export.fss_exp.*.path,0)}"
    app_instance_listen_port      = "${var.compute_instance_listen_port}"
    timezone                      = "${var.timezone}"
  }
}

# Get rsync inputs
data "template_file" "rsync" {
  count     = "${local.enable_rsync ? 1 : 0}"
  template  = "${file("${path.module}/userdata/rsync.sh")}"
  vars {
    src_mount_path                = "${var.fss_primary_mount_path}/"
    dst_export_path               =  "${element(oci_file_storage_export.fss_exp.*.path,1)}"
    dst_mount_target_private_ip   = "${element(data.template_file.ebsfss_ips.*.rendered, 1)}"
    dst_mount_path                = "${var.fss_primary_mount_path}DR/"
    fss_sync_frequency            = "*/30 * * * *"
  }
}