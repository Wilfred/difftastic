// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.

variable "compartment_ocid" {}
variable "availability_domain" {}
variable "display_name" {}
variable "size_in_gbs" {}

variable "existing_volume_id" {
  default = ""
}
