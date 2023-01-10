// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

output instance_ip {
  description = "the public ip address of the bastion host instance"
  value       = oci_core_instance.bastion_server.public_ip
}