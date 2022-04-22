// Copyright © 2017 Oracle and/or its affiliates.  All rights reserved.
// Licensed under the Universal Permissive License v 1.0

resource "opc_compute_ip_network_exchange" "exchange" {
  name = "${var.ip_exchange_name}"
  tags = "${var.tags}"
}

resource "opc_compute_ip_network" "network" {
  count               = "${length(var.subnet_cidrs)}"
  name                = "${element(var.subnet_names, count.index)}"
  ip_address_prefix   = "${element(var.subnet_cidrs, count.index)}"
  ip_network_exchange = "${opc_compute_ip_network_exchange.exchange.name}"
  public_napt_enabled = "${contains(var.public_napt_subnets, element(var.subnet_names, count.index))}"
  tags                = "${var.tags}"
}
