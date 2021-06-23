# Copyright (c)  2021,  Oracle and/or its affiliates.
# Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

resource "oci_apigateway_gateway" "ServerlessIntegration_gateway" {
  compartment_id = var.compartment_ocid
  endpoint_type = "PUBLIC"
  display_name = "ServerlessIntegration_APIGW"
  subnet_id = oci_core_subnet.ServerlessIntegration_subnet.id
}

resource "oci_apigateway_deployment" "ServerlessIntegration_Deployment" {
  compartment_id = var.compartment_ocid
  display_name = "ServerlessIntegration_Deployment"
  gateway_id = oci_apigateway_gateway.ServerlessIntegration_gateway.id
  path_prefix = var.functionsapp.pathprefix
  specification {
    request_policies {
    }
    dynamic "routes" {
      for_each = {for func in local.functions: basename(func.fnpath)=>func if length(func.methods)>0 && func.path!=null}
      content {
        backend {
          type = "ORACLE_FUNCTIONS_BACKEND"
          function_id = module.functions[routes.key].function_ocid
        }
        path = routes.value.path
        methods = routes.value.methods
      }
    }
  }
}
