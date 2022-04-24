terraform {
  required_version = ">= 0.10.7"
}

provider "archive" {
  version = "1.0.0"
}

provider "external" {
  version = "1.0.0"
}

provider "ignition" {
  version = "1.0.0"
}

provider "local" {
  version = "1.0.0"
}

provider "null" {
  version = "1.0.0"
}

provider "random" {
  version = "1.0.0"
}

provider "template" {
  version = "1.0.0"
}

provider "tls" {
  version = "1.0.0"
}

locals {
  // The total amount of public CA certificates present in Tectonic.
  // That is all custom CAs + kube CA + etcd CA + ingress CA
  // This is a local constant, which needs to be dependency inject because TF cannot handle length() on computed values,
  // see https://github.com/hashicorp/terraform/issues/10857#issuecomment-268289775.
  tectonic_ca_count = "${length(var.tectonic_custom_ca_pem_list) + 3}"
}

variable "tectonic_config_version" {
  description = <<EOF
(internal) This declares the version of the global configuration variables.
It has no impact on generated assets but declares the version contract of the configuration.
EOF

  default = "1.0"
}

variable "tectonic_image_re" {
  description = <<EOF
(internal) Regular expression used to extract repo and tag components
EOF

  type    = "string"
  default = "/^([^/]+/[^/]+/[^/]+):(.*)$/"
}

variable "tectonic_container_images" {
  description = "(internal) Container images to use"
  type        = "map"

  default = {
    addon_resizer                = "gcr.io/google_containers/addon-resizer:2.1"
    awscli                       = "quay.io/coreos/awscli:025a357f05242fdad6a81e8a6b520098aa65a600"
    gcloudsdk                    = "google/cloud-sdk:178.0.0-alpine"
    bootkube                     = "quay.io/coreos/bootkube:v0.8.1"
    calico                       = "quay.io/calico/node:v2.6.3"
    calico_cni                   = "quay.io/calico/cni:v1.11.1"
    console                      = "quay.io/coreos/tectonic-console:v2.4.0"
    error_server                 = "quay.io/coreos/tectonic-error-server:1.0"
    etcd                         = "quay.io/coreos/etcd:v3.1.8"
    etcd_operator                = "quay.io/coreos/etcd-operator:v0.5.0"
    flannel                      = "quay.io/coreos/flannel:v0.8.0-amd64"
    flannel_cni                  = "quay.io/coreos/flannel-cni:v0.2.0"
    heapster                     = "gcr.io/google_containers/heapster:v1.4.1"
    hyperkube                    = "quay.io/coreos/hyperkube:v1.8.2_coreos.0"
    identity                     = "quay.io/coreos/dex:v2.8.1"
    ingress_controller           = "quay.io/kubernetes-ingress-controller/nginx-ingress-controller:0.9.0-beta.17"
    kenc                         = "quay.io/coreos/kenc:0.0.2"
    kubedns                      = "gcr.io/google_containers/k8s-dns-kube-dns-amd64:1.14.5"
    kubednsmasq                  = "gcr.io/google_containers/k8s-dns-dnsmasq-nanny-amd64:1.14.5"
    kubedns_sidecar              = "gcr.io/google_containers/k8s-dns-sidecar-amd64:1.14.5"
    kube_version                 = "quay.io/coreos/kube-version:0.1.0"
    kube_version_operator        = "quay.io/coreos/kube-version-operator:v1.7.9-kvo.6"
    node_agent                   = "quay.io/coreos/node-agent:cd69b4a0f65b0d3a3b30edfce3bb184fd2a22c26"
    pod_checkpointer             = "quay.io/coreos/pod-checkpointer:e22cc0e3714378de92f45326474874eb602ca0ac"
    stats_emitter                = "quay.io/coreos/tectonic-stats:6e882361357fe4b773adbf279cddf48cb50164c1"
    stats_extender               = "quay.io/coreos/tectonic-stats-extender:487b3da4e175da96dabfb44fba65cdb8b823db2e"
    tectonic_channel_operator    = "quay.io/coreos/tectonic-channel-operator:0.5.4"
    tectonic_etcd_operator       = "quay.io/coreos/tectonic-etcd-operator:v0.0.2"
    tectonic_prometheus_operator = "quay.io/coreos/tectonic-prometheus-operator:v1.8.0"
    tectonic_cluo_operator       = "quay.io/coreos/tectonic-cluo-operator:v0.2.5"
    tectonic_torcx               = "quay.io/coreos/tectonic-torcx:v0.2.0"
    kubernetes_addon_operator    = "quay.io/coreos/kubernetes-addon-operator:54a613dae60a068aa83c0361319c804ee366a228"
  }
}

