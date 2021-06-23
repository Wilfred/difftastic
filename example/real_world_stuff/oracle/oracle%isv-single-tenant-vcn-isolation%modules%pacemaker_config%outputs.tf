// Copyright (c) 2020, Oracle and/or its affiliates.
// Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.

output config {
  description = "list of commands to update the pacemaker config file"
  value       = local.pacemaker_config
}