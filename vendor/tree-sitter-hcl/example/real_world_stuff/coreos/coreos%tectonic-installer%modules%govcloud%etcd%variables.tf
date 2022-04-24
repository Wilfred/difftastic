variable "base_domain" {
  type = "string"
}

variable "cluster_id" {
  type = "string"
}

variable "cluster_name" {
  type = "string"
}

variable "container_linux_channel" {
  type = "string"
}

variable "container_linux_version" {
  type = "string"
}

variable "instance_count" {
  default = "3"
}

variable "ssh_key" {
  type = "string"
}

variable "subnets" {
  type = "list"
}

variable "external_endpoints" {
  type = "list"
}

variable "container_image" {
  type = "string"
}

variable "ec2_type" {
  type = "string"
}

variable "extra_tags" {
  description = "Extra AWS tags to be applied to created resources."
  type        = "map"
  default     = {}
}

variable "root_volume_type" {
  type        = "string"
  description = "The type of volume for the root block device."
}

variable "root_volume_size" {
  type        = "string"
  description = "The size of the volume in gigabytes for the root block device."
}

variable "root_volume_iops" {
  type        = "string"
  default     = "100"
  description = "The amount of provisioned IOPS for the root block device."
}

variable "sg_ids" {
  type        = "list"
  description = "The security group IDs to be applied."
}

variable "tls_enabled" {
  default = false
}

variable "ign_etcd_dropin_id_list" {
  type = "list"
}

variable "s3_bucket" {
  type = "string"
}

variable "ign_etcd_crt_id_list" {
  type = "list"
}

variable "etcd_iam_role" {
  type        = "string"
  default     = ""
  description = "IAM role to use for the instance profiles of etcd nodes."
}

variable "dns_server_ip" {
  type    = "string"
  default = ""
}

variable "ign_profile_env_id" {
  type    = "string"
  default = ""
}

variable "ign_systemd_default_env_id" {
  type    = "string"
  default = ""
}

variable "ign_ntp_dropin_id" {
  type = "string"
}
