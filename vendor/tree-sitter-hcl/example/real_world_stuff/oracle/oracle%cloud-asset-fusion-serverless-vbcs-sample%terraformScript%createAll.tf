//    Copyright (c) 2020, Oracle and/or its affiliates. All rights reserved.
//    Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.
//


variable "tenancy_ocid" {}
variable "user_ocid" {}
variable "fingerprint" {}
variable "private_key_path" {}
variable "compartment_ocid" {}
variable "region" {}
variable "region_code" {}
variable "tenancy_namespace" {}
variable "repos_name" {}
variable "fusion_hostname" {}
variable "idcs_app_url" {}
variable "idcs_app_scopeid" {}
variable "idcs_app_clientid" {}
variable "idcs_app_secret" {}
variable "debug_level" {}
variable "gtw_uri_base" {}

variable "name_prefix" {}

provider "oci" {
  tenancy_ocid     = "${var.tenancy_ocid}"
  user_ocid        = "${var.user_ocid}"
  fingerprint      = "${var.fingerprint}"
  private_key_path = "${var.private_key_path}"
  region           = "${var.region}"
}


resource "oci_core_internet_gateway" "test_network_entity" {
  compartment_id = var.compartment_ocid
  vcn_id         = oci_core_vcn.test_vcn.id
  display_name   = "${var.name_prefix}_cloudnativesaas-internet-gateway"
}

resource "oci_core_default_route_table" "test_route_table" {
  manage_default_resource_id = "${oci_core_vcn.test_vcn.default_route_table_id}"

  route_rules {
    cidr_block        = "0.0.0.0/0"
    network_entity_id = oci_core_internet_gateway.test_network_entity.id
  }

}

resource "oci_core_default_security_list" "test_sec_list" {
  manage_default_resource_id = "${oci_core_vcn.test_vcn.default_security_list_id}"

    egress_security_rules {
    protocol  = "all" 
    destination = "0.0.0.0/0"
    stateless = false
  }

  // allow inbound ssh traffic 
  ingress_security_rules {
    protocol  = "6"         // tcp
    source    = "0.0.0.0/0"
    stateless = false

    tcp_options {
      // These values correspond to the destination port range.
      min = 22
      max = 22
    }
  }

  // allow inbound icmp traffic of a specific type
  ingress_security_rules {
    protocol  = 1
    source    = "0.0.0.0/0"
    stateless = false

    icmp_options {
      type = 3
      code = 4
    }
  }

  // allow inbound icmp traffic of a specific type
  ingress_security_rules {
    protocol  = 1
    source    = "${oci_core_vcn.test_vcn.cidr_block}"
    stateless = false

    icmp_options {
      type = 3
    }
  }

  ingress_security_rules {
    protocol  = "6"         // tcp
    source    = "0.0.0.0/0"
    stateless = false

    tcp_options {
      min = 443
      max = 443
    }
  }

}

resource "oci_core_subnet" "test_subnet" {
  cidr_block                 = "10.11.0.0/16"
  compartment_id             = var.compartment_ocid
  display_name               = "${var.name_prefix}_cloudnativesaas-subnet"
  vcn_id                     = oci_core_vcn.test_vcn.id
}


resource "oci_core_vcn" "test_vcn" {
  cidr_block     = "10.11.0.0/16"
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.name_prefix}_cloudnativesaas_vcn"
}

resource "oci_functions_application" "test_application" {
  #Required
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.name_prefix}_cloudnativesaas-application"
  subnet_ids     = ["${oci_core_subnet.test_subnet.id}"]
  config = {
     "fusion_hostname" = "${var.fusion_hostname}", 
     "idcs_app_url" = "${var.idcs_app_url}"
     "idcs_app_scopeid" = "${var.idcs_app_scopeid}"
     "idcs_app_clientid" = "${var.idcs_app_clientid}"
     "idcs_app_secret" = "${oci_kms_encrypted_data.test_encrypted_data.ciphertext}"
     "debug_level" = "${var.debug_level}"
     "gtw_uri_base" = "${var.gtw_uri_base}"
     "kms_endpoint" = "${oci_kms_vault.test_vault.crypto_endpoint}"
     "kms_idcs_secret_key" = "${oci_kms_key.test_key.id}"
  }
}

resource "oci_kms_vault" "test_vault" {
	compartment_id = "${var.compartment_ocid}"
	display_name = "${var.name_prefix}_cloudnativesaas_vault"
	vault_type = "DEFAULT"
}

resource "oci_kms_key" "test_key" {
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.name_prefix}_cloudnativesaas_key"
  management_endpoint = "${oci_kms_vault.test_vault.management_endpoint}"

  key_shape {
    algorithm = "AES"
    length    = "16"
  }
}

resource "oci_kms_encrypted_data" "test_encrypted_data" {
    crypto_endpoint = "${oci_kms_vault.test_vault.crypto_endpoint}"
    key_id = "${oci_kms_key.test_key.id}"
    plaintext = base64encode("${var.idcs_app_secret}")
}

resource "oci_functions_function" "auth_function" {
  application_id = "${oci_functions_application.test_application.id}"
  display_name   = "idcs_ocigw"
  image          = "${var.region_code}.ocir.io/${var.tenancy_namespace}/${var.repos_name}/idcs_ocigw:0.0.80"
  memory_in_mbs  = "128"
  timeout_in_seconds = "90"
}

resource "oci_functions_function" "test_function" {
  application_id = "${oci_functions_application.test_application.id}"
  display_name   = "gwauthtest"
  image          = "${var.region_code}.ocir.io/${var.tenancy_namespace}/${var.repos_name}/gwauthtest:0.0.45"
  memory_in_mbs  = "128"
  timeout_in_seconds = "30"
}

resource "oci_functions_function" "saas_function" {
  application_id = "${oci_functions_application.test_application.id}"
  display_name   = "saasopportunitiesfn"
  image          = "${var.region_code}.ocir.io/${var.tenancy_namespace}/${var.repos_name}/saasopportunitiesfn:0.0.139"
  memory_in_mbs  = "128"
  timeout_in_seconds = "30"
}

resource "oci_apigateway_gateway" "test_gateway" {
  compartment_id = "${var.compartment_ocid}"
  endpoint_type  = "PUBLIC"
  subnet_id      = "${oci_core_subnet.test_subnet.id}"
  display_name = "${var.name_prefix}_cloudnativesaas_api_gw"
}

resource "oci_apigateway_deployment" "test_deployment" {
  compartment_id = "${var.compartment_ocid}"
  gateway_id     = "${oci_apigateway_gateway.test_gateway.id}"
  path_prefix    = "/cloudnativesaas"

  specification {
    request_policies {
      authentication {
        function_id = "${oci_functions_function.auth_function.id}"
        type        = "CUSTOM_AUTHENTICATION"
        token_header  = "Authorization"
      }
    }

    routes {
      backend {
        type = "ORACLE_FUNCTIONS_BACKEND"
        function_id  = "${oci_functions_function.saas_function.id}"
      }
      path = "/opportunities"
      methods = ["GET"]
    }

    routes {
      backend {
        type = "ORACLE_FUNCTIONS_BACKEND"
        function_id  = "${oci_functions_function.saas_function.id}"
      }
      path = "/opportunities/{optyid}"
      methods = ["GET","PATCH"]
    }

    routes {
      backend {
        type = "ORACLE_FUNCTIONS_BACKEND"
        function_id  = "${oci_functions_function.test_function.id}"
      }
      path = "/gwauthtest"
      methods = ["GET"]
    }

  }
    display_name = "${var.name_prefix}_cloudnativesaas_deployment"
  }


