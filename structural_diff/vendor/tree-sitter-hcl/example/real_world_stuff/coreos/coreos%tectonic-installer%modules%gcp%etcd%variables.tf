/*
Copyright 2017 Google Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

variable "external_endpoints" {
  type = "list"
}

variable "instance_count" {
  type = "string"
}

variable "container_image" {
  type = "string"
}

variable "managed_zone_name" {
  type = "string"
}

variable "base_domain" {
  type = "string"
}

variable "cluster_name" {
  type = "string"
}

variable "master_subnetwork_name" {
  type = "string"
}

variable "cl_channel" {
  type = "string"
}

variable "zone_list" {
  type = "list"
}

variable "machine_type" {
  type = "string"
}

variable "disk_type" {
  type        = "string"
  description = "The type of volume for the root block device."
}

variable "disk_size" {
  type        = "string"
  description = "The size of the volume in gigabytes for the root block device."
}

variable "tls_enabled" {
  default = false
}

variable "ign_etcd_dropin_id_list" {
  type = "list"
}

variable "public_ssh_key" {
  default = ""
}

variable "ign_etcd_crt_id_list" {
  type = "list"
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
