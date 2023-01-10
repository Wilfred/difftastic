# Unique Cluster ID (uuid)
resource "random_id" "cluster_id" {
  byte_length = 16
}

# Kubernetes Manifests (resources/generated/manifests/)
resource "template_dir" "tectonic" {
  source_dir      = "${path.module}/resources/manifests"
  destination_dir = "./generated/tectonic"

  vars {
    addon_resizer_image                = "${var.container_images["addon_resizer"]}"
    console_image                      = "${var.container_images["console"]}"
    error_server_image                 = "${var.container_images["error_server"]}"
    heapster_image                     = "${var.container_images["heapster"]}"
    identity_image                     = "${var.container_images["identity"]}"
    ingress_controller_image           = "${var.container_images["ingress_controller"]}"
    kube_version_operator_image        = "${var.container_images["kube_version_operator"]}"
    node_agent_image                   = "${var.container_images["node_agent"]}"
    etcd_operator_image                = "${var.container_images["etcd_operator"]}"
    stats_emitter_image                = "${var.container_images["stats_emitter"]}"
    stats_extender_image               = "${var.container_images["stats_extender"]}"
    tectonic_channel_operator_image    = "${var.container_images["tectonic_channel_operator"]}"
    tectonic_prometheus_operator_image = "${var.container_images["tectonic_prometheus_operator"]}"
    tectonic_etcd_operator_image       = "${var.container_images["tectonic_etcd_operator"]}"
    tectonic_cluo_operator_image       = "${var.container_images["tectonic_cluo_operator"]}"
    tectonic_alm_operator_image        = "${var.container_images["tectonic_alm_operator"]}"

    tectonic_monitoring_auth_base_image = "${var.container_base_images["tectonic_monitoring_auth"]}"
    config_reload_base_image            = "${var.container_base_images["config_reload"]}"
    addon_resizer_base_image            = "${var.container_base_images["addon_resizer"]}"
    kube_state_metrics_base_image       = "${var.container_base_images["kube_state_metrics"]}"
    prometheus_operator_base_image      = "${var.container_base_images["prometheus_operator"]}"
    prometheus_config_reload_base_image = "${var.container_base_images["prometheus_config_reload"]}"
    prometheus_base_image               = "${var.container_base_images["prometheus"]}"
    alertmanager_base_image             = "${var.container_base_images["alertmanager"]}"
    node_exporter_base_image            = "${var.container_base_images["node_exporter"]}"
    grafana_base_image                  = "${var.container_base_images["grafana"]}"
    grafana_watcher_base_image          = "${var.container_base_images["grafana_watcher"]}"
    kube_rbac_proxy_base_image          = "${var.container_base_images["kube_rbac_proxy"]}"

    kubernetes_version             = "${var.versions["kubernetes"]}"
    monitoring_version             = "${var.versions["monitoring"]}"
    tectonic_version               = "${var.versions["tectonic"]}"
    etcd_version                   = "${var.versions["etcd"]}"
    tectonic_etcd_operator_version = "${var.versions["tectonic-etcd"]}"
    tectonic_cluo_operator_version = "${var.versions["cluo"]}"
    tectonic_alm_operator_version  = "${var.versions["alm"]}"

    etcd_cluster_size = "${var.master_count > 2 ? 3 : 1}"

    license     = "${base64encode(file(var.license_path))}"
    pull_secret = "${base64encode(file(var.pull_secret_path))}"
    ca_cert     = "${base64encode(var.ca_cert)}"

    update_server  = "${var.update_server}"
    update_channel = "${var.update_channel}"
    update_app_id  = "${var.update_app_id}"

    admin_user_id       = "${random_id.admin_user_id.b64}"
    admin_email         = "${lower(var.admin_email)}"
    admin_password_hash = "${bcrypt(var.admin_password, 12)}"

    base_address         = "${var.base_address}"
    console_base_address = "${var.base_address}"
    console_base_host    = "${element(split(":", var.base_address), 0)}"
    console_client_id    = "${var.console_client_id}"
    console_secret       = "${random_id.console_secret.b64}"
    console_callback     = "https://${var.base_address}/auth/callback"

    tectonic_monitoring_auth_cookie_secret = "${base64encode(random_id.tectonic_monitoring_auth_cookie_secret.b64)}"

    alertmanager_callback = "https://${var.base_address}/alertmanager/auth/callback"
    prometheus_callback   = "https://${var.base_address}/prometheus/auth/callback"
    grafana_callback      = "https://${var.base_address}/grafana/auth/callback"

    ingress_kind     = "${var.ingress_kind}"
    ingress_ca_cert  = "${base64encode(var.ingress_ca_cert_pem)}"
    ingress_tls_cert = "${base64encode(var.ingress_cert_pem)}"
    ingress_tls_key  = "${base64encode(var.ingress_key_pem)}"

    identity_server_tls_cert = "${base64encode(var.identity_server_cert_pem)}"
    identity_server_tls_key  = "${base64encode(var.identity_server_key_pem)}"
    identity_client_tls_cert = "${base64encode(var.identity_client_cert_pem)}"
    identity_client_tls_key  = "${base64encode(var.identity_client_key_pem)}"

    kubectl_client_id = "${var.kubectl_client_id}"
    kubectl_secret    = "${random_id.kubectl_secret.b64}"

    kube_apiserver_url = "${var.kube_apiserver_url}"
    oidc_issuer_url    = "https://${var.base_address}/identity"
    stats_url          = "${var.stats_url}"

    # TODO: We could also patch https://www.terraform.io/docs/providers/random/ to add an UUID resource.
    cluster_id   = "${format("%s-%s-%s-%s-%s", substr(random_id.cluster_id.hex, 0, 8), substr(random_id.cluster_id.hex, 8, 4), substr(random_id.cluster_id.hex, 12, 4), substr(random_id.cluster_id.hex, 16, 4), substr(random_id.cluster_id.hex, 20, 12))}"
    cluster_name = "${var.cluster_name}"

    platform              = "${var.platform}"
    certificates_strategy = "${var.ca_generated == "true" ? "installerGeneratedCA" : "userProvidedCA"}"
    identity_api_service  = "${var.identity_api_service}"

    image_re            = "${var.image_re}"
    kube_dns_service_ip = "${cidrhost(var.service_cidr, 10)}"
  }
}

