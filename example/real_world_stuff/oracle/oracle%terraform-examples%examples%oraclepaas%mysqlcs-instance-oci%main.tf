// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable "user" {}
variable "password" {}
variable "identity_domain" {}
variable "identity_service_id" {}
variable "service_id" {}

variable "region" {}
variable "compartment_ocid" {}
variable "tenancy_ocid" {}
variable "user_ocid" {}
variable "fingerprint" {}

variable "private_key_path" {
  default = "~/.oci/oci_api_key.pem"
}

variable "object_storage_bucket" {}
variable "object_storage_namespace" {}
variable "object_storage_user" {}
variable "swift_password" {}

provider "oci" {
  tenancy_ocid     = "${var.tenancy_ocid}"
  user_ocid        = "${var.user_ocid}"
  fingerprint      = "${var.fingerprint}"
  private_key_path = "${var.private_key_path}"
  region           = "${var.region}"
}

provider "oraclepaas" {
  version         = "~> 1.2"
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.identity_service_id}"
  mysql_endpoint  = "https://psm.us.oraclecloud.com/"
}

data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

resource "oraclepaas_mysql_service_instance" "example" {
  name               = "mysqloci1"
  description        = "Created by Terraform"
  ssh_public_key     = "${file("~/.ssh/id_rsa.pub")}"
  backup_destination = "BOTH"
  metering_frequency = "HOURLY"

  notification_email = "${var.user}"

  // OCI settings
  region              = "${var.region}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  shape               = "VM.Standard2.1"

  mysql_configuration {
    db_name        = "demo_db"
    db_storage     = 50
    mysql_port     = 3306
    mysql_username = "root"
    mysql_password = "Pa55_Word"

    enterprise_monitor_configuration {
      em_agent_password = "Pa55_Word"
      em_agent_username = "emagent"
      em_password       = "Pa55_Word"
      em_username       = "emadmin"
      em_port           = "18443"
    }
  }

  backups {
    cloud_storage_container = "https://swiftobjectstorage.${var.region}.oraclecloud.com/v1/${var.object_storage_namespace}/${var.object_storage_bucket}"
    cloud_storage_username  = "${var.object_storage_user}"
    cloud_storage_password  = "${var.swift_password}"
  }
}

output "public_ip_address" {
  value = "${oraclepaas_mysql_service_instance.example.mysql_configuration.0.public_ip_address}"
}

output "mysql_connect_string" {
  value = "${oraclepaas_mysql_service_instance.example.mysql_configuration.0.connect_string}"
}

output "enterprise_monitor_url" {
  value = "https://${oraclepaas_mysql_service_instance.example.mysql_configuration.0.public_ip_address}:${oraclepaas_mysql_service_instance.example.mysql_configuration.0.enterprise_monitor_configuration.0.em_port}"
}
