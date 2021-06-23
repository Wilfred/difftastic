variable "label_prefix" {
  description = "To create unique identifier for multiple clusters in a compartment."
  type        = "string"
}

variable "compartment_ocid" {}


variable "tenancy_ocid" {}
variable "user_ocid" {}
variable "fingerprint" {}
variable "private_key_path" {}

variable "private_key_password" {
  default = ""
}

variable "region" {
  default = "us-phoenix-1"
}
