# Copyright (c)  2021,  Oracle and/or its affiliates.
# Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

resource "oci_events_rule" "ServerlessIntegration_PROCESS_ERP_JSON" {
    actions {
        actions {
            action_type = "FAAS"
            is_enabled = "true"
            function_id= module.functions["erp-transform-file"].function_ocid
            description = "Call erp-transform-file to transform the file from JSON to ERP format"
        }
        actions {
            action_type = "ONS"
            is_enabled = "true"
            description = "Send Notification"
            topic_id = oci_ons_notification_topic.ServerlessIntegration_INFO_TOPIC.id
        }
    }
    compartment_id = var.compartment_ocid
    condition =  jsonencode({
                    eventType: "com.oraclecloud.objectstorage.createobject"
                    data: { additionalDetails: {
                                bucketName: var.datafile_buckets.json_inbound_bucket_name
                            }
                        }
                    }
                )





    display_name = "ServerlessIntegration_PROCESS_ERP JSON"
    is_enabled =true
}

resource "oci_events_rule" "ServerlessIntegration_PROCESS_ERP_ZIP" {
    actions {
        actions {
            action_type = "FAAS"
            is_enabled = "true"
            function_id= module.functions["erp-file-load"].function_ocid
            description = "Call erp-file=load to load the file into Oracle ERP"
        }
        actions {
            action_type = "ONS"
            is_enabled = "true"
            description = "Send Notification"
            topic_id = oci_ons_notification_topic.ServerlessIntegration_INFO_TOPIC.id
        }
    }
    compartment_id = var.compartment_ocid
    condition =  jsonencode({
                    eventType: "com.oraclecloud.objectstorage.createobject"
                    data: { additionalDetails: {
                                bucketName: var.datafile_buckets.zip_inbound_bucket_name
                            }
                        }
                    }
                )

                
    display_name = "ServerlessIntegration_PROCESS_ERP_ZIP"
    is_enabled =true
}