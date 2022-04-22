variable "oci_cloud_controller_manager_version" {
  # Set the happy version??
  default = "master"
}

variable "compartment_ocid" {}
variable "region" {}
variable "tenancy" {}
variable "subnet1" {}
variable "subnet2" {}

variable "label_prefix" {
  description = "To create unique identifier for multiple clusters in a compartment."
  type        = "string"
}

# OCI cloud controller manager credentials to use.
# If not set the a user and group with a restricted policy will be set
variable "cloud_controller_user_ocid" {}
variable "cloud_controller_user_fingerprint" {}
variable "cloud_controller_user_private_key_path" {}
variable "cloud_controller_user_private_key_password" {}
