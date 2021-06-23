# Copyright (c)  2021,  Oracle and/or its affiliates.
# Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

#
# This file creates the object storage buckets
#
resource "oci_objectstorage_bucket" "ServerlessIntegration_JSON_INBOUND" {
    compartment_id = var.compartment_ocid
    name = var.datafile_buckets.json_inbound_bucket_name
    namespace = var.oci-namespace
    object_events_enabled = true
}
resource "oci_objectstorage_bucket" "ServerlessIntegration_FAILED" {
   
    compartment_id = var.compartment_ocid
    name = var.datafile_buckets.failed_bucket_name
    namespace = var.oci-namespace
    object_events_enabled = true
}
resource "oci_objectstorage_bucket" "ServerlessIntegration_PROCESSING" {
   
    compartment_id = var.compartment_ocid
    name = var.datafile_buckets.processing_bucket_name
    namespace = var.oci-namespace
    object_events_enabled = true
}
resource "oci_objectstorage_bucket" "ServerlessIntegration_ZIPINBOUND" {
    compartment_id = var.compartment_ocid
    name = var.datafile_buckets.zip_inbound_bucket_name
    namespace = var.oci-namespace
    object_events_enabled = true
}
resource "oci_objectstorage_bucket" "ServerlessIntegration_SUCCESS" {
    compartment_id = var.compartment_ocid
    name = var.datafile_buckets.succeeded_bucket_name
    namespace = var.oci-namespace
    object_events_enabled = true
}