variable "tectonic_container_base_images" {
  description = "(internal) Base images of the components to use"
  type        = "map"

  default = {
    tectonic_monitoring_auth = "quay.io/coreos/tectonic-monitoring-auth"
    config_reload            = "quay.io/coreos/configmap-reload"
    addon_resizer            = "quay.io/coreos/addon-resizer"
    kube_state_metrics       = "quay.io/coreos/kube-state-metrics"
    grafana                  = "quay.io/coreos/grafana-monitoring"
    grafana_watcher          = "quay.io/coreos/grafana-watcher"
    prometheus_operator      = "quay.io/coreos/prometheus-operator"
    prometheus_config_reload = "quay.io/coreos/prometheus-config-reloader"
    prometheus               = "quay.io/prometheus/prometheus"
    alertmanager             = "quay.io/prometheus/alertmanager"
    node_exporter            = "quay.io/prometheus/node-exporter"
  }
}

variable "tectonic_versions" {
  description = "(internal) Versions of the components to use"
  type        = "map"

  default = {
    etcd             = "3.1.8"
    kubernetes       = "1.7.9+tectonic.2"
    monitoring       = "1.8.0"
    tectonic         = "1.8.2-tectonic.1"
    tectonic-etcd    = "0.0.1"
    cluo             = "0.2.5"
    kubernetes_addon = "0.0.0"
  }
}

variable "tectonic_service_cidr" {
  type    = "string"
  default = "10.3.0.0/16"

  description = <<EOF
(optional) This declares the IP range to assign Kubernetes service cluster IPs in CIDR notation.
The maximum size of this IP range is /12
EOF
}

variable "tectonic_cluster_cidr" {
  type    = "string"
  default = "10.2.0.0/16"

  description = "(optional) This declares the IP range to assign Kubernetes pod IPs in CIDR notation."
}

variable "tectonic_master_count" {
  type    = "string"
  default = "1"

  description = <<EOF
The number of master nodes to be created.
This applies only to cloud platforms.
EOF
}

variable "tectonic_worker_count" {
  type    = "string"
  default = "3"

  description = <<EOF
The number of worker nodes to be created.
This applies only to cloud platforms.
EOF
}

variable "tectonic_etcd_count" {
  type    = "string"
  default = "0"

  description = <<EOF
The number of etcd nodes to be created.
If set to zero, the count of etcd nodes will be determined automatically.

Note: This is not supported on bare metal.
EOF
}

variable "tectonic_etcd_servers" {
  description = <<EOF
(optional) List of external etcd v3 servers to connect with (hostnames/IPs only).
Needs to be set if using an external etcd cluster.
Note: If this variable is defined, the installer will not create self-signed certs.
To provide a CA certificate to trust the etcd servers, set "tectonic_etcd_ca_cert_path".

Example: `["etcd1", "etcd2", "etcd3"]`
EOF

  type    = "list"
  default = []
}

variable "tectonic_etcd_tls_enabled" {
  default = true

  description = <<EOF
(optional) If set to `true`, all etcd endpoints will be configured to use the "https" scheme.

Note: If `tectonic_experimental` is set to `true` this variable has no effect, because the experimental self-hosted etcd always uses TLS.
EOF
}

variable "tectonic_etcd_ca_cert_path" {
  type    = "string"
  default = "/dev/null"

  description = <<EOF
(optional) The path of the file containing the CA certificate for TLS communication with etcd.

Note: This works only when used in conjunction with an external etcd cluster.
If set, the variable `tectonic_etcd_servers` must also be set.
EOF
}

