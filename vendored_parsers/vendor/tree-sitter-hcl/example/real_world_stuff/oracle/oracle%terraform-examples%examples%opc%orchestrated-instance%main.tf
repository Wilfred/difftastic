// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable "user" {}
variable "password" {}
variable "domain" {}
variable "endpoint" {}

provider "opc" {
  version         = "> 1.0.1"
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.domain}"
  endpoint        = "${var.endpoint}"
}

resource "opc_compute_ip_network" "ipnet1" {
  name              = "ipnet1"
  ip_address_prefix = "192.168.4.0/24"
}

resource "opc_compute_storage_volume" "boot" {
  size             = "12"
  name             = "boot"
  bootable         = true
  image_list       = "/oracle/public/OL_7.2_UEKR4_x86_64"
  image_list_entry = 1
}

resource "opc_compute_ssh_key" "key1" {
  name = "key1"
  key  = "${file("~/.ssh/id_rsa.pub")}"
}

resource "opc_compute_orchestrated_instance" "MyInstance" {
  name          = "example-instance-orchestraion"
  description   = "Example Instance Orchesrtation"
  desired_state = "active"

  instance {
    persistent = true
    name       = "vm-1"
    hostname   = "vm-1"
    shape      = "oc3"
    ssh_keys   = ["${opc_compute_ssh_key.key1.name}"]

    networking_info {
      index      = 1
      ip_network = "${opc_compute_ip_network.ipnet1.name}"
      ip_address = "192.168.4.2"
      vnic       = "eth1-ipnet1"
    }

    storage {
      index  = 1
      volume = "${opc_compute_storage_volume.boot.name}"
    }

    boot_order = [1]
  }
}
