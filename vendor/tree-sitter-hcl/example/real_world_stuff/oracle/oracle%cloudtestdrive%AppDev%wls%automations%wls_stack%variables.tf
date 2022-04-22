# OCI Service
variable "tenancy_ocid" {
}

variable "compartment_ocid" {
}

variable "user_count" {
  default = 1
}

variable "availability_domain_count" {
  default = 3
}

variable "gold_image_ocid" {
  default = "na"
}

variable "vm_subnet_id1" {
  default = "na"
}

variable "vm_subnet_id2" {
  default = "na"
}

variable "vm_subnet_id3" {
  default = "na"
}

variable "vm_subnet_id" {
  default = ["na1","na2", "na3"]
}

variable "ssh_public_key" {
  default = "keys/atpkey.pub"
}

variable "user_ocid" {
}

variable "fingerprint" {
}

variable "private_key_path" {
}

variable "region" {
  default = "eu-frankfurt-1"
}

variable "disable_auto_retries" {
  default = "false"
}

variable "private_key_password" {
  default = ""
}

variable "compute_shape" {
  default = "VM.Standard2.1"
}

variable "VM_vcn_id" {
  default = ""
}
