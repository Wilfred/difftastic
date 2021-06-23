# Copyright (c)  2021,  Oracle and/or its affiliates.
# Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

resource "oci_kms_vault" "ServerlessIntegration_Vault" {
    compartment_id = var.compartment_ocid
    display_name= "ServerlessIntegration_Vault"
    vault_type = "DEFAULT"
}

resource "oci_kms_key" "ServerlessIntegration_Vault_Key" {
  compartment_id      = var.compartment_ocid
  display_name        = "ServerlessIntegration_vault_key"
  management_endpoint = oci_kms_vault.ServerlessIntegration_Vault.management_endpoint

  key_shape {
    algorithm = "AES"
    length    = "16"
  }

  provisioner "local-exec" {
    command = <<-EOC
     oci vault secret create-base64 -c ${var.compartment_ocid} --secret-name "erp_password" --vault-id "${oci_kms_vault.ServerlessIntegration_Vault.id}" --key-id ${oci_kms_key.ServerlessIntegration_Vault_Key.id} --secret-content-content "${base64encode(random_password.ServerlessIntegration_FA_dummy_password.result)}"
    EOC
  }
}

# Generates a random password for seeding OCI
resource "random_password" "ServerlessIntegration_FA_dummy_password" {
  length  = 16
  special = true
  min_lower = 1
  min_upper = 1
  min_numeric = 1
  min_special = 1
  override_special = "!$^.,"
}

data "oci_vault_secrets" "erp_secret" {
    compartment_id = var.compartment_ocid
    name = "erp_password"
    vault_id = oci_kms_vault.ServerlessIntegration_Vault.id
    depends_on = [oci_kms_key.ServerlessIntegration_Vault_Key]
}
