// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

output instance_ip {
  description = "the private ip of the instance"
  value       = oci_core_instance.management_server.private_ip
}