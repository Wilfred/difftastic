// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable "name" {}
variable "region" {}
variable "ip_network" {}
variable "vnic_set" {}

variable "servers" {
  type = "list"
}

variable "dns_name" {}

variable "cert_pem" {}
variable "ca_cert_pem" {}
variable "private_key_pem" {}
