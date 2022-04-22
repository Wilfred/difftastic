// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable "user" {}
variable "password" {}
variable "domain" {}
variable "endpoint" {}

variable "public_ssh_key" {
  default = "~/.ssh/id_rsa.pub"
}
