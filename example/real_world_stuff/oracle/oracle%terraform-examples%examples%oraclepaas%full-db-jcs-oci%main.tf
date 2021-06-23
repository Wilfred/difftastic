// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

data "oci_core_subnet" "subnet" {
  subnet_id = "${var.subnet_ocid}"
}

locals {
  # java service name
  java_service_name = "tfjcsdemo"

  # object storage backup bucket name
  jcs_backup_bucket = "${local.java_service_name}_backup"

  # set the target Availability Domain (1, 2 or 3)
  AD                  = 3
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[local.AD - 1],"name")}"
}

// Create a new backup bucket for this service instance
resource "oci_objectstorage_bucket" "backup" {
  compartment_id = "${var.compartment_ocid}"
  name           = "${local.jcs_backup_bucket}"
  namespace      = "${var.tenancy}"
}

// Create the OCI database service instance
resource "oci_database_db_system" "database" {
  availability_domain = "${local.availability_domain}"
  compartment_id      = "${var.compartment_ocid}"
  subnet_id           = "${data.oci_core_subnet.subnet.id}"

  display_name            = "Example Terraformed DB for JCS"
  hostname                = "db4jcs01"
  shape                   = "VM.Standard2.2"
  node_count              = 1
  data_storage_size_in_gb = 256

  database_edition = "ENTERPRISE_EDITION"
  license_model    = "LICENSE_INCLUDED"

  ssh_public_keys = ["${trimspace(file(var.ssh_public_key_file))}"]

  db_home {
    display_name = "Database for JCS"
    db_version   = "12.2.0.1"

    database {
      db_name        = "DB4JCS01"
      pdb_name       = "JCSPDB01"
      character_set  = "AL32UTF8"
      admin_password = "my#Pa55_Word"
    }
  }
}

// Create the Java Cloud service instance
resource "oraclepaas_java_service_instance" "jcs" {
  name        = "${local.java_service_name}"
  description = "Example Terraformed JCS with OCI DB"

  edition                = "EE"            // SE EE SUITE
  service_version        = "12cRelease213" // 12cRelease213, 12cRelease212 12cR3, 11gR1
  metering_frequency     = "HOURLY"        // HOURLY MONTHLY
  bring_your_own_license = true

  ssh_public_key = "${file(var.ssh_public_key_file)}"

  # OCI Settings
  region              = "${var.region}"
  availability_domain = "${local.availability_domain}"
  subnet              = "${data.oci_core_subnet.subnet.id}"

  weblogic_server {
    shape = "VM.Standard2.1"

    connect_string = "//${oci_database_db_system.database.hostname}-scan.${data.oci_core_subnet.subnet.subnet_domain_name}:1521/${oci_database_db_system.database.db_home.0.database.0.pdb_name}.${data.oci_core_subnet.subnet.subnet_domain_name}"

    database {
      username = "sys"
      password = "${oci_database_db_system.database.db_home.0.database.0.admin_password}"
    }

    admin {
      username = "weblogic"
      password = "Weblogic_1"
    }
  }

  backups {
    cloud_storage_container = "https://swiftobjectstorage.${var.region}.oraclecloud.com/v1/${var.tenancy}/${local.jcs_backup_bucket}"
    cloud_storage_username  = "${oci_identity_user.psm-user.name}"
    cloud_storage_password  = "${oci_identity_auth_token.psm_auth_token.token}"
  }
}
