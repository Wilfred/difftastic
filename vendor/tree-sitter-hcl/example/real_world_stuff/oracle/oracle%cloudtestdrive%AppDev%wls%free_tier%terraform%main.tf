# Create a Compartment

resource "oci_identity_compartment" "WLS_Compartment" {
  name           = var.Compartment_name
  description    = "Compartment for WLS resources created by terraform"
  compartment_id = var.oci_base_identity.compartment_id
  enable_delete  = false                              // true will cause this compartment to be deleted when running `terrafrom destroy`
}


# Create a Dynamic Group

locals {
  rule1 = "ALL {instance.compartment.id = '"
  rule2 = oci_identity_compartment.WLS_Compartment.id
  rule3 = "'}"
  }
  
  resource "oci_identity_dynamic_group" "WLS_Dynamic_Group" {
    #Required
    compartment_id = var.oci_base_identity.tenancy_id
    description = "WLS Resource Group"
    matching_rule = "${local.rule1}${local.rule2}${local.rule3}"
    name = var.Dynamic_Group_name
}


#Create Policies for the Dynamic Group

resource "oci_identity_policy" "WLS_Policy" {
    #Required
    compartment_id = oci_identity_compartment.WLS_Compartment.id
    description = "Required for WebLogic Cloud provisioning"
    name = var.Policy_name
    statements = ["Allow dynamic-group WLS_Dynamic_Group to use keys in compartment WLS_Compartment"]
}


# Create a Virtual Vault and a Key

resource "oci_kms_vault" "WLS_Vault" {
    #Required
    compartment_id = oci_identity_compartment.WLS_Compartment.id
    display_name = var.Vault_name
    vault_type = "VIRTUAL"
}

resource "oci_kms_key" "WLS_Key" {
    #Required
    compartment_id = oci_identity_compartment.WLS_Compartment.id
    display_name = var.Key_name
    key_shape {
        #Required
        algorithm = "AES"
        length = "16"
    }
    management_endpoint = oci_kms_vault.WLS_Vault.management_endpoint
}


# Encrypt Your Weblogic Password

resource "oci_kms_encrypted_data" "WLS_Encrypted_Data" {
    #Required
    crypto_endpoint = oci_kms_vault.WLS_Vault.crypto_endpoint
    key_id = oci_kms_key.WLS_Key.id
    plaintext = var.Base64_Password
}


# Outputs to be used for the Stack Creation

output "cryptographic_endpoint" {
    value = oci_kms_vault.WLS_Vault.crypto_endpoint
}

output "key_OCID" {
    value = oci_kms_key.WLS_Key.id
}

output "Encrypted_data" {
    value = oci_kms_encrypted_data.WLS_Encrypted_Data.ciphertext
}
