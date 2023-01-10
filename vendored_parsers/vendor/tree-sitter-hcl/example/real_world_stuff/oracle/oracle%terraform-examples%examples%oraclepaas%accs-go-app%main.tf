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

data "archive_file" "example-go-app" {
  type        = "zip"
  source_dir  = "${path.module}/go-service/"
  output_path = "${path.module}/go-service.zip"
}

resource "opc_storage_container" "accs-apps" {
  name = "my-accs-apps"
}

resource "opc_storage_object" "example-go-app" {
  name         = "go-service.zip"
  container    = "${opc_storage_container.accs-apps.name}"
  file         = "${data.archive_file.example-go-app.output_path}"
  etag         = "${data.archive_file.example-go-app.output_md5}"
  content_type = "application/zip;charset=UTF-8"
}

resource "oraclepaas_application_container" "example-go-app" {
  name              = "GoWebApp"
  runtime           = "golang"
  archive_url       = "${opc_storage_container.accs-apps.name}/${opc_storage_object.example-go-app.name}"
  subscription_type = "HOURLY"

  deployment {
    memory    = "1G"
    instances = 1
  }
}

output "web_url" {
  value = "${oraclepaas_application_container.example-go-app.web_url}"
}