variable "tectonic_etcd_client_cert_path" {
  type    = "string"
  default = "/dev/null"

  description = <<EOF
(optional) The path of the file containing the client certificate for TLS communication with etcd.

Note: This works only when used in conjunction with an external etcd cluster.
If set, the variables `tectonic_etcd_servers`, `tectonic_etcd_ca_cert_path`, and `tectonic_etcd_client_key_path` must also be set.
EOF
}

variable "tectonic_etcd_client_key_path" {
  type    = "string"
  default = "/dev/null"

  description = <<EOF
(optional) The path of the file containing the client key for TLS communication with etcd.

Note: This works only when used in conjunction with an external etcd cluster.
If set, the variables `tectonic_etcd_servers`, `tectonic_etcd_ca_cert_path`, and `tectonic_etcd_client_cert_path` must also be set.
EOF
}

variable "tectonic_base_domain" {
  type = "string"

  description = <<EOF
The base DNS domain of the cluster. It must NOT contain a trailing period. Some
DNS providers will automatically add this if necessary.

Example: `openstack.dev.coreos.systems`.

Note: This field MUST be set manually prior to creating the cluster.
This applies only to cloud platforms.

[Azure-specific NOTE]
To use Azure-provided DNS, `tectonic_base_domain` should be set to `""`
If using DNS records, ensure that `tectonic_base_domain` is set to a properly configured external DNS zone.
Instructions for configuring delegated domains for Azure DNS can be found here: https://docs.microsoft.com/en-us/azure/dns/dns-delegate-domain-azure-dns
EOF
}

variable "tectonic_cluster_name" {
  type = "string"

  description = <<EOF
The name of the cluster.
If used in a cloud-environment, this will be prepended to `tectonic_base_domain` resulting in the URL to the Tectonic console.

Note: This field MUST be set manually prior to creating the cluster.
Warning: Special characters in the name like '.' may cause errors on OpenStack platforms due to resource name constraints.
EOF
}

variable "tectonic_pull_secret_path" {
  type    = "string"
  default = ""

  description = <<EOF
The path the pull secret file in JSON format.
This is known to be a "Docker pull secret" as produced by the docker login [1] command.
A sample JSON content is shown in [2].
You can download the pull secret from your Account overview page at [3].

[1] https://docs.docker.com/engine/reference/commandline/login/

[2] https://coreos.com/os/docs/latest/registry-authentication.html#manual-registry-auth-setup

[3] https://account.coreos.com/overview

Note: This field MUST be set manually prior to creating the cluster unless `tectonic_vanilla_k8s` is set to `true`.
EOF
}

variable "tectonic_license_path" {
  type    = "string"
  default = ""

  description = <<EOF
The path to the tectonic licence file.
You can download the Tectonic license file from your Account overview page at [1].

[1] https://account.coreos.com/overview

Note: This field MUST be set manually prior to creating the cluster unless `tectonic_vanilla_k8s` is set to `true`.
EOF
}

variable "tectonic_container_linux_channel" {
  type    = "string"
  default = "stable"

  description = <<EOF
(optional) The Container Linux update channel.

Examples: `stable`, `beta`, `alpha`
EOF
}

variable "tectonic_container_linux_version" {
  type    = "string"
  default = "latest"

  description = <<EOF
The Container Linux version to use. Set to `latest` to select the latest available version for the selected update channel.

Examples: `latest`, `1465.6.0`
EOF
}

variable "tectonic_update_server" {
  type        = "string"
  default     = "https://tectonic.update.core-os.net"
  description = "(internal) The URL of the Tectonic Omaha update server"
}

variable "tectonic_update_channel" {
  type        = "string"
  default     = "tectonic-1.7-production"
  description = "(internal) The Tectonic Omaha update channel"
}

variable "tectonic_update_app_id" {
  type        = "string"
  default     = "6bc7b986-4654-4a0f-94b3-84ce6feb1db4"
  description = "(internal) The Tectonic Omaha update App ID"
}

variable "tectonic_admin_email" {
  type = "string"

  description = <<EOF
(internal) The e-mail address used to:
1. login as the admin user to the Tectonic Console.
2. generate DNS zones for some providers.

Note: This field MUST be in all lower-case e-mail address format and set manually prior to creating the cluster.
EOF
}

