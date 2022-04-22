// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

resource "opc_compute_ip_network" "ipnetwork" {
  name              = "${var.name}"
  ip_address_prefix = "${var.cidr}"
}
