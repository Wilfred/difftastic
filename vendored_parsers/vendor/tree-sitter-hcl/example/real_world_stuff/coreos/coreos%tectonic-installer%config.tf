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
  version = "1.0.1"
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
  default = "/^([^/]+/[^/]+):(.*)$/"
}

variable "tectonic_container_images" {
  description = "(internal) Container images to use"
  type        = "map"

  default = {
    addon_resizer                        = "gcr.io/google_containers/addon-resizer:2.1"
    awscli                               = "quay.io/coreos/awscli:025a357f05242fdad6a81e8a6b520098aa65a600"
    gcloudsdk                            = "google/cloud-sdk:178.0.0-alpine"
    bootkube                             = "quay.io/coreos/bootkube:v0.10.0"
    tnc_operator                         = "quay.io/coreos/tectonic-node-controller-operator-dev:c3cee2bc5673011e88ac7b0ab1659c2c7243a499"
    etcd_cert_signer                     = "quay.io/coreos/kube-etcd-signer-server:678cc8e6841e2121ebfdb6e2db568fce290b67d6"
    etcd                                 = "quay.io/coreos/etcd:v3.2.14"
    hyperkube                            = "openshift/origin-node:latest"
    kube_core_renderer                   = "quay.io/coreos/kube-core-renderer-dev:c3cee2bc5673011e88ac7b0ab1659c2c7243a499"
    kube_core_operator                   = "quay.io/coreos/kube-core-operator-dev:c3cee2bc5673011e88ac7b0ab1659c2c7243a499"
    tectonic_channel_operator            = "quay.io/coreos/tectonic-channel-operator-dev:c3cee2bc5673011e88ac7b0ab1659c2c7243a499"
    kube_addon_operator                  = "quay.io/coreos/kube-addon-operator-dev:c3cee2bc5673011e88ac7b0ab1659c2c7243a499"
    tectonic_alm_operator                = "quay.io/coreos/tectonic-alm-operator:v0.3.1"
    tectonic_ingress_controller_operator = "quay.io/coreos/tectonic-ingress-controller-operator-dev:c3cee2bc5673011e88ac7b0ab1659c2c7243a499"
    tectonic_utility_operator            = "quay.io/coreos/tectonic-utility-operator-dev:c3cee2bc5673011e88ac7b0ab1659c2c7243a499"
    tectonic_network_operator            = "quay.io/coreos/tectonic-network-operator-dev:c3cee2bc5673011e88ac7b0ab1659c2c7243a499"
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
    grafana                  = "quay.io/coreos/monitoring-grafana"
    grafana_watcher          = "quay.io/coreos/grafana-watcher"
    prometheus_operator      = "quay.io/coreos/prometheus-operator"
    prometheus_config_reload = "quay.io/coreos/prometheus-config-reloader"
    prometheus               = "quay.io/prometheus/prometheus"
    alertmanager             = "quay.io/prometheus/alertmanager"
    node_exporter            = "quay.io/prometheus/node-exporter"
    kube_rbac_proxy          = "quay.io/coreos/kube-rbac-proxy"
  }
}

variable "tectonic_versions" {
  description = "(internal) Versions of the components to use"
  type        = "map"

  default = {
    tectonic = "1.8.4-tectonic.2"
    alm      = "0.4.0"
  }
}

variable "tectonic_service_cidr" {
  type = "string"

  description = <<EOF
(optional) This declares the IP range to assign Kubernetes service cluster IPs in CIDR notation.
The maximum size of this IP range is /12
EOF
}

variable "tectonic_cluster_cidr" {
  type = "string"

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
EOF
}

variable "tectonic_base_domain" {
  type = "string"

  description = <<EOF
The base DNS domain of the cluster. It must NOT contain a trailing period. Some
DNS providers will automatically add this if necessary.

Example: `openshift.example.com`.

Note: This field MUST be set manually prior to creating the cluster.
This applies only to cloud platforms.
EOF
}

variable "tectonic_cluster_name" {
  type = "string"

  description = <<EOF
The name of the cluster.
If used in a cloud-environment, this will be prepended to `tectonic_base_domain` resulting in the URL to the Tectonic console.

Note: This field MUST be set manually prior to creating the cluster.
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
EOF
}

variable "tectonic_license_path" {
  type    = "string"
  default = ""

  description = <<EOF
The path to the tectonic licence file.
You can download the Tectonic license file from your Account overview page at [1].

[1] https://account.coreos.com/overview
EOF
}

variable "tectonic_container_linux_channel" {
  type = "string"

  description = <<EOF
The Container Linux update channel.

Examples: `stable`, `beta`, `alpha`
EOF
}

variable "tectonic_container_linux_version" {
  type = "string"

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
  default     = "tectonic-1.9-production"
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
(optional) The content of the PEM-encoded CA certificate, used to generate all cluster certificates.
If left blank, a CA certificate will be automatically generated.
EOF
}

variable "tectonic_ca_key" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) The content of the PEM-encoded CA key, used to generate Tectonic all cluster certificates.
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

variable "tectonic_stats_url" {
  type        = "string"
  default     = "https://stats-collector.tectonic.com"
  description = "(internal) The Tectonic statistics collection URL to which to report."
}

variable "tectonic_networking" {
  description = <<EOF
(optional) Configures the network to be used in Tectonic. One of the following values can be used:

- "flannel": enables overlay networking only. This is implemented by flannel using VXLAN.

- "canal": enables overlay networking including network policy. Overlay is implemented by flannel using VXLAN. Network policy is implemented by Calico.

- "calico-ipip": [ALPHA] enables BGP based networking. Routing and network policy is implemented by Calico. Note this has been tested on bare metal installations only.

- "none": disables the installation of any Pod level networking layer provided by Tectonic. By setting this value, users are expected to deploy their own solution to enable network connectivity for Pods and Services.
EOF
}

variable "tectonic_kubelet_debug_config" {
  type    = "string"
  default = ""

  description = "(internal) debug flags for the kubelet (used in CI only)"
}

variable "tectonic_ignition_master" {
  type    = "string"
  default = ""

  description = <<EOF
(internal) Ignition config file path. This is automatically generated by the installer.
EOF
}

variable "tectonic_ignition_worker" {
  type    = "string"
  default = ""

  description = <<EOF
(internal) Ignition config file path. This is automatically generated by the installer.
EOF
}

variable "tectonic_platform" {
  type = "string"

  description = <<EOF
(internal) The internal Terraform platform type, e.g. aws or libvirt
EOF
}

// This variable is generated by tectonic internally. Do not modify
variable "tectonic_cluster_id" {
  type        = "string"
  description = "(internal) The Tectonic cluster id."
}
