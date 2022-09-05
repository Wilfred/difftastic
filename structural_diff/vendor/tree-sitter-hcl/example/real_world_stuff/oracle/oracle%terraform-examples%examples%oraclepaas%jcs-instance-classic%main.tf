// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable user {}
variable password {}
variable domain {}
variable endpoint {}

provider "oraclepaas" {
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.domain}"
  java_endpoint   = "https://jaas.oraclecloud.com"
}

resource "oraclepaas_java_service_instance" "jcs" {
  # Java Service name cannot have more than 30 chars; must start with a letter and can contain only letters and numbers.
  # If the service name contains a hyphen; Oracle-managed load balancer will not be created.
  name = "tfjcsdemo"

  description = "Created by Terraform"

  edition            = "EE"                           // SE EE SUITE
  service_version    = "12cRelease213"                // 12cRelease213, 12cRelease212, 12cR3, 11gR1
  metering_frequency = "HOURLY"                       // HOURLY MONTHLY
  ssh_public_key     = "${file("~/.ssh/id_rsa.pub")}"

  notification_email = "${var.user}"

  weblogic_server {
    shape = "oc1m"

    database {
      name     = "my-terraformed-database-with-backup"
      username = "sys"
      password = "Pa55_Word"
    }

    admin {
      username = "weblogic"
      password = "Weblogic_1"
    }
  }

  backups {
    cloud_storage_container = "Storage-${var.domain}/tfjcsdemo"
    auto_generate           = true
  }
}
