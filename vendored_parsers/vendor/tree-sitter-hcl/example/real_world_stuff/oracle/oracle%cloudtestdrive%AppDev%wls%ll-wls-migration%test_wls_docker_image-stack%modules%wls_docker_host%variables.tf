
variable "tenancy_ocid" {
}
/*
variable "user_ocid" {
}

variable "fingerprint" {
}

variable "private_key_path" {
}
*/
variable "region" {
}

variable "compartment_ocid" {
}

variable "ssh_public_key" {
}



variable "instance_shape" {
  default = "VM.Standard.E3.Flex"
}

variable "instance_ocpus" {
  default = 1
}

variable "instance_shape_config_memory_in_gbs" {
  default = 16
}


variable "db_size" {
  default = "50" # size in GBs
}


variable "opc_key" {
  type = map
  ## opc_key.public_key_openssh
  ## opc_key.private_key_pem  
}

variable "oracle_key" {
  type = map
  ## oracle_key.public_key_openssh
  ## oracle_key.private_key_pem
  
}