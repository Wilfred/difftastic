// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable "name" {}

variable "servers" {
  type = "list"
}

variable "server_acl" {}
variable "server_count" {}
variable "ssh_user" {}
variable "private_ssh_key_file" {}
variable "public_ssh_key_file" {}
