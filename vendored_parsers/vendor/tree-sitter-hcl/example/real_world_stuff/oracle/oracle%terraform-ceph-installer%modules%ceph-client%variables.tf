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
  description = "The Name of the Operating System for the client"
}

variable "num_client" {
  description = "The number of client to create. For now it can only be 0 or 1."
}

variable "availability_domain_index" {
  description = "The availability domain where the client will be created" 
}

variable "hostname" {
  description = "The name of the instance"
}

variable "shape" {
  description = "The compute shape of the instances"
}

variable "subnet_id" {
  description = "The subnets where the instance will be created"
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

variable "ceph_deployer_ip" {
  description = "The IP of the Ceph deployer node"
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

variable "deployer_deploy" {
  description = "A Synchronization primitive for letting TF know that the deployment for the deployer is complete"
}

variable "new_cluster" {
  description = "A Synchronization primitive for letting TF know that the creation of the new cluster is complete"
}

variable "osd_deploy" {
  description = "A Synchronization primitive for letting TF know that the OSD deployment is complete"
}