# tectonic.sh (resources/generated/tectonic.sh)
data "template_file" "tectonic" {
  template = "${file("${path.module}/resources/tectonic.sh")}"

  vars {
    ingress_kind = "${var.ingress_kind}"
  }
}

resource "local_file" "tectonic" {
  content  = "${data.template_file.tectonic.rendered}"
  filename = "./generated/tectonic.sh"
}

# tectonic.sh (resources/generated/tectonic-wrapper.sh)
data "template_file" "tectonic_wrapper" {
  template = "${file("${path.module}/resources/tectonic-wrapper.sh")}"

  vars {
    hyperkube_image  = "${var.container_images["hyperkube"]}"
    self_hosted_etcd = "${var.self_hosted_etcd != "" ? "true" : "false"}"
  }
}

resource "local_file" "tectonic_wrapper" {
  content  = "${data.template_file.tectonic_wrapper.rendered}"
  filename = "./generated/tectonic-wrapper.sh"
}

# tectonic.service (available as output variable)
data "template_file" "tectonic_service" {
  template = "${file("${path.module}/resources/tectonic.service")}"
}

data "ignition_systemd_unit" "tectonic_service" {
  name    = "tectonic.service"
  enabled = false
  content = "${data.template_file.tectonic_service.rendered}"
}

# tectonic.path (available as output variable)
data "template_file" "tectonic_path" {
  template = "${file("${path.module}/resources/tectonic.path")}"
}

data "ignition_systemd_unit" "tectonic_path" {
  name    = "tectonic.path"
  enabled = true
  content = "${data.template_file.tectonic_path.rendered}"
}
