variable "tectonic_do_config_version" {
  description = <<EOF
(internal) This declares the version of the DigitalOcean configuration variables.
It has no impact on generated assets but declares the version contract of the configuration.
EOF

  default = "1.0"
}

variable "tectonic_do_token" {
  type        = "string"
  description = "DigitalOcean API token."
}

variable "tectonic_do_ssh_keys" {
  type        = "list"
  description = "A list of DigitalOcean SSH IDs to enable."
}

variable "tectonic_do_droplet_image" {
  type        = "string"
  description = "Droplet image."
  default     = "coreos-stable"
}

variable "tectonic_do_master_droplet_size" {
  type        = "string"
  description = "Instance size for the master node(s). Example: `512mb`."
  default     = "1gb"
}

variable "tectonic_do_worker_droplet_size" {
  type        = "string"
  description = "Instance size for the worker node(s). Example: `512mb`."
  default     = "512mb"
}

variable "tectonic_do_droplet_region" {
  type        = "string"
  default     = "nyc1"
  description = "The droplet region."
}

variable "tectonic_do_etcd_droplet_size" {
  type        = "string"
  description = "Droplet size for the etcd node(s). Example: `512mb`."
  default     = "512mb"
}

variable "tectonic_do_extra_tags" {
  type    = "list"
  default = []
}

variable "tectonic_do_spaces_access_key_id" {
  type        = "string"
  description = "Spaces access key ID"
}

variable "tectonic_do_spaces_secret_access_key" {
  type        = "string"
  description = "Spaces secret access key"
}

variable "tectonic_do_spaces_region" {
  type        = "string"
  default     = "nyc3"
  description = "Spaces region"
}
