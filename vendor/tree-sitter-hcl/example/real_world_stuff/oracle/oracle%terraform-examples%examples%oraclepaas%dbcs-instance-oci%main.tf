// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable user {}
variable password {}
variable domain {}

variable tenancy {}
variable tenancy_ocid {}
variable region {}
variable compartment_ocid {}

variable user_ocid {}
variable private_key_path {}
variable fingerprint {}

variable object_storage_user {}
variable object_storage_bucket {}
variable swift_password {}

provider "oraclepaas" {
  user              = "${var.user}"
  password          = "${var.password}"
  identity_domain   = "${var.domain}"
  database_endpoint = "https://dbaas.oraclecloud.com"
}

provider "oci" {
  tenancy_ocid     = "${var.tenancy_ocid}"
  user_ocid        = "${var.user_ocid}"
  fingerprint      = "${var.fingerprint}"
  private_key_path = "${var.private_key_path}"
  region           = "${var.region}"
}

locals {
  database_service_name  = "my-terraformed-database"
  database_backup_bucket = "${var.object_storage_bucket}"
  AD                     = 1
  availability_domain    = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[local.AD],"name")}"
}

data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

resource "oci_core_subnet" "subnet" {
  availability_domain = "${local.availability_domain}"
  cidr_block          = "10.0.1.0/24"
  display_name        = "PaaS Subnet"
  dns_label           = "paas"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.tf-vcn1.id}"
  security_list_ids   = ["${oci_core_virtual_network.tf-vcn1.default_security_list_id}"]
  route_table_id      = "${oci_core_virtual_network.tf-vcn1.default_route_table_id}"
  dhcp_options_id     = "${oci_core_virtual_network.tf-vcn1.default_dhcp_options_id}"
}

resource "oraclepaas_database_service_instance" "database" {
  name              = "${local.database_service_name}"
  description       = "Created by Terraform"
  version           = "12.2.0.1"
  edition           = "EE"
  subscription_type = "HOURLY"
  ssh_public_key    = "${join(" ",slice(split(" ",file("~/.ssh/id_rsa.pub")),0,2))}"

  bring_your_own_license = true

  # OCI Settings
  region              = "${var.region}"
  availability_domain = "${local.availability_domain}"
  subnet              = "${oci_core_subnet.subnet.id}"
  shape               = "VM.Standard2.1"

  database_configuration {
    admin_password     = "Pa55_Word"
    backup_destination = "BOTH"
    sid                = "ORCL"
    usable_storage     = 50
  }

  backups {
    cloud_storage_container = "https://swiftobjectstorage.${var.region}.oraclecloud.com/v1/${var.tenancy}/${local.database_backup_bucket}"
    cloud_storage_username  = "${var.object_storage_user}"
    cloud_storage_password  = "${var.swift_password}"
  }
}

output "database_service_name" {
  value = "${oraclepaas_database_service_instance.database.name}"
}

output "database_subnet_id" {
  value = "${oraclepaas_database_service_instance.database.subnet}"
}
