/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "DBNodeHostname" {
  value = ["${oci_database_db_system.jdedb.*.display_name}"]
}
