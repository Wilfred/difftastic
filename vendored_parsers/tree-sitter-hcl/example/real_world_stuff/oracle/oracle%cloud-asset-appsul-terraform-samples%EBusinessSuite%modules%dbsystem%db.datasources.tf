/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


# Get CPU and node and node count for a db shape
data "oci_database_db_system_shapes" "db_system_shapes" {
	availability_domain = "${element(var.availability_domain, count.index)}"
	compartment_id = "${var.compartment_ocid}"
    filter {
        name = "name"
        values = ["${var.db_instance_shape}"]
    }
}