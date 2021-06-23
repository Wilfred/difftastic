# Copyright (c)  2021,  Oracle and/or its affiliates.
# Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

locals {
    rawctxdata = yamldecode(file(var.functionsapp.contextfile))
}
resource "oci_functions_application" "ServerlessIntegration_App" {
  compartment_id = var.compartment_ocid
  syslog_url = var.functionsapp.syslogurl
  display_name = var.functionsapp.appname
  subnet_ids = [oci_core_subnet.ServerlessIntegration_subnet.id]
  config = jsondecode(templatefile(var.functionsapp.config_template, {
    apigw = oci_apigateway_gateway.ServerlessIntegration_gateway
    datafile_buckets= var.datafile_buckets
    fnapp = var.functionsapp
    fn = local.functionmap
    ons_error_topic_ocid = oci_ons_notification_topic.ServerlessIntegration_ERROR_TOPIC.id
    ons_info_topic_ocid = oci_ons_notification_topic.ServerlessIntegration_INFO_TOPIC.id
    erp_password_vault_ocid = data.oci_vault_secrets.erp_secret.secrets[0].id
    fusion_properties = var.fusion_properties
    fusion_server = var.fusion_server
  }))
}

module "functions" {
  source = "./functionsmodule"
  for_each = local.functionmap
  function = each.value
  compartment = var.compartment_ocid
  functionsapp = var.functionsapp
  application = oci_functions_application.ServerlessIntegration_App.id
  registry = local.rawctxdata.registry
}




