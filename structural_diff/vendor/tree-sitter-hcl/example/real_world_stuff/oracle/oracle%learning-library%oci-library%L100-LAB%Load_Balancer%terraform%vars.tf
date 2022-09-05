variable "tenancy_ocid" {}
variable "compartment_ocid" {}
variable "user_ocid" {}
variable "fingerprint" {}
variable "private_key_path" {}
variable "region" {}

variable "vcn_cidr_block" {
  default = "10.0.0.0/16"
}

variable "security_list_display_name" {
  default = "LB-Security-List"
}
