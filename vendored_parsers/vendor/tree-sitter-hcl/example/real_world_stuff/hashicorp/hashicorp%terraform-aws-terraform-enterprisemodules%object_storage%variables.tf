variable "kms_key_arn" {
  description = "The Amazon Resource Name of the KMS key with which S3 storage bucket objects will be encrypted."
  type        = string
}

variable "tfe_license_name" {
  type        = string
  default     = "ptfe-license.rli"
  description = "(Required) Filename for PTFE license file."
}

variable "tfe_license_filepath" {
  type        = string
  description = "(Required) Absolute filepath to location of PTFE license file."
}

variable "external_bootstrap_bucket" {
  type        = string
  description = "The name of the S3 bucket for Replicated licenses."
  default     = null
}

variable "friendly_name_prefix" {
  type        = string
  description = "(Required) Friendly name prefix used for tagging and naming AWS resources."
}

variable "proxy_cert_bundle_filepath" {
  description = "The pathname of the certificate bundle file for the HTTP proxy."
  type        = string
}

variable "proxy_cert_bundle_name" {
  description = <<-EOD
  The name to assign to the S3 storage bucket object which will contain the certificate bundle file for the HTTP proxy.
  EOD
  type        = string
}
