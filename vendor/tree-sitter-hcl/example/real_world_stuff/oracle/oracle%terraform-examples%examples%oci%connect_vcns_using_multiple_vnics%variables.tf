// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.
variable "tenancy_ocid" {}

variable "user_ocid" {}
variable "fingerprint" {}
variable "private_key_path" {}
variable "private_key_password" {}
variable "compartment_ocid" {}
variable "region" {}
variable "ssh_public_key_path" {}

variable "ssh_private_key_path" {}

# Choose an Availability Domain
variable "AD" {
  default = "1"
}

variable "InstanceShape" {
  default = "VM.Standard2.1"
}

variable "InstanceShape2" {
  default = "VM.Standard2.1"
}

variable "InstanceImageOCID" {
  type = "map"

  default = {
    // See https://docs.us-phoenix-1.oraclecloud.com/images/
    // Oracle-provided image "Oracle-Linux-7.4-2018.02.21-1"
    us-phoenix-1 = "ocid1.image.oc1.phx.aaaaaaaaupbfz5f5hdvejulmalhyb6goieolullgkpumorbvxlwkaowglslq"

    us-ashburn-1   = "ocid1.image.oc1.iad.aaaaaaaajlw3xfie2t5t52uegyhiq2npx7bqyu4uvi2zyu3w3mqayc2bxmaa"
    eu-frankfurt-1 = "ocid1.image.oc1.eu-frankfurt-1.aaaaaaaa7d3fsb6272srnftyi4dphdgfjf6gurxqhmv6ileds7ba3m2gltxq"
    uk-london-1    = "ocid1.image.oc1.uk-london-1.aaaaaaaaa6h6gj6v4n56mqrbgnosskq63blyv2752g36zerymy63cfkojiiq"
  }
}

# The First VCN
variable "vcn_cidr" {
  default = "10.0.0.0/16"
}

variable "mgmt_subnet_cidr" {
  default = "10.0.0.0/24"
}

variable "private_subnet_cidr" {
  default = "10.0.1.0/24"
}

variable "vcn_cidr2" {
  default = "10.1.0.0/16"
}

variable "mgmt_subnet_cidr2" {
  default = "10.1.0.0/24"
}

variable "private_subnet_cidr2" {
  default = "10.1.1.0/24"
}
