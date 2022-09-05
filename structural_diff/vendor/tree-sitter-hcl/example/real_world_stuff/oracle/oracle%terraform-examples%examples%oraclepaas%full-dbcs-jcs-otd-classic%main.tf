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
  java_endpoint     = "https://jaas.oraclecloud.com"
}

locals {
  # Java Service name cannot have more than 30 chars; must start with a letter and can contain only letters and numbers.
  # If the service name contains a hyphen; Oracle-managed load balancer will not be created.
  java_service_name = "tfjcsdemo"

  database_name = "my-terraformed-database-demo"
}

resource "oraclepaas_database_service_instance" "database" {
  name        = "${local.database_name}"
  description = "Created by Terraform"

  edition            = "EE_EP"
  version            = "12.2.0.1"
  subscription_type  = "HOURLY"
  shape              = "oc1m"
  notification_email = "${var.user}"

  ssh_public_key = "${file("~/.ssh/id_rsa.pub")}"

  database_configuration {
    admin_password     = "Pa55_Word"
    backup_destination = "BOTH"
    sid                = "ORCL"
    usable_storage     = 25
  }

  backups {
    cloud_storage_container = "Storage-${var.domain}/${local.database_name}-backup"
    create_if_missing       = true
  }
}

resource "oraclepaas_java_service_instance" "jcs" {
  name        = "${local.java_service_name}"
  description = "Created by Terraform"

  edition              = "EE"
  service_version      = "12cRelease213" // 12cRelease213, 12cRelease212, 12cR3, 11gR1
  metering_frequency   = "HOURLY"
  enable_admin_console = true
  notification_email   = "${var.user}"

  ssh_public_key = "${file("~/.ssh/id_rsa.pub")}"

  weblogic_server {
    shape = "oc1m"

    managed_servers {
      server_count = 2
    }

    admin {
      username = "weblogic"
      password = "Weblogic_1"
    }

    database {
      name     = "${oraclepaas_database_service_instance.database.name}"
      username = "sys"
      password = "${oraclepaas_database_service_instance.database.database_configuration.0.admin_password}"
    }
  }

  oracle_traffic_director {
    shape = "oc1m"

    listener {
      port         = 8080
      secured_port = 8081
    }

    admin {
      username = "weblogic"
      password = "Weblogic_1"
    }
  }

  backups {
    cloud_storage_container = "Storage-${var.domain}/${local.java_service_name}-backup"
    auto_generate           = true
  }
}
