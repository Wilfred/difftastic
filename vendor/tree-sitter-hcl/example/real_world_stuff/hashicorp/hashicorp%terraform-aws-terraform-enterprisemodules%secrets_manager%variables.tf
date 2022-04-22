variable "friendly_name_prefix" {
  description = "The friendly name prefix which will be used for tagging and naming the Secrets Manager secret."
  type        = string
}

variable "deploy_secretsmanager" {
  type        = bool
  description = "(Optional) Boolean indicating whether to deploy AWS Secrets Manager secret (true) or not (false)."
  default     = true
}

variable "secretsmanager_secret_name" {
  type        = string
  description = "(Optional) Name of AWS Secrets Manager secret metadata. Only specify if deploy_secretsmanager is true (this value will be auto-generated if left unspecified and deploy_secretsmanager is true)."
  default     = null
}

variable "secretsmanager_secrets" {
  type        = map(string)
  description = "(Optional) Map of key/value pairs of TFE install secrets. Only specify if deploy_secretsmanager is true."
  default     = null
}
