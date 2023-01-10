// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable user {}
variable password {}
variable domain {}
variable git_repository {}

provider "oraclepaas" {
  version              = "~> 1.3"
  user                 = "${var.user}"
  password             = "${var.password}"
  identity_domain      = "${var.domain}"
  application_endpoint = "https://apaas.us.oraclecloud.com"
}

resource "oraclepaas_application_container" "example-node-app" {
  name              = "nodeWebApp"
  runtime           = "node"
  git_repository    = "${var.git_repository}"
  subscription_type = "HOURLY"

  deployment {
    memory    = "1G"
    instances = 1
  }

  manifest_file = "./manifest.json"
}

output "web_url" {
  value = "${oraclepaas_application_container.example-node-app.web_url}"
}
