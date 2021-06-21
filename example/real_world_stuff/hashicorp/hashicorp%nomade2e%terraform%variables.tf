variable "name" {
  description = "Used to name various infrastructure components"
  default     = "nomad-e2e"
}

variable "region" {
  description = "The AWS region to deploy to."
  default     = "us-east-1"
}

variable "availability_zone" {
  description = "The AWS availability zone to deploy to."
  default     = "us-east-1a"
}

variable "instance_type" {
  description = "The AWS instance type to use for both clients and servers."
  default     = "t2.medium"
}

variable "server_count" {
  description = "The number of servers to provision."
  default     = "3"
}

variable "client_count_ubuntu_bionic_amd64" {
  description = "The number of Ubuntu clients to provision."
  default     = "4"
}

variable "client_count_windows_2016_amd64" {
  description = "The number of windows 2016 clients to provision."
  default     = "1"
}

variable "aws_assume_role_arn" {
  description = "The AWS IAM role to assume (not used by human users)"
  default     = ""
}

variable "aws_assume_role_session_name" {
  description = "The AWS IAM session name to assume (not used by human users)"
  default     = ""
}

variable "aws_assume_role_external_id" {
  description = "The AWS IAM external ID to assume (not used by human users)"
  default     = ""
}

variable "profile" {
  description = "A default Nomad/Consul/Vault configuration profile"
  type        = string
  default     = ""
}

variable "restrict_ingress_cidrblock" {
  description = "Restrict ingress traffic to cluster to invoker ip address"
  type        = bool
  default     = true
}

# ----------------------------------------
# The specific version of Nomad deployed will default to whichever one of
# nomad_sha, nomad_version, or nomad_local_binary is set

variable "nomad_sha" {
  description = "The sha of Nomad to provision; only used for automated nightly testing"
  default     = ""
}

variable "nomad_version" {
  description = "The release version of Nomad to provision"
  default     = ""
}

variable "nomad_local_binary" {
  description = "The path to a local binary to provision"
  default     = ""
}

variable "nomad_url" {
  description = "the URL to Nomad binary archives e.g. CircleCI artifacts"
  default     = ""
}

variable "nomad_enterprise" {
  type        = bool
  description = "If nomad_sha is used, deploy Nomad Enterprise"
  default     = false
}

variable "nomad_license" {
  type        = string
  description = "If nomad_license is set, deploy a license to override the temporary license"
  default     = ""
}

variable "nomad_acls" {
  type        = bool
  description = "Bootstrap ACLs"
  default     = false
}

variable "vault" {
  type        = bool
  description = "Bootstrap Vault"
  default     = false
}

variable "volumes" {
  type        = bool
  description = "Include external EBS and EFS volumes (for CSI)"
  default     = false
}

# ----------------------------------------
# If you want to deploy multiple versions you can use these variables to
# provide a list of builds to override the values of nomad_sha, nomad_version,
# or nomad_local_binary. Most of the time you can ignore these variables!

variable "nomad_version_server" {
  description = "A list of Nomad versions to deploy to servers, to override nomad_version"
  type        = list(string)
  default     = []
}

variable "nomad_sha_server" {
  description = "A list of Nomad SHAs to deploy to servers, to override nomad_sha"
  type        = list(string)
  default     = []
}

variable "nomad_local_binary_server" {
  description = "A list of nomad local binary paths to deploy to servers, to override nomad_local_binary"
  type        = list(string)
  default     = []
}

variable "nomad_url_server" {
  description = "A list of Nomad binary archive URLs to deploy to servers, to override nomad_url"
  type        = list(string)
  default     = []
}

variable "nomad_version_client_ubuntu_bionic_amd64" {
  description = "A list of Nomad versions to deploy to Ubuntu Bionic clients, to override nomad_version"
  type        = list(string)
  default     = []
}

variable "nomad_sha_client_ubuntu_bionic_amd64" {
  description = "A list of Nomad SHAs to deploy to Ubuntu Bionic clients, to override nomad_sha"
  type        = list(string)
  default     = []
}

variable "nomad_local_binary_client_ubuntu_bionic_amd64" {
  description = "A list of nomad local binary paths to deploy to Ubuntu Bionic clients, to override nomad_local_binary"
  type        = list(string)
  default     = []
}

variable "nomad_url_client_ubuntu_bionic_amd64" {
  description = "A list of Nomad binary archive URLs to deploy to Ubuntu Bionic clients, to override nomad_url"
  type        = list(string)
  default     = []
}

variable "nomad_version_client_windows_2016_amd64" {
  description = "A list of Nomad versions to deploy to Windows 2016 clients, to override nomad_version"
  type        = list(string)
  default     = []
}

variable "nomad_sha_client_windows_2016_amd64" {
  description = "A list of Nomad SHAs to deploy to Windows 2016 clients, to override nomad_sha"
  type        = list(string)
  default     = []
}

variable "nomad_local_binary_client_windows_2016_amd64" {
  description = "A list of nomad local binary paths to deploy to Windows 2016 clients, to override nomad_local_binary"
  type        = list(string)
  default     = []
}

variable "nomad_url_client_windows_2016_amd64" {
  description = "A list of Nomad binary archive URLs to deploy to Windows 2016 clients, to override nomad_url"
  type        = list(string)
  default     = []
}
