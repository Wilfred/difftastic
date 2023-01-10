# Copyright (c)  2021,  Oracle and/or its affiliates.
# Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

variable "function" {}
variable "compartment" {}
variable "functionsapp" {}
variable "application" {}
variable "registry" {}

locals {
  fnroot = "${abspath(path.root)}/${var.function.fnpath}"
  fnyaml = "${local.fnroot}/${var.function.yamlfile}"
  rawfndata = yamldecode(file(local.fnyaml))
  fndata = {
    name = local.rawfndata.name
    version = local.rawfndata.version
    memory = local.rawfndata.memory
    timeout = var.function.timeout
    image = "${var.registry}/${local.rawfndata.name}:${local.rawfndata.version}"
  }
}

resource "null_resource" "deploy_function" {
  triggers = {
    fnversion = local.fndata.version
  }
  provisioner "local-exec" {
    working_dir = local.fnroot
    command = <<-EOC
      fn build
      fn push
    EOC
  }
}

resource "oci_functions_function" "test_function" {
  depends_on = [ null_resource.deploy_function ]
  application_id = var.application
  display_name = local.fndata.name
  image = local.fndata.image
  memory_in_mbs = local.fndata.memory
  timeout_in_seconds = local.fndata.timeout
}

output "function_ocid" {
    value = oci_functions_function.test_function.id
}
