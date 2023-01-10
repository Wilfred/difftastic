# Copyright (c)  2021,  Oracle and/or its affiliates.
# Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

resource "oci_ons_notification_topic" "ServerlessIntegration_ERROR_TOPIC" {
    compartment_id = var.compartment_ocid
    name = "ServerlessIntegration_ERROR_TOPIC"
    description = "All error messages from the ERP integration flow end up being posted here"
}
resource "oci_ons_notification_topic" "ServerlessIntegration_INFO_TOPIC" {
    compartment_id = var.compartment_ocid
    name = "ServerlessIntegration_INFO_TOPIC"
    description = "All informational messages from the ERP integration flow end up being posted here"
}


resource "oci_ons_subscription" "ServerlessIntegration_info_sub" {
    compartment_id = var.compartment_ocid
    endpoint =  var.notification_email
    protocol = "EMAIL"
    topic_id = oci_ons_notification_topic.ServerlessIntegration_ERROR_TOPIC.id
}

resource "oci_ons_subscription" "ServerlessIntegration_error_sub" {
    compartment_id = var.compartment_ocid
    endpoint =  var.notification_email
    protocol = "EMAIL"
    topic_id = oci_ons_notification_topic.ServerlessIntegration_INFO_TOPIC.id
}
