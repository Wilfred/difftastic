
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
  description = "The Name of the Operating System for all OSDs"
}

variable "instance_count" {
  description = "The Number of OSDs to create"
}

variable "availability_domain_index_list" {
  description = "The availability domains where the OSDs will be created (as a list of indexes)"
  type = "list"
}

variable "hostname_prefix" {
  description = "The prefix to the name of the instances. The name will be appended by an hyphen, followed by an integer starting at 0"
}

variable "shape" {
  description = "The compute shape of the instances"
}

variable "subnet_id_list" {
  description = "The subnets where the OSDs will be created (as a list of indexes)"
  type = "list"
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

variable "create_volume" {
  description = "Controls whether or not to create a block storage. Create if the value is set to true."
  default = false
}

variable "volume_name_prefix" {
  description = "The prefix to the name of the volumes. The name will be appended by an hyphen, followed by an integer starting at 0"
}

variable "volume_size_in_gbs" {
  description = "The size of the volume in GB"
}

variable "volume_attachment_type" {
  description = "The type of attachment to the instance. Currently, iscsi is the only option"
}

variable "scripts_src_directory" {
  description = "Path to the directory where the scripts and config files are"
}

variable "scripts_dst_directory" {
  description = "Path to the directory where the scripts and config files will be copied to"
}

variable "block_device_for_ceph" {
  description = "A list of the names for the block deivices that can be used for Ceph. Currently we use two values: 'sbd' for block storage and 'nvme0n1 for instances with NVMe SSDs"
  type = "list"
}

variable "deployer_deploy" {
  description = "A Synchronization primitive for letting TF know that the deployment for the deployer is complete"
}

variable "new_cluster" {
  description = "A Synchronization primitive for letting TF know that the creation of the new cluster is complete"
}