variable "tectonic_admin_password" {
  type = "string"

  description = <<EOF
(internal) The admin user password to login to the Tectonic Console.

Note: This field MUST be set manually prior to creating the cluster. Backslashes and double quotes must
also be escaped.
EOF
}

variable "tectonic_ca_cert" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) The content of the PEM-encoded CA certificate, used to generate Tectonic Console's server certificate.
If left blank, a CA certificate will be automatically generated.
EOF
}

variable "tectonic_ca_key" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) The content of the PEM-encoded CA key, used to generate Tectonic Console's server certificate.
This field is mandatory if `tectonic_ca_cert` is set.
EOF
}

variable "tectonic_ca_key_alg" {
  type    = "string"
  default = "RSA"

  description = <<EOF
(optional) The algorithm used to generate tectonic_ca_key.
The default value is currently recommended.
This field is mandatory if `tectonic_ca_cert` is set.
EOF
}

variable "tectonic_tls_validity_period" {
  type    = "string"
  default = "26280"

  description = <<EOF
Validity period of the self-signed certificates (in hours).
Default is 3 years.
This setting is ignored if user provided certificates are used.
EOF
}

variable "tectonic_vanilla_k8s" {
  default = false

  description = <<EOF
If set to true, a vanilla Kubernetes cluster will be deployed, omitting any Tectonic assets.
EOF
}

variable "tectonic_stats_url" {
  type        = "string"
  default     = "https://stats-collector.tectonic.com"
  description = "(internal) The Tectonic statistics collection URL to which to report."
}

variable "tectonic_ddns_server" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) This only applies if you use the modules/dns/ddns module.

Specifies the RFC2136 Dynamic DNS server IP/host to register IP addresses to.
EOF
}

variable "tectonic_ddns_key_name" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) This only applies if you use the modules/dns/ddns module.

Specifies the RFC2136 Dynamic DNS server key name.
EOF
}

variable "tectonic_ddns_key_algorithm" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) This only applies if you use the modules/dns/ddns module.

Specifies the RFC2136 Dynamic DNS server key algorithm.
EOF
}

variable "tectonic_ddns_key_secret" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) This only applies if you use the modules/dns/ddns module.

Specifies the RFC2136 Dynamic DNS server key secret.
EOF
}

variable "tectonic_networking" {
  default = "flannel"

  description = <<EOF
(optional) Configures the network to be used in Tectonic. One of the following values can be used:

- "flannel": enables overlay networking only. This is implemented by flannel using VXLAN.

- "canal": [ALPHA] enables overlay networking including network policy. Overlay is implemented by flannel using VXLAN. Network policy is implemented by Calico.

- "calico": [ALPHA] enables BGP based networking. Routing and network policy is implemented by Calico. Note this has been tested on baremetal installations only.
EOF
}

variable "tectonic_self_hosted_etcd" {
  default = ""

  description = <<EOF
(internal) [ALPHA] If set to one of the following values, self-hosted etcd is deployed:

- "enabled": Deploys a self-hosted etcd cluster.

- "pv_backup": Deploys a self-hosted etcd cluster including backups to Persistence Volumes.
`tectonic_etcd_backup_size` and `tectonic_etcd_backup_storage_class` must be configured when using this setting.
EOF
}

variable "tectonic_etcd_backup_size" {
  type        = "string"
  description = "(optional) The size in MB of the PersistentVolume used for handling etcd backups."
  default     = "512"
}

variable "tectonic_etcd_backup_storage_class" {
  type        = "string"
  default     = ""
  description = "(optional) The name of an existing Kubernetes StorageClass that will be used for handling etcd backups."
}

variable "tectonic_bootstrap_upgrade_cl" {
  type        = "string"
  default     = "true"
  description = "(internal) Whether to trigger a ContainerLinux upgrade on node bootstrap."
}

variable "tectonic_kubelet_debug_config" {
  type    = "string"
  default = ""

  description = "(internal) debug flags for the kubelet (used in CI only)"
}

variable "tectonic_custom_ca_pem_list" {
  type    = "list"
  default = []

  description = <<EOF
(optional) A list of PEM encoded CA files that will be installed in /etc/ssl/certs on etcd, master, and worker nodes.
EOF
}
