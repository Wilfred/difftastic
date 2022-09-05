// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable user {}
variable password {}
variable identity_domain {}
variable identity_service_id {}
variable service_id {}
variable endpoint {}

variable source_ip {}

provider "oraclepaas" {
  version         = "~> 1.2"
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.identity_service_id}"
  mysql_endpoint  = "https://psm.us.oraclecloud.com/"
}

provider "opc" {
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.service_id}"
  endpoint        = "${var.endpoint}"
}

resource "opc_compute_ip_network" "example" {
  name              = "example_ip_network"
  ip_address_prefix = "192.168.100.0/24"
}

resource "oraclepaas_mysql_service_instance" "example" {
  name               = "mysqlocic1"
  description        = "Created by Terraform"
  ssh_public_key     = "${file("~/.ssh/id_rsa.pub")}"
  backup_destination = "BOTH"
  metering_frequency = "HOURLY"

  notification_email = "${var.user}"

  // OCI Classic
  region     = "uscom-central-1"
  ip_network = "/Compute-${var.service_id}/${var.user}/${opc_compute_ip_network.example.name}"
  shape      = "oc3"

  mysql_configuration {
    db_name        = "demo_db"
    db_storage     = 25
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
    cloud_storage_container = "Storage-${var.identity_domain}/my-paas-backup"
    cloud_storage_username  = "${var.user}"
    cloud_storage_password  = "${var.password}"
    create_if_missing       = true
  }
}

resource "oraclepaas_mysql_access_rule" "db_access" {
  name                = "db_access"
  description         = "Created by Terraform"
  service_instance_id = "${oraclepaas_mysql_service_instance.example.name}"
  ports               = "${oraclepaas_mysql_service_instance.example.mysql_configuration.0.mysql_port}"
  source              = "${var.source_ip}"
  destination         = "mysql_MASTER"
  enabled             = true
}

resource "oraclepaas_mysql_access_rule" "em_access" {
  name                = "em_access"
  description         = "Created by Terraform"
  service_instance_id = "${oraclepaas_mysql_service_instance.example.name}"
  ports               = "${oraclepaas_mysql_service_instance.example.mysql_configuration.0.enterprise_monitor_configuration.0.em_port}"
  source              = "${var.source_ip}"
  destination         = "mysql_MASTER"
  enabled             = true
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
