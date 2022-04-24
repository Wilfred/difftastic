// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

output "canonical_host_name" {
  value = "${opc_lbaas_load_balancer.lb1.canonical_host_name}"
}
