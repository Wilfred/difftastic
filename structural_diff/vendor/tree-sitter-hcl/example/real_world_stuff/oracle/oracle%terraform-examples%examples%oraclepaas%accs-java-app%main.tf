// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable user {}
variable password {}
variable domain {}
variable compute_endpoint {}
variable storage_endpoint {}

provider "oraclepaas" {
  version              = "~> 1.3"
  user                 = "${var.user}"
  password             = "${var.password}"
  identity_domain      = "${var.domain}"
  application_endpoint = "https://apaas.us.oraclecloud.com"
}

provider "opc" {
  version          = "~> 1.2"
  user             = "${var.user}"
  password         = "${var.password}"
  identity_domain  = "${var.domain}"
  storage_endpoint = "${var.storage_endpoint}"
}

resource "opc_storage_container" "accs-apps" {
  name = "my-accs-apps"
}

resource "opc_storage_object" "example-java-app" {
  name         = "employees-web-app.zip"
  container    = "${opc_storage_container.accs-apps.name}"
  file         = "./employees-web-app.zip"
  etag         = "${md5(file("./employees-web-app.zip"))}"
  content_type = "application/zip;charset=UTF-8"
}

resource "oraclepaas_application_container" "example-java-app" {
  name              = "EmployeeWebApp"
  runtime           = "java"
  archive_url       = "${opc_storage_container.accs-apps.name}/${opc_storage_object.example-java-app.name}"
  subscription_type = "HOURLY"

  deployment {
    memory    = "1G"
    instances = 1
  }
}

output "web_url" {
  value = "${oraclepaas_application_container.example-java-app.web_url}"
}
