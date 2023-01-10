variable "cluster_name" {
  type = "string"
}

variable "container_images" {
  description = "Container images to use. Leave blank for defaults."
  type        = "map"
}

variable "container_base_images" {
  description = "Container base images to use. Leave blank for defaults."
  type        = "map"
}

variable "versions" {
  description = "Versions of the components to use. Leave blank for defaults."
  type        = "map"
}

variable "platform" {
  description = "Platform on which Tectonic is being installed. Example: bare-metal or aws."
  type        = "string"
}

variable "ingress_kind" {
  description = "Type of Ingress mapping to use. Example: HostPort or NodePort."
  type        = "string"
}

variable "license_path" {
  description = "Path on disk to your Tectonic license. Obtain this from your Tectonic Account: https://account.coreos.com."
  type        = "string"
  default     = "/Users/coreos/Desktop/tectonic-license.txt"
}

variable "pull_secret_path" {
  type        = "string"
  description = "Path on disk to your Tectonic pull secret. Obtain this from your Tectonic Account: https://account.coreos.com."
  default     = "/Users/coreos/Desktop/config.json"
}

variable "ca_generated" {
  description = "Define whether the CA has been generated or user-provided."
  type        = "string"
}

variable "ca_cert" {
  description = "Contents of a PEM-encoded CA certificate, used to generate Tectonic Console's server certificate. Leave blank to generate a new CA."
  type        = "string"
}

variable "base_address" {
  description = "Base address used to access the Tectonic Console, without protocol nor trailing forward slash (may contain a port). Example: console.example.com:30000."
  type        = "string"
}

variable "admin_email" {
  description = "E-mail address used to log in to the Tectonic Console."
  type        = "string"
  default     = "admin@example.com"
}

variable "admin_password" {
  description = "Password used to by the cluster admin to login to the Tectonic Console. Backslashes and double quotes must be escaped."
  type        = "string"
}

variable "update_server" {
  description = "Server contacted to request Tectonic software updates. Leave blank for defaults."
  type        = "string"
}

variable "update_channel" {
  description = "Release channel used to request Tectonic software updates. Leave blank for defaults. Example: Tectonic-1.5"
  type        = "string"
}

variable "update_app_id" {
  description = "Application identifier used to request Tectonic software updates. Leave blank for defaults."
  type        = "string"
}

variable "console_client_id" {
  description = "OIDC identifier for the Tectonic Console. Leave blank for defaults."
  type        = "string"
}

variable "kubectl_client_id" {
  description = "OIDC identifier for kubectl. Leave blank for defaults."
  type        = "string"
}

variable "kube_apiserver_url" {
  description = "URL used to reach kube-apiserver. Leave blank for defaults."
  type        = "string"
}

variable "identity_api_service" {
  description = "service used to reach the identity apiserver."
  type        = "string"
  default     = "tectonic-identity-api.tectonic-system.svc.cluster.local"
}

variable "self_hosted_etcd" {
  type        = "string"
  description = "See tectonic_self_hosted_etcd in config.tf"
}

variable "master_count" {
  description = "The amount of master nodes present in the cluster."
  type        = "string"
}

variable "stats_url" {
  description = "The statistics collection URL to which to report."
  type        = "string"
}

variable "image_re" {
  description = <<EOF
(internal) Regular expression used to extract repo and tag components from image strings
EOF

  type = "string"
}

variable "ingress_ca_cert_pem" {
  type = "string"
}

variable "ingress_cert_pem" {
  type = "string"
}

variable "ingress_key_pem" {
  type = "string"
}

variable "identity_server_cert_pem" {
  type = "string"
}

variable "identity_server_key_pem" {
  type = "string"
}

variable "identity_client_cert_pem" {
  type = "string"
}

variable "identity_client_key_pem" {
  type = "string"
}

variable "service_cidr" {
  description = "A CIDR notation IP range from which to assign service cluster IPs"
  type        = "string"
}
