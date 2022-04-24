/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "oci_core_instance" "jdeapp" {
  count               = "${var.app_instance_count}"
  availability_domain = "${element(var.availability_domain, count.index)}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.app_hostname_prefix}${count.index+1}"
  shape               = "${var.app_instance_shape}"
  fault_domain        = "${element(var.fault_domain, count.index)}"

  create_vnic_details {
    subnet_id        = "${element(var.app_subnet, count.index)}"
    display_name     = "${var.app_hostname_prefix}${count.index+1}"
    assign_public_ip = false
    hostname_label   = "${var.app_hostname_prefix}${count.index+1}"
  }

  source_details {
    source_type = "image"
    source_id   = "${var.app_image}"
  }

  metadata {
    ssh_authorized_keys = "${file(var.app_ssh_public_key)}"
  }
}
