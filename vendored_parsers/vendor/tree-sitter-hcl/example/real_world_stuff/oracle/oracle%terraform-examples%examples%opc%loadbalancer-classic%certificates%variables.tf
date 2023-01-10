// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable "dns_names" {
  type = "list"
}

variable "organization" {}
variable "common_name" {}
variable "province" {}
variable "country" {}

variable "validity_period_hours" {
  default = "8760" // 365 days
}

variable "early_renewal_hours" {
  default = "720" // 30 days
}
