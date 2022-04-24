// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable user {}
variable password {}
variable domain {}
variable endpoint {}

provider "oraclepaas" {
  user              = "${var.user}"
  password          = "${var.password}"
  identity_domain   = "${var.domain}"
  database_endpoint = "https://dbaas.oraclecloud.com"
}

resource "oraclepaas_database_service_instance" "database" {
  name              = "my-terraformed-database"
  description       = "Created by Terraform"
  shape             = "oc1m"
  subscription_type = "HOURLY"                       // HOURLY MONTHLY
  ssh_public_key    = "${file("~/.ssh/id_rsa.pub")}"

  notification_email = "${var.user}"

  edition = "EE"       // SE EE EE_HP EE_EP
  version = "18.0.0.0" // 18.0.0.0 or 12.2.0.1 or 12.1.0.2 or 11.2.0.4

  bring_your_own_license   = false // Bring Your Own License (BYOL) is supported only with Universal Credits account.
  high_performance_storage = false // High Performance Storage is only supported for CLOUD_CREDIT service entitlement

  database_configuration {
    admin_password     = "Pa55_Word"
    backup_destination = "BOTH"
    sid                = "ORCL"
    usable_storage     = 25
    is_rac             = false
  }

  backups {
    cloud_storage_container = "Storage-${var.domain}/my-terraformed-database-backup"
    create_if_missing       = true
  }
}
