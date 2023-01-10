#===============================================================
# Module Inputs
#===============================================================

variable "tenancy_ocid" {
  description = "The OCI tenancy id"
}

variable "compartment_ocid" {
  description = "The OCI compartment id"
}

variable "instance_os" {
  description = "The Name of the Operating System for the instance"
}

variable "availability_domain_index" {
  description = "The availability domain where the deployer will be created" 
}

variable "hostname" {
  description = "The the name of the client" 
}

variable "shape" {
  description = "The compute shape of the instance(s)"
}

variable "subnet_id" {
  description = "The subnet where the deployer will be created" 
}

variable "ssh_public_key_file" {
  description = "The public key that will be installed on to the new instance(s) for ssh login"
}

variable "ssh_private_key_file" {
  description = "The private key that for ssh login to the new instance(s)"
}

variable "ssh_username" {

  description = "The username for ssh login to the instance(s)"
}

variable "instance_create_timeout" {
  description = "The timeout value for instance creation"
}

variable "scripts_src_directory" {
  description = "Path to the directory where the scripts and config files are"
}

variable "scripts_dst_directory" {
  description = "Path to the directory where the scripts and config files will be copied to"
}
