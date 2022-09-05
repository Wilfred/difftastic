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

variable "cl_channel" {
  type = "string"
}

variable "cluster_name" {
  type = "string"
}

variable "region" {
  type = "string"
}

variable "machine_type" {
  type = "string"
}

variable "master_targetpool_self_link" {
  type = "string"
}

variable "master_subnetwork_name" {
  type = "string"
}

variable "instance_count" {
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

variable "ign_bootkube_service_id" {
  type        = "string"
  description = "The ID of the bootkube systemd service unit"
}

variable "ign_bootkube_path_unit_id" {
  type = "string"
}

variable "ign_tectonic_service_id" {
  type        = "string"
  description = "The ID of the tectonic installer systemd service unit"
}

variable "ign_tectonic_path_unit_id" {
  type = "string"
}

variable "container_images" {
  description = "Container images to use"
  type        = "map"
}

variable "image_re" {
  description = "(internal) Regular expression used to extract repo and tag components from image strings"
  type        = "string"
}

variable "public_ssh_key" {
  default = ""
}

variable "kubeconfig_content" {
  type = "string"
}

variable "ign_gcs_puller_id" {
  type = "string"
}

variable "ign_init_assets_service_id" {
  type = "string"
}

variable "assets_gcs_location" {
  type        = "string"
  description = "Location on gcs of the Bootkube/Tectonic assets to use (bucket/key)"
}
