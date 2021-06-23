// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

data "oci_identity_compartment" "compartment" {
  id = "${var.compartment_ocid}"
}

// Provision PSM policies in the root compartment of the home region to enable the target
// compartment for PSM services deployment
resource "oci_identity_policy" "psm" {
  provider = "oci.home"

  compartment_id = "${var.tenancy_ocid}"
  description    = "PSM Policies for Compartment ${data.oci_identity_compartment.compartment.name}"
  name           = "Enable-PSM-for-${data.oci_identity_compartment.compartment.name}"

  statements = [
    "Allow service PSM to inspect vcns in compartment ${data.oci_identity_compartment.compartment.name}",
    "Allow service PSM to use subnets in compartment ${data.oci_identity_compartment.compartment.name}",
    "Allow service PSM to use vnics in compartment ${data.oci_identity_compartment.compartment.name}",
    "Allow service PSM to manage security-lists in compartment ${data.oci_identity_compartment.compartment.name}",
    "Allow service PSM to inspect database-family in compartment ${data.oci_identity_compartment.compartment.name}",
  ]
}

resource "oci_identity_user" "psm-user" {
  provider = "oci.home"

  compartment_id = "${var.tenancy_ocid}"
  description    = "API only user for PSM PaaS Service Backups Object Storage Access"
  name           = "psm.user"
}

resource "oci_identity_group" "psm-backup-group" {
  provider = "oci.home"

  compartment_id = "${var.tenancy_ocid}"
  description    = "PSM PaaS Service Backups Group "
  name           = "${var.psm_backup_group_name}"
}

resource "oci_identity_user_group_membership" "psm-user" {
  provider = "oci.home"

  group_id = "${oci_identity_group.psm-backup-group.id}"
  user_id  = "${oci_identity_user.psm-user.id}"
}

resource "oci_identity_user_capabilities_management" "psm-user" {
  provider = "oci.home"
  user_id  = "${oci_identity_user.psm-user.id}"

  can_use_api_keys             = true
  can_use_auth_tokens          = true
  can_use_console_password     = false
  can_use_customer_secret_keys = false
  can_use_smtp_credentials     = false
}

resource "oci_identity_auth_token" "psm_auth_token" {
  provider = "oci.home"

  description = "Auth Token for PSM PaaS Service Backup Bucket access"
  user_id     = "${oci_identity_user.psm-user.id}"
}

// Provision the object storage bucket access policy
// This needs to be created on the SWIFT API Designated Compartment - which is typcially the
// root compartment
resource "oci_identity_policy" "psm-backup" {
  provider = "oci.home"

  compartment_id = "${var.tenancy_ocid}"
  description    = "PSM PaaS Service Backup Bucket Access Policy "
  name           = "Enable-${local.jcs_backup_bucket}-access"

  statements = [
    "Allow group ${oci_identity_group.psm-backup-group.name} to manage objects in compartment ${data.oci_identity_compartment.compartment.name} where target.bucket.name='${local.jcs_backup_bucket}'",
  ]
}
