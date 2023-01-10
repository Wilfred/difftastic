// Copyright (c) 2020 Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown
// at http://oss.oracle.com/licenses/upl.
terraform {
  required_providers {
    oci = ">= 3.56.0"
  }
}

variable "tenancy_ocid" {}
variable "user_ocid" {}
variable "fingerprint" {}
variable "private_key_path" {}
variable "region" {}
variable "compartment_id" {}
variable "availability_domain_id" {}
variable "subnet_id" {}
variable "instance_shape" {}
variable "instance_image_ocid" {}

variable "ssh_private_key_path" {}
variable "ssh_authorized_key_path" {}
variable "ssh_user" {}
variable "ssh_public_key_path" {}

variable "dns_search_domains" {}
variable "dns_server_ip" {}
variable "http_proxy_url" {}
variable "https_proxy_url" {}


provider "oci" {
  tenancy_ocid     = var.tenancy_ocid
  user_ocid        = var.user_ocid
  fingerprint      = var.fingerprint
  private_key_path = var.private_key_path
  region           = var.region
}

data "oci_identity_availability_domains" "ad" {
  compartment_id = var.compartment_id
}


resource "oci_core_instance" "dev_instance" {
  availability_domain = var.availability_domain_id
  compartment_id      = var.compartment_id
  display_name        = "OCI-DEV-Instance"
  shape               = var.instance_shape

  create_vnic_details {
    subnet_id        = var.subnet_id
    display_name     = "Primaryvnic"
    assign_public_ip = false
  }

  source_details {
    source_type = "image"
    source_id   = var.instance_image_ocid
  }

  preserve_boot_volume = false

  metadata = {
    ssh_authorized_keys = file(var.ssh_authorized_key_path)
  }


  timeouts {
    create = "60m"
  }

}

resource "oci_core_vnic_attachment" "test_vnic_attachment_0" {
  create_vnic_details {
    subnet_id = var.subnet_id
  }
  instance_id = oci_core_instance.dev_instance.id
  nic_index   = 0
}
resource "oci_core_instance_console_connection" "instance_console_connection" {
  depends_on = [oci_core_instance.dev_instance]
  #Required
  instance_id = oci_core_instance.dev_instance.id
  public_key  = file(var.ssh_public_key_path)
}

resource "oci_core_volume" "vm_tank_volume" {
  availability_domain = var.availability_domain_id
  compartment_id      = var.compartment_id
  display_name        = "DevInstanceTank"
  size_in_gbs         = 256
}
resource "oci_core_volume_attachment" "vm_tank_volume_attachment" {
  attachment_type = "iscsi"
  instance_id     = oci_core_instance.dev_instance.id
  volume_id       = oci_core_volume.vm_tank_volume.id

  is_read_only = false

}


output "instance_private_ip" {
  value = oci_core_instance.dev_instance.*.private_ip
}



