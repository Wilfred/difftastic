/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


resource "oci_core_instance" "bastion" {
  compartment_id      = "${var.compartment_ocid}"
  count               = "${length(var.availability_domain)}"
  availability_domain = "${element(var.availability_domain, count.index)}" 
  display_name        = "${var.bastion_hostname_prefix}${element(var.AD,count.index)}${count.index+1}"
  shape               = "${var.bastion_instance_shape}"
    
  create_vnic_details {
    subnet_id         = "${element(var.bastion_subnet, count.index)}"
    display_name      = "${var.bastion_hostname_prefix}${element(var.AD,count.index)}${count.index+1}"
    assign_public_ip  = true
    hostname_label    = "${var.bastion_hostname_prefix}${element(var.AD,count.index)}${count.index+1}"
  }
  
  source_details {
    source_type             = "image"
    source_id               = "${var.bastion_image}"
    boot_volume_size_in_gbs = "60"
  }

  metadata {
    ssh_authorized_keys =  "${trimspace(file("${var.bastion_ssh_public_key}"))}"
  }
}
