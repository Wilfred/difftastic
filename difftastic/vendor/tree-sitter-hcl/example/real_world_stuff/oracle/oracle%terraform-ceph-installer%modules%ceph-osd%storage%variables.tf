#===============================================================
# Module Inputs
#===============================================================

variable "compartment_id" {
  description = "The OCI compartment id"
}

variable "instance_id" {
  description = "The list of compute instance ids to which volume will be attached"
  type = "list"
}

variable "instance_count" {
  description = "The number of compute instances; This many number of volumes will be created"
  default = "1"
}

variable "username" {
  description = "The username for login to the instance(s)"
  default = "opc"
}

variable "ssh_private_key" {
  description = "The ssh private key for login to the instance(s)"
}

variable "availability_domain" {
  description = "The list of availability domains"
  type = "list"
}

variable "availability_domain_index" {
  description = "The index for the availability domain in the list; this is where the volume will be created"
  type = "list"
}

variable "volume_name_prefix" {
  description = "The prefix to the name of the volume. The name will be appended by an hyphen, followed by an integer starting at 0"
}

variable "volume_size_in_gbs" {
  description = "The size of the volume in GB"
  default = "1024"
}

variable "volume_attachment_type" {
  description = "The type of attachment to the instacne. Currently, iscsi is the only option"
  default = "iscsi"
}

variable "host_addresses" {
  description = "The IP address of the host instance "
  type = "list"
}

