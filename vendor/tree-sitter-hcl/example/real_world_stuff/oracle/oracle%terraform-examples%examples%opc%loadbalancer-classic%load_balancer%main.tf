// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

# main load balancer instance
resource "opc_lbaas_load_balancer" "lb1" {
  name        = "${var.name}"
  region      = "${var.region}"
  description = "My Example Load Balancer"

  scheme            = "INTERNET_FACING"
  ip_network        = "${var.ip_network}"
  permitted_methods = ["GET", "HEAD", "POST", "PUT"]
}

# Server Pool for backend Origin Servers
resource "opc_lbaas_server_pool" "serverpool1" {
  load_balancer = "${opc_lbaas_load_balancer.lb1.id}"

  name     = "serverpool1"
  servers  = ["${var.servers}"]
  vnic_set = "${var.vnic_set}"
}

# Round Robin Load Balancing Policy
resource "opc_lbaas_policy" "load_balancing_mechanism_policy" {
  load_balancer = "${opc_lbaas_load_balancer.lb1.id}"
  name          = "example_load_balancing_mechanism_policy"

  load_balancing_mechanism_policy {
    load_balancing_mechanism = "round_robin"
  }
}

# Listener to direct HTTP traffic for ${var.dns_name} to serverpool1
resource "opc_lbaas_listener" "listener1" {
  load_balancer = "${opc_lbaas_load_balancer.lb1.id}"
  name          = "listener-http"
  port          = 80

  balancer_protocol = "HTTP"
  server_protocol   = "HTTP"
  server_pool       = "${opc_lbaas_server_pool.serverpool1.uri}"

  virtual_hosts = ["${var.dns_name}"]

  policies = [
    "${opc_lbaas_policy.load_balancing_mechanism_policy.uri}",
  ]
}

# Server Certificate
resource "opc_lbaas_certificate" "cert1" {
  name              = "server-cert"
  type              = "SERVER"
  private_key       = "${var.private_key_pem}"
  certificate_body  = "${var.cert_pem}"
  certificate_chain = "${var.ca_cert_pem}"
}

# Listener to direct HTTPS traffic for ${var.dns_name} to serverpool1
resource "opc_lbaas_listener" "listener2" {
  load_balancer = "${opc_lbaas_load_balancer.lb1.id}"
  name          = "listener-https"
  port          = 443

  balancer_protocol = "HTTPS"
  server_protocol   = "HTTP"
  certificates      = ["${opc_lbaas_certificate.cert1.uri}"]
  server_pool       = "${opc_lbaas_server_pool.serverpool1.uri}"

  virtual_hosts = ["${var.dns_name}"]

  policies = [
    "${opc_lbaas_policy.load_balancing_mechanism_policy.uri}",
  ]
}
