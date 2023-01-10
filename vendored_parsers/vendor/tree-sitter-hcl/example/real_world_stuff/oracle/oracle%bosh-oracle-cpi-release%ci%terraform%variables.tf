# Authentication
variable "oracle_tenancy_ocid" {}
variable "oracle_user_ocid" {}
variable "oracle_fingerprint" {}
variable "oracle_private_key_path" {}

# Compartment to create resources in
variable "director_compartment_name" {}
variable "director_vcn" {}

# Cloud services
variable oracle_region {
    default = "us-phoenix-1"
}

# Networking
variable "vcn_cidr" {
    default = "10.0.0.0/16"
}

variable "director_subnet_cidr" {
}

variable "director_ad" {
    default  = "WZYX:PHX-AD-1"
}

variable "bats_subnet1_cidr" {
}

variable "bats_subnet2_cidr" {
}
