variable "platform" {
  type        = string
  description = "Platform ID (ex. \"linux_amd64\" or \"windows_amd64\")"
  default     = "linux_amd64"
}

variable "nomad_version" {
  type        = string
  description = "Nomad release version (ex. \"0.10.3\")"
  default     = ""
}

variable "nomad_sha" {
  type        = string
  description = "Nomad build full SHA (ex. \"fef22bdbfa094b5d076710354275e360867261aa\")"
  default     = ""
}

variable "nomad_local_binary" {
  type        = string
  description = "Path to local Nomad build (ex. \"/home/me/bin/nomad\")"
  default     = ""
}

variable "nomad_url" {
  type        = string
  description = "URL to Nomad binary (ex. \"https://circleci.com/.../linux_amd64.zip\")"
  default     = ""
}

variable "nomad_enterprise" {
  type        = bool
  description = "If nomad_sha is used, deploy Nomad Enterprise"
  default     = false
}

variable "nomad_license" {
  type        = string
  description = "The enterprise license to use. overrides Nomad temporary license"
  default     = ""
}

variable "nomad_acls" {
  type        = bool
  description = "Bootstrap ACLs"
  default     = false
}

variable "profile" {
  type        = string
  description = "The name of the configuration profile (ex. 'full-cluster')"
  default     = ""
}

variable "role" {
  type        = string
  description = "The role in the configuration profile for this instance (ex. 'client-linux')"
  default     = ""
}

variable "index" {
  type        = string # note that we have string here so we can default to ""
  description = "The count of this instance for indexed configurations"
  default     = ""
}

variable "cluster_name" {
  type        = string
  description = "The random name assigned to the cluster"
  default     = ""
}

variable "connection" {
  type = object({
    type        = string
    user        = string
    host        = string
    port        = number
    private_key = string
  })
  description = "ssh connection information for remote target"
}
